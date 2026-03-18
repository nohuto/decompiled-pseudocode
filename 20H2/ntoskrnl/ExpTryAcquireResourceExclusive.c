/*
 * XREFs of ExpTryAcquireResourceExclusive @ 0x140223870
 * Callers:
 *     ExAcquireResourceExclusiveLite @ 0x140221C70 (ExAcquireResourceExclusiveLite.c)
 *     ExAcquireFastResourceExclusive @ 0x14038E760 (ExAcquireFastResourceExclusive.c)
 *     ExpTryToAcquireResourceExclusiveLite @ 0x1405B3EFC (ExpTryToAcquireResourceExclusiveLite.c)
 * Callees:
 *     <none>
 */

char __fastcall ExpTryAcquireResourceExclusive(__int64 a1)
{
  char result; // al

  if ( *(_DWORD *)(a1 + 64) )
    return 0;
  *(_WORD *)(a1 + 26) |= 0x80u;
  result = 1;
  *(_WORD *)(a1 + 24) = 1;
  *(_DWORD *)(a1 + 64) = 1;
  return result;
}
