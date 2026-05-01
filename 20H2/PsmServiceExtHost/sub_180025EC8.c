/*
 * XREFs of sub_180025EC8 @ 0x180025EC8
 * Callers:
 *     sub_180003960 @ 0x180003960 (sub_180003960.c)
 *     sub_180025DF0 @ 0x180025DF0 (sub_180025DF0.c)
 *     sub_180027BF0 @ 0x180027BF0 (sub_180027BF0.c)
 *     sub_180081D04 @ 0x180081D04 (sub_180081D04.c)
 *     sub_180081D54 @ 0x180081D54 (sub_180081D54.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180025EC8(__int64 a1)
{
  __int64 result; // rax

  if ( (*(_BYTE *)(a1 + 184) & 3) == 0 )
  {
    if ( _InterlockedIncrement64((volatile signed __int64 *)(a1 + 24)) <= 1 )
      __fastfail(0xEu);
    result = TpPostWork(*(_QWORD *)(a1 + 96));
    *(_BYTE *)(a1 + 184) |= 1u;
  }
  return result;
}
