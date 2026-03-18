/*
 * XREFs of ExpTryAcquireResourceExclusive @ 0x140263810
 * Callers:
 *     ExAcquireResourceExclusiveLite @ 0x140261C10 (ExAcquireResourceExclusiveLite.c)
 *     ExAcquireFastResourceExclusive @ 0x14038B730 (ExAcquireFastResourceExclusive.c)
 *     ExpTryToAcquireResourceExclusiveLite @ 0x1405AFC7C (ExpTryToAcquireResourceExclusiveLite.c)
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
