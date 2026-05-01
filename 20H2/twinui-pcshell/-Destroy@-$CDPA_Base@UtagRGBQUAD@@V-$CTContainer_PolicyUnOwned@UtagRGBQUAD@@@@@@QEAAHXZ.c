/*
 * XREFs of ?Destroy@?$CDPA_Base@UtagRGBQUAD@@V?$CTContainer_PolicyUnOwned@UtagRGBQUAD@@@@@@QEAAHXZ @ 0x180486F60
 * Callers:
 *     ??1BUCKET@@QEAA@XZ @ 0x180486EE0 (--1BUCKET@@QEAA@XZ.c)
 *     ?_GetNthMostDominantColorFromBits@@YA_NPEAUtagRGBQUAD@@HHHI_N1PEAK@Z @ 0x18048722C (-_GetNthMostDominantColorFromBits@@YA_NPEAUtagRGBQUAD@@HHHI_N1PEAK@Z.c)
 * Callees:
 *     DPA_Destroy @ 0x180487870 (DPA_Destroy.c)
 *     DPA_DestroyCallback @ 0x1804878D0 (DPA_DestroyCallback.c)
 */

BOOL __fastcall CDPA_Base<tagRGBQUAD,CTContainer_PolicyUnOwned<tagRGBQUAD>>::Destroy(struct _DPA **a1)
{
  BOOL result; // eax
  struct _DPA *v3; // rcx

  result = 1;
  v3 = *a1;
  if ( v3 )
  {
    g_pfn_DPA_DestroyCallback(v3, (PFNDAENUMCALLBACK)CActionCenterExperienceManager::IsHintSupported, 0LL);
    *a1 = 0LL;
    result = DPA_Destroy(0LL);
    *a1 = 0LL;
  }
  return result;
}
