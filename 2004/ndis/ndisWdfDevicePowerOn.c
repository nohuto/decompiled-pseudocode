/*
 * XREFs of ndisWdfDevicePowerOn @ 0x1C008391C
 * Callers:
 *     ?ndisWdfNotifyDevicePower@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4POWER_ACTION@@W4_DEVICE_POWER_STATE@@@Z @ 0x1C003E87C (-ndisWdfNotifyDevicePower@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4POWER_ACTION@@W4_DEVICE_POWER_STATE@@@.c)
 * Callees:
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C0006E48 (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     WPP_RECORDER_SF_q @ 0x1C000DD50 (WPP_RECORDER_SF_q.c)
 *     ndisNotifyDevicePowerStateChange @ 0x1C0014ABC (ndisNotifyDevicePowerStateChange.c)
 *     ?ndisSignalD0RequestComplete@@YAXPEAU_NDIS_MINIPORT_BLOCK@@J@Z @ 0x1C0015960 (-ndisSignalD0RequestComplete@@YAXPEAU_NDIS_MINIPORT_BLOCK@@J@Z.c)
 *     ?ndisMRestoreOpenHandlers@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C0015AE8 (-ndisMRestoreOpenHandlers@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     NdisMIndicateStatusEx @ 0x1C0019A80 (NdisMIndicateStatusEx.c)
 *     ?ndisIfSetInterfaceState@@YAEPEAU_NDIS_MINIPORT_BLOCK@@EE@Z @ 0x1C001A1D0 (-ndisIfSetInterfaceState@@YAEPEAU_NDIS_MINIPORT_BLOCK@@EE@Z.c)
 *     ?ndisMDereferenceIfBlock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z @ 0x1C001A3D8 (-ndisMDereferenceIfBlock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z.c)
 *     ?ndisMReferenceIfBlock@@YAPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z @ 0x1C001A470 (-ndisMReferenceIfBlock@@YAPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z.c)
 *     WPP_RECORDER_SF_Zq @ 0x1C002A744 (WPP_RECORDER_SF_Zq.c)
 *     __security_check_cookie @ 0x1C003D700 (__security_check_cookie.c)
 *     memset @ 0x1C003FE40 (memset.c)
 *     McTemplateK0jqxd_EtwWriteTransfer @ 0x1C0060078 (McTemplateK0jqxd_EtwWriteTransfer.c)
 *     McTemplateK0jqxqq_EtwWriteTransfer @ 0x1C007126C (McTemplateK0jqxqq_EtwWriteTransfer.c)
 *     ndisWdfMiniportUpdatePowerState @ 0x1C0083DE0 (ndisWdfMiniportUpdatePowerState.c)
 *     ?ndisIssueNetEventSetPowerEvent@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_DEVICE_POWER_STATE@@E@Z @ 0x1C00FB180 (-ndisIssueNetEventSetPowerEvent@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_DEVICE_POWER_STATE@@E@Z.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00FB73C (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?SetPause@BindState@Ndis@@QEAA_NW4PAUSE_OR_RESTART@@W4NDIS_PAUSE_REASON@@@Z @ 0x1C00FD39C (-SetPause@BindState@Ndis@@QEAA_NW4PAUSE_OR_RESTART@@W4NDIS_PAUSE_REASON@@@Z.c)
 *     ?BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00FDA50 (-BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?ndisSetDeviceInterfaceState@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C00FDA84 (-ndisSetDeviceInterfaceState@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     ?Release@?$KNeutralLock@W4NDIS_MINIPORT_POLICY_OWNER@@@Rtl@@QEAAXW4NDIS_MINIPORT_POLICY_OWNER@@@Z @ 0x1C00FDBD0 (-Release@-$KNeutralLock@W4NDIS_MINIPORT_POLICY_OWNER@@@Rtl@@QEAAXW4NDIS_MINIPORT_POLICY_OWNER@@@.c)
 *     ?ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z @ 0x1C00FDCB0 (-ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x1C0123200 (-ndisGetBindLinkNameForTracing@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 *     ?ndisNotifyMiniports@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_PNP_EVENT@@PEAXK@Z @ 0x1C012BA8C (-ndisNotifyMiniports@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_PNP_EVENT@@PEAXK@Z.c)
 */

void __fastcall ndisWdfDevicePowerOn(struct _NDIS_MINIPORT_BLOCK *a1)
{
  __int64 v2; // rcx
  char v3; // al
  char v4; // si
  enum _NDIS_DEVICE_PNP_EVENT v5; // edx
  unsigned int v6; // r9d
  unsigned int InterlockedFlags; // eax
  unsigned int v8; // ett
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  unsigned __int64 *p_Lock; // rcx
  KIRQL v13; // dl
  struct _KTHREAD *CurrentThread; // rax
  _NET_IF_MEDIA_DUPLEX_STATE MiniportMediaDuplexState; // eax
  KIRQL v16; // cl
  unsigned int FilterPnPFlags; // eax
  int v18; // edx
  _NDIS_IF_BLOCK *IfBlock; // rcx
  KIRQL NewIrql[4]; // [rsp+40h] [rbp-C0h] BYREF
  BOOL v21[3]; // [rsp+44h] [rbp-BCh] BYREF
  char v22[160]; // [rsp+50h] [rbp-B0h] BYREF
  struct _NDIS_STATUS_INDICATION StatusIndication; // [rsp+F0h] [rbp-10h] BYREF
  _DWORD v24[4]; // [rsp+160h] [rbp+60h] BYREF
  _DWORD v25[4]; // [rsp+170h] [rbp+70h] BYREF
  unsigned __int64 MiniportXmitLinkSpeed; // [rsp+180h] [rbp+80h]
  unsigned __int64 MiniportRcvLinkSpeed; // [rsp+188h] [rbp+88h]
  _NDIS_SUPPORTED_PAUSE_FUNCTIONS MiniportPauseFunctions; // [rsp+190h] [rbp+90h]
  unsigned int MiniportAutoNegotiationFlags; // [rsp+194h] [rbp+94h]

  NewIrql[0] = 0;
  memset(&StatusIndication, 0, sizeof(StatusIndication));
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xEu,
      0x50u,
      (struct _GUID *)&WPP_edff7b97c941354592c797b15dc3b8f6_Traceguids,
      a1);
  if ( (byte_1C00E61C1 & 8) != 0 )
    McTemplateK0jqxd_EtwWriteTransfer(
      v2,
      &MiniportPoweringUp,
      &a1->InterfaceGuid,
      (__int64)&a1->InterfaceGuid,
      a1->IfIndex,
      a1->NetLuid.Value,
      3);
  ndisWdfMiniportUpdatePowerState(a1);
  KeSetEvent(&a1->OpenReadyEvent.Event, 0, 0);
  NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(a1, NewIrql);
  ndisMRestoreOpenHandlers(a1, 4u);
  v3 = ndisIfSetInterfaceState(a1, 1, NewIrql[0]);
  a1->MiniportThread = 0LL;
  v4 = v3;
  KeReleaseSpinLock(&a1->Lock, NewIrql[0]);
  _m_prefetchw(&a1->InterlockedFlags);
  InterlockedFlags = a1->InterlockedFlags;
  do
  {
    v8 = InterlockedFlags;
    InterlockedFlags = _InterlockedCompareExchange(
                         (volatile signed __int32 *)&a1->InterlockedFlags,
                         InterlockedFlags,
                         InterlockedFlags);
  }
  while ( v8 != InterlockedFlags );
  if ( (InterlockedFlags & 0x10) != 0 )
  {
    ndisSetDeviceInterfaceState(a1, 1u);
    _InterlockedAnd((volatile signed __int32 *)&a1->InterlockedFlags, 0xFFFFFFEF);
  }
  v21[0] = (_BYTE)ndisAcOnLine == 1;
  ndisNotifyMiniports(a1, v5, v21, v6);
  if ( (byte_1C00E61C1 & 8) != 0 )
    McTemplateK0jqxqq_EtwWriteTransfer(
      v10,
      &DevicePowerStateChange,
      &a1->InterfaceGuid,
      (__int64)&a1->InterfaceGuid,
      a1->IfIndex,
      a1->NetLuid.Value,
      1,
      1);
  Rtl::KNeutralLock<enum NDIS_MINIPORT_POLICY_OWNER>::Release(&a1->MiniportOwner, v9, v11);
  ndisIssueNetEventSetPowerEvent(a1, PowerDeviceD0, 0);
  ndisNotifyDevicePowerStateChange(a1, 1);
  if ( (a1->PnPFlags & 0x10000000) != 0 && (a1->Flags & 0x20000000) != 0 )
  {
    while ( 1 )
    {
      NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(a1, NewIrql);
      p_Lock = &a1->Lock;
      if ( !a1->LockAcquired )
        break;
      v13 = NewIrql[0];
      a1->MiniportThread = 0LL;
      KeReleaseSpinLock(p_Lock, v13);
      KeStallExecutionProcessor(1u);
    }
    a1->LockAcquired = 1;
    CurrentThread = KeGetCurrentThread();
    a1->MiniportThread = 0LL;
    a1->LockThread = CurrentThread;
    KeReleaseSpinLockFromDpcLevel(p_Lock);
    MiniportMediaDuplexState = a1->MiniportMediaDuplexState;
    a1->Flags &= ~0x20000000u;
    v25[3] = 0;
    StatusIndication.Flags |= 8u;
    v25[2] = MiniportMediaDuplexState;
    MiniportXmitLinkSpeed = a1->MiniportXmitLinkSpeed;
    MiniportRcvLinkSpeed = a1->MiniportRcvLinkSpeed;
    MiniportPauseFunctions = a1->MiniportPauseFunctions;
    MiniportAutoNegotiationFlags = a1->MiniportAutoNegotiationFlags;
    StatusIndication.StatusBufferSize = 40;
    StatusIndication.StatusBuffer = v25;
    v25[0] = 2621824;
    v25[1] = 1;
    StatusIndication.Header = (_NDIS_OBJECT_HEADER)7340440;
    StatusIndication.SourceHandle = a1;
    StatusIndication.StatusCode = 1073807383;
    NdisMIndicateStatusEx(a1, &StatusIndication);
    v16 = NewIrql[0];
    a1->LockThread = 0LL;
    a1->LockAcquired = 0;
    if ( v16 != 2 )
      KeLowerIrql(v16);
  }
  ndisSignalD0RequestComplete(a1, 0);
  FilterPnPFlags = a1->FilterPnPFlags;
  if ( (FilterPnPFlags & 0x100) != 0 )
  {
    a1->FilterPnPFlags = FilterPnPFlags & 0xFFFFFEFF;
    Ndis::BindEngine::BeginPolicyUpdates(&a1->BindEngine);
    if ( Ndis::BindState::SetPause(&a1->Bindings.Miniport, DatapathRunning, PauseReason_LowPower) )
    {
      memset(v22, 0, sizeof(v22));
      if ( (unsigned __int8)byte_1C00E448B >= 4u )
      {
        ndisGetBindLinkNameForTracing(a1, (struct NDIS_PNPTRACE_LOCALS *)v22);
        if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_Zq(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            v18,
            0x1Cu,
            0x51u,
            (struct _GUID *)&WPP_edff7b97c941354592c797b15dc3b8f6_Traceguids,
            *(unsigned __int16 **)&v22[8],
            *(_QWORD *)v22);
      }
    }
    Ndis::BindEngine::EndPolicyUpdates(&a1->BindEngine);
    Ndis::BindEngine::ApplyBindChanges(&a1->BindEngine, RunSynchronous, 1);
  }
  if ( !ndisAoAcCapable && !ndisAoAcTest || v4 )
  {
    if ( ndisMReferenceIfBlock(a1, 0xDu) )
    {
      IfBlock = a1->IfBlock;
      v24[0] = 786816;
      v24[1] = IfBlock->ifOperStatus;
      v24[2] = IfBlock->ifOperStatusFlags;
      memset(&StatusIndication, 0, sizeof(StatusIndication));
      StatusIndication.Header = (_NDIS_OBJECT_HEADER)7340440;
      StatusIndication.StatusBuffer = v24;
      StatusIndication.SourceHandle = a1;
      StatusIndication.StatusCode = 1073807395;
      StatusIndication.StatusBufferSize = 12;
      NdisMIndicateStatusEx(a1, &StatusIndication);
      ndisMDereferenceIfBlock(a1, MPIFREF_DEVPOWERUP);
    }
  }
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xEu,
      0x52u,
      (struct _GUID *)&WPP_edff7b97c941354592c797b15dc3b8f6_Traceguids,
      a1);
}
