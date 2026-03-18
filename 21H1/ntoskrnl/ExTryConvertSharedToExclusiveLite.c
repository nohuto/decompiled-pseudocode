/*
 * XREFs of ExTryConvertSharedToExclusiveLite @ 0x1405AF85C
 * Callers:
 *     CmpReplicateKeyToVirtual @ 0x14086C20C (CmpReplicateKeyToVirtual.c)
 * Callees:
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 *     ExpTryConvertSharedToExclusiveLite @ 0x1405AFB54 (ExpTryConvertSharedToExclusiveLite.c)
 */

__int64 ExTryConvertSharedToExclusiveLite()
{
  if ( (*((_BYTE *)&CmpRegistryLock + 26) & 1) != 0 )
    KeBugCheckEx(0x1C6u, 0xEuLL, (ULONG_PTR)&CmpRegistryLock, 0LL, 0LL);
  return ExpTryConvertSharedToExclusiveLite();
}
