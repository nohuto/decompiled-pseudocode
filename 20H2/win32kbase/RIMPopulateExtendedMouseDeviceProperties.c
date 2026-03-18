/*
 * XREFs of RIMPopulateExtendedMouseDeviceProperties @ 0x1C00D1014
 * Callers:
 *     RIMCreateDev @ 0x1C0027880 (RIMCreateDev.c)
 * Callees:
 *     RIMRegOpenKey @ 0x1C00094D0 (RIMRegOpenKey.c)
 *     RIMRegOpenDeviceInstanceKey @ 0x1C0009DCC (RIMRegOpenDeviceInstanceKey.c)
 *     __security_check_cookie @ 0x1C00CBC40 (__security_check_cookie.c)
 *     ?PopulateMouseProperties@@YAXPEAURIMDEV@@PEAX1@Z @ 0x1C00D0F04 (-PopulateMouseProperties@@YAXPEAURIMDEV@@PEAX1@Z.c)
 *     ?RtlUnicodeStringCatString@@YAJPEAU_UNICODE_STRING@@PEBG@Z @ 0x1C01801D8 (-RtlUnicodeStringCatString@@YAJPEAU_UNICODE_STRING@@PEBG@Z.c)
 *     RtlUnicodeStringValidateDestWorker @ 0x1C0180254 (RtlUnicodeStringValidateDestWorker.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall RIMPopulateExtendedMouseDeviceProperties(struct RIMDEV *a1, __int64 a2, __int64 a3, __int64 a4)
{
  void *v5; // rdi
  void *v6; // rbx
  int v7; // r9d
  size_t v8; // rdx
  const WCHAR *v9; // rcx
  __int64 v10; // r8
  __int16 v11; // ax
  signed __int64 v12; // r11
  size_t v13; // [rsp+20h] [rbp-E0h]
  ULONG v14; // [rsp+28h] [rbp-D8h]
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-D0h] BYREF
  size_t pcchDest; // [rsp+40h] [rbp-C0h] BYREF
  wchar_t *ppszDest; // [rsp+48h] [rbp-B8h] BYREF
  char v18; // [rsp+50h] [rbp-B0h] BYREF

  if ( (*((_DWORD *)a1 + 46) & 0x2000) != 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3, a4);
  *(_QWORD *)&DestinationString.Length = 45875200LL;
  v5 = RIMRegOpenDeviceInstanceKey((int)a1, a2, a3);
  ppszDest = 0LL;
  pcchDest = 0LL;
  DestinationString.Buffer = (PWSTR)&v18;
  v6 = 0LL;
  if ( RtlUnicodeStringValidateDestWorker(&DestinationString, &ppszDest, &pcchDest, 0LL, v13, v14) >= 0 )
  {
    v8 = pcchDest;
    v9 = L"\\Registry\\Machine\\";
    v10 = 0x7FFFLL;
    v11 = 0;
    if ( !pcchDest )
      goto LABEL_12;
    v12 = (char *)ppszDest - (char *)L"\\Registry\\Machine\\";
    do
    {
      if ( !v10 )
        break;
      if ( !*v9 )
        break;
      *(const WCHAR *)((char *)v9 + v12) = *v9;
      --v10;
      ++v9;
      ++v11;
      --v8;
    }
    while ( v8 );
    if ( !v8 && v10 && *v9 )
LABEL_12:
      v7 = -2147483643;
    DestinationString.Length = 2 * v11;
    if ( v7 >= 0
      && RtlUnicodeStringCatString(&DestinationString, L"Software\\Microsoft\\Windows NT\\CurrentVersion\\Windows") >= 0 )
    {
      v6 = RIMRegOpenKey(&DestinationString);
    }
  }
  if ( v5 || v6 )
  {
    PopulateMouseProperties(a1, v5, v6);
    if ( v5 )
      ZwClose(v5);
    if ( v6 )
      ZwClose(v6);
  }
}
