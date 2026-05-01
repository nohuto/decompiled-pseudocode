/*
 * XREFs of sub_18006E328 @ 0x18006E328
 * Callers:
 *     sub_18006E7D4 @ 0x18006E7D4 (sub_18006E7D4.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18006E328(unsigned int a1, __int64 a2)
{
  unsigned int v2; // edx

  v2 = *(_DWORD *)(*(_QWORD *)(a2 + 24) + 108LL);
  if ( a1 >= v2 )
    return a1 > v2;
  else
    return 0xFFFFFFFFLL;
}
