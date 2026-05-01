/*
 * XREFs of sub_18002F588 @ 0x18002F588
 * Callers:
 *     sub_18002E33C @ 0x18002E33C (sub_18002E33C.c)
 *     sub_18002EE08 @ 0x18002EE08 (sub_18002EE08.c)
 *     sub_18002F3C8 @ 0x18002F3C8 (sub_18002F3C8.c)
 *     sub_18002FCA8 @ 0x18002FCA8 (sub_18002FCA8.c)
 *     sub_18003B448 @ 0x18003B448 (sub_18003B448.c)
 *     sub_18003D3EC @ 0x18003D3EC (sub_18003D3EC.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall sub_18002F588(__int64 a1, __int64 a2)
{
  __int64 *v2; // r8
  __int64 **v3; // rcx
  __int64 *i; // rax

  v2 = 0LL;
  v3 = (__int64 **)(a1 + 56);
  for ( i = *v3; i != (__int64 *)v3; i = (__int64 *)*i )
  {
    if ( i[6] == a2 )
    {
      v2 = i;
      if ( _InterlockedIncrement64(i + 2) <= 1 )
        __fastfail(0xEu);
      return v2;
    }
  }
  return v2;
}
