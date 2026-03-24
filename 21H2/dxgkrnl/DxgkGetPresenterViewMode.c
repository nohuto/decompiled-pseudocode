/*
 * XREFs of DxgkGetPresenterViewMode @ 0x1C016BA90
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00041C0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 */

bool __fastcall DxgkGetPresenterViewMode(__int64 a1, __int64 a2)
{
  return *((_DWORD *)DXGGLOBAL::GetGlobal(a1, a2) + 309) != 0;
}
