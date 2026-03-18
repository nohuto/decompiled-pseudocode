/*
 * XREFs of LpcRequestWaitReplyPort @ 0x140881960
 * Callers:
 *     <none>
 * Callees:
 *     LpcpRequestWaitReplyPort @ 0x140965F28 (LpcpRequestWaitReplyPort.c)
 */

__int64 __fastcall LpcRequestWaitReplyPort(__int64 a1)
{
  return LpcpRequestWaitReplyPort(a1);
}
