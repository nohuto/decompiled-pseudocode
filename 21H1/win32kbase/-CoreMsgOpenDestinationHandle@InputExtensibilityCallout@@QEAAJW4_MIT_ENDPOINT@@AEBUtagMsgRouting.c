/*
 * XREFs of ?CoreMsgOpenDestinationHandle@InputExtensibilityCallout@@QEAAJW4_MIT_ENDPOINT@@AEBUtagMsgRoutingInfo@@@Z @ 0x1C003B744
 * Callers:
 *     NtMITCoreMsgKOpenConnectionTo @ 0x1C0043870 (NtMITCoreMsgKOpenConnectionTo.c)
 * Callees:
 *     CoreMsgOpenConnection @ 0x1C003B84C (CoreMsgOpenConnection.c)
 *     RIMLockExclusive @ 0x1C0069440 (RIMLockExclusive.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall InputExtensibilityCallout::CoreMsgOpenDestinationHandle(__int64 a1, __int64 a2, __int64 a3)
{
  InputExtensibilityCallout *v3; // rsi
  __int64 v5; // rdi
  PVOID CurrentProcess; // rax
  __int64 v7; // rcx
  __int64 v8; // r14
  __int64 v9; // rbp
  int v10; // edi
  __int128 v12; // [rsp+20h] [rbp-38h]

  v3 = gpInputExtensibilityCallout;
  v5 = (int)a2;
  if ( (unsigned int)a2 >= 0x13 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1);
  CurrentProcess = (PVOID)PsGetCurrentProcess(a1, a2);
  if ( !CurrentProcess || CurrentProcess != g_pepDwm )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v7);
  v12 = 0LL;
  v8 = 0LL;
  RIMLockExclusive((char *)v3 + 8);
  v9 = 5 * v5;
  if ( *((_QWORD *)v3 + 5 * v5 + 4) )
  {
    v10 = -2147020579;
  }
  else
  {
    v10 = CoreMsgOpenConnection(0LL, a3);
    if ( v10 >= 0 )
    {
      v8 = *((_QWORD *)v3 + v9 + 8);
      v12 = *(_OWORD *)((char *)v3 + 8 * v9 + 48);
    }
  }
  *((_QWORD *)v3 + 2) = 0LL;
  ExReleasePushLockExclusiveEx((char *)v3 + 8, 0LL);
  KeLeaveCriticalRegion();
  if ( *((_QWORD *)&v12 + 1) && (v12 & 1) != 0 )
    (*((void (__fastcall **)(__int64, __int64))&v12 + 1))(1LL, v8);
  return (unsigned int)v10;
}
