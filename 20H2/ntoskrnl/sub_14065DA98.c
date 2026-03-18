/*
 * XREFs of sub_14065DA98 @ 0x14065DA98
 * Callers:
 *     WbAllocateSlots @ 0x14065D8C0 (WbAllocateSlots.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14065DA98(__int64 a1, unsigned int a2, int a3)
{
  unsigned int v3; // r9d
  _BYTE *i; // rcx

  v3 = a2 + a3;
  if ( a2 >= a2 + a3 )
    return 0xFFFFFFFFLL;
  for ( i = (_BYTE *)(a2 + a1 + 44); !*i; ++i )
  {
    if ( ++a2 >= v3 )
      return 0xFFFFFFFFLL;
  }
  return a2;
}
