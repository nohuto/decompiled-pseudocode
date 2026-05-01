/*
 * XREFs of SHFusionUninitialize @ 0x18013EFE4
 * Callers:
 *     DllMain @ 0x180092088 (DllMain.c)
 * Callees:
 *     <none>
 */

__int64 SHFusionUninitialize()
{
  __int64 result; // rax

  if ( g_hActCtx != (HANDLE)-1LL )
  {
    ReleaseActCtx(g_hActCtx);
    g_hActCtx = (HANDLE)-1LL;
  }
  result = (__int64)hModule;
  if ( hModule )
    result = -1LL;
  hModule = (HMODULE)result;
  return result;
}
