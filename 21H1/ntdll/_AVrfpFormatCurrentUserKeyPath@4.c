/*
 * XREFs of _AVrfpFormatCurrentUserKeyPath@4 @ 0x4B339025
 * Callers:
 *     _AVrfOpenCurrentUserImageFileOptionsKey@12 @ 0x4B3388F7 (_AVrfOpenCurrentUserImageFileOptionsKey@12.c)
 * Callees:
 *     _RtlAppendUnicodeToString@8 @ 0x4B2BFE00 (_RtlAppendUnicodeToString@8.c)
 *     _RtlAppendUnicodeStringToString@8 @ 0x4B2D10A0 (_RtlAppendUnicodeStringToString@8.c)
 *     _AVrfpAppendCurrentUserSid@4 @ 0x4B338986 (_AVrfpAppendCurrentUserSid@4.c)
 */

int __thiscall AVrfpFormatCurrentUserKeyPath(PUNICODE_STRING Destination)
{
  int result; // eax

  *(_DWORD *)&Destination->Length = 0;
  Destination->MaximumLength = 1252;
  Destination->Buffer = (wchar_t *)&AVrfpCurrentUserKeyPath;
  result = RtlAppendUnicodeToString(Destination, L"\\REGISTRY\\USER\\");
  if ( result >= 0 )
  {
    result = AVrfpAppendCurrentUserSid((__int16 *)Destination);
    if ( result >= 0 )
      return RtlAppendUnicodeStringToString(Destination, &stru_4B281BA0);
  }
  return result;
}
