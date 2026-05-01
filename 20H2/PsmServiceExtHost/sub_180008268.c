/*
 * XREFs of sub_180008268 @ 0x180008268
 * Callers:
 *     sub_18000DA20 @ 0x18000DA20 (sub_18000DA20.c)
 * Callees:
 *     sub_180008230 @ 0x180008230 (sub_180008230.c)
 *     sub_180009854 @ 0x180009854 (sub_180009854.c)
 */

__int64 __fastcall sub_180008268(__int64 a1)
{
  __int64 v1; // rbx

  v1 = (*(_QWORD *)(*(_QWORD *)((*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 776) + 88LL) + 32LL) & 0xFFFFFFFFFFFFFFFCuLL)
                              + 120)
                  + 32LL) & 0xFFFFFFFFFFFFFFFCuLL)
     - 168;
  sub_180009854(v1);
  --*(_DWORD *)(v1 + 720);
  sub_180008230(v1, 0);
  return sub_1800097FC(v1);
}
