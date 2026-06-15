/*
 * XREFs of sub_180066ED8 @ 0x180066ED8
 * Callers:
 *     sub_180066BC0 @ 0x180066BC0 (sub_180066BC0.c)
 * Callees:
 *     sub_180008EAC @ 0x180008EAC (sub_180008EAC.c)
 */

__int64 __fastcall sub_180066ED8(__int64 a1)
{
  _QWORD *v1; // rbx
  _QWORD *v3; // rax
  __int64 result; // rax

  v1 = (_QWORD *)(a1 + 96);
  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 96) = 0LL;
  *(_QWORD *)(a1 + 104) = 0LL;
  *(_QWORD *)(a1 + 112) = 0LL;
  *(_QWORD *)(a1 + 120) = 0LL;
  *(_QWORD *)(a1 + 128) = 0LL;
  v3 = sub_180008EAC(0x10uLL);
  v3[1] = 0LL;
  *v1 = v3;
  *v3 = v1;
  *(_WORD *)(a1 + 136) = 0;
  Mtx_init_in_situ((_Mtx_t)(a1 + 144), 258);
  result = a1;
  *(_QWORD *)(a1 + 224) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_QWORD *)(a1 + 56) = 0LL;
  *(_QWORD *)(a1 + 64) = 0LL;
  *(_QWORD *)(a1 + 72) = 0LL;
  *(_DWORD *)(a1 + 80) = 0;
  *(_DWORD *)(a1 + 24) = 3;
  *(_DWORD *)(a1 + 84) = 1;
  *(_DWORD *)(a1 + 88) = 72;
  return result;
}
