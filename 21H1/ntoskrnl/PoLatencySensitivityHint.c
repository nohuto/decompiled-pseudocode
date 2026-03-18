/*
 * XREFs of PoLatencySensitivityHint @ 0x14037AE20
 * Callers:
 *     PopPowerInformationInternal @ 0x14070C7D4 (PopPowerInformationInternal.c)
 *     PopPerfBoostPowerRequest @ 0x140776D40 (PopPerfBoostPowerRequest.c)
 * Callees:
 *     ExQueueWorkItem @ 0x140226F40 (ExQueueWorkItem.c)
 *     PpmInterlockedUpdateTimeNoFence @ 0x140237320 (PpmInterlockedUpdateTimeNoFence.c)
 *     EtwWriteEx @ 0x140256C70 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x14026B690 (EtwEventEnabled.c)
 *     PpmCheckCustomRun @ 0x14037A398 (PpmCheckCustomRun.c)
 *     PpmTryAcquireLock @ 0x14037AFB8 (PpmTryAcquireLock.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 */

void __fastcall PoLatencySensitivityHint(int a1)
{
  int v2; // r8d
  _BYTE *i; // rax
  REGHANDLE v4; // rsi
  unsigned __int64 v5; // rdx
  bool v6; // r11
  bool v7; // cl
  signed __int32 v8[8]; // [rsp+0h] [rbp-70h] BYREF
  int v9; // [rsp+40h] [rbp-30h] BYREF
  unsigned __int64 v10; // [rsp+48h] [rbp-28h] BYREF
  unsigned __int64 v11; // [rsp+50h] [rbp-20h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+58h] [rbp-18h] BYREF

  v10 = 0LL;
  if ( !PpmPerfMultimediaQosSupported || a1 != 4 )
  {
    v2 = 0;
    for ( i = (char *)&PpmCurrentProfile[342 * dword_140C23ECC + 14] + 5; !*i; ++i )
    {
      if ( (unsigned int)++v2 >= 2 )
        return;
    }
    v9 = a1;
    if ( PpmEtwRegistered )
    {
      v4 = PpmEtwHandle;
      if ( EtwEventEnabled(PpmEtwHandle, &PPM_ETW_LATENCY_SENSITIVITY_HINT) )
      {
        *(_QWORD *)&UserData.Size = 4LL;
        UserData.Ptr = (ULONGLONG)&v9;
        EtwWriteEx(v4, &PPM_ETW_LATENCY_SENSITIVITY_HINT, 0LL, 0, 0LL, 0LL, 1u, &UserData);
      }
    }
    v11 = 0LL;
    v6 = PpmInterlockedUpdateTimeNoFence(
           &PpmPerfLatencyBoostExpiration,
           PpmCheckPeriod + MEMORY[0xFFFFF78000000008],
           &v10) != 0;
    if ( a1 == 4 && PpmInterlockedUpdateTimeNoFence(&PpmPerfDeadlineBoostExpiration, v5, &v11) )
      v6 = 1;
    if ( v6 )
    {
      _InterlockedOr(v8, 0);
      v7 = v10 <= PpmCheckLastExecutionTime;
      if ( a1 == 4 && v11 <= PpmCheckLastExecutionTime )
        v7 = 1;
      if ( v7 )
      {
        if ( (unsigned __int8)PpmTryAcquireLock() )
        {
          PpmCheckCustomRun(3);
        }
        else if ( !_InterlockedExchange(&PpmPerfLatencyBoostQueued, 1) )
        {
          ExQueueWorkItem(&PpmPerfLatencyBoostWorkItem, CustomPriorityWorkQueue|NormalWorkQueue|0x18);
        }
      }
    }
  }
}
