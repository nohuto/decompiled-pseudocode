/*
 * XREFs of ?ndisDevicePowerDown@@YAXPEAX@Z @ 0x1C012A270
 * Callers:
 *     <none>
 * Callees:
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C0006E48 (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     ?ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x1C0006E8C (-ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     WPP_RECORDER_SF_qL @ 0x1C000DC70 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_q @ 0x1C000DD50 (WPP_RECORDER_SF_q.c)
 *     ndisNotifyDevicePowerStateChange @ 0x1C0014ABC (ndisNotifyDevicePowerStateChange.c)
 *     ?ndisQuerySetMiniportDeviceState@@YAHPEAU_NDIS_MINIPORT_BLOCK@@W4_DEVICE_POWER_STATE@@KE@Z @ 0x1C0014F78 (-ndisQuerySetMiniportDeviceState@@YAHPEAU_NDIS_MINIPORT_BLOCK@@W4_DEVICE_POWER_STATE@@KE@Z.c)
 *     ?NDIS_COUNT_POWER_TRANSITION@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_POWER_STATE@@@Z @ 0x1C0015934 (-NDIS_COUNT_POWER_TRANSITION@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_POWER_STATE@@@Z.c)
 *     ?ndisMRestoreOpenHandlers@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C0015AE8 (-ndisMRestoreOpenHandlers@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     ?ndisIsMiniportStarted@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00188E4 (-ndisIsMiniportStarted@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisDereferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x1C0018D30 (-ndisDereferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     NdisMIndicateStatusEx @ 0x1C0019A80 (NdisMIndicateStatusEx.c)
 *     ?ndisIfSetInterfaceState@@YAEPEAU_NDIS_MINIPORT_BLOCK@@EE@Z @ 0x1C001A1D0 (-ndisIfSetInterfaceState@@YAEPEAU_NDIS_MINIPORT_BLOCK@@EE@Z.c)
 *     ?ndisMDereferenceIfBlock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z @ 0x1C001A3D8 (-ndisMDereferenceIfBlock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z.c)
 *     ?ndisMReferenceIfBlock@@YAPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z @ 0x1C001A470 (-ndisMReferenceIfBlock@@YAPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z.c)
 *     WPP_RECORDER_SF_qd @ 0x1C001D018 (WPP_RECORDER_SF_qd.c)
 *     WPP_RECORDER_SF_Zq @ 0x1C002A744 (WPP_RECORDER_SF_Zq.c)
 *     WPP_RECORDER_SF_qdL @ 0x1C003B908 (WPP_RECORDER_SF_qdL.c)
 *     __security_check_cookie @ 0x1C003D700 (__security_check_cookie.c)
 *     memset @ 0x1C003FE40 (memset.c)
 *     McTemplateK0jqxd_EtwWriteTransfer @ 0x1C0060078 (McTemplateK0jqxd_EtwWriteTransfer.c)
 *     McTemplateK0jqxddq_EtwWriteTransfer @ 0x1C0067358 (McTemplateK0jqxddq_EtwWriteTransfer.c)
 *     McTemplateK0jqxqq_EtwWriteTransfer @ 0x1C007126C (McTemplateK0jqxqq_EtwWriteTransfer.c)
 *     ?ndisIssueNetEventSetPowerEvent@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_DEVICE_POWER_STATE@@E@Z @ 0x1C00FB180 (-ndisIssueNetEventSetPowerEvent@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_DEVICE_POWER_STATE@@E@Z.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00FB73C (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?SetPause@BindState@Ndis@@QEAA_NW4PAUSE_OR_RESTART@@W4NDIS_PAUSE_REASON@@@Z @ 0x1C00FD39C (-SetPause@BindState@Ndis@@QEAA_NW4PAUSE_OR_RESTART@@W4NDIS_PAUSE_REASON@@@Z.c)
 *     ?ndisNsiSyncMiniportOperStatusNotification@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00FD7BC (-ndisNsiSyncMiniportOperStatusNotification@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00FDA50 (-BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?ndisSetDeviceInterfaceState@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C00FDA84 (-ndisSetDeviceInterfaceState@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     ?Release@?$KNeutralLock@W4NDIS_MINIPORT_POLICY_OWNER@@@Rtl@@QEAAXW4NDIS_MINIPORT_POLICY_OWNER@@@Z @ 0x1C00FDBD0 (-Release@-$KNeutralLock@W4NDIS_MINIPORT_POLICY_OWNER@@@Rtl@@QEAAXW4NDIS_MINIPORT_POLICY_OWNER@@@.c)
 *     ?ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z @ 0x1C00FDCB0 (-ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z.c)
 *     ?ndisMiniportFatalError@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z @ 0x1C011DE30 (-ndisMiniportFatalError@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x1C0123200 (-ndisGetBindLinkNameForTracing@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 *     ?ndisPmInitializeMiniport@@_Y2PAGENPNP@@AHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0139A18 (-ndisPmInitializeMiniport@@_Y2PAGENPNP@@AHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

void __fastcall ndisDevicePowerDown(_QWORD *a1)
{
  struct _NDIS_MINIPORT_BLOCK *v1; // rdi
  int v3; // r12d
  _IRP *v4; // r15
  int Status; // r13d
  POWER_STATE v6; // ebx
  __int64 v7; // rcx
  unsigned int v8; // eax
  _NDIS_IF_BLOCK *v9; // rax
  KIRQL v10; // dl
  __int64 v11; // rcx
  unsigned int Flags; // eax
  _NDIS_IF_BLOCK *v13; // rcx
  enum _DEVICE_POWER_STATE CurrentDevicePowerState; // ebx
  int v15; // edx
  __int64 v16; // rcx
  int v17; // edx
  int SetMiniportDeviceState; // r14d
  __int64 v19; // rcx
  struct _NDIS_MINIPORT_BLOCK *v20; // rdx
  unsigned __int8 v21; // al
  KIRQL v22; // dl
  _NDIS_IF_BLOCK *IfBlock; // rax
  __int64 v24; // [rsp+38h] [rbp-D0h]
  __int64 v25; // [rsp+40h] [rbp-C8h]
  KIRQL NewIrql[16]; // [rsp+58h] [rbp-B0h] BYREF
  char v27[160]; // [rsp+68h] [rbp-A0h] BYREF
  struct _NDIS_STATUS_INDICATION StatusIndication; // [rsp+108h] [rbp+0h] BYREF
  __int64 v29; // [rsp+178h] [rbp+70h] BYREF
  unsigned int ifOperStatusFlags; // [rsp+180h] [rbp+78h]

  v1 = (struct _NDIS_MINIPORT_BLOCK *)(a1 - 676);
  NewIrql[0] = 0;
  v3 = 0;
  memset(&StatusIndication, 0, sizeof(StatusIndication));
  v29 = 0LL;
  ifOperStatusFlags = 0;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xEu,
      0x55u,
      (struct _GUID *)&WPP_edff7b97c941354592c797b15dc3b8f6_Traceguids,
      v1);
  ndisReferencePackage((struct _PKG_REF *)&ndisPkgs);
  if ( (v1->Flags & 0x80u) != 0 )
  {
    v4 = 0LL;
    Status = 0;
    v6.SystemState = PowerSystemSleeping3;
  }
  else
  {
    v4 = (_IRP *)a1[4];
    Status = v4->IoStatus.Status;
    v6.SystemState = (_SYSTEM_POWER_STATE)v4->Tail.Overlay.CurrentStackLocation->Parameters.Power.State;
  }
  a1[4] = 0LL;
  if ( Status < 0 )
  {
    if ( !ndisIsMiniportStarted(v1) || v1->PnPDeviceState != NdisPnPDeviceStarted )
      goto LABEL_22;
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qL(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        0xEu,
        0x57u,
        (struct _GUID *)&WPP_edff7b97c941354592c797b15dc3b8f6_Traceguids,
        (char)v1,
        v4->IoStatus.Status);
    CurrentDevicePowerState = v1->CurrentDevicePowerState;
    v15 = CurrentDevicePowerState;
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v24) = v1->CurrentDevicePowerState;
      WPP_RECORDER_SF_qd(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        0xEu,
        0x58u,
        (struct _GUID *)&WPP_edff7b97c941354592c797b15dc3b8f6_Traceguids,
        (char)v1,
        v24);
      v15 = v1->CurrentDevicePowerState;
    }
    NDIS_COUNT_POWER_TRANSITION(v1, v15);
    if ( (byte_1C00E61C1 & 8) != 0 )
      McTemplateK0jqxqq_EtwWriteTransfer(
        v16,
        &DevicePowerStateChange,
        &v1->InterfaceGuid,
        (__int64)&v1->InterfaceGuid,
        v1->IfIndex,
        v1->NetLuid.Value,
        1,
        v1->CurrentDevicePowerState);
    if ( (v1->PnPFlags & 0x20) != 0 )
    {
      SetMiniportDeviceState = ndisQuerySetMiniportDeviceState(v1, CurrentDevicePowerState, 0xFD010101, 1);
      if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v25) = SetMiniportDeviceState;
        WPP_RECORDER_SF_qdL(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v17,
          0xEu,
          0x59u,
          (struct _GUID *)&WPP_edff7b97c941354592c797b15dc3b8f6_Traceguids,
          (char)v1,
          CurrentDevicePowerState,
          v25);
      }
    }
    else
    {
      SetMiniportDeviceState = ndisPmInitializeMiniport(v1);
    }
    Rtl::KNeutralLock<enum NDIS_MINIPORT_POLICY_OWNER>::Release((__int64)&v1->MiniportOwner);
    if ( SetMiniportDeviceState )
    {
      if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          4u,
          0xEu,
          0x5Bu,
          (struct _GUID *)&WPP_edff7b97c941354592c797b15dc3b8f6_Traceguids,
          v1);
      if ( (byte_1C00E61C2 & 0x40) != 0 )
        McTemplateK0jqxddq_EtwWriteTransfer(
          v19,
          &PowerDownFailedCannotReinitialize,
          &v1->InterfaceGuid,
          (__int64)&v1->InterfaceGuid,
          v1->IfIndex,
          v1->NetLuid.Value,
          SetMiniportDeviceState,
          1,
          0);
      if ( ndisMReferenceIfBlock(v1, 0xFu) )
      {
        IfBlock = v1->IfBlock;
        *(_QWORD *)&v1->OperStatus = 2LL;
        if ( IfBlock->ifOperStatus != NET_IF_OPER_STATUS_DOWN )
        {
          IfBlock->ifOperStatus = NET_IF_OPER_STATUS_DOWN;
          v1->IfBlock->ifOperStatusFlags = 0;
          ndisNsiSyncMiniportOperStatusNotification(v1);
          v3 = 1;
        }
        ndisMDereferenceIfBlock(v1, MPIFREF_POWERDOWNFAIL);
      }
      ndisMiniportFatalError(v1, NdisMEventErr_FailedPowerDx);
      if ( (v1->Flags & 0x80u) != 0 )
        LOBYTE(Status) = 1;
      else
        v4->IoStatus.Status = -1073741823;
    }
    else
    {
      Ndis::BindEngine::BeginPolicyUpdates(&v1->BindEngine);
      if ( Ndis::BindState::SetPause(&v1->Bindings.Miniport, DatapathRunning, PauseReason_LowPower) )
      {
        memset(v27, 0, sizeof(v27));
        if ( (unsigned __int8)byte_1C00E448B >= 4u )
        {
          ndisGetBindLinkNameForTracing(v1, (struct NDIS_PNPTRACE_LOCALS *)v27);
          if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_Zq(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              (int)v20,
              0x1Cu,
              0x5Au,
              (struct _GUID *)&WPP_edff7b97c941354592c797b15dc3b8f6_Traceguids,
              *(unsigned __int16 **)&v27[8],
              *(_QWORD *)v27);
        }
      }
      Ndis::BindEngine::EndPolicyUpdates(&v1->BindEngine, v20);
      Ndis::BindEngine::ApplyBindChanges(&v1->BindEngine, RunSynchronous, 0);
      NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(v1, NewIrql);
      ndisMRestoreOpenHandlers(v1, 4u);
      v21 = ndisIfSetInterfaceState(v1, 1, NewIrql[0]);
      v22 = NewIrql[0];
      v3 = v21;
      v1->MiniportThread = 0LL;
      KeReleaseSpinLock(&v1->Lock, v22);
      _m_prefetchw(&v1->InterlockedFlags);
      if ( (_InterlockedOr((volatile signed __int32 *)&v1->InterlockedFlags, 0) & 0x10) != 0 )
      {
        ndisSetDeviceInterfaceState(v1, 1u);
        _InterlockedAnd((volatile signed __int32 *)&v1->InterlockedFlags, 0xFFFFFFEF);
      }
      ndisNotifyDevicePowerStateChange(v1, CurrentDevicePowerState);
      ndisIssueNetEventSetPowerEvent(v1, CurrentDevicePowerState, 1);
    }
  }
  else
  {
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qd(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        0xEu,
        0x56u,
        (struct _GUID *)&WPP_edff7b97c941354592c797b15dc3b8f6_Traceguids,
        (char)v1,
        v6.SystemState);
    NDIS_COUNT_POWER_TRANSITION(v1, v6.SystemState);
    if ( (byte_1C00E61C1 & 8) != 0 )
      McTemplateK0jqxqq_EtwWriteTransfer(
        v7,
        &DevicePowerStateChange,
        &v1->InterfaceGuid,
        (__int64)&v1->InterfaceGuid,
        v1->IfIndex,
        v1->NetLuid.Value,
        1,
        v6.SystemState);
    NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(v1, NewIrql);
    v8 = v1->OperStatusFlags & 0xFEFFFFFF;
    v1->OperStatus = NET_IF_OPER_STATUS_DORMANT;
    v1->OperStatusFlags = v8 | 8;
    if ( ndisMReferenceIfBlock(v1, 0xEu) )
    {
      v9 = v1->IfBlock;
      if ( v9->ifOperStatus != NET_IF_OPER_STATUS_DORMANT )
      {
        v9->ifOperStatus = NET_IF_OPER_STATUS_DORMANT;
        v3 = 1;
        v1->IfBlock->ifOperStatusFlags = v1->OperStatusFlags;
      }
      ndisMDereferenceIfBlock(v1, MPIFREF_POWERDOWN);
    }
    v10 = NewIrql[0];
    v1->MiniportThread = 0LL;
    KeReleaseSpinLock(&v1->Lock, v10);
    if ( v3 )
      ndisNsiSyncMiniportOperStatusNotification(v1);
    Flags = v1->Flags;
    v1->CurrentDevicePowerState = v6.DeviceState;
    if ( (Flags & 0x80u) == 0 )
      PoSetPowerState(v1->DeviceObject, DevicePowerState, v6);
  }
  if ( v3 && ndisIsMiniportStarted(v1) && v1->PnPDeviceState == NdisPnPDeviceStarted )
  {
    v13 = v1->IfBlock;
    LODWORD(v29) = 786816;
    HIDWORD(v29) = v13->ifOperStatus;
    ifOperStatusFlags = v13->ifOperStatusFlags;
    StatusIndication.StatusBufferSize = 12;
    StatusIndication.StatusBuffer = &v29;
    StatusIndication.Header = (_NDIS_OBJECT_HEADER)7340440;
    StatusIndication.SourceHandle = v1;
    StatusIndication.StatusCode = 1073807395;
    NdisMIndicateStatusEx(v1, &StatusIndication);
  }
LABEL_22:
  v1->LastWakeReason = 65534;
  if ( (byte_1C00E61C3 & 4) != 0 )
    McTemplateK0jqxd_EtwWriteTransfer(
      v11,
      &DevicePowerDownComplete,
      &v1->InterfaceGuid,
      (__int64)&v1->InterfaceGuid,
      v1->IfIndex,
      v1->NetLuid.Value,
      Status);
  if ( (v1->Flags & 0x80u) == 0 )
    IofCompleteRequest(v4, 0);
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xEu,
      0x5Cu,
      (struct _GUID *)&WPP_edff7b97c941354592c797b15dc3b8f6_Traceguids,
      v1);
  ndisDereferencePackage((PVOID *)&ndisPkgs);
}
