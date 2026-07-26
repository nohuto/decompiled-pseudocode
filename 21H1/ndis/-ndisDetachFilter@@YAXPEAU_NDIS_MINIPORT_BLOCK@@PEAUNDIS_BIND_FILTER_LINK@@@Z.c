/*
 * XREFs of ?ndisDetachFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C01161C8
 * Callers:
 *     ?Iterate@BindEngine@Ndis@@AEAA_NXZ @ 0x1C0104714 (-Iterate@BindEngine@Ndis@@AEAA_NXZ.c)
 * Callees:
 *     WPP_RECORDER_SF__guid_Dq @ 0x1C00264C4 (WPP_RECORDER_SF__guid_Dq.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00FB73C (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?ndisClearTransientBindFailuresAboveThisFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C00FFC48 (-ndisClearTransientBindFailuresAboveThisFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTE.c)
 *     ?GetBindContext@BindState@Ndis@@QEAAPEAXXZ @ 0x1C0102750 (-GetBindContext@BindState@Ndis@@QEAAPEAXXZ.c)
 *     ?RemoveBindContext@BindState@Ndis@@QEAAXPEAX@Z @ 0x1C0122888 (-RemoveBindContext@BindState@Ndis@@QEAAXPEAX@Z.c)
 *     ?ndisDetachFilterInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C013747C (-ndisDetachFilterInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@@Z.c)
 */

void __fastcall ndisDetachFilter(struct _NDIS_MINIPORT_BLOCK *a1, struct NDIS_BIND_FILTER_LINK *a2)
{
  void *BindContext; // rsi
  Ndis::BindState *v5; // rcx
  struct _NDIS_MINIPORT_BLOCK *v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r8
  struct _NDIS_MINIPORT_BLOCK *v10; // rdx
  int v11; // [rsp+20h] [rbp-38h]

  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(&a1->BindEngine.m_lock, 0LL);
  BindContext = Ndis::BindState::GetBindContext(&a2->BindState);
  Ndis::BindState::RemoveBindContext(v5, BindContext);
  Ndis::BindEngine::EndPolicyUpdates(&a1->BindEngine, v6);
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF__guid_Dq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v7,
      v8,
      0x26u,
      v11,
      (__int64)&a2->BindDriver._p->_t.Guid);
  ndisDetachFilterInner(a1, BindContext);
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF__guid_Dq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (__int64)&a2->BindDriver._p->_t.Guid,
      v9,
      0x27u,
      v11,
      (__int64)&a2->BindDriver._p->_t.Guid);
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(&a1->BindEngine.m_lock, 0LL);
  ndisClearTransientBindFailuresAboveThisFilter(a1, a2);
  Ndis::BindEngine::EndPolicyUpdates(&a1->BindEngine, v10);
}
