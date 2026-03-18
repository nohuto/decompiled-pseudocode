/*
 * XREFs of HalpTimerNoteHpetMaskingBehavior @ 0x1403A6BFC
 * Callers:
 *     HalpTimerInitialize @ 0x1403A69D4 (HalpTimerInitialize.c)
 * Callees:
 *     HalpFindTimer @ 0x140399F38 (HalpFindTimer.c)
 */

ULONG_PTR *HalpTimerNoteHpetMaskingBehavior()
{
  ULONG_PTR *result; // rax
  ULONG_PTR *Timer; // rax

  result = HalpFindTimer(3, 256, 0, 0, 1);
  if ( result )
  {
    Timer = HalpFindTimer(4, 0, 0, 0, 1);
    if ( Timer )
      *((_DWORD *)Timer + 56) &= 0xFFFFF0FF;
    result = HalpFindTimer(2, 0, 0, 0, 1);
    if ( result )
      *((_DWORD *)result + 56) &= 0xFFFFF0FF;
  }
  return result;
}
