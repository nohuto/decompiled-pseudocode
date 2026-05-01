/*
 * XREFs of sub_180002774 @ 0x180002774
 * Callers:
 *     sub_18000506C @ 0x18000506C (sub_18000506C.c)
 * Callees:
 *     sub_1800027E8 @ 0x1800027E8 (sub_1800027E8.c)
 */

__int64 __fastcall sub_180002774(__int64 a1, int a2, int a3, __int64 a4)
{
  __int64 result; // rax
  int v5; // edx

  if ( a2 == 1 )
  {
    v5 = ((*(_QWORD *)(*(_QWORD *)(a1 + 80) + 648LL) & 0x100000000000LL) != 0) + 1;
  }
  else
  {
    result = (unsigned int)(a2 - 2);
    if ( (unsigned int)result > 1 )
      return result;
    v5 = 3;
  }
  return sub_1800027E8(a1, v5, 5, 0, a3, (*(_DWORD *)(a1 + 112) >> 7) & 0x400, a4);
}
