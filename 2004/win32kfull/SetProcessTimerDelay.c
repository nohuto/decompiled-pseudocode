/*
 * XREFs of SetProcessTimerDelay @ 0x1C01EB6A0
 * Callers:
 *     <none>
 * Callees:
 *     ??0CAutoPushLockSh@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C0108984 (--0CAutoPushLockSh@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ??1CAutoPushLockSh@@QEAA@XZ @ 0x1C01D8BC4 (--1CAutoPushLockSh@@QEAA@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02DF7C4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall SetProcessTimerDelay(__int64 a1, unsigned int a2, unsigned int a3)
{
  unsigned int v4; // edx
  int v5; // eax
  _QWORD *v6; // r9
  _QWORD *v7; // rcx
  _QWORD *v8; // r9
  __int64 v9; // rcx
  _QWORD *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // [rsp+48h] [rbp+20h] BYREF

  if ( a2 > 0x1B7740 )
    return 3221225712LL;
  if ( a3 > 0x927C0 )
    return 3221225713LL;
  if ( *(_QWORD *)a1 == gpepCSRSS )
    return 3221225659LL;
  v4 = a2 - *(_DWORD *)(a1 + 1036);
  v5 = *(_DWORD *)(a1 + 1044);
  *(_DWORD *)(a1 + 1044) = v4;
  *(_DWORD *)(a1 + 1040) = a3;
  if ( v5 )
  {
    if ( v4 )
      goto LABEL_11;
    v8 = (_QWORD *)(a1 + 1056);
    v9 = *(_QWORD *)(a1 + 1056);
    if ( *(_QWORD **)(*v8 + 8LL) == v8 )
    {
      v10 = (_QWORD *)v8[1];
      if ( (_QWORD *)*v10 == v8 )
      {
        *v10 = v9;
        *(_QWORD *)(v9 + 8) = v10;
        goto LABEL_11;
      }
    }
    goto LABEL_18;
  }
  if ( v4 )
  {
    v6 = (_QWORD *)(a1 + 1056);
    v7 = (_QWORD *)gtmrAdjustmentListHead[1];
    if ( *v7 == gtmrAdjustmentListHead[0] )
    {
      *v6 = gtmrAdjustmentListHead[0];
      v6[1] = v7;
      *v7 = v6;
      gtmrAdjustmentListHead[1] = v6;
      goto LABEL_11;
    }
LABEL_18:
    __fastfail(3u);
  }
LABEL_11:
  if ( !gbTimersProcActive )
  {
    CAutoPushLockSh::CAutoPushLockSh(
      (CAutoPushLockSh *)&v13,
      (struct _EX_PUSH_LOCK *)&CRitTimerScanWakeSystem::ritTimerScanWakeSystemLock);
    if ( CRitTimerScanWakeSystem::ritTimerScanWakeEvent )
    {
      KeSetEvent(CRitTimerScanWakeSystem::ritTimerScanWakeEvent, 1, 0);
      CAutoPushLockSh::~CAutoPushLockSh((CAutoPushLockSh *)&v13);
      gbRITAlerted = 1;
    }
    else
    {
      ExReleasePushLockSharedEx(v13, 0LL);
      KeLeaveCriticalRegion();
      gbRITAlerted = 0;
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v12, v11);
    }
  }
  return 0LL;
}
