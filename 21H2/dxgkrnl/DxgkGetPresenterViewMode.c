/*
 * XREFs of DxgkGetPresenterViewMode @ 0x1C01E6270
 * Callers:
 *     <none>
 * Callees:
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 */

bool DxgkGetPresenterViewMode()
{
  return *((_DWORD *)DXGGLOBAL_GetGlobal() + 345) != 0;
}
