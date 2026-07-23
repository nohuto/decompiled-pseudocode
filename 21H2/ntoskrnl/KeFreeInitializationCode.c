/*
 * XREFs of KeFreeInitializationCode @ 0x140A1CB5C
 * Callers:
 *     KeInitSystem @ 0x140A4D33C (KeInitSystem.c)
 * Callees:
 *     KiSwInterruptPresent @ 0x140A433F0 (KiSwInterruptPresent.c)
 *     MmStrongCodeGuaranteesEnforced @ 0x140A749D8 (MmStrongCodeGuaranteesEnforced.c)
 *     MmDiscardDriverSection @ 0x140A93E70 (MmDiscardDriverSection.c)
 */

__int64 KeFreeInitializationCode()
{
  __int64 result; // rax

  result = MmStrongCodeGuaranteesEnforced();
  if ( !(_DWORD)result )
  {
    result = KiSwInterruptPresent();
    if ( (int)result < 0 && !__32 )
      return MmDiscardDriverSection(sub_140A10D10);
  }
  return result;
}
