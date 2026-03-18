/*
 * XREFs of PsGetProcessExitProcessCalled @ 0x14031B870
 * Callers:
 *     VerifierMmUnmapLockedPages @ 0x1409E4150 (VerifierMmUnmapLockedPages.c)
 * Callees:
 *     <none>
 */

bool __fastcall PsGetProcessExitProcessCalled(__int64 a1)
{
  return (*(_DWORD *)(a1 + 1124) & 4) != 0;
}
