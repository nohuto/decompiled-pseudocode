/*
 * XREFs of DeviceSetPowerState @ 0x1C0023070
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qdd @ 0x1C0001524 (WPP_RECORDER_SF_qdd.c)
 *     WmiLogPowerStateChange @ 0x1C00036E0 (WmiLogPowerStateChange.c)
 *     _guard_dispatch_icall_nop @ 0x1C00133D0 (_guard_dispatch_icall_nop.c)
 */

NTSTATUS __fastcall DeviceSetPowerState(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  int v7; // r14d
  __int64 v8; // rbx
  _DWORD *v9; // rcx

  v7 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qdd(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      a4 - 1,
      1u,
      0x1Bu,
      (__int64)&WPP_2000017d428a33413b623546671ca387_Traceguids,
      a1,
      a4 - 1,
      a3 - 1);
  v8 = *(_QWORD *)(a1 + 16);
  if ( *(_DWORD *)(v8 + 528) != a3 )
  {
    v7 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(pExtBusDeviceDispatchTable + 48))(a1, a3, a4);
    if ( v7 >= 0 )
    {
      *(_DWORD *)(v8 + 528) = a3;
      if ( a3 == 1 )
      {
        v9 = *(_DWORD **)(v8 + 520);
        if ( v9 )
          *v9 = 0;
      }
      else
      {
        KeResetEvent((PRKEVENT)(v8 + 544));
      }
    }
  }
  return WmiLogPowerStateChange(*(unsigned int *)(v8 + 528), a4, a3, v7);
}
