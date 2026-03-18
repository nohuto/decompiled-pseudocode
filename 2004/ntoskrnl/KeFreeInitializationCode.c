/*
 * XREFs of KeFreeInitializationCode @ 0x140A18B5C
 * Callers:
 *     KeInitSystem @ 0x140A4495C (KeInitSystem.c)
 * Callees:
 *     KiSwInterruptPresent @ 0x140A441F4 (KiSwInterruptPresent.c)
 *     MmStrongCodeGuaranteesEnforced @ 0x140A70620 (MmStrongCodeGuaranteesEnforced.c)
 *     MmDiscardDriverSection @ 0x140A90300 (MmDiscardDriverSection.c)
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
