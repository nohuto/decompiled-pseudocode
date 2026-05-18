/*
 * XREFs of sub_180018E68 @ 0x180018E68
 * Callers:
 *     sub_180003850 @ 0x180003850 (sub_180003850.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180018E68(__int64 a1)
{
  __int64 result; // rax

  *(_BYTE *)a1 = 0;
  *(_QWORD *)(a1 + 8) = "WilStaging_02";
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_OWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_QWORD *)(a1 + 56) = 0LL;
  *(_WORD *)(a1 + 64) = 0;
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)(a1 + 72), 0, 0);
  *(_QWORD *)(a1 + 112) = 0LL;
  *(_QWORD *)(a1 + 120) = 0LL;
  *(_QWORD *)(a1 + 128) = 0LL;
  *(_QWORD *)(a1 + 136) = 0LL;
  *(_QWORD *)(a1 + 144) = 0LL;
  *(_QWORD *)(a1 + 152) = 0LL;
  *(_QWORD *)(a1 + 160) = 0LL;
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)(a1 + 168), 0, 0);
  *(_QWORD *)(a1 + 208) = 0LL;
  result = a1;
  *(_QWORD *)(a1 + 216) = 0LL;
  *(_QWORD *)(a1 + 224) = 0LL;
  *(_QWORD *)(a1 + 232) = 0LL;
  *(_QWORD *)(a1 + 240) = 0LL;
  *(_QWORD *)(a1 + 248) = 0LL;
  *(_QWORD *)(a1 + 256) = 0LL;
  *(_QWORD *)(a1 + 264) = 0LL;
  *(_QWORD *)(a1 + 272) = 0LL;
  *(_BYTE *)a1 = 1;
  return result;
}
