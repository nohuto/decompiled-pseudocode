/*
 * XREFs of ?CoreMsgOpenDestinationHandle@InputExtensibilityCallout@@QEAAJW4_MIT_ENDPOINT@@AEBUtagMsgRoutingInfo@@@Z @ 0x1C0048694
 * Callers:
 *     NtMITCoreMsgKOpenConnectionTo @ 0x1C0050F70 (NtMITCoreMsgKOpenConnectionTo.c)
 * Callees:
 *     CoreMsgOpenConnection @ 0x1C004879C (CoreMsgOpenConnection.c)
 *     RIMLockExclusive @ 0x1C00712F0 (RIMLockExclusive.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall InputExtensibilityCallout::CoreMsgOpenDestinationHandle(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  InputExtensibilityCallout *v4; // rsi
  __int64 v6; // rdi
  PVOID CurrentProcess; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // r14
  __int64 v13; // rbp
  int v14; // edi
  __int128 v16; // [rsp+20h] [rbp-38h]

  v4 = gpInputExtensibilityCallout;
  v6 = (int)a2;
  if ( (unsigned int)a2 >= 0x13 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3, a4);
  CurrentProcess = (PVOID)PsGetCurrentProcess(a1, a2);
  if ( !CurrentProcess || CurrentProcess != g_pepDwm )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v9, v8, v10, v11);
  v16 = 0LL;
  v12 = 0LL;
  RIMLockExclusive((char *)v4 + 8);
  v13 = 5 * v6;
  if ( *((_QWORD *)v4 + 5 * v6 + 4) )
  {
    v14 = -2147020579;
  }
  else
  {
    v14 = CoreMsgOpenConnection(0LL, a3);
    if ( v14 >= 0 )
    {
      v12 = *((_QWORD *)v4 + v13 + 8);
      v16 = *(_OWORD *)((char *)v4 + 8 * v13 + 48);
    }
  }
  *((_QWORD *)v4 + 2) = 0LL;
  ExReleasePushLockExclusiveEx((char *)v4 + 8, 0LL);
  KeLeaveCriticalRegion();
  if ( *((_QWORD *)&v16 + 1) && (v16 & 1) != 0 )
    (*((void (__fastcall **)(__int64, __int64))&v16 + 1))(1LL, v12);
  return (unsigned int)v14;
}
