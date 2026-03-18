/*
 * XREFs of IopAbortRequest @ 0x14088C9C0
 * Callers:
 *     <none>
 * Callees:
 *     IopCompleteRequest @ 0x1402497C0 (IopCompleteRequest.c)
 */

void __fastcall IopAbortRequest(__int64 a1)
{
  IopCompleteRequest(a1, a1 + 48, a1 + 56, (__int64 *)(a1 + 64), (_QWORD *)(a1 + 72));
}
