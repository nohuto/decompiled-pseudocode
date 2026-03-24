/*
 * XREFs of KeFreeInitializationCode @ 0x140A1BB5C
 * Callers:
 *     KeInitSystem @ 0x140A4C33C (KeInitSystem.c)
 * Callees:
 *     KiSwInterruptPresent @ 0x140A423F0 (KiSwInterruptPresent.c)
 *     MmStrongCodeGuaranteesEnforced @ 0x140A739D8 (MmStrongCodeGuaranteesEnforced.c)
 *     MmDiscardDriverSection @ 0x140A92E70 (MmDiscardDriverSection.c)
 */

__int64 KeFreeInitializationCode()
{
  __int64 result; // rax

  result = MmStrongCodeGuaranteesEnforced();
  if ( !(_DWORD)result )
  {
    result = KiSwInterruptPresent();
    if ( (int)result < 0 && !__32 )
      return MmDiscardDriverSection(sub_140A0FD10);
  }
  return result;
}
