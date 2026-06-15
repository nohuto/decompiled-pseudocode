/*
 * XREFs of sub_1800050D0 @ 0x1800050D0
 * Callers:
 *     StartAddress @ 0x180005B70 (StartAddress.c)
 *     sub_18000AFC0 @ 0x18000AFC0 (sub_18000AFC0.c)
 *     sub_180010BC0 @ 0x180010BC0 (sub_180010BC0.c)
 *     sub_180012D98 @ 0x180012D98 (sub_180012D98.c)
 *     sub_180012EA0 @ 0x180012EA0 (sub_180012EA0.c)
 *     sub_180014660 @ 0x180014660 (sub_180014660.c)
 *     sub_18001E510 @ 0x18001E510 (sub_18001E510.c)
 *     sub_18001F6D0 @ 0x18001F6D0 (sub_18001F6D0.c)
 *     sub_180027958 @ 0x180027958 (sub_180027958.c)
 *     sub_180029CD0 @ 0x180029CD0 (sub_180029CD0.c)
 *     sub_18002A580 @ 0x18002A580 (sub_18002A580.c)
 *     sub_18002AF48 @ 0x18002AF48 (sub_18002AF48.c)
 *     sub_18002D800 @ 0x18002D800 (sub_18002D800.c)
 * Callees:
 *     <none>
 */

ULONG __fastcall sub_1800050D0(TRACEHANDLE a1, USHORT a2, const GUID *a3)
{
  return TraceMessage(a1, 0x2Bu, a3, a2, 0LL);
}
