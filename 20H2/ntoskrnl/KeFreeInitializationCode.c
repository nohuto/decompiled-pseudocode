/*
 * XREFs of KeFreeInitializationCode @ 0x140A1EB5C
 * Callers:
 *     KeInitSystem @ 0x140A4ABFC (KeInitSystem.c)
 * Callees:
 *     KiSwInterruptPresent @ 0x140A4A494 (KiSwInterruptPresent.c)
 *     MmStrongCodeGuaranteesEnforced @ 0x140A76A58 (MmStrongCodeGuaranteesEnforced.c)
 *     MmDiscardDriverSection @ 0x140A96000 (MmDiscardDriverSection.c)
 */

__int64 KeFreeInitializationCode()
{
  __int64 result; // rax

  result = MmStrongCodeGuaranteesEnforced();
  if ( !(_DWORD)result )
  {
    result = KiSwInterruptPresent();
    if ( (int)result < 0 && !__32 )
      return MmDiscardDriverSection(sub_140A12D10);
  }
  return result;
}
