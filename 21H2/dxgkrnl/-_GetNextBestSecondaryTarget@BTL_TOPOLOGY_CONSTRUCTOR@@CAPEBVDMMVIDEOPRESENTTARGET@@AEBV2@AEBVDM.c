/*
 * XREFs of ?_GetNextBestSecondaryTarget@BTL_TOPOLOGY_CONSTRUCTOR@@CAPEBVDMMVIDEOPRESENTTARGET@@AEBV2@AEBVDMMVIDEOPRESENTTARGETSET@@@Z @ 0x1C03AEF20
 * Callers:
 *     ?_AddExternalPathsToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJPEAVDXGADAPTER@@@Z @ 0x1C03AD350 (-_AddExternalPathsToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJPEAVDXGADAPTER@@@Z.c)
 * Callees:
 *     ?GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z @ 0x1C0012B30 (-GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z.c)
 *     ?_IsBetterSecondaryTarget@BTL_TOPOLOGY_CONSTRUCTOR@@CA_NAEBVDXGADAPTER@@AEBVDMMVIDEOPRESENTTARGET@@PEBV3@@Z @ 0x1C03AF120 (-_IsBetterSecondaryTarget@BTL_TOPOLOGY_CONSTRUCTOR@@CA_NAEBVDXGADAPTER@@AEBVDMMVIDEOPRESENTTARGE.c)
 */

const struct DMMVIDEOPRESENTTARGET *__fastcall BTL_TOPOLOGY_CONSTRUCTOR::_GetNextBestSecondaryTarget(
        const struct DMMVIDEOPRESENTTARGET *a1,
        const struct DMMVIDEOPRESENTTARGETSET *this)
{
  __int64 v2; // rbx
  __int64 v5; // rax
  const struct DXGADAPTER *v6; // rbp
  const struct DMMVIDEOPRESENTTARGET *i; // rdx
  const struct DXGADAPTER *v8; // rcx
  const struct DMMVIDEOPRESENTTARGET *NextTarget; // rax
  const struct DMMVIDEOPRESENTTARGET *v10; // rbx
  const struct DMMVIDEOPRESENTTARGET *v11; // rdi
  const struct DMMVIDEOPRESENTTARGETSET *v12; // rbx
  const struct DMMVIDEOPRESENTTARGET *j; // rbx
  const struct DXGADAPTER *v14; // rcx

  v2 = *((_QWORD *)this + 11);
  v5 = *(_QWORD *)(v2 + 8);
  if ( !v5 )
  {
    WdLogSingleEntry0(1LL);
    v5 = *(_QWORD *)(v2 + 8);
  }
  v6 = *(const struct DXGADAPTER **)(v5 + 16);
  for ( i = a1; ; i = v10 )
  {
    NextTarget = DMMVIDEOPRESENTTARGETSET::GetNextTarget(this, i);
    v10 = NextTarget;
    if ( !NextTarget )
      break;
    if ( !*((_DWORD *)NextTarget + 23)
      && !BTL_TOPOLOGY_CONSTRUCTOR::_IsBetterSecondaryTarget(v6, NextTarget, a1)
      && !BTL_TOPOLOGY_CONSTRUCTOR::_IsBetterSecondaryTarget(v8, a1, v10) )
    {
      return v10;
    }
  }
  v11 = 0LL;
  v12 = (const struct DMMVIDEOPRESENTTARGETSET *)*((_QWORD *)this + 3);
  if ( v12 != (const struct DMMVIDEOPRESENTTARGETSET *)((char *)this + 24) )
  {
    for ( j = (const struct DMMVIDEOPRESENTTARGETSET *)((char *)v12 - 8);
          j;
          j = DMMVIDEOPRESENTTARGETSET::GetNextTarget(this, j) )
    {
      if ( !*((_DWORD *)j + 23)
        && BTL_TOPOLOGY_CONSTRUCTOR::_IsBetterSecondaryTarget(v6, j, v11)
        && BTL_TOPOLOGY_CONSTRUCTOR::_IsBetterSecondaryTarget(v14, a1, j) )
      {
        v11 = j;
      }
    }
  }
  return v11;
}
