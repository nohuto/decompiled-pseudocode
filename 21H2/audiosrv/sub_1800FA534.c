/*
 * XREFs of sub_1800FA534 @ 0x1800FA534
 * Callers:
 *     sub_1800FC8A0 @ 0x1800FC8A0 (sub_1800FC8A0.c)
 *     sub_180100ADC @ 0x180100ADC (sub_180100ADC.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall sub_1800FA534(_QWORD *a1)
{
  HANDLE EventW; // rax

  EventW = CreateEventW(0LL, 0, 0, 0LL);
  *a1 = EventW;
  return EventW != 0LL;
}
