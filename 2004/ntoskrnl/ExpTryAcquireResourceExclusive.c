/*
 * XREFs of ExpTryAcquireResourceExclusive @ 0x14020A8F0
 * Callers:
 *     ExAcquireResourceExclusiveLite @ 0x140208CF0 (ExAcquireResourceExclusiveLite.c)
 *     ExAcquireFastResourceExclusive @ 0x14038C2A0 (ExAcquireFastResourceExclusive.c)
 *     ExpTryToAcquireResourceExclusiveLite @ 0x1405B039C (ExpTryToAcquireResourceExclusiveLite.c)
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
