/*
 * XREFs of ?ldevLoadImageInternal@@YAPEAU_LDEV@@PEBGHPEAHHH@Z @ 0x1C00AD620
 * Callers:
 *     ldevLoadImage @ 0x1C00AD5A0 (ldevLoadImage.c)
 * Callees:
 *     ?DrvLogDisplayDriverEvent@@YAXW4_DISP_DRIVER_LOG@@@Z @ 0x1C0051124 (-DrvLogDisplayDriverEvent@@YAXW4_DISP_DRIVER_LOG@@@Z.c)
 *     Win32FreePool @ 0x1C008C9A0 (Win32FreePool.c)
 *     PALLOCMEM2 @ 0x1C008D744 (PALLOCMEM2.c)
 *     MakeSystemRelativePath @ 0x1C00AD8D0 (MakeSystemRelativePath.c)
 *     FreeSystemRelativePath @ 0x1C00AD9E0 (FreeSystemRelativePath.c)
 *     __security_check_cookie @ 0x1C00CC180 (__security_check_cookie.c)
 *     wcsrchr @ 0x1C00CC45C (wcsrchr.c)
 *     _strnicmp @ 0x1C00CC54C (_strnicmp.c)
 *     memset @ 0x1C00D2E00 (memset.c)
 *     MakeSystemDriversRelativePath @ 0x1C0156EE4 (MakeSystemDriversRelativePath.c)
 */

struct _LDEV *__fastcall ldevLoadImageInternal(PCWSTR Source, __int64 a2, int *a3, signed int a4, int a5)
{
  __int64 v5; // rbx
  struct _LDEV *v6; // rdi
  int v7; // r14d
  __int64 v8; // r13
  _QWORD *v11; // rax
  __int64 v12; // rcx
  int v13; // esi
  struct _LDEV *i; // rbx
  const UNICODE_STRING *v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rax
  UNICODE_STRING *v20; // r13
  _QWORD *v21; // rax
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // rsi
  int v25; // ebx
  ULONG v26; // r12d
  SYSTEM_INFORMATION_CLASS v27; // ecx
  NTSTATUS v28; // r14d
  __int64 v29; // rcx
  __int64 v30; // rax
  int v31; // r12d
  wchar_t *v32; // rax
  const WCHAR *v33; // rax
  int v34; // ebx
  _DWORD *v35; // rax
  _DWORD *v36; // r15
  __int64 v37; // rdx
  __int64 v38; // r8
  unsigned int v39; // ebx
  __int64 v40; // r12
  _DWORD *j; // rbx
  unsigned int v42; // eax
  char *v43; // rbx
  __int64 AddressOfEntryPoint; // rcx
  ULONG ReturnLength; // [rsp+24h] [rbp-DCh] BYREF
  ULONG Size; // [rsp+28h] [rbp-D8h] BYREF
  UNICODE_STRING String2; // [rsp+30h] [rbp-D0h] BYREF
  struct _STRING AnsiString; // [rsp+40h] [rbp-C0h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-B0h] BYREF
  _DWORD SystemInformation[76]; // [rsp+60h] [rbp-A0h] BYREF

  v5 = a4;
  v6 = 0LL;
  ReturnLength = a4;
  String2 = 0LL;
  v7 = 0;
  v8 = (int)a2;
  v11 = (_QWORD *)WdLogNewEntry5_WdEvent(Source, a2, a3);
  v11[3] = Source;
  v11[4] = v8;
  v11[5] = v5;
  WdLogEvent5_WdEvent(v11);
  *a3 = 0;
  if ( (unsigned int)MakeSystemRelativePath(Source, &String2) )
  {
    v13 = 1;
    while ( 1 )
    {
      for ( i = gpldevDrivers; i; i = *(struct _LDEV **)i )
      {
        v15 = (const UNICODE_STRING *)*((_QWORD *)i + 2);
        if ( v15
          && (*((_DWORD *)i + 6) == 5) == (_DWORD)v8
          && (*((_DWORD *)i + 8) & 4u) >> 2 == a5
          && RtlEqualUnicodeString(v15, &String2, 1u) )
        {
          v17 = WdLogNewEntry5_WdTrace(v16);
          WdLogEvent5_WdTrace(v17);
          ++*((_DWORD *)i + 7);
          v6 = i;
          *a3 = 1;
          goto LABEL_10;
        }
      }
      if ( ReturnLength )
        break;
      if ( !v13 )
      {
        if ( v7 )
        {
          FreeSystemRelativePath(&String2);
          if ( !(unsigned int)MakeSystemRelativePath(Source, &String2) )
            goto LABEL_10;
        }
        break;
      }
      v13 = 0;
      FreeSystemRelativePath(&String2);
      if ( !(unsigned int)MakeSystemDriversRelativePath(Source, &String2) )
        break;
      v7 = 1;
    }
    v20 = (UNICODE_STRING *)PALLOCMEM2(0x38uLL, 0x76646C47u, 0);
    v21 = PALLOCMEM2(0x388uLL, 0x76646C47u, 1);
    v24 = (__int64)v21;
    v25 = 1;
    if ( v20 )
    {
      if ( v21 )
      {
        v26 = ReturnLength;
        v21[112] = v21 + 8;
        *((_DWORD *)v21 + 15) = 0;
        while ( 1 )
        {
          gulDriverFailureReason = 0;
          v27 = SystemLoadGdiDriverInformation;
          *v20 = String2;
          if ( !v26 )
            v27 = SystemLoadGdiDriverInSystemSpaceInformation;
          v28 = ZwSetSystemInformation(v27, v20, 0x38uLL);
          if ( v28 >= 0 )
            goto LABEL_20;
          if ( v28 != -1073741554 )
            gulDriverFailureReason = 3;
          if ( v26 )
            goto LABEL_59;
          if ( v28 != -1073741772 )
            break;
          if ( v25 )
          {
            v25 = 0;
            FreeSystemRelativePath(&String2);
            if ( (unsigned int)MakeSystemDriversRelativePath(Source, &String2) )
              continue;
          }
          goto LABEL_61;
        }
        if ( v28 == -1073741554 )
        {
          memset(SystemInformation, 0, sizeof(SystemInformation));
          ReturnLength = 0;
          v31 = 0;
          AnsiString = 0LL;
          DestinationString = 0LL;
          v32 = wcsrchr(Source, 0x5Cu);
          v33 = v32 ? v32 + 1 : Source;
          RtlInitUnicodeString(&DestinationString, v33);
          v28 = RtlUnicodeStringToAnsiString(&AnsiString, &DestinationString, 1u);
          if ( v28 >= 0 )
          {
            v28 = ZwQuerySystemInformation(SystemModuleInformation, SystemInformation, 0x130u, &ReturnLength);
            if ( (int)(v28 + 0x80000000) < 0 || v28 == -1073741820 )
            {
              v34 = 296 * SystemInformation[0];
              v35 = PALLOCMEM2((unsigned int)(296 * SystemInformation[0] + 8), 0x706D7447u, 0);
              v36 = v35;
              if ( v35 )
              {
                v28 = ZwQuerySystemInformation(SystemModuleInformation, v35, v34 + 8, &ReturnLength);
                if ( v28 >= 0 )
                {
                  v39 = 0;
                  if ( *v36 )
                  {
                    while ( 1 )
                    {
                      v40 = v39;
                      if ( !strnicmp(
                              (const char *)&v36[74 * v39 + 12] + HIWORD(v36[74 * v39 + 11]),
                              AnsiString.Buffer,
                              AnsiString.Length) )
                        break;
                      if ( ++v39 >= *v36 )
                        goto LABEL_48;
                    }
                    Size = 0;
                    for ( j = RtlImageDirectoryEntryToData(gpvWin32kImageBase, 1u, 1u, &Size); j; j += 5 )
                    {
                      v42 = j[3];
                      if ( !v42 || !*j )
                        break;
                      if ( !strnicmp((const char *)gpvWin32kImageBase + v42, AnsiString.Buffer, AnsiString.Length) )
                      {
                        Size = 0;
                        v43 = *(char **)&v36[74 * v40 + 6];
                        v20[2].Buffer = (PWSTR)RtlImageDirectoryEntryToData(v43, 1u, 0, &Size);
                        v31 = 1;
                        AddressOfEntryPoint = RtlImageNtHeader(v43)->OptionalHeader.AddressOfEntryPoint;
                        *(_QWORD *)&v20[1].Length = v43;
                        *(_QWORD *)&v20[2].Length = &v43[AddressOfEntryPoint];
                        v20[1].Buffer = 0LL;
                        goto LABEL_49;
                      }
                    }
LABEL_48:
                    v31 = 0;
                  }
                }
LABEL_49:
                Win32FreePool((__int64)v36, v37, v38);
              }
            }
            RtlFreeAnsiString(&AnsiString);
            if ( v31 )
            {
              *(_DWORD *)(v24 + 32) |= 2u;
LABEL_20:
              v29 = *(unsigned int *)(v24 + 32);
              *(_DWORD *)(v24 + 56) = -1;
              *(_QWORD *)(v24 + 16) = v20;
              *(_DWORD *)(v24 + 28) = 1;
              *(_DWORD *)(v24 + 24) = 5;
              *(_DWORD *)(v24 + 32) = v29 ^ ((unsigned __int8)v29 ^ (unsigned __int8)(4 * a5)) & 4;
              if ( gpldevDrivers )
                *((_QWORD *)gpldevDrivers + 1) = v24;
              *(_QWORD *)v24 = gpldevDrivers;
              *(_QWORD *)(v24 + 8) = 0LL;
              gpldevDrivers = (struct _LDEV *)v24;
              v30 = WdLogNewEntry5_WdTrace(v29);
              *(_QWORD *)(v30 + 24) = v24;
              WdLogEvent5_WdTrace(v30);
              return (struct _LDEV *)v24;
            }
          }
        }
LABEL_59:
        if ( v28 == -1073741702 )
          DrvLogDisplayDriverEvent(3);
      }
LABEL_61:
      Win32FreePool((__int64)v20, v22, v23);
    }
    if ( v24 )
      Win32FreePool(v24, v22, v23);
LABEL_10:
    FreeSystemRelativePath(&String2);
  }
  v18 = WdLogNewEntry5_WdTrace(v12);
  *(_QWORD *)(v18 + 24) = v6;
  WdLogEvent5_WdTrace(v18);
  return v6;
}
