/*
 * XREFs of RIMRegOpenLocalMachineKey @ 0x1C0188464
 * Callers:
 *     RIMPopulateExtendedPointerDeviceProperties @ 0x1C0174178 (RIMPopulateExtendedPointerDeviceProperties.c)
 * Callees:
 *     RIMRegOpenKey @ 0x1C00218E0 (RIMRegOpenKey.c)
 *     __security_check_cookie @ 0x1C00CC180 (__security_check_cookie.c)
 *     ?RtlUnicodeStringCatString@@YAJPEAU_UNICODE_STRING@@PEBG@Z @ 0x1C0188308 (-RtlUnicodeStringCatString@@YAJPEAU_UNICODE_STRING@@PEBG@Z.c)
 *     RtlUnicodeStringValidateDestWorker @ 0x1C0188380 (RtlUnicodeStringValidateDestWorker.c)
 */

void *RIMRegOpenLocalMachineKey()
{
  __int64 v0; // rbx
  int v1; // r9d
  const unsigned __int16 *v2; // rdx
  const WCHAR *v3; // rcx
  __int64 v4; // r8
  __int16 v5; // ax
  signed __int64 v6; // r11
  size_t v8; // [rsp+20h] [rbp-E0h]
  ULONG v9; // [rsp+28h] [rbp-D8h]
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-D0h] BYREF
  size_t pcchDest; // [rsp+40h] [rbp-C0h] BYREF
  wchar_t *ppszDest; // [rsp+48h] [rbp-B8h] BYREF
  char v13; // [rsp+50h] [rbp-B0h] BYREF

  v0 = 0LL;
  *(_QWORD *)&DestinationString.Length = 45875200LL;
  ppszDest = 0LL;
  DestinationString.Buffer = (PWSTR)&v13;
  pcchDest = 0LL;
  if ( RtlUnicodeStringValidateDestWorker(&DestinationString, &ppszDest, &pcchDest, 0LL, v8, v9) >= 0 )
  {
    v2 = (const unsigned __int16 *)pcchDest;
    v3 = L"\\Registry\\Machine\\";
    v4 = 0x7FFFLL;
    v5 = 0;
    if ( !pcchDest )
      goto LABEL_10;
    v6 = (char *)ppszDest - (char *)L"\\Registry\\Machine\\";
    do
    {
      if ( !v4 )
        break;
      if ( !*v3 )
        break;
      *(const WCHAR *)((char *)v3 + v6) = *v3;
      --v4;
      ++v3;
      ++v5;
      v2 = (const unsigned __int16 *)((char *)v2 - 1);
    }
    while ( v2 );
    if ( !v2 && v4 && *v3 )
LABEL_10:
      v1 = -2147483643;
    DestinationString.Length = 2 * v5;
    if ( v1 >= 0 && RtlUnicodeStringCatString(&DestinationString, v2) >= 0 )
      return RIMRegOpenKey(&DestinationString);
  }
  return (void *)v0;
}
