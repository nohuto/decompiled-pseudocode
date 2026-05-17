/*
 * XREFs of _AVrfpFormatCurrentUserKeyPath@4 @ 0x4B339025
 * Callers:
 *     _AVrfOpenCurrentUserImageFileOptionsKey@12 @ 0x4B3388F7 (_AVrfOpenCurrentUserImageFileOptionsKey@12.c)
 * Callees:
 *     _RtlAppendUnicodeToString@8 @ 0x4B2BFE00 (_RtlAppendUnicodeToString@8.c)
 *     _RtlAppendUnicodeStringToString@8 @ 0x4B2D10A0 (_RtlAppendUnicodeStringToString@8.c)
 *     _AVrfpAppendCurrentUserSid@4 @ 0x4B338986 (_AVrfpAppendCurrentUserSid@4.c)
 */

int __thiscall AVrfpFormatCurrentUserKeyPath(int this)
{
  int result; // eax

  *(_DWORD *)this = 0;
  *(_WORD *)(this + 2) = 1252;
  *(_DWORD *)(this + 4) = &AVrfpCurrentUserKeyPath;
  result = RtlAppendUnicodeToString((unsigned __int16 *)this, L"\\REGISTRY\\USER\\");
  if ( result >= 0 )
  {
    result = AVrfpAppendCurrentUserSid((__int16 *)this);
    if ( result >= 0 )
      return RtlAppendUnicodeStringToString((unsigned __int16 *)this, (const void **)&dword_4B281BA0);
  }
  return result;
}
