/*
 * XREFs of ExpFindFastOwnerEntryForThread @ 0x14038F810
 * Callers:
 *     ExpFastResourceLegacyConvertExclusiveToShared @ 0x14038E428 (ExpFastResourceLegacyConvertExclusiveToShared.c)
 *     ExpFastResourceLegacyRelease @ 0x14038E60C (ExpFastResourceLegacyRelease.c)
 *     ExAcquireFastResourceExclusive @ 0x14038EE20 (ExAcquireFastResourceExclusive.c)
 *     ExIsFastResourceHeld @ 0x14038F150 (ExIsFastResourceHeld.c)
 *     ExAcquireFastResourceSharedStarveExclusive @ 0x14038F200 (ExAcquireFastResourceSharedStarveExclusive.c)
 *     ExAcquireFastResourceShared @ 0x14038F4D0 (ExAcquireFastResourceShared.c)
 *     ExIsFastResourceHeldExclusive @ 0x140390EE0 (ExIsFastResourceHeldExclusive.c)
 *     ExpFastResourceLegacyIsAcquiredShared @ 0x1405B4BA0 (ExpFastResourceLegacyIsAcquiredShared.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall ExpFindFastOwnerEntryForThread(__int64 a1, __int64 a2, char a3, char a4)
{
  __int64 **v4; // rax
  __int64 *i; // rcx
  __int64 *v7; // rdx
  __int64 *v8; // rcx

  v4 = (__int64 **)(a1 + 1576 + (a3 != 0 ? 0x18 : 0));
  for ( i = *v4; ; i = (__int64 *)*i )
  {
    if ( i == (__int64 *)v4 )
      return 0LL;
    if ( i[3] == a2 )
      break;
  }
  if ( a4 && (*((_BYTE *)i + 17) & 2) == 0 )
  {
    v7 = (__int64 *)i[5];
    v8 = i + 5;
    while ( v7 != v8 )
    {
      if ( (*((_BYTE *)v7 + 17) & 2) != 0 )
        return v7;
      v7 = (__int64 *)*v7;
    }
    return 0LL;
  }
  return i;
}
