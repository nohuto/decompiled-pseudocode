/*
 * XREFs of sub_180018CB8 @ 0x180018CB8
 * Callers:
 *     sub_18001BDF0 @ 0x18001BDF0 (sub_18001BDF0.c)
 * Callees:
 *     sub_1800191A0 @ 0x1800191A0 (sub_1800191A0.c)
 *     memset @ 0x18012396A (memset.c)
 */

__int64 __fastcall sub_180018CB8(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  __int64 v3; // rbx
  __int64 v5; // rax
  __int64 result; // rax

  *(_DWORD *)a1 = 1;
  v3 = a1 + 32;
  *(_QWORD *)(a1 + 8) = *a2;
  *a2 = 0LL;
  *(_QWORD *)(a1 + 16) = *a3;
  v5 = a3[1];
  *a3 = 0LL;
  *(_QWORD *)(a1 + 24) = v5;
  a3[1] = 0LL;
  memset((void *)(a1 + 32), 0, 0x110uLL);
  *(_QWORD *)v3 = 0LL;
  sub_1800191A0(v3 + 8);
  v3 += 200LL;
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)v3, 0, 0);
  *(_QWORD *)(v3 + 40) = 0LL;
  result = a1;
  *(_QWORD *)(v3 + 48) = 0LL;
  *(_QWORD *)(v3 + 56) = 0LL;
  *(_QWORD *)(v3 + 64) = 0LL;
  return result;
}
