/*
 * XREFs of InitCreateUserSubsystem @ 0x1C0294B40
 * Callers:
 *     Win32UserInitialize @ 0x1C0293AF8 (Win32UserInitialize.c)
 * Callees:
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C002F194 (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     WPP_RECORDER_SF_ @ 0x1C0072EBC (WPP_RECORDER_SF_.c)
 *     OpenCacheKeyEx @ 0x1C007AF00 (OpenCacheKeyEx.c)
 *     Win32FreePool @ 0x1C0096F60 (Win32FreePool.c)
 *     Win32AllocPoolWithQuota @ 0x1C0098C10 (Win32AllocPoolWithQuota.c)
 *     wcschr @ 0x1C00CCA80 (wcschr.c)
 *     wcsstr @ 0x1C00CCB88 (wcsstr.c)
 */

__int64 InitCreateUserSubsystem()
{
  __int64 result; // rax
  unsigned int v1; // ebx
  unsigned __int16 *v2; // rdi
  void *v3; // r14
  __int64 v4; // rsi
  NTSTATUS v5; // eax
  int v6; // r15d
  __int64 v7; // rax
  wchar_t *v8; // rax
  wchar_t *v9; // rax
  wchar_t *v10; // rsi
  ULONG v11; // eax
  wchar_t *v12; // rax
  UNICODE_STRING String; // [rsp+30h] [rbp-20h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-10h] BYREF
  int v15; // [rsp+80h] [rbp+30h] BYREF
  ULONG Length; // [rsp+88h] [rbp+38h] BYREF

  String = 0LL;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      4,
      14,
      20,
      (__int64)&WPP_343d128d714e312b04193adc3f9faf5c_Traceguids);
  result = Win32AllocPoolWithQuota(1280LL, 0x78747355u);
  v1 = 0;
  v2 = (unsigned __int16 *)result;
  if ( result )
  {
    v15 = gdwPolicyFlags;
    DestinationString = 0LL;
    v3 = OpenCacheKeyEx(0LL, 10LL, 0x20019u, &v15);
    if ( v3 )
    {
      do
      {
        Length = 1226;
        v4 = Win32AllocPoolWithQuota(1226LL, 0x72707355u);
        if ( !v4 )
          break;
        RtlInitUnicodeString(&DestinationString, L"Windows");
        v5 = ZwQueryValueKey(v3, &DestinationString, KeyValuePartialInformation, (PVOID)v4, Length, &Length);
        if ( v5 == -2147483643 )
          v5 = 0;
        if ( v5 >= 0 )
        {
          v6 = 607;
          if ( *(_DWORD *)(v4 + 8) >> 1 < 0x25Fu )
            v6 = *(_DWORD *)(v4 + 8) >> 1;
          if ( *(_DWORD *)(v4 + 8) < 2u )
          {
            *v2 = 0;
          }
          else
          {
            *(_WORD *)(v4 + 2LL * (unsigned int)(v6 - 1) + 12) = 0;
            RtlStringCchCopyW(v2, 0x25FuLL, (size_t *)(v4 + 12));
          }
          Win32FreePool(v4);
          ZwClose(v3);
          goto LABEL_22;
        }
        if ( !v15 )
        {
          Win32FreePool(v4);
          break;
        }
        Win32FreePool(v4);
        ZwClose(v3);
        v3 = OpenCacheKeyEx(0LL, 10LL, 0x20019u, &v15);
      }
      while ( v3 );
      if ( v3 )
        ZwClose(v3);
    }
    if ( (int)RtlStringCchCopyW(v2, 0x25FuLL, (size_t *)L"SharedSection=,3072") >= 0 )
    {
      v7 = -1LL;
      do
        ++v7;
      while ( v2[v7] );
      v6 = v7 + 1;
LABEL_22:
      if ( v6 )
      {
        gdwDesktopSectionSize = 512;
        gdwNOIOSectionSize = 128;
        v8 = wcsstr(v2, L"SharedSection");
        if ( v8 )
        {
          v8[32] = 0;
          v9 = wcschr(v8, 0x2Cu);
          v10 = v9;
          if ( v9 )
          {
            RtlInitUnicodeString(&String, v9 + 1);
            RtlUnicodeStringToInteger(&String, 0, &gdwDesktopSectionSize);
            v11 = gdwDesktopSectionSize;
            if ( gdwDesktopSectionSize < 0x200 )
            {
              v11 = 512;
              gdwDesktopSectionSize = 512;
            }
            gdwNOIOSectionSize = v11;
            v12 = wcschr(v10 + 1, 0x2Cu);
            if ( v12 )
            {
              RtlInitUnicodeString(&String, v12 + 1);
              RtlUnicodeStringToInteger(&String, 0, &gdwNOIOSectionSize);
              if ( gdwNOIOSectionSize < 0x80 )
                gdwNOIOSectionSize = 128;
            }
          }
        }
        v1 = 1;
      }
    }
    Win32FreePool((__int64)v2);
    return v1;
  }
  return result;
}
