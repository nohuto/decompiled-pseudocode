/*
 * XREFs of sub_1800FABB0 @ 0x1800FABB0
 * Callers:
 *     sub_180062644 @ 0x180062644 (sub_180062644.c)
 *     sub_1800FA18C @ 0x1800FA18C (sub_1800FA18C.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_1800FABB0(PTP_WAIT pwa)
{
  SetThreadpoolWait(pwa, 0LL, 0LL);
  WaitForThreadpoolWaitCallbacks(pwa, 1);
  CloseThreadpoolWait(pwa);
}
