/*
 * XREFs of DxgkGetPresenterViewMode @ 0x1C0156E60
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000A650 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 */

bool __fastcall DxgkGetPresenterViewMode(__int64 a1, __int64 a2)
{
  return *((_DWORD *)DXGGLOBAL::GetGlobal(a1, a2) + 281) != 0;
}
