/*
 * XREFs of sub_18001F790 @ 0x18001F790
 * Callers:
 *     <none>
 * Callees:
 *     sub_18001CC34 @ 0x18001CC34 (sub_18001CC34.c)
 */

__int64 __fastcall sub_18001F790(__int64 a1, int a2, int a3, __int64 a4)
{
  if ( a3 >= 0 )
    a3 = *(_DWORD *)(a1 + 32);
  if ( a2 == 1 && a3 >= 0 )
    return (unsigned int)sub_18001CC34((_QWORD *)(a1 + 8), a4);
  return (unsigned int)a3;
}
