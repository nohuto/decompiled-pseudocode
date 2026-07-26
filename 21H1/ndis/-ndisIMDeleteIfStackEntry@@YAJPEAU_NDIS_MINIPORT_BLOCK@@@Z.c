/*
 * XREFs of ?ndisIMDeleteIfStackEntry@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C006D14C
 * Callers:
 *     ?ndisPnPRemoveDevice@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C0135820 (-ndisPnPRemoveDevice@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000DD50 (WPP_RECORDER_SF_q.c)
 *     ?ndisDereferenceMiniportRef@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C003E298 (-ndisDereferenceMiniportRef@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?ndisIfDeleteStackEntries@@YAXPEAU_NDIS_IF_BLOCK@@@Z @ 0x1C00B0BC0 (-ndisIfDeleteStackEntries@@YAXPEAU_NDIS_IF_BLOCK@@@Z.c)
 *     ?ndisReferenceMiniportByName@@YAXPEBU_UNICODE_STRING@@PEAPEAU_NDIS_MINIPORT_BLOCK@@EW4_NDIS_MP_REFTAG@@@Z @ 0x1C012A010 (-ndisReferenceMiniportByName@@YAXPEBU_UNICODE_STRING@@PEAPEAU_NDIS_MINIPORT_BLOCK@@EW4_NDIS_MP_R.c)
 */

__int64 __fastcall ndisIMDeleteIfStackEntry(struct _NDIS_MINIPORT_BLOCK *a1)
{
  unsigned int v1; // edi
  _NDIS_BIND_PATHS *BindPaths; // rdx
  KIRQL v4; // bl
  struct _NDIS_MINIPORT_BLOCK *v6; // [rsp+50h] [rbp+8h] BYREF

  v1 = 0;
  v6 = 0LL;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xDu,
      0xC6u,
      (struct _GUID *)&WPP_60844eb21a8f3cfcca037c14d27ddc90_Traceguids,
      a1);
  BindPaths = a1->BindPaths;
  if ( BindPaths->Number > 1 )
  {
    ndisReferenceMiniportByName(&BindPaths->Paths[BindPaths->Number - 2], &v6, 1u, MPREF_IF_DELSTACK);
    if ( v6 )
    {
      v4 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
      ndisIfDeleteStackEntries(a1->IfBlock);
      KeReleaseSpinLock(&ndisIfListLock, v4);
      ndisDereferenceMiniportRef(v6, 0x40u);
    }
    else
    {
      v1 = -1073741772;
    }
  }
  else
  {
    v1 = -1073741811;
  }
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xDu,
      0xC7u,
      (struct _GUID *)&WPP_60844eb21a8f3cfcca037c14d27ddc90_Traceguids,
      a1);
  return v1;
}
