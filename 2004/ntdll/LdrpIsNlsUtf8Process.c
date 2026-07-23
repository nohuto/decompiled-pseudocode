/*
 * XREFs of LdrpIsNlsUtf8Process @ 0x1800D4AC0
 * Callers:
 *     LdrpInitializeProcess @ 0x1800D1D20 (LdrpInitializeProcess.c)
 * Callees:
 *     RtlQueryActivationContextApplicationSettings @ 0x180079CD0 (RtlQueryActivationContextApplicationSettings.c)
 *     __security_check_cookie @ 0x18008C240 (__security_check_cookie.c)
 *     wcscmp @ 0x180091D90 (wcscmp.c)
 */

bool LdrpIsNlsUtf8Process()
{
  char v0; // bl
  wchar_t String1[8]; // [rsp+40h] [rbp-28h] BYREF

  v0 = 0;
  if ( RtlQueryActivationContextApplicationSettings(
         0,
         0LL,
         (PWSTR)L"http://schemas.microsoft.com/SMI/2019/WindowsSettings",
         (PWSTR)L"activeCodePage",
         String1,
         8uLL,
         0LL) >= 0 )
    return wcscmp(String1, L"UTF-8") == 0;
  return v0;
}
