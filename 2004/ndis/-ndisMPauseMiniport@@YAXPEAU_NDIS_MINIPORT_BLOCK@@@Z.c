/*
 * XREFs of ?ndisMPauseMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C010BB20
 * Callers:
 *     ?Iterate@BindEngine@Ndis@@AEAA_NXZ @ 0x1C0104684 (-Iterate@BindEngine@Ndis@@AEAA_NXZ.c)
 * Callees:
 *     ?ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x1C0006E8C (-ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     WPP_RECORDER_SF_q @ 0x1C000DD50 (WPP_RECORDER_SF_q.c)
 *     ?ndisDereferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x1C0018D30 (-ndisDereferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00FB73C (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?ndisMPauseMiniportInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1C0131BC0 (-ndisMPauseMiniportInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 */

void __fastcall ndisMPauseMiniport(struct _NDIS_MINIPORT_BLOCK *a1)
{
  unsigned int m_pauseReasons; // ebx
  char v3; // dl
  struct _NDIS_MINIPORT_BLOCK *v4; // rdx

  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x1Cu,
      0xDu,
      (struct _GUID *)&WPP_b1856828329f351dacd8075aad833f95_Traceguids,
      a1);
  m_pauseReasons = a1->Bindings.Miniport.m_pauseReasons;
  ndisReferencePackage((struct _PKG_REF *)&ndisPkgs);
  v3 = 0x80;
  if ( (m_pauseReasons & 8) == 0 )
    v3 = 1;
  ndisMPauseMiniportInner(a1, v3);
  ndisDereferencePackage((PVOID *)&ndisPkgs);
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x1Cu,
      0xEu,
      (struct _GUID *)&WPP_b1856828329f351dacd8075aad833f95_Traceguids,
      a1);
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(&a1->BindEngine.m_lock, 0LL);
  a1->Bindings.Miniport.m_actualPauseState = DatapathPaused;
  Ndis::BindEngine::EndPolicyUpdates(&a1->BindEngine, v4);
}
