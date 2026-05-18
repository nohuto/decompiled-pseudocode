/*
 * XREFs of sub_1800D31E0 @ 0x1800D31E0
 * Callers:
 *     sub_1800D1EA0 @ 0x1800D1EA0 (sub_1800D1EA0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800D31E0(__int64 a1, __int64 a2, __int64 a3)
{
  _OWORD *v3; // rdx
  __int64 result; // rax

  *(_QWORD *)a2 = *(_QWORD *)a3;
  *(_QWORD *)(a2 + 8) = *(_QWORD *)(a3 + 8);
  *(_QWORD *)(a2 + 32) = 0LL;
  *(_QWORD *)(a2 + 40) = 0LL;
  *(_OWORD *)(a2 + 16) = *(_OWORD *)(a3 + 16);
  *(_OWORD *)(a2 + 32) = *(_OWORD *)(a3 + 32);
  *(_QWORD *)(a3 + 32) = 0LL;
  v3 = (_OWORD *)(a2 + 48);
  *(_QWORD *)(a3 + 40) = 15LL;
  *(_BYTE *)(a3 + 16) = 0;
  *v3 = *(_OWORD *)(a3 + 48);
  v3[1] = *(_OWORD *)(a3 + 64);
  v3[2] = *(_OWORD *)(a3 + 80);
  v3[3] = *(_OWORD *)(a3 + 96);
  v3[4] = *(_OWORD *)(a3 + 112);
  v3[5] = *(_OWORD *)(a3 + 128);
  v3[6] = *(_OWORD *)(a3 + 144);
  v3 += 8;
  *(v3 - 1) = *(_OWORD *)(a3 + 160);
  *v3 = *(_OWORD *)(a3 + 176);
  v3[1] = *(_OWORD *)(a3 + 192);
  result = *(_QWORD *)(a3 + 208);
  *((_QWORD *)v3 + 4) = result;
  return result;
}
