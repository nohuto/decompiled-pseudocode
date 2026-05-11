/*
 * XREFs of DeviceRemove @ 0x1C0001FE0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0001258 (WPP_RECORDER_SF_q.c)
 *     McGenEventUnregister_EtwUnregister @ 0x1C0001B10 (McGenEventUnregister_EtwUnregister.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012930 (_guard_dispatch_icall_nop.c)
 *     WmiUnregisterProvider @ 0x1C002B8FC (WmiUnregisterProvider.c)
 */

NTSTATUS __fastcall DeviceRemove(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rbx
  void *v4; // rcx
  KIRQL v5; // al
  __int64 v6; // r8
  _QWORD *v7; // rdx

  v2 = *(_QWORD **)(a1 + 16);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      a2,
      1u,
      0x20u,
      (__int64)&WPP_65ff8281dfdf3691e0ea7cf1d87927b7_Traceguids,
      a1);
  v4 = (void *)v2[64];
  if ( v4 )
  {
    PoDeletePowerRequest(v4);
    v2[64] = 0LL;
  }
  (*(void (__fastcall **)(__int64))(pExtBusDeviceDispatchTable + 24))(a1);
  v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters);
  v6 = *v2;
  if ( *(_QWORD **)(*v2 + 8LL) != v2 || (v7 = (_QWORD *)v2[1], (_QWORD *)*v7 != v2) )
    __fastfail(3u);
  *v7 = v6;
  *(_QWORD *)(v6 + 8) = v7;
  --WPP_MAIN_CB.Queue.Wcb.WaitQueueEntry.SortKey;
  KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters, v5);
  WmiUnregisterProvider(a1);
  return McGenEventUnregister_EtwUnregister();
}
