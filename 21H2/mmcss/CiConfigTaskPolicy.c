/*
 * XREFs of CiConfigTaskPolicy @ 0x1C000DB90
 * Callers:
 *     CiConfigInitializeFromRegistry @ 0x1C000D960 (CiConfigInitializeFromRegistry.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CiConfigTaskPolicy(__int64 a1)
{
  unsigned __int8 v1; // r8
  bool v2; // zf
  __int64 result; // rax
  __int64 v4; // rdx

  v1 = *(_BYTE *)(a1 + 3) & 0xFE;
  v2 = CiSystemResponsiveness == 100;
  *(_BYTE *)(a1 + 3) = v1;
  if ( v2 )
  {
    *(_BYTE *)a1 = *(_BYTE *)(a1 + 1) + CiSchedulingCategoryPriorityMap[((unsigned __int64)v1 >> 4) & 7];
  }
  else if ( (v1 & 0x70) == 0x30 )
  {
    *(_BYTE *)a1 = 24;
    *(_BYTE *)(a1 + 3) = v1 | 1;
  }
  else
  {
    *(_BYTE *)a1 = *(_BYTE *)(a1 + 1) + CiSchedulingCategoryPriorityMap[((unsigned __int64)v1 >> 4) & 7];
    if ( (v1 & 0x70) == 0x20 )
      *(_BYTE *)(a1 + 3) = v1 | 1;
  }
  result = qword_1C0007210;
  v2 = (qword_1C0007210 & *(_QWORD *)(a1 + 32)) == 0;
  *(_QWORD *)(a1 + 32) &= qword_1C0007210;
  v4 = *(_QWORD *)(a1 + 32);
  if ( v2 )
    v4 = qword_1C0007210;
  *(_QWORD *)(a1 + 32) = v4;
  return result;
}
