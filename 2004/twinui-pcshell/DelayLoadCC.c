/*
 * XREFs of DelayLoadCC @ 0x18013F170
 * Callers:
 *     SHFusionInitializeFromModuleID @ 0x18013EF9C (SHFusionInitializeFromModuleID.c)
 *     _GetProcFromComCtl32 @ 0x18013F3B8 (_GetProcFromComCtl32.c)
 * Callees:
 *     SHFusionLoadLibrary @ 0x18013F0BC (SHFusionLoadLibrary.c)
 */

__int64 DelayLoadCC()
{
  unsigned int v0; // ebx

  v0 = 0;
  if ( g_hinstCC )
    return 1;
  g_hinstCC = SHFusionLoadLibrary();
  if ( g_hinstCC )
    return 1;
  g_hinstCC = LoadLibraryExW(L"comctl32.dll", 0LL, 0x4000u);
  if ( g_hinstCC )
    return 1;
  return v0;
}
