/*
 * XREFs of _EngLpkInstalled@0 @ 0x1EBA62
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOL __stdcall EngLpkInstalled()
{
  return *(_DWORD *)(_gpGdiSharedMemory + 1048724) != 0;
}
