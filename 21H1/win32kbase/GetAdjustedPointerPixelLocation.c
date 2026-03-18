/*
 * XREFs of GetAdjustedPointerPixelLocation @ 0x1C01B1490
 * Callers:
 *     ?UpdatePointerInfoTarget@CTouchProcessor@@QEAAH_KUtagINPUTDEST@@HHPEAUtagPOINT@@2@Z @ 0x1C01A3C10 (-UpdatePointerInfoTarget@CTouchProcessor@@QEAAH_KUtagINPUTDEST@@HHPEAUtagPOINT@@2@Z.c)
 *     GetAdjustedPointerLocations @ 0x1C01B13E0 (GetAdjustedPointerLocations.c)
 * Callees:
 *     LongLongToLong @ 0x1C0146FD4 (LongLongToLong.c)
 */

_BOOL8 __fastcall GetAdjustedPointerPixelLocation(__int64 a1, __int64 a2, LONG *a3)
{
  __int64 v3; // rdx
  int v5; // [rsp+34h] [rbp+Ch]
  int v6; // [rsp+3Ch] [rbp+14h]

  v6 = HIDWORD(a2);
  v5 = HIDWORD(a1);
  return LongLongToLong((int)a2 + (__int64)(int)a1, a3) >= 0 && LongLongToLong(v5 + (__int64)v6, (LONG *)(v3 + 4)) >= 0;
}
