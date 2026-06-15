/*
 * XREFs of sub_1800FA9A0 @ 0x1800FA9A0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800FABF8 @ 0x1800FABF8 (sub_1800FABF8.c)
 */

void __fastcall sub_1800FA9A0(PTP_CALLBACK_INSTANCE Instance, _QWORD *Context, PTP_WORK Work)
{
  sub_1800FABF8(Context[1], *Context, Work);
  sub_1800FA010(Context);
}
