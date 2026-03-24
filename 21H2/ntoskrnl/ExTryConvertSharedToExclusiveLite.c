/*
 * XREFs of ExTryConvertSharedToExclusiveLite @ 0x1405B54DC
 * Callers:
 *     CmpTryConvertRegistryExclusive @ 0x14086EAC4 (CmpTryConvertRegistryExclusive.c)
 * Callees:
 *     KeBugCheckEx @ 0x1403FDEF0 (KeBugCheckEx.c)
 *     ExpTryConvertSharedToExclusiveLite @ 0x1405B57D4 (ExpTryConvertSharedToExclusiveLite.c)
 */

__int64 ExTryConvertSharedToExclusiveLite()
{
  if ( (*((_BYTE *)&CmpRegistryLock + 26) & 1) != 0 )
    KeBugCheckEx(0x1C6u, 0xEuLL, (ULONG_PTR)&CmpRegistryLock, 0LL, 0LL);
  return ExpTryConvertSharedToExclusiveLite();
}
