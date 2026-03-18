/*
 * XREFs of ExTryConvertSharedToExclusiveLite @ 0x14063D2FC
 * Callers:
 *     CmpReplicateKeyToVirtual @ 0x1409174A4 (CmpReplicateKeyToVirtual.c)
 * Callees:
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     ExpTryConvertSharedToExclusiveLite @ 0x14063D600 (ExpTryConvertSharedToExclusiveLite.c)
 */

__int64 ExTryConvertSharedToExclusiveLite()
{
  if ( (*((_BYTE *)&CmpRegistryLock + 26) & 1) != 0 )
    KeBugCheckEx(0x1C6u, 0xEuLL, (ULONG_PTR)&CmpRegistryLock, 0LL, 0LL);
  return ExpTryConvertSharedToExclusiveLite();
}
