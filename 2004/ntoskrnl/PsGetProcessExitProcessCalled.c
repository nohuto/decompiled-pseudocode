/*
 * XREFs of PsGetProcessExitProcessCalled @ 0x140359440
 * Callers:
 *     VerifierMmUnmapLockedPages @ 0x1409E41B0 (VerifierMmUnmapLockedPages.c)
 * Callees:
 *     <none>
 */

bool __fastcall PsGetProcessExitProcessCalled(__int64 a1)
{
  return (*(_DWORD *)(a1 + 1124) & 4) != 0;
}
