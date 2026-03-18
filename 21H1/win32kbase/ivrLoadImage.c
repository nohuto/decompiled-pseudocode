/*
 * XREFs of ivrLoadImage @ 0x1C01BD1EC
 * Callers:
 *     InputInitialize @ 0x1C001E64C (InputInitialize.c)
 * Callees:
 *     Win32FreePool @ 0x1C008C9A0 (Win32FreePool.c)
 *     Win32AllocPoolZInit @ 0x1C0090430 (Win32AllocPoolZInit.c)
 *     __security_check_cookie @ 0x1C00CC180 (__security_check_cookie.c)
 *     wcsrchr @ 0x1C00CC45C (wcsrchr.c)
 *     _strnicmp @ 0x1C00CC54C (_strnicmp.c)
 *     memset @ 0x1C00D2E00 (memset.c)
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
  __int64 v8; // rdx
  __int64 v9; // r8
  unsigned int v10; // ebx
  __int64 v11; // r14
  char *v12; // rbx
  __int64 AddressOfEntryPoint; // rcx
  ULONG AnsiString; // [rsp+28h] [rbp-E0h] BYREF
  ULONG AnsiString_4; // [rsp+2Ch] [rbp-DCh] BYREF
  struct _STRING AnsiString_8; // [rsp+30h] [rbp-D8h] BYREF
  struct _UNICODE_STRING DestinationString_8; // [rsp+40h] [rbp-C8h] BYREF
  UNICODE_STRING SourceString_8; // [rsp+50h] [rbp-B8h] BYREF
  _BYTE SystemInformation[304]; // [rsp+68h] [rbp-A0h] BYREF

  DestinationString_8 = 0LL;
  qword_1C025A588 = 0LL;
  gwin32knsImageInfo.DriverName = 0LL;
  xmmword_1C025A568 = 0LL;
  xmmword_1C025A578 = 0LL;
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
      v5 = Win32AllocPoolZInit(AnsiString, 0x646C6449u);
      v6 = v5;
      if ( !v5 )
        break;
      v7 = ZwQuerySystemInformation(SystemModuleInformation, v5, AnsiString, &AnsiString);
      if ( v7 != -1073741820 )
      {
        if ( v7 >= 0 )
        {
          v10 = 0;
          if ( *v6 )
          {
            while ( 1 )
            {
              v11 = v10;
              if ( !strnicmp(
                      (const char *)&v6[74 * v10 + 12] + HIWORD(v6[74 * v10 + 11]),
                      AnsiString_8.Buffer,
                      AnsiString_8.Length) )
                break;
              if ( ++v10 >= *v6 )
                goto LABEL_18;
            }
            AnsiString_4 = 0;
            v12 = *(char **)&v6[74 * v10 + 6];
            *((_QWORD *)&xmmword_1C025A578 + 1) = RtlImageDirectoryEntryToData(
                                                    *(PVOID *)&v6[74 * v11 + 6],
                                                    1u,
                                                    0,
                                                    &AnsiString_4);
            AddressOfEntryPoint = RtlImageNtHeader(v12)->OptionalHeader.AddressOfEntryPoint;
            *((_QWORD *)&xmmword_1C025A568 + 1) = 0LL;
            *(_QWORD *)&xmmword_1C025A578 = &v12[AddressOfEntryPoint];
            v1 = 1;
            *(_QWORD *)&xmmword_1C025A568 = v12;
          }
        }
LABEL_18:
        Win32FreePool((__int64)v6, v8, v9);
        break;
      }
      Win32FreePool((__int64)v6, v8, v9);
    }
  }
  RtlFreeAnsiString(&AnsiString_8);
  if ( v1 == 1 )
    return &gwin32knsImageInfo;
  else
    return 0LL;
}
