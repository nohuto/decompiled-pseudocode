/*
 * XREFs of ndisWdfDevicePowerDown @ 0x1C00836C0
 * Callers:
 *     ?ndisWdfNotifyDevicePower@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4POWER_ACTION@@W4_DEVICE_POWER_STATE@@@Z @ 0x1C003E87C (-ndisWdfNotifyDevicePower@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4POWER_ACTION@@W4_DEVICE_POWER_STATE@@@.c)
 * Callees:
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C0006E48 (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     WPP_RECORDER_SF_q @ 0x1C000DD50 (WPP_RECORDER_SF_q.c)
 *     NdisMIndicateStatusEx @ 0x1C0019A80 (NdisMIndicateStatusEx.c)
 *     ?ndisMDereferenceIfBlock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z @ 0x1C001A3D8 (-ndisMDereferenceIfBlock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z.c)
 *     ?ndisMReferenceIfBlock@@YAPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z @ 0x1C001A470 (-ndisMReferenceIfBlock@@YAPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z.c)
 *     WPP_RECORDER_SF_qd @ 0x1C001D018 (WPP_RECORDER_SF_qd.c)
 *     __security_check_cookie @ 0x1C003D700 (__security_check_cookie.c)
 *     memset @ 0x1C003FE40 (memset.c)
 *     McTemplateK0jqxd_EtwWriteTransfer @ 0x1C0060078 (McTemplateK0jqxd_EtwWriteTransfer.c)
 *     McTemplateK0jqxqq_EtwWriteTransfer @ 0x1C007126C (McTemplateK0jqxqq_EtwWriteTransfer.c)
 *     ndisWdfMiniportUpdatePowerState @ 0x1C0083DE0 (ndisWdfMiniportUpdatePowerState.c)
 *     ?ndisNsiSyncMiniportOperStatusNotification@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00FD7BC (-ndisNsiSyncMiniportOperStatusNotification@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

void __fastcall ndisWdfDevicePowerDown(struct _NDIS_MINIPORT_BLOCK *a1, int a2)
{
  char v2; // di
  char v4; // si
  __int64 v5; // rcx
  unsigned int v6; // eax
  _NDIS_IF_BLOCK *IfBlock; // rax
  KIRQL v8; // dl
  __int64 v9; // rcx
  _NDIS_IF_BLOCK *v10; // rcx
  KIRQL NewIrql[16]; // [rsp+48h] [rbp-59h] BYREF
  struct _NDIS_STATUS_INDICATION StatusIndication; // [rsp+58h] [rbp-49h] BYREF
  _DWORD v14[4]; // [rsp+C8h] [rbp+27h] BYREF

  v2 = a2;
  NewIrql[0] = 0;
  v4 = 0;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qd(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xEu,
      0x5Du,
      (struct _GUID *)&WPP_edff7b97c941354592c797b15dc3b8f6_Traceguids,
      (char)a1,
      a2);
  ndisWdfMiniportUpdatePowerState(a1);
  if ( (byte_1C00E61C1 & 8) != 0 )
    McTemplateK0jqxqq_EtwWriteTransfer(
      v5,
      &DevicePowerStateChange,
      &a1->InterfaceGuid,
      (__int64)&a1->InterfaceGuid,
      a1->IfIndex,
      a1->NetLuid.Value,
      1,
      v2);
  NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(a1, NewIrql);
  v6 = a1->OperStatusFlags & 0xFEFFFFFF;
  a1->OperStatus = NET_IF_OPER_STATUS_DORMANT;
  a1->OperStatusFlags = v6 | 8;
  if ( ndisMReferenceIfBlock(a1, 0xEu) )
  {
    IfBlock = a1->IfBlock;
    if ( IfBlock->ifOperStatus != NET_IF_OPER_STATUS_DORMANT )
    {
      IfBlock->ifOperStatus = NET_IF_OPER_STATUS_DORMANT;
      v4 = 1;
      a1->IfBlock->ifOperStatusFlags = a1->OperStatusFlags;
    }
    ndisMDereferenceIfBlock(a1, MPIFREF_POWERDOWN);
  }
  v8 = NewIrql[0];
  a1->MiniportThread = 0LL;
  KeReleaseSpinLock(&a1->Lock, v8);
  if ( v4 )
  {
    ndisNsiSyncMiniportOperStatusNotification(a1);
    v10 = a1->IfBlock;
    v14[0] = 786816;
    v14[1] = v10->ifOperStatus;
    v14[2] = v10->ifOperStatusFlags;
    memset(&StatusIndication, 0, sizeof(StatusIndication));
    StatusIndication.Header = (_NDIS_OBJECT_HEADER)7340440;
    StatusIndication.StatusBuffer = v14;
    StatusIndication.SourceHandle = a1;
    StatusIndication.StatusCode = 1073807395;
    StatusIndication.StatusBufferSize = 12;
    NdisMIndicateStatusEx(a1, &StatusIndication);
  }
  a1->LastWakeReason = 65534;
  if ( (byte_1C00E61C3 & 4) != 0 )
    McTemplateK0jqxd_EtwWriteTransfer(
      v9,
      &DevicePowerDownComplete,
      &a1->InterfaceGuid,
      (__int64)&a1->InterfaceGuid,
      a1->IfIndex,
      a1->NetLuid.Value,
      0);
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xEu,
      0x5Eu,
      (struct _GUID *)&WPP_edff7b97c941354592c797b15dc3b8f6_Traceguids,
      a1);
}
