/*
 * XREFs of sub_18001F750 @ 0x18001F750
 * Callers:
 *     <none>
 * Callees:
 *     sub_18001D640 @ 0x18001D640 (sub_18001D640.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18001F750(__int64 a1, int a2, int a3, __int64 a4)
{
  if ( a3 >= 0 )
    a3 = *(_DWORD *)(a1 + 24);
  if ( a2 == 1 && a3 >= 0 )
    return (unsigned int)sub_18001D640((__int64 *)(a1 + 8), a4);
  return (unsigned int)a3;
}
