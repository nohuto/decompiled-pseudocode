/*
 * XREFs of ivrLoadImage @ 0x1C01B748C
 * Callers:
 *     InputInitialize @ 0x1C0034604 (InputInitialize.c)
 * Callees:
 *     Win32AllocPoolZInit @ 0x1C000EDD0 (Win32AllocPoolZInit.c)
 *     Win32FreePool @ 0x1C0096F60 (Win32FreePool.c)
 *     __security_check_cookie @ 0x1C00CCA30 (__security_check_cookie.c)
 *     wcsrchr @ 0x1C00CCD0C (wcsrchr.c)
 *     _strnicmp @ 0x1C00CCDFC (_strnicmp.c)
 *     memset @ 0x1C00D3880 (memset.c)
 */

struct _SYSTEM_GDI_DRIVER_INFORMATION *ivrLoadImage()
{
  NTSTATUS v0; // eax
  int v1; // edi
  wchar_t *v2; // rax
  const WCHAR *v3; // rax
  NTSTATUS v4; // eax
  _DWORD *v5; // rax
  _DWORD *v6; // rsi
  NTSTATUS v7; // eax
  unsigned int v8; // ebx
  __int64 v9; // r14
  char *v10; // rbx
  __int64 AddressOfEntryPoint; // rcx
  ULONG AnsiString; // [rsp+28h] [rbp-E0h] BYREF
  ULONG AnsiString_4; // [rsp+2Ch] [rbp-DCh] BYREF
  struct _STRING AnsiString_8; // [rsp+30h] [rbp-D8h] BYREF
  struct _UNICODE_STRING DestinationString_8; // [rsp+40h] [rbp-C8h] BYREF
  UNICODE_STRING SourceString_8; // [rsp+50h] [rbp-B8h] BYREF
  _BYTE SystemInformation[304]; // [rsp+68h] [rbp-A0h] BYREF

  DestinationString_8 = 0LL;
  qword_1C02545C8 = 0LL;
  gwin32knsImageInfo.DriverName = 0LL;
  xmmword_1C02545A8 = 0LL;
  xmmword_1C02545B8 = 0LL;
  RtlInitUnicodeString(&DestinationString_8, L"\\SystemRoot\\System32\\win32kns.sys");
  gwin32knsImageInfo.DriverName = DestinationString_8;
  v0 = ZwSetSystemInformation(SystemLoadGdiDriverInSystemSpaceInformation, &gwin32knsImageInfo, 0x38uLL);
  v1 = 0;
  if ( v0 >= 0 )
    return &gwin32knsImageInfo;
  if ( v0 != -1073741554 )
    return 0LL;
  memset(SystemInformation, 0, sizeof(SystemInformation));
  AnsiString = 0;
  AnsiString_8 = 0LL;
  SourceString_8 = 0LL;
  v2 = wcsrchr(L"\\SystemRoot\\System32\\win32kns.sys", 0x5Cu);
  v3 = v2 ? v2 + 1 : L"\\SystemRoot\\System32\\win32kns.sys";
  RtlInitUnicodeString(&SourceString_8, v3);
  if ( RtlUnicodeStringToAnsiString(&AnsiString_8, &SourceString_8, 1u) < 0 )
    return 0LL;
  v4 = ZwQuerySystemInformation(SystemModuleInformation, SystemInformation, 0x130u, &AnsiString);
  if ( (int)(v4 + 0x80000000) < 0 || v4 == -1073741820 )
  {
    while ( 1 )
    {
      v5 = Win32AllocPoolZInit(AnsiString, 1684825161LL);
      v6 = v5;
      if ( !v5 )
        break;
      v7 = ZwQuerySystemInformation(SystemModuleInformation, v5, AnsiString, &AnsiString);
      if ( v7 != -1073741820 )
      {
        if ( v7 >= 0 )
        {
          v8 = 0;
          if ( *v6 )
          {
            while ( 1 )
            {
              v9 = v8;
              if ( !strnicmp(
                      (const char *)&v6[74 * v8 + 12] + HIWORD(v6[74 * v8 + 11]),
                      AnsiString_8.Buffer,
                      AnsiString_8.Length) )
                break;
              if ( ++v8 >= *v6 )
                goto LABEL_18;
            }
            AnsiString_4 = 0;
            v10 = *(char **)&v6[74 * v8 + 6];
            *((_QWORD *)&xmmword_1C02545B8 + 1) = RtlImageDirectoryEntryToData(
                                                    *(PVOID *)&v6[74 * v9 + 6],
                                                    1u,
                                                    0,
                                                    &AnsiString_4);
            AddressOfEntryPoint = RtlImageNtHeader(v10)->OptionalHeader.AddressOfEntryPoint;
            *((_QWORD *)&xmmword_1C02545A8 + 1) = 0LL;
            *(_QWORD *)&xmmword_1C02545B8 = &v10[AddressOfEntryPoint];
            v1 = 1;
            *(_QWORD *)&xmmword_1C02545A8 = v10;
          }
        }
LABEL_18:
        Win32FreePool((__int64)v6);
        break;
      }
      Win32FreePool((__int64)v6);
    }
  }
  RtlFreeAnsiString(&AnsiString_8);
  if ( v1 == 1 )
    return &gwin32knsImageInfo;
  else
    return 0LL;
}
