/*
 * XREFs of ?ndisRequestWaitWake@@YAJPEAU_NDIS_MINIPORT_BLOCK@@P6AXPEAU_DEVICE_OBJECT@@ET_POWER_STATE@@PEAXPEAU_IO_STATUS_BLOCK@@@Z@Z @ 0x1C003ADD0
 * Callers:
 *     ?ndisPrepForLowPower@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_POWER_STATE@@@Z @ 0x1C0013DF0 (-ndisPrepForLowPower@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_POWER_STATE@@@Z.c)
 *     NdisMIdleNotificationConfirm @ 0x1C00A9030 (NdisMIdleNotificationConfirm.c)
 *     ?ndisRequestNicQuiet@@YAJPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C01148F8 (-ndisRequestNicQuiet@@YAJPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     ?ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPER_CONFIGURATION_HANDLE@@PEAU_UNICODE_STRING@@PEAX@Z @ 0x1C012F258 (-ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPE.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000DD50 (WPP_RECORDER_SF_q.c)
 *     ?ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C0012D38 (-ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?ndisCompleteWaitWake@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0015314 (-ndisCompleteWaitWake@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     WPP_RECORDER_SF_Lq @ 0x1C0017B2C (WPP_RECORDER_SF_Lq.c)
 *     McTemplateK0jqxd_EtwWriteTransfer @ 0x1C0060078 (McTemplateK0jqxd_EtwWriteTransfer.c)
 *     ?ndisWaitForKernelObject@@YAXPEAX@Z @ 0x1C00F86F0 (-ndisWaitForKernelObject@@YAXPEAX@Z.c)
 */

__int64 __fastcall ndisRequestWaitWake(struct _NDIS_MINIPORT_BLOCK *a1, PREQUEST_POWER_COMPLETE CompletionFunction)
{
  POWER_STATE v4; // r8d
  _DEVICE_OBJECT *PhysicalDeviceObject; // rcx
  NTSTATUS v6; // eax
  unsigned int v7; // ebx
  int *v8; // rcx

  if ( !ndisReferenceMiniport(a1, 0xAu) )
    return 3221225473LL;
  ndisWaitForKernelObject(&a1->WaitWakeIrpCompleted);
  KeClearEvent(&a1->WaitWakeIrpCompleted);
  v4.SystemState = a1->DeviceCaps.SystemWake;
  PhysicalDeviceObject = a1->PhysicalDeviceObject;
  a1->WaitWakeCancelAttempted = 0;
  a1->WaitWakeIoCompletionRoutineRan = 0;
  a1->WaitWakeSystemState = v4.SystemState;
  v6 = PoRequestPowerIrp(PhysicalDeviceObject, 0, v4, CompletionFunction, a1, &a1->WaitWakeIrp);
  v7 = v6;
  if ( v6 == 259 )
  {
    v8 = &WPP_RECORDER_INITIALIZED;
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        0xEu,
        0xA0u,
        (struct _GUID *)&WPP_edff7b97c941354592c797b15dc3b8f6_Traceguids,
        a1);
    if ( (byte_1C00E61C1 & 8) != 0 )
      McTemplateK0jqxd_EtwWriteTransfer(
        (_DWORD)v8,
        (unsigned int)&CreatedWakeIrp,
        (_DWORD)a1 + 4008,
        (_DWORD)a1 + 4008,
        a1->IfIndex,
        a1->NetLuid.Value,
        (char)a1->WaitWakeIrp);
  }
  else
  {
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_Lq(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        0xEu,
        0xA1u,
        (struct _GUID *)&WPP_edff7b97c941354592c797b15dc3b8f6_Traceguids,
        v6,
        a1);
    ndisCompleteWaitWake(a1);
  }
  return v7;
}
