/*
 * XREFs of _IsInsideUserApiHook@0 @ 0xA6D30
 * Callers:
 *     _xxxCreateWindowEx@68 @ 0x2D67C (_xxxCreateWindowEx@68.c)
 *     _xxxRealDefWindowProc@16 @ 0x3D3F2 (_xxxRealDefWindowProc@16.c)
 * Callees:
 *     <none>
 */

BOOL __stdcall IsInsideUserApiHook()
{
  return gihmodUserApiHook >= 0;
}
