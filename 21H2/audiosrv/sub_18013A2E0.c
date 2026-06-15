/*
 * XREFs of sub_18013A2E0 @ 0x18013A2E0
 * Callers:
 *     sub_18013A238 @ 0x18013A238 (sub_18013A238.c)
 * Callees:
 *     sub_1800B8610 @ 0x1800B8610 (sub_1800B8610.c)
 */

__int64 __fastcall sub_18013A2E0(__int64 a1, __int64 a2, __int64 a3)
{
  if ( !a2 )
    sub_1800B8610(-2147467259);
  if ( a3 )
    *(_QWORD *)(a3 + 16) = *(_QWORD *)(a2 + 16);
  else
    *(_QWORD *)(*(_QWORD *)a1 + 8LL * (unsigned int)(*(_DWORD *)(a2 + 24) % *(_DWORD *)(a1 + 16))) = *(_QWORD *)(a2 + 16);
  return sub_1801395A4(a1, a2);
}
