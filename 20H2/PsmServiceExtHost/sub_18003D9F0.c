/*
 * XREFs of sub_18003D9F0 @ 0x18003D9F0
 * Callers:
 *     sub_180046D10 @ 0x180046D10 (sub_180046D10.c)
 *     sub_180046D20 @ 0x180046D20 (sub_180046D20.c)
 * Callees:
 *     sub_1800779E0 @ 0x1800779E0 (sub_1800779E0.c)
 */

__int64 __fastcall sub_18003D9F0(__int64 a1)
{
  signed __int64 v1; // rax
  unsigned int v3; // ecx
  signed __int64 v4; // rtt

  v1 = *(_QWORD *)(a1 + 32);
  while ( v1 >= 0 )
  {
    if ( (_DWORD)v1 == 0x7FFFFFFF )
      return 0x7FFFFFFF;
    v3 = v1 + 1;
    v4 = v1;
    v1 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 32), v1 + 1, v1);
    if ( v4 == v1 )
      return v3;
  }
  return (unsigned int)sub_1800779E0(2 * v1 + 16, (unsigned __int64)v1 >> 63, a1, 0x7FFFFFFFLL);
}
