/*
 * XREFs of LpcRequestWaitReplyPort @ 0x1408C4440
 * Callers:
 *     <none>
 * Callees:
 *     LpcpRequestWaitReplyPort @ 0x1408C478C (LpcpRequestWaitReplyPort.c)
 */

__int64 __fastcall LpcRequestWaitReplyPort(__int64 a1)
{
  return LpcpRequestWaitReplyPort(a1);
}
