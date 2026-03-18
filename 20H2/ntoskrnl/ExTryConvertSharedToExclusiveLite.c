/*
 * XREFs of ExTryConvertSharedToExclusiveLite @ 0x1405B3ADC
 * Callers:
 *     CmpTryConvertRegistryExclusive @ 0x1408712BC (CmpTryConvertRegistryExclusive.c)
 * Callees:
 *     KeBugCheckEx @ 0x1403FBCA0 (KeBugCheckEx.c)
 *     ExpTryConvertSharedToExclusiveLite @ 0x1405B3DD4 (ExpTryConvertSharedToExclusiveLite.c)
 */

__int64 ExTryConvertSharedToExclusiveLite()
{
  if ( (*((_BYTE *)&CmpRegistryLock + 26) & 1) != 0 )
    KeBugCheckEx(0x1C6u, 0xEuLL, (ULONG_PTR)&CmpRegistryLock, 0LL, 0LL);
  return ExpTryConvertSharedToExclusiveLite();
}
