/*
 * XREFs of sub_18006AEB0 @ 0x18006AEB0
 * Callers:
 *     sub_180024840 @ 0x180024840 (sub_180024840.c)
 * Callees:
 *     sub_1800CBB3C @ 0x1800CBB3C (sub_1800CBB3C.c)
 *     sub_1800CBBF8 @ 0x1800CBBF8 (sub_1800CBBF8.c)
 */

__int64 __fastcall sub_18006AEB0(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 result; // rax

  *(_DWORD *)a2 = *(_DWORD *)(a1 + 3888);
  *(_DWORD *)(a2 + 4) = *(_DWORD *)(a1 + 3892);
  *(_DWORD *)(a2 + 12) = *(_DWORD *)(a1 + 3896);
  *(_DWORD *)(a2 + 8) = *(_DWORD *)(a1 + 3900);
  *(_DWORD *)(a2 + 16) = *(_DWORD *)(a1 + 3904);
  *(_QWORD *)(a2 + 32) = *(_QWORD *)(a1 + 3936);
  *(_QWORD *)(a2 + 40) = *(_QWORD *)(a1 + 3952);
  *(_QWORD *)(a2 + 48) = *(_QWORD *)(a1 + 3944);
  *(_QWORD *)(a2 + 56) = *(_QWORD *)(a1 + 3928);
  *(_QWORD *)(a2 + 64) = *(_QWORD *)(a1 + 3960);
  *(_QWORD *)(a2 + 72) = *(_QWORD *)(a1 + 3968);
  v3 = sub_1800CBBF8(a1);
  *(_DWORD *)(a2 + 20) = sub_1800CBB3C(v3, 0LL, 1LL, 1LL);
  *(_DWORD *)(a2 + 24) = sub_1800CBB3C(v3, 1LL, 1LL, 1LL);
  result = sub_1800CBB3C(v3, 11LL, 1LL, 1LL);
  *(_DWORD *)(a2 + 28) = result;
  return result;
}
