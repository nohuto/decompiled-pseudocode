/*
 * XREFs of sub_180070C60 @ 0x180070C60
 * Callers:
 *     sub_18002B4C0 @ 0x18002B4C0 (sub_18002B4C0.c)
 * Callees:
 *     sub_18011BCAC @ 0x18011BCAC (sub_18011BCAC.c)
 *     _Query_perf_counter @ 0x180125252 (_Query_perf_counter.c)
 *     _Query_perf_frequency @ 0x180125258 (_Query_perf_frequency.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180070C60(__int64 a1)
{
  __int64 perf_frequency; // rbx
  __int64 perf_counter; // rax
  __int64 result; // rax
  bool v5; // zf
  __int64 v6; // rax

  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 272) + 48LL))(*(_QWORD *)(a1 + 272));
  perf_frequency = Query_perf_frequency();
  perf_counter = Query_perf_counter();
  result = 1000000000 * (perf_counter / perf_frequency) + 1000000000 * (perf_counter % perf_frequency) / perf_frequency;
  v5 = *(_DWORD *)(a1 + 3884) == 1;
  *(_QWORD *)(a1 + 488) = result - *(_QWORD *)(a1 + 464);
  *(_QWORD *)(a1 + 464) = result;
  if ( v5 )
  {
    *(_QWORD *)(a1 + 456) = result;
    v6 = result - *(_QWORD *)(a1 + 424);
    *(_QWORD *)(a1 + 472) = v6;
    return sub_18011BCAC(
             &unk_18020F620,
             3LL,
             "RenderDevice startup duration until first frame presented: %8.3fms",
             (float)((float)(int)v6 / 1000000.0));
  }
  return result;
}
