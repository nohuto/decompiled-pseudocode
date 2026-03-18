/*
 * XREFs of AlpcpLockPortExclusive @ 0x140966DA0
 * Callers:
 *     AlpcpReceiveMessagePort @ 0x1407A8B00 (AlpcpReceiveMessagePort.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 */

void __fastcall AlpcpLockPortExclusive(__int64 a1)
{
  ExAcquirePushLockExclusiveEx(a1 + 352, 0LL);
}
