/*
 * XREFs of DeviceStop @ 0x1C0022C30
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C00011B4 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qd @ 0x1C0001404 (WPP_RECORDER_SF_qd.c)
 *     McTemplateK0_EtwWriteTransfer @ 0x1C0001AA4 (McTemplateK0_EtwWriteTransfer.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0001AE8 (McTemplateK0q_EtwWriteTransfer.c)
 *     ExitIrpThreadAndQueue @ 0x1C0003720 (ExitIrpThreadAndQueue.c)
 *     DeInitSideband @ 0x1C00088E8 (DeInitSideband.c)
 *     _guard_dispatch_icall_nop @ 0x1C0013270 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DeviceStop(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdi
  int v5; // esi
  __int64 v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // r8
  void *v9; // rcx
  struct _KSFILTERFACTORY *v10; // rcx
  int v11; // [rsp+30h] [rbp-28h]

  v3 = *(_QWORD *)(a1 + 16);
  v5 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      a2,
      1u,
      0x17u,
      (__int64)&WPP_2000017d428a33413b623546671ca387_Traceguids,
      a1);
  if ( ((__int64)WPP_MAIN_CB.Queue.ListEntry.Flink & 2) != 0 )
    McTemplateK0_EtwWriteTransfer(a1, &EXBUS_DEVICE_STOP_ENTER, a3);
  if ( !*(_BYTE *)(v3 + 64) )
  {
    *(_BYTE *)(v3 + 64) = 1;
    ExitIrpThreadAndQueue(v3);
  }
  KeWaitForSingleObject((PVOID)(v3 + 744), Executive, 0, 0, 0LL);
  DeInitSideband(a1, v6);
  KeReleaseMutex((PRKMUTEX)(v3 + 744), 0);
  v9 = *(void **)(v3 + 984);
  if ( v9 )
  {
    KeWaitForSingleObject(v9, Executive, 0, 0, 0LL);
    ExFreePoolWithTag(*(PVOID *)(v3 + 984), 0x65627845u);
    *(_QWORD *)(v3 + 984) = 0LL;
  }
  if ( !*(_BYTE *)(v3 + 67) )
    v5 = (*(__int64 (__fastcall **)(__int64))(pExtBusDeviceDispatchTable + 16))(a1);
  v10 = *(struct _KSFILTERFACTORY **)(v3 + 120);
  if ( v10 )
  {
    KsFilterFactorySetDeviceClassesState(v10, 0);
    *(_QWORD *)(v3 + 120) = 0LL;
  }
  if ( v5 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v11 = v5;
    WPP_RECORDER_SF_qd(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v7,
      1u,
      0x18u,
      (__int64)&WPP_2000017d428a33413b623546671ca387_Traceguids,
      a1,
      v11);
  }
  if ( ((__int64)WPP_MAIN_CB.Queue.ListEntry.Flink & 2) != 0 )
    McTemplateK0q_EtwWriteTransfer((__int64)v10, v7, v8, v5);
}
