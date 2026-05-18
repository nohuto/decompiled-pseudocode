/*
 * XREFs of sub_180066E3C @ 0x180066E3C
 * Callers:
 *     sub_180016EC0 @ 0x180016EC0 (sub_180016EC0.c)
 *     sub_1800170A4 @ 0x1800170A4 (sub_1800170A4.c)
 *     sub_180028C30 @ 0x180028C30 (sub_180028C30.c)
 *     sub_180066E84 @ 0x180066E84 (sub_180066E84.c)
 *     sub_180071210 @ 0x180071210 (sub_180071210.c)
 *     sub_180078800 @ 0x180078800 (sub_180078800.c)
 *     sub_180078E1C @ 0x180078E1C (sub_180078E1C.c)
 *     sub_1800795CC @ 0x1800795CC (sub_1800795CC.c)
 *     sub_180079884 @ 0x180079884 (sub_180079884.c)
 *     sub_18007A44C @ 0x18007A44C (sub_18007A44C.c)
 *     sub_18007B440 @ 0x18007B440 (sub_18007B440.c)
 *     sub_18007EFE8 @ 0x18007EFE8 (sub_18007EFE8.c)
 *     sub_18008BEE0 @ 0x18008BEE0 (sub_18008BEE0.c)
 *     sub_18008BFC0 @ 0x18008BFC0 (sub_18008BFC0.c)
 *     sub_1800A4C58 @ 0x1800A4C58 (sub_1800A4C58.c)
 *     sub_1800B51BC @ 0x1800B51BC (sub_1800B51BC.c)
 *     sub_1800BF010 @ 0x1800BF010 (sub_1800BF010.c)
 * Callees:
 *     sub_1800668C4 @ 0x1800668C4 (sub_1800668C4.c)
 *     _Thrd_id @ 0x18012532C (_Thrd_id.c)
 */

__int64 __fastcall sub_180066E3C(__int64 a1, __int64 a2)
{
  *(_OWORD *)a2 = 0LL;
  *(_QWORD *)a2 = a1;
  *(_BYTE *)(a2 + 8) = 0;
  sub_1800668C4(a1, 1);
  *(_BYTE *)(a2 + 8) = 1;
  _InterlockedExchange((volatile __int32 *)(a1 + 28), Thrd_id());
  return a2;
}
