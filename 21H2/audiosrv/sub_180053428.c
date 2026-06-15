/*
 * XREFs of sub_180053428 @ 0x180053428
 * Callers:
 *     sub_1800533B8 @ 0x1800533B8 (sub_1800533B8.c)
 *     sub_180062110 @ 0x180062110 (sub_180062110.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180053428(__int64 a1)
{
  __int64 result; // rax

  *(_QWORD *)a1 = 0LL;
  *(_BYTE *)(a1 + 80) = 0;
  Mtx_init_in_situ((_Mtx_t)(a1 + 88), 2);
  *(_QWORD *)(a1 + 16) = 0LL;
  result = a1;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_QWORD *)(a1 + 56) = 0LL;
  *(_DWORD *)(a1 + 64) = 0;
  *(_DWORD *)(a1 + 8) = 3;
  *(_DWORD *)(a1 + 68) = 1;
  *(_DWORD *)(a1 + 72) = 72;
  return result;
}
