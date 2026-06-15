/*
 * XREFs of sub_180060A28 @ 0x180060A28
 * Callers:
 *     sub_18006034C @ 0x18006034C (sub_18006034C.c)
 * Callees:
 *     sub_180060AE0 @ 0x180060AE0 (sub_180060AE0.c)
 */

__int64 __fastcall sub_180060A28(__int64 a1)
{
  sub_180060AE0();
  *(_QWORD *)a1 = &off_180148988;
  *(_QWORD *)(a1 + 248) = 0LL;
  *(_QWORD *)(a1 + 256) = 0LL;
  *(_QWORD *)(a1 + 280) = 0LL;
  *(_OWORD *)(a1 + 264) = xmmword_18015B730;
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)(a1 + 288), 0, 0);
  *(_QWORD *)(a1 + 328) = 0LL;
  *(_QWORD *)(a1 + 336) = 0LL;
  *(_BYTE *)(a1 + 344) = 0;
  *(_QWORD *)(a1 + 352) = 0LL;
  *(_QWORD *)(a1 + 360) = 0LL;
  *(_QWORD *)(a1 + 368) = 0LL;
  *(_QWORD *)(a1 + 376) = 0LL;
  *(_QWORD *)(a1 + 384) = 0LL;
  *(_QWORD *)(a1 + 392) = 0LL;
  *(_QWORD *)(a1 + 400) = 0LL;
  *(_QWORD *)(a1 + 408) = 0LL;
  *(_QWORD *)(a1 + 416) = 0LL;
  *(_QWORD *)(a1 + 424) = 0LL;
  return a1;
}
