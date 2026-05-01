/*
 * XREFs of sub_18006E308 @ 0x18006E308
 * Callers:
 *     sub_18006E5E8 @ 0x18006E5E8 (sub_18006E5E8.c)
 *     sub_18006E7D4 @ 0x18006E7D4 (sub_18006E7D4.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18006E308(unsigned int a1, __int64 a2)
{
  unsigned int v2; // edx

  v2 = *(_DWORD *)(*(_QWORD *)(a2 + 56) + 108LL);
  if ( a1 >= v2 )
    return a1 > v2;
  else
    return 0xFFFFFFFFLL;
}
