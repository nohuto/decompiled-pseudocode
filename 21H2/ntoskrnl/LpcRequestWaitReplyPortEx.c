/*
 * XREFs of LpcRequestWaitReplyPortEx @ 0x140965BF0
 * Callers:
 *     <none>
 * Callees:
 *     LpcpRequestWaitReplyPort @ 0x140965F28 (LpcpRequestWaitReplyPort.c)
 */

__int64 __fastcall LpcRequestWaitReplyPortEx(__int64 a1)
{
  return LpcpRequestWaitReplyPort(a1);
}
