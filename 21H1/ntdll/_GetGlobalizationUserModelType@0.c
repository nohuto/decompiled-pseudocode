/*
 * XREFs of _GetGlobalizationUserModelType@0 @ 0x4B2AD797
 * Callers:
 *     _OpenGlobalizationUserSettingsKey@12 @ 0x4B2AD6F6 (_OpenGlobalizationUserSettingsKey@12.c)
 * Callees:
 *     _RtlIsMultiSessionSku@0 @ 0x4B2AD7C0 (_RtlIsMultiSessionSku@0.c)
 */

unsigned int __stdcall GetGlobalizationUserModelType()
{
  unsigned int result; // eax

  result = dword_4B3A6648;
  if ( !dword_4B3A6648 )
  {
    if ( RtlIsMultiSessionSku() )
      result = 1;
    else
      result = (MEMORY[0x7FFE02F0] & 0x200 | 0x400u) >> 9;
    dword_4B3A6648 = result;
  }
  return result;
}
