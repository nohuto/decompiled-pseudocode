/*
 * XREFs of ?_GetFirstBestSecondaryTarget@BTL_TOPOLOGY_CONSTRUCTOR@@CAPEBVDMMVIDEOPRESENTTARGET@@AEBVDMMVIDEOPRESENTTARGETSET@@@Z @ 0x1C03AEE84
 * Callers:
 *     ?_AddExternalPathsToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJPEAVDXGADAPTER@@@Z @ 0x1C03AD350 (-_AddExternalPathsToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJPEAVDXGADAPTER@@@Z.c)
 * Callees:
 *     ?GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z @ 0x1C0012B30 (-GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z.c)
 *     ?_IsBetterSecondaryTarget@BTL_TOPOLOGY_CONSTRUCTOR@@CA_NAEBVDXGADAPTER@@AEBVDMMVIDEOPRESENTTARGET@@PEBV3@@Z @ 0x1C03AF120 (-_IsBetterSecondaryTarget@BTL_TOPOLOGY_CONSTRUCTOR@@CA_NAEBVDXGADAPTER@@AEBVDMMVIDEOPRESENTTARGE.c)
 */

const struct DMMVIDEOPRESENTTARGET *__fastcall BTL_TOPOLOGY_CONSTRUCTOR::_GetFirstBestSecondaryTarget(
        const struct DMMVIDEOPRESENTTARGETSET *this)
{
  __int64 v1; // rbx
  __int64 v3; // rax
  const struct DXGADAPTER *v4; // rbp
  const struct DMMVIDEOPRESENTTARGET *v5; // rdi
  const struct DMMVIDEOPRESENTTARGETSET *v6; // rbx
  const struct DMMVIDEOPRESENTTARGET *i; // rbx

  v1 = *((_QWORD *)this + 11);
  v3 = *(_QWORD *)(v1 + 8);
  if ( !v3 )
  {
    WdLogSingleEntry0(1LL);
    v3 = *(_QWORD *)(v1 + 8);
  }
  v4 = *(const struct DXGADAPTER **)(v3 + 16);
  v5 = 0LL;
  v6 = (const struct DMMVIDEOPRESENTTARGETSET *)*((_QWORD *)this + 3);
  if ( v6 != (const struct DMMVIDEOPRESENTTARGETSET *)((char *)this + 24) )
  {
    for ( i = (const struct DMMVIDEOPRESENTTARGETSET *)((char *)v6 - 8);
          i;
          i = DMMVIDEOPRESENTTARGETSET::GetNextTarget(this, i) )
    {
      if ( !*((_DWORD *)i + 23) && BTL_TOPOLOGY_CONSTRUCTOR::_IsBetterSecondaryTarget(v4, i, v5) )
        v5 = i;
    }
  }
  return v5;
}
