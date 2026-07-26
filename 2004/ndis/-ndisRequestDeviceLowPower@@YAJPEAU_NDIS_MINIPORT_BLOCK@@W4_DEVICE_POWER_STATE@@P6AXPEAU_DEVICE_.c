/*
 * XREFs of ?ndisRequestDeviceLowPower@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4_DEVICE_POWER_STATE@@P6AXPEAU_DEVICE_OBJECT@@ET_POWER_STATE@@PEAXPEAU_IO_STATUS_BLOCK@@@Z4W4_NDIS_MINIPORT_EVENT@@@Z @ 0x1C0015D24
 * Callers:
 *     ?ndisSetSystemPower@@YAJPEAU_IRP@@PEAU_IO_STACK_LOCATION@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00147D8 (-ndisSetSystemPower@@YAJPEAU_IRP@@PEAU_IO_STACK_LOCATION@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisMediaDisconnectWorker@@YAXPEAX@Z @ 0x1C0082FB0 (-ndisMediaDisconnectWorker@@YAXPEAX@Z.c)
 *     NdisMIdleNotificationConfirm @ 0x1C00A9030 (NdisMIdleNotificationConfirm.c)
 *     ?ndisRequestNicQuiet@@YAJPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C01148F8 (-ndisRequestNicQuiet@@YAJPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 * Callees:
 *     ?ndisLogMiniportEvent@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z @ 0x1C0017940 (-ndisLogMiniportEvent@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z.c)
 *     WPP_RECORDER_SF_Lq @ 0x1C0017B2C (WPP_RECORDER_SF_Lq.c)
 *     ?ndisAoAcPauseRefTimeAccumulation@@YAXPEAU_NDIS_MINIPORT_AOAC@@@Z @ 0x1C005A8D4 (-ndisAoAcPauseRefTimeAccumulation@@YAXPEAU_NDIS_MINIPORT_AOAC@@@Z.c)
 *     McTemplateK0jqx_EtwWriteTransfer @ 0x1C005DA7C (McTemplateK0jqx_EtwWriteTransfer.c)
 */

__int64 __fastcall ndisRequestDeviceLowPower(
        struct _NDIS_MINIPORT_BLOCK *a1,
        POWER_STATE PowerState,
        PREQUEST_POWER_COMPLETE CompletionFunction,
        PVOID Context,
        enum _NDIS_MINIPORT_EVENT a5)
{
  int v9; // ecx
  int v10; // edx
  unsigned int v11; // edi
  struct _NDIS_MINIPORT_AOAC *AoAc; // rcx

  ndisLogMiniportEvent(a1, a5);
  if ( (byte_1C00E61C3 & 4) != 0 )
    McTemplateK0jqx_EtwWriteTransfer(
      v9,
      (unsigned int)&DevicePowerDownRequested,
      (_DWORD)a1 + 4008,
      (_DWORD)a1 + 4008,
      a1->IfIndex,
      a1->NetLuid.Value);
  _InterlockedOr((volatile signed __int32 *)&a1->InterlockedFlags, 4u);
  if ( (a1->Flags & 0x80u) != 0 )
  {
    v11 = 259;
  }
  else
  {
    v11 = PoRequestPowerIrp(a1->PhysicalDeviceObject, 2u, PowerState, CompletionFunction, Context, 0LL);
    if ( v11 != 259 && *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v10) = 2;
      WPP_RECORDER_SF_Lq(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v10,
        14,
        162,
        (struct _GUID *)&WPP_edff7b97c941354592c797b15dc3b8f6_Traceguids,
        v11,
        (char)a1);
    }
  }
  AoAc = a1->AoAc;
  if ( AoAc )
    ndisAoAcPauseRefTimeAccumulation(AoAc);
  return v11;
}
