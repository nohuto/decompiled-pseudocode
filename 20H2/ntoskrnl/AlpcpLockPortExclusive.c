/*
 * XREFs of AlpcpLockPortExclusive @ 0x1408C574C
 * Callers:
 *     AlpcpReceiveMessagePort @ 0x1405F0200 (AlpcpReceiveMessagePort.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140220A40 (ExAcquirePushLockExclusiveEx.c)
 */

void __fastcall AlpcpLockPortExclusive(__int64 a1)
{
  ExAcquirePushLockExclusiveEx(a1 + 352, 0LL);
}
