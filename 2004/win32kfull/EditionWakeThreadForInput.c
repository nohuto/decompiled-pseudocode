/*
 * XREFs of EditionWakeThreadForInput @ 0x1C010B290
 * Callers:
 *     <none>
 * Callees:
 *     ?WakeSomeone@@YAXPEAUtagQ@@PEAUtagTHREADINFO@@IPEAUtagQMSG@@@Z @ 0x1C008FE54 (-WakeSomeone@@YAXPEAUtagQ@@PEAUtagTHREADINFO@@IPEAUtagQMSG@@@Z.c)
 */

void __fastcall EditionWakeThreadForInput(__int64 a1, unsigned int a2)
{
  WakeSomeone(*(struct tagQ **)(*(_QWORD *)(*(_QWORD *)(a1 + 80) + 16LL) + 424LL), 0LL, a2, 0LL);
}
