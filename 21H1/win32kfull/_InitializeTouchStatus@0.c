/*
 * XREFs of _InitializeTouchStatus@0 @ 0xD6296
 * Callers:
 *     _xxxUpdatePerUserSystemParameters@8 @ 0xD78DE (_xxxUpdatePerUserSystemParameters@8.c)
 * Callees:
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _memset @ 0xF92A7 (_memset.c)
 */

int __stdcall InitializeTouchStatus()
{
  int result; // eax
  _DWORD v1[14]; // [esp+4h] [ebp-3Ch] BYREF

  memset(v1, 0, sizeof(v1));
  result = ReadPointerDeviceSettings(146, v1);
  if ( result )
  {
    if ( !v1[7] )
      return SetTouchInputStatus(0);
  }
  return result;
}
