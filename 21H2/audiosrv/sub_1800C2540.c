/*
 * XREFs of sub_1800C2540 @ 0x1800C2540
 * Callers:
 *     sub_1800BF670 @ 0x1800BF670 (sub_1800BF670.c)
 *     sub_1800C37C0 @ 0x1800C37C0 (sub_1800C37C0.c)
 *     sub_1800C8140 @ 0x1800C8140 (sub_1800C8140.c)
 *     sub_1800C8AF8 @ 0x1800C8AF8 (sub_1800C8AF8.c)
 *     sub_180101A90 @ 0x180101A90 (sub_180101A90.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800C2540(__int64 a1, unsigned __int16 a2, __int64 a3, double a4)
{
  double v5; // [rsp+68h] [rbp+20h] BYREF

  v5 = a4;
  return EtwTraceMessage(a1, 43LL, a3, a2, &v5);
}
