/*
 * XREFs of sub_180100800 @ 0x180100800
 * Callers:
 *     <none>
 * Callees:
 *     sub_180100A10 @ 0x180100A10 (sub_180100A10.c)
 */

void __fastcall sub_180100800(PTP_CALLBACK_INSTANCE Instance, _QWORD *Context, PTP_WORK Work)
{
  sub_180100A10(Context[3], Context, *((unsigned int *)Context + 1));
  sub_1801004A8(Context);
}
