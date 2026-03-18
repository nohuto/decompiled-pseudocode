/*
 * XREFs of SpiMax311InitializePort @ 0x1405C9AF0
 * Callers:
 *     <none>
 * Callees:
 *     SpiMax311SetBaud @ 0x1405C9C20 (SpiMax311SetBaud.c)
 */

char __fastcall SpiMax311InitializePort(__int64 a1, __int64 a2)
{
  *(_WORD *)(a2 + 12) = 0;
  qword_140CF95E0 = 0LL;
  word_140CF95E8 = *(_WORD *)(*(_QWORD *)a2 + 20LL);
  SpiMax311SetBaud(a2, *(unsigned int *)(a2 + 8));
  return 1;
}
