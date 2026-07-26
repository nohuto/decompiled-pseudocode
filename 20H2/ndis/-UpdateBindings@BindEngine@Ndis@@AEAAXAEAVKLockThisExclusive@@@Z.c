/*
 * XREFs of ?UpdateBindings@BindEngine@Ndis@@AEAAXAEAVKLockThisExclusive@@@Z @ 0x1C0104540
 * Callers:
 *     ?DispatchPendingWork@BindEngine@Ndis@@AEAAXW4CallRunMode@@AEAVKLockThisExclusive@@@Z @ 0x1C00FDC28 (-DispatchPendingWork@BindEngine@Ndis@@AEAAXW4CallRunMode@@AEAVKLockThisExclusive@@@Z.c)
 *     ?UpdateBindingsWorkItem@BindEngine@Ndis@@AEAAXXZ @ 0x1C010AE10 (-UpdateBindingsWorkItem@BindEngine@Ndis@@AEAAXXZ.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000DD50 (WPP_RECORDER_SF_q.c)
 *     ?ndisCancelMediaDisconnectTimer@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0019D0C (-ndisCancelMediaDisconnectTimer@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisSetMediaDisconnectTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0019E74 (-ndisSetMediaDisconnectTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisAoAcClearStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z @ 0x1C005A24C (-ndisAoAcClearStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z.c)
 *     ?ndisAoAcStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@W4CallRunMode@@@Z @ 0x1C005ABB0 (-ndisAoAcStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@W4CallRunMode@@@Z.c)
 *     ?ndisSelectiveSuspendClearStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z @ 0x1C00A6A50 (-ndisSelectiveSuspendClearStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z.c)
 *     ?ndisSelectiveSuspendStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z @ 0x1C00A6FD0 (-ndisSelectiveSuspendStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z.c)
 *     ?Acquire@?$KNeutralLock@W4NDIS_MINIPORT_POLICY_OWNER@@@Rtl@@QEAAXW4NDIS_MINIPORT_POLICY_OWNER@@@Z @ 0x1C00FB14C (-Acquire@-$KNeutralLock@W4NDIS_MINIPORT_POLICY_OWNER@@@Rtl@@QEAAXW4NDIS_MINIPORT_POLICY_OWNER@@@.c)
 *     ?TryAcquire@?$KNeutralLock@W4NDIS_MINIPORT_POLICY_OWNER@@@Rtl@@QEAA_NW4NDIS_MINIPORT_POLICY_OWNER@@@Z @ 0x1C00FDB4C (-TryAcquire@-$KNeutralLock@W4NDIS_MINIPORT_POLICY_OWNER@@@Rtl@@QEAA_NW4NDIS_MINIPORT_POLICY_OWNE.c)
 *     ?AcquireExclusive@KLockHolder@@QEAAXXZ @ 0x1C00FDD90 (-AcquireExclusive@KLockHolder@@QEAAXXZ.c)
 *     ?Iterate@BindEngine@Ndis@@AEAA_NXZ @ 0x1C0104684 (-Iterate@BindEngine@Ndis@@AEAA_NXZ.c)
 *     ?EndBindOperation@BindEngine@Ndis@@SAXXZ @ 0x1C01052B4 (-EndBindOperation@BindEngine@Ndis@@SAXXZ.c)
 *     ?ReleaseExclusive@KLockHolder@@QEAAXXZ @ 0x1C0109B2C (-ReleaseExclusive@KLockHolder@@QEAAXXZ.c)
 */

void __fastcall Ndis::BindEngine::UpdateBindings(Ndis::BindEngine *this, struct KLockThisExclusive *a2)
{
  _NDIS_MINIPORT_BLOCK *m_miniport; // rbx
  char v5; // bp
  _NDIS_MINIPORT_BLOCK *v6; // rbx

  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED && *((_WORD *)WPP_GLOBAL_Control + 36) )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      5u,
      0x1Cu,
      0xBu,
      (struct _GUID *)&WPP_7dc92789ba843694ac8581f7eed663c4_Traceguids,
      this->m_miniport);
  do
  {
    KLockHolder::ReleaseExclusive(a2);
    _InterlockedIncrement((volatile signed __int32 *)&Ndis::BindEngine::s_NumBindOperationsInProgress);
    m_miniport = this->m_miniport;
    v5 = 0;
    ndisCancelMediaDisconnectTimer(this->m_miniport);
    if ( m_miniport->SelectiveSuspend )
      ndisSelectiveSuspendStop(m_miniport, 8);
    if ( !Rtl::KNeutralLock<enum NDIS_MINIPORT_POLICY_OWNER>::TryAcquire((__int64)&m_miniport->MiniportOwner, 2) )
    {
      v5 = 1;
      m_miniport->PmInterruptedByPnp = 1;
      if ( m_miniport->AoAc )
        ndisAoAcStop(m_miniport, 8, RunAsynchronous);
      if ( !m_miniport->DoNotBlockOnMiniportLock )
        Rtl::KNeutralLock<enum NDIS_MINIPORT_POLICY_OWNER>::Acquire((__int64)&m_miniport->MiniportOwner, 2u);
    }
    while ( Ndis::BindEngine::Iterate(this) )
      ;
    v6 = this->m_miniport;
    if ( this->m_miniport->MediaConnectState == MediaConnectStateDisconnected )
      ndisSetMediaDisconnectTimer(this->m_miniport);
    if ( v6->SelectiveSuspend )
      ndisSelectiveSuspendClearStop(v6, 8);
    if ( v5 )
    {
      v6->PmInterruptedByPnp = 0;
      if ( v6->AoAc )
        ndisAoAcClearStop(v6, 8);
    }
    Ndis::BindEngine::EndBindOperation();
    KLockHolder::AcquireExclusive(a2);
  }
  while ( this->m_isDirty );
  this->m_bindThread = 0LL;
  KeSetEvent(&this->m_bindCompleteEvent.m_event, 0, 0);
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    if ( *((_WORD *)WPP_GLOBAL_Control + 36) )
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        5u,
        0x1Cu,
        0xCu,
        (struct _GUID *)&WPP_7dc92789ba843694ac8581f7eed663c4_Traceguids,
        this->m_miniport);
  }
}
