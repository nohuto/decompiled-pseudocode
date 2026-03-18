/*
 * XREFs of ?s_TokenThreadMain@CGlobalSurfaceManager@@CAKPEAX@Z @ 0x1800F8EC0
 * Callers:
 *     <none>
 * Callees:
 *     ?ProcessKernelTokens@CGlobalSurfaceManager@@AEAAJXZ @ 0x18003D7DC (-ProcessKernelTokens@CGlobalSurfaceManager@@AEAAJXZ.c)
 */

__int64 __fastcall CGlobalSurfaceManager::s_TokenThreadMain(CGlobalSurfaceManager *Parameter)
{
  CGlobalSurfaceManager::ProcessKernelTokens(Parameter);
  return 0LL;
}
