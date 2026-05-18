/*
 * XREFs of sub_1800123D8 @ 0x1800123D8
 * Callers:
 *     sub_1800C09DC @ 0x1800C09DC (sub_1800C09DC.c)
 * Callees:
 *     sub_18008933C @ 0x18008933C (sub_18008933C.c)
 */

unsigned __int64 __fastcall sub_1800123D8(__int64 a1, _DWORD *a2)
{
  unsigned __int64 v4; // rdx
  unsigned __int64 result; // rax

  sub_18008933C(a1);
  *(_DWORD *)(a1 + 144) = *a2;
  *(_DWORD *)(a1 + 148) = a2[1];
  *(_DWORD *)(a1 + 152) = a2[2];
  v4 = _InterlockedIncrement64(&qword_18020F6C0);
  *(_QWORD *)(a1 + 208) = v4;
  result = *(_QWORD *)(a1 + 216);
  if ( v4 >= result )
    result = v4;
  *(_QWORD *)(a1 + 216) = result;
  return result;
}
