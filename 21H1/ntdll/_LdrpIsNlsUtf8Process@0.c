/*
 * XREFs of _LdrpIsNlsUtf8Process@0 @ 0x4B333E8F
 * Callers:
 *     _LdrpInitializeProcess@8 @ 0x4B32A2D0 (_LdrpInitializeProcess@8.c)
 * Callees:
 *     _RtlQueryActivationContextApplicationSettings@28 @ 0x4B2B4270 (_RtlQueryActivationContextApplicationSettings@28.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 */

char __stdcall LdrpIsNlsUtf8Process()
{
  char v0; // bl
  int v1; // eax
  ULONG_PTR *v3; // [esp+0h] [ebp-18h]
  WCHAR Buffer[8]; // [esp+4h] [ebp-14h] BYREF

  v0 = 0;
  if ( RtlQueryActivationContextApplicationSettings(
         0,
         0,
         (PWSTR)L"http://schemas.microsoft.com/SMI/2019/WindowsSettings",
         (PWSTR)L"activeCodePage",
         Buffer,
         8uLL,
         v3) >= 0 )
  {
    v1 = wcscmp((const unsigned __int16 *)Buffer, L"UTF-8");
    if ( v1 )
      v1 = v1 < 0 ? -1 : 1;
    if ( !v1 )
      return 1;
  }
  return v0;
}
