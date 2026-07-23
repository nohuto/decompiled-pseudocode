/*
 * XREFs of IopCopyAbortCopyReadRequest @ 0x1403F1550
 * Callers:
 *     <none>
 * Callees:
 *     IopCopyCompleteReadRequest @ 0x1403F1900 (IopCopyCompleteReadRequest.c)
 */

__int64 __fastcall IopCopyAbortCopyReadRequest(__int64 a1)
{
  return IopCopyCompleteReadRequest(a1, a1 + 48, a1 + 56, a1 + 64, a1 + 72);
}
