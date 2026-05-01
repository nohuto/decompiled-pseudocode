/*
 * XREFs of DPA_Clone @ 0x180487760
 * Callers:
 *     ?_GetNthMostDominantColorFromBits@@YA_NPEAUtagRGBQUAD@@HHHI_N1PEAK@Z @ 0x18048722C (-_GetNthMostDominantColorFromBits@@YA_NPEAUtagRGBQUAD@@HHHI_N1PEAK@Z.c)
 * Callees:
 *     memcpy_0 @ 0x1800F03E7 (memcpy_0.c)
 *     DPA_CreateEx @ 0x180487800 (DPA_CreateEx.c)
 *     DPA_Destroy @ 0x180487870 (DPA_Destroy.c)
 *     DPA_Grow @ 0x180487950 (DPA_Grow.c)
 */

HDPA __stdcall DPA_Clone(const HDPA hdpa, HDPA hdpaNew)
{
  int v2; // esi
  HDPA v3; // rbx
  void *v6; // rcx

  v2 = 0;
  v3 = hdpaNew;
  if ( !hdpaNew )
  {
    v3 = DPA_CreateEx(*((_DWORD *)hdpa + 7), *((HANDLE *)hdpa + 2));
    if ( !v3 )
      return 0LL;
    v2 = 1;
  }
  if ( !DPA_Grow(v3, *((_DWORD *)hdpa + 6)) )
  {
    if ( v2 )
      DPA_Destroy(v3);
    return 0LL;
  }
  v6 = (void *)*((_QWORD *)v3 + 1);
  *(_DWORD *)v3 = *(_DWORD *)hdpa;
  memcpy_0(v6, *((const void **)hdpa + 1), 8LL * *(int *)hdpa);
  return v3;
}
