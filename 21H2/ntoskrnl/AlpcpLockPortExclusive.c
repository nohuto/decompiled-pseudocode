/*
 * XREFs of AlpcpLockPortExclusive @ 0x1408C306C
 * Callers:
 *     AlpcpReceiveMessagePort @ 0x1406D8320 (AlpcpReceiveMessagePort.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 */

void __fastcall AlpcpLockPortExclusive(__int64 a1)
{
  ExAcquirePushLockExclusiveEx(a1 + 352, 0LL);
}
