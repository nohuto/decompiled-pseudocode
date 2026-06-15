/*
 * XREFs of sub_180139610 @ 0x180139610
 * Callers:
 *     sub_18013A194 @ 0x18013A194 (sub_18013A194.c)
 *     sub_18013A334 @ 0x18013A334 (sub_18013A334.c)
 * Callees:
 *     sub_180006A30 @ 0x180006A30 (sub_180006A30.c)
 *     sub_18005248C @ 0x18005248C (sub_18005248C.c)
 *     sub_1800B8610 @ 0x1800B8610 (sub_1800B8610.c)
 *     sub_1800CF858 @ 0x1800CF858 (sub_1800CF858.c)
 *     sub_180139FC0 @ 0x180139FC0 (sub_180139FC0.c)
 */

__int64 __fastcall sub_180139610(__int64 a1, _QWORD *a2)
{
  unsigned __int64 v4; // rdx
  __int64 result; // rax
  unsigned int v6; // eax

  if ( !a2 )
    sub_1800B8610(-2147467259);
  sub_180006A30((volatile signed __int32 *)(*a2 - 24LL));
  a2[2] = *(_QWORD *)(a1 + 64);
  v4 = *(_QWORD *)(a1 + 8) - 1LL;
  *(_QWORD *)(a1 + 64) = a2;
  result = v4;
  *(_QWORD *)(a1 + 8) = v4;
  if ( v4 < *(_QWORD *)(a1 + 40) && !*(_DWORD *)(a1 + 48) )
  {
    v6 = sub_1800CF858(a1, v4);
    sub_180139FC0(a1, v6);
    result = *(_QWORD *)(a1 + 8);
  }
  if ( !result )
    return sub_18005248C(a1);
  return result;
}
