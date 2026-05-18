/*
 * XREFs of sub_1800882A0 @ 0x1800882A0
 * Callers:
 *     sub_180088310 @ 0x180088310 (sub_180088310.c)
 *     ?_Init@?$numpunct@_W@std@@IEAAXAEBV_Locinfo@2@_N@Z @ 0x180088790 (-_Init@-$numpunct@_W@std@@IEAAXAEBV_Locinfo@2@_N@Z.c)
 *     sub_1800C4F74 @ 0x1800C4F74 (sub_1800C4F74.c)
 *     sub_1800C857C @ 0x1800C857C (sub_1800C857C.c)
 * Callees:
 *     sub_18008933C @ 0x18008933C (sub_18008933C.c)
 */

unsigned __int64 __fastcall sub_1800882A0(__int64 a1, _DWORD *a2)
{
  unsigned __int64 v4; // rcx
  unsigned __int64 result; // rax

  sub_18008933C(a1);
  *(_DWORD *)(a1 + 156) = *a2;
  *(_DWORD *)(a1 + 160) = a2[1];
  *(_DWORD *)(a1 + 164) = a2[2];
  *(_DWORD *)(a1 + 168) = a2[3];
  v4 = _InterlockedIncrement64(&qword_18020F6C0);
  *(_QWORD *)(a1 + 208) = v4;
  result = *(_QWORD *)(a1 + 216);
  if ( v4 >= result )
    result = v4;
  *(_QWORD *)(a1 + 216) = result;
  return result;
}
