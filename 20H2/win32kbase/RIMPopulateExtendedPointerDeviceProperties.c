/*
 * XREFs of RIMPopulateExtendedPointerDeviceProperties @ 0x1C016B91C
 * Callers:
 *     RIMCreatePointerDeviceInfo @ 0x1C015C3E8 (RIMCreatePointerDeviceInfo.c)
 * Callees:
 *     RIMRegOpenKey @ 0x1C00094D0 (RIMRegOpenKey.c)
 *     RIMRegOpenDeviceInstanceKey @ 0x1C0009DCC (RIMRegOpenDeviceInstanceKey.c)
 *     __security_check_cookie @ 0x1C00CBC40 (__security_check_cookie.c)
 *     ?PopulatePTPProperties@@YAXPEAUtagHID_POINTER_DEVICE_INFO@@PEAX1@Z @ 0x1C016B5A0 (-PopulatePTPProperties@@YAXPEAUtagHID_POINTER_DEVICE_INFO@@PEAX1@Z.c)
 *     ?RtlUnicodeStringCatString@@YAJPEAU_UNICODE_STRING@@PEBG@Z @ 0x1C01801D8 (-RtlUnicodeStringCatString@@YAJPEAU_UNICODE_STRING@@PEBG@Z.c)
 *     RtlUnicodeStringValidateDestWorker @ 0x1C0180254 (RtlUnicodeStringValidateDestWorker.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall RIMPopulateExtendedPointerDeviceProperties(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v5; // ebx
  void *v6; // rdi
  void *v7; // rbx
  int v8; // r9d
  size_t v9; // rdx
  const WCHAR *v10; // rax
  __int64 v11; // r8
  __int16 v12; // cx
  signed __int64 v13; // r11
  size_t v14; // [rsp+20h] [rbp-E0h]
  ULONG v15; // [rsp+28h] [rbp-D8h]
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-D0h] BYREF
  size_t pcchDest; // [rsp+40h] [rbp-C0h] BYREF
  wchar_t *ppszDest; // [rsp+48h] [rbp-B8h] BYREF
  char v19; // [rsp+50h] [rbp-B0h] BYREF

  v5 = a1;
  if ( (*(_DWORD *)(a1 + 184) & 0x2000) != 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3, a4);
  if ( *(_DWORD *)(a2 + 24) == 7 )
  {
    *(_QWORD *)&DestinationString.Length = 45875200LL;
    v6 = RIMRegOpenDeviceInstanceKey(v5, a2, a3);
    ppszDest = 0LL;
    pcchDest = 0LL;
    DestinationString.Buffer = (PWSTR)&v19;
    v7 = 0LL;
    if ( RtlUnicodeStringValidateDestWorker(&DestinationString, &ppszDest, &pcchDest, 0LL, v14, v15) >= 0 )
    {
      v9 = pcchDest;
      v10 = L"\\Registry\\Machine\\";
      v11 = 0x7FFFLL;
      v12 = 0;
      if ( !pcchDest )
        goto LABEL_13;
      v13 = (char *)ppszDest - (char *)L"\\Registry\\Machine\\";
      do
      {
        if ( !v11 )
          break;
        if ( !*v10 )
          break;
        *(const WCHAR *)((char *)v10 + v13) = *v10;
        --v11;
        ++v10;
        ++v12;
        --v9;
      }
      while ( v9 );
      if ( !v9 && v11 && *v10 )
LABEL_13:
        v8 = -2147483643;
      DestinationString.Length = 2 * v12;
      if ( v8 >= 0
        && RtlUnicodeStringCatString(
             &DestinationString,
             L"Software\\Microsoft\\Windows\\CurrentVersion\\PrecisionTouchPad") >= 0 )
      {
        v7 = RIMRegOpenKey(&DestinationString);
      }
    }
    PopulatePTPProperties((struct tagHID_POINTER_DEVICE_INFO *)a2, v6, v7);
    if ( v6 )
      ZwClose(v6);
    if ( v7 )
      ZwClose(v7);
  }
}
