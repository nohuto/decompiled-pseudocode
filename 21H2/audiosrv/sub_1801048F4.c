/*
 * XREFs of sub_1801048F4 @ 0x1801048F4
 * Callers:
 *     sub_180101A90 @ 0x180101A90 (sub_180101A90.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1801048F4(__int64 a1, __int64 a2, __int64 a3, double a4)
{
  double v5; // [rsp+78h] [rbp+20h] BYREF

  v5 = a4;
  return EtwTraceMessage(a1, 43LL, &unk_1801726D0, 54LL, &v5);
}
