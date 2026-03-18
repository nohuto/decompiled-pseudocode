/*
 * XREFs of KeFreeInitializationCode @ 0x140AD6B50
 * Callers:
 *     KeInitSystem @ 0x140B03800 (KeInitSystem.c)
 * Callees:
 *     KiSwInterruptPresent @ 0x140B1D468 (KiSwInterruptPresent.c)
 *     MmDiscardDriverSection @ 0x140B2FE74 (MmDiscardDriverSection.c)
 *     MmStrongCodeGuaranteesEnforced @ 0x140B31590 (MmStrongCodeGuaranteesEnforced.c)
 */

__int64 KeFreeInitializationCode()
{
  __int64 result; // rax

  result = MmStrongCodeGuaranteesEnforced();
  if ( !(_DWORD)result )
  {
    result = KiSwInterruptPresent();
    if ( (int)result < 0 && !__31 )
      return MmDiscardDriverSection(sub_140AD0DA0);
  }
  return result;
}
