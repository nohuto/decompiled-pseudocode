/*
 * XREFs of PoLatencySensitivityHint @ 0x1402244A0
 * Callers:
 *     PopPowerRequestCallbackPerfBoostRequired @ 0x14069DD40 (PopPowerRequestCallbackPerfBoostRequired.c)
 *     PopPowerInformationInternal @ 0x140751B78 (PopPowerInformationInternal.c)
 * Callees:
 *     PpmTryAcquireLock @ 0x140224624 (PpmTryAcquireLock.c)
 *     PpmCheckCustomRun @ 0x14022475C (PpmCheckCustomRun.c)
 *     EtwWriteEx @ 0x140300C00 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x14030F640 (EtwEventEnabled.c)
 *     ExQueueWorkItem @ 0x140345FC0 (ExQueueWorkItem.c)
 *     PpmInterlockedUpdateTimeNoFence @ 0x1403559B0 (PpmInterlockedUpdateTimeNoFence.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

void __fastcall PoLatencySensitivityHint(int a1)
{
  int v2; // r8d
  _BYTE *i; // rax
  REGHANDLE v4; // rsi
  __int64 v5; // rdx
  bool v6; // r11
  signed __int32 v7[8]; // [rsp+0h] [rbp-70h] BYREF
  int v8; // [rsp+40h] [rbp-30h] BYREF
  unsigned __int64 v9; // [rsp+48h] [rbp-28h] BYREF
  unsigned __int64 v10; // [rsp+50h] [rbp-20h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+58h] [rbp-18h] BYREF

  v9 = 0LL;
  if ( !PpmPerfMultimediaQosSupported || a1 != 4 )
  {
    v2 = 0;
    for ( i = (char *)&PpmCurrentProfile[534 * dword_140C232CC + 14] + 5; !*i; ++i )
    {
      if ( (unsigned int)++v2 >= 2 )
        return;
    }
    v8 = a1;
    if ( PpmEtwRegistered )
    {
      v4 = PpmEtwHandle;
      if ( EtwEventEnabled(PpmEtwHandle, &PPM_ETW_LATENCY_SENSITIVITY_HINT) )
      {
        *(_QWORD *)&UserData.Size = 4LL;
        UserData.Ptr = (ULONGLONG)&v8;
        EtwWriteEx(v4, &PPM_ETW_LATENCY_SENSITIVITY_HINT, 0LL, 0, 0LL, 0LL, 1u, &UserData);
      }
    }
    v10 = 0LL;
    v6 = (unsigned __int8)PpmInterlockedUpdateTimeNoFence(
                            &PpmPerfLatencyBoostExpiration,
                            PpmCheckPeriod + MEMORY[0xFFFFF78000000008],
                            &v9) != 0;
    if ( a1 == 4 && (unsigned __int8)PpmInterlockedUpdateTimeNoFence(&PpmPerfDeadlineBoostExpiration, v5, &v10) || v6 )
    {
      _InterlockedOr(v7, 0);
      if ( a1 == 4 && v10 <= PpmCheckLastEffectiveExecutionTime || v9 <= PpmCheckLastEffectiveExecutionTime )
      {
        if ( (unsigned __int8)PpmTryAcquireLock() )
        {
          PpmCheckCustomRun(3LL);
        }
        else if ( !_InterlockedExchange(&PpmPerfLatencyBoostQueued, 1) )
        {
          ExQueueWorkItem(&PpmPerfLatencyBoostWorkItem, CustomPriorityWorkQueue|NormalWorkQueue|0x18);
        }
      }
    }
  }
}
