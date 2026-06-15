/*
 * XREFs of sub_180025690 @ 0x180025690
 * Callers:
 *     sub_18002633C @ 0x18002633C (sub_18002633C.c)
 *     sub_18002AF48 @ 0x18002AF48 (sub_18002AF48.c)
 * Callees:
 *     <none>
 */

ULONG __fastcall sub_180025690(TRACEHANDLE a1, USHORT a2, __int64 a3, int a4)
{
  int v5; // [rsp+68h] [rbp+20h] BYREF

  v5 = a4;
  return TraceMessage(a1, 0x2Bu, &stru_180044DE8, a2, &v5, 4LL, 0LL);
}
