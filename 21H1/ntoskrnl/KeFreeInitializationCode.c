/*
 * XREFs of KeFreeInitializationCode @ 0x140A18B5C
 * Callers:
 *     KeInitSystem @ 0x140A3F138 (KeInitSystem.c)
 * Callees:
 *     KiSwInterruptPresent @ 0x140A3E990 (KiSwInterruptPresent.c)
 *     MmStrongCodeGuaranteesEnforced @ 0x140A6FA58 (MmStrongCodeGuaranteesEnforced.c)
 *     MmDiscardDriverSection @ 0x140A90D10 (MmDiscardDriverSection.c)
 */

__int64 KeFreeInitializationCode()
{
  __int64 result; // rax

  result = MmStrongCodeGuaranteesEnforced();
  if ( !(_DWORD)result )
  {
    result = KiSwInterruptPresent();
    if ( (int)result < 0 && !__32 )
      return MmDiscardDriverSection(sub_140A0CD10);
  }
  return result;
}
