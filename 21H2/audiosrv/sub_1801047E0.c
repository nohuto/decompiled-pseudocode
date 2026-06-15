/*
 * XREFs of sub_1801047E0 @ 0x1801047E0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180104404 @ 0x180104404 (sub_180104404.c)
 */

void __fastcall sub_1801047E0(PTP_CALLBACK_INSTANCE Instance, __int64 Context, PTP_WORK Work)
{
  sub_180104404(Context, 0, Instance);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)Context + 16LL))(Context);
}
