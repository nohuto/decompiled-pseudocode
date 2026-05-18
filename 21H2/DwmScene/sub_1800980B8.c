/*
 * XREFs of sub_1800980B8 @ 0x1800980B8
 * Callers:
 *     sub_180098014 @ 0x180098014 (sub_180098014.c)
 * Callees:
 *     sub_18009874C @ 0x18009874C (sub_18009874C.c)
 *     sub_180098888 @ 0x180098888 (sub_180098888.c)
 *     sub_180098950 @ 0x180098950 (sub_180098950.c)
 *     sub_180098C30 @ 0x180098C30 (sub_180098C30.c)
 *     sub_180098DA0 @ 0x180098DA0 (sub_180098DA0.c)
 *     sub_180098EDC @ 0x180098EDC (sub_180098EDC.c)
 *     sub_180099004 @ 0x180099004 (sub_180099004.c)
 *     sub_18009924C @ 0x18009924C (sub_18009924C.c)
 *     sub_180099378 @ 0x180099378 (sub_180099378.c)
 */

__int64 __fastcall sub_1800980B8(__int64 a1, __int64 a2)
{
  int v2; // ebx
  __int64 result; // rax

  v2 = *(_DWORD *)(a2 + 28);
  *(_DWORD *)(a1 + 292) = v2;
  *(_DWORD *)(a1 + 296) = v2;
  if ( (v2 & 0x100) != 0 )
    result = sub_180098EDC(a1);
  if ( (v2 & 0x80u) != 0 )
    result = sub_18009874C(a1);
  if ( (v2 & 1) != 0 )
    result = sub_18009924C(a1);
  if ( (v2 & 2) != 0 )
    result = sub_180099378(a1);
  if ( (v2 & 0x10000000) != 0 )
  {
    result = sub_180098950(a1);
  }
  else if ( (v2 & 0x40) != 0 )
  {
    result = sub_180098888(a1);
  }
  if ( (v2 & 0x10) != 0 )
    result = sub_180098DA0(a1, *(_QWORD *)(a2 + 64), 0LL);
  if ( (v2 & 0x20) != 0 )
    result = sub_180099004(a1, *(_QWORD *)(a2 + 80), 0LL);
  if ( (v2 & 0x400) != 0 )
    return sub_180098C30(a1, *(_QWORD *)(a2 + 104), *(_QWORD *)(a2 + 96));
  return result;
}
