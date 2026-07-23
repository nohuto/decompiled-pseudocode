/*
 * XREFs of IopAbortRequest @ 0x140890F60
 * Callers:
 *     <none>
 * Callees:
 *     IopCompleteRequest @ 0x14034D870 (IopCompleteRequest.c)
 */

void __fastcall IopAbortRequest(_QWORD *a1)
{
  IopCompleteRequest((__int64)a1, (__int64)(a1 + 6), a1 + 7, a1 + 8, a1 + 9);
}
