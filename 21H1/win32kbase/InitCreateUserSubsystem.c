/*
 * XREFs of InitCreateUserSubsystem @ 0x1C029A6C4
 * Callers:
 *     Win32UserInitialize @ 0x1C0299728 (Win32UserInitialize.c)
 * Callees:
 *     OpenCacheKeyEx @ 0x1C0014290 (OpenCacheKeyEx.c)
 *     WPP_RECORDER_SF_ @ 0x1C00678DC (WPP_RECORDER_SF_.c)
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C0069980 (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     Win32FreePool @ 0x1C008C9A0 (Win32FreePool.c)
 *     Win32AllocPoolWithQuota @ 0x1C008F360 (Win32AllocPoolWithQuota.c)
 *     wcschr @ 0x1C00CC1D0 (wcschr.c)
 *     wcsstr @ 0x1C00CC2D8 (wcsstr.c)
 */

__int64 InitCreateUserSubsystem()
{
  __int64 result; // rax
  unsigned int v1; // ebx
  unsigned __int16 *v2; // rdi
  void *v3; // r14
  __int64 v4; // rsi
  NTSTATUS v5; // eax
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // rdx
  int v9; // r15d
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // rax
  wchar_t *v13; // rax
  wchar_t *v14; // rax
  wchar_t *v15; // rsi
  ULONG v16; // eax
  wchar_t *v17; // rax
  UNICODE_STRING String; // [rsp+30h] [rbp-20h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-10h] BYREF
  int v20; // [rsp+80h] [rbp+30h] BYREF
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
    v20 = gdwPolicyFlags;
    DestinationString = 0LL;
    v3 = OpenCacheKeyEx(0LL, 10LL, 0x20019u, &v20);
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
          v8 = 607LL;
          v9 = 607;
          if ( *(_DWORD *)(v4 + 8) >> 1 < 0x25Fu )
            v9 = *(_DWORD *)(v4 + 8) >> 1;
          if ( *(_DWORD *)(v4 + 8) < 2u )
          {
            *v2 = 0;
          }
          else
          {
            *(_WORD *)(v4 + 2LL * (unsigned int)(v9 - 1) + 12) = 0;
            RtlStringCchCopyW(v2, 0x25FuLL, (size_t *)(v4 + 12));
          }
          Win32FreePool(v4, v8, v7);
          ZwClose(v3);
          goto LABEL_22;
        }
        if ( !v20 )
        {
          Win32FreePool(v4, v6, v7);
          break;
        }
        Win32FreePool(v4, v6, v7);
        ZwClose(v3);
        v3 = OpenCacheKeyEx(0LL, 10LL, 0x20019u, &v20);
      }
      while ( v3 );
      if ( v3 )
        ZwClose(v3);
    }
    if ( (int)RtlStringCchCopyW(v2, 0x25FuLL, (size_t *)L"SharedSection=,3072") >= 0 )
    {
      v12 = -1LL;
      do
        ++v12;
      while ( v2[v12] );
      v9 = v12 + 1;
LABEL_22:
      if ( v9 )
      {
        gdwDesktopSectionSize = 512;
        gdwNOIOSectionSize = 128;
        v13 = wcsstr(v2, L"SharedSection");
        if ( v13 )
        {
          v13[32] = 0;
          v14 = wcschr(v13, 0x2Cu);
          v15 = v14;
          if ( v14 )
          {
            RtlInitUnicodeString(&String, v14 + 1);
            RtlUnicodeStringToInteger(&String, 0, &gdwDesktopSectionSize);
            v16 = gdwDesktopSectionSize;
            if ( gdwDesktopSectionSize < 0x200 )
            {
              v16 = 512;
              gdwDesktopSectionSize = 512;
            }
            gdwNOIOSectionSize = v16;
            v17 = wcschr(v15 + 1, 0x2Cu);
            if ( v17 )
            {
              RtlInitUnicodeString(&String, v17 + 1);
              RtlUnicodeStringToInteger(&String, 0, &gdwNOIOSectionSize);
              if ( gdwNOIOSectionSize < 0x80 )
                gdwNOIOSectionSize = 128;
            }
          }
        }
        v1 = 1;
      }
    }
    Win32FreePool((__int64)v2, v10, v11);
    return v1;
  }
  return result;
}
