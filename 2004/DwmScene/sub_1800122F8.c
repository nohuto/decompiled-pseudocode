/*
 * XREFs of sub_1800122F8 @ 0x1800122F8
 * Callers:
 *     sub_1800BB10C @ 0x1800BB10C (sub_1800BB10C.c)
 * Callees:
 *     sub_180083A6C @ 0x180083A6C (sub_180083A6C.c)
 */

unsigned __int64 __fastcall sub_1800122F8(__int64 a1, _DWORD *a2)
{
  unsigned __int64 v4; // rdx
  unsigned __int64 result; // rax

  sub_180083A6C(a1);
  *(_DWORD *)(a1 + 144) = *a2;
  *(_DWORD *)(a1 + 148) = a2[1];
  *(_DWORD *)(a1 + 152) = a2[2];
  v4 = _InterlockedIncrement64(&qword_180208648);
  *(_QWORD *)(a1 + 208) = v4;
  result = *(_QWORD *)(a1 + 216);
  if ( v4 >= result )
    result = v4;
  *(_QWORD *)(a1 + 216) = result;
  return result;
}
