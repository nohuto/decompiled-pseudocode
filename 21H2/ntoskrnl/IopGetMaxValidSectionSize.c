/*
 * XREFs of IopGetMaxValidSectionSize @ 0x1405041B8
 * Callers:
 *     KeCapturePersistentThreadState @ 0x140504FC0 (KeCapturePersistentThreadState.c)
 * Callees:
 *     MmIsAddressValidEx @ 0x140317240 (MmIsAddressValidEx.c)
 */

__int64 __fastcall IopGetMaxValidSectionSize(__int64 a1, unsigned int a2)
{
  unsigned int i; // ebx

  for ( i = 0; i < a2; ++i )
  {
    if ( !MmIsAddressValidEx(a1 + i) )
      break;
  }
  return i;
}
