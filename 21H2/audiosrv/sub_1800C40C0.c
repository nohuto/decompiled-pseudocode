/*
 * XREFs of sub_1800C40C0 @ 0x1800C40C0
 * Callers:
 *     sub_18002C970 @ 0x18002C970 (sub_18002C970.c)
 *     sub_1800C37C0 @ 0x1800C37C0 (sub_1800C37C0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800C40C0(__int64 a1, unsigned __int16 a2, __int64 a3, __int64 a4)
{
  return EtwTraceMessage(a1, 43LL, a3, a2, a4);
}
