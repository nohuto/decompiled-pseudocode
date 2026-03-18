/*
 * XREFs of ?ldevLoadImageInternal@@YAPEAU_LDEV@@PEBGHPEAHHH@Z @ 0x1C00BC240
 * Callers:
 *     ldevLoadImage @ 0x1C00BC1C0 (ldevLoadImage.c)
 * Callees:
 *     ?DrvLogDisplayDriverEvent@@YAXW4_DISP_DRIVER_LOG@@@Z @ 0x1C005EB84 (-DrvLogDisplayDriverEvent@@YAXW4_DISP_DRIVER_LOG@@@Z.c)
 *     PALLOCMEM2 @ 0x1C0080D68 (PALLOCMEM2.c)
 *     Win32FreePool @ 0x1C0096F60 (Win32FreePool.c)
 *     MakeSystemRelativePath @ 0x1C00BC4F0 (MakeSystemRelativePath.c)
 *     FreeSystemRelativePath @ 0x1C00BC600 (FreeSystemRelativePath.c)
 *     __security_check_cookie @ 0x1C00CCA30 (__security_check_cookie.c)
 *     wcsrchr @ 0x1C00CCD0C (wcsrchr.c)
 *     _strnicmp @ 0x1C00CCDFC (_strnicmp.c)
 *     memset @ 0x1C00D3880 (memset.c)
 *     MakeSystemDriversRelativePath @ 0x1C0150B94 (MakeSystemDriversRelativePath.c)
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
  __int64 v22; // rsi
  int v23; // ebx
  ULONG v24; // r12d
  SYSTEM_INFORMATION_CLASS v25; // ecx
  NTSTATUS v26; // r14d
  __int64 v27; // rcx
  __int64 v28; // rax
  int v29; // r12d
  wchar_t *v30; // rax
  const WCHAR *v31; // rax
  int v32; // ebx
  _DWORD *v33; // rax
  _DWORD *v34; // r15
  unsigned int v35; // ebx
  __int64 v36; // r12
  _DWORD *j; // rbx
  unsigned int v38; // eax
  char *v39; // rbx
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
    v22 = (__int64)v21;
    v23 = 1;
    if ( v20 )
    {
      if ( v21 )
      {
        v24 = ReturnLength;
        v21[112] = v21 + 8;
        *((_DWORD *)v21 + 15) = 0;
        while ( 1 )
        {
          gulDriverFailureReason = 0;
          v25 = SystemLoadGdiDriverInformation;
          *v20 = String2;
          if ( !v24 )
            v25 = SystemLoadGdiDriverInSystemSpaceInformation;
          v26 = ZwSetSystemInformation(v25, v20, 0x38uLL);
          if ( v26 >= 0 )
            goto LABEL_20;
          if ( v26 != -1073741554 )
            gulDriverFailureReason = 3;
          if ( v24 )
            goto LABEL_59;
          if ( v26 != -1073741772 )
            break;
          if ( v23 )
          {
            v23 = 0;
            FreeSystemRelativePath(&String2);
            if ( (unsigned int)MakeSystemDriversRelativePath(Source, &String2) )
              continue;
          }
          goto LABEL_61;
        }
        if ( v26 == -1073741554 )
        {
          memset(SystemInformation, 0, sizeof(SystemInformation));
          ReturnLength = 0;
          v29 = 0;
          AnsiString = 0LL;
          DestinationString = 0LL;
          v30 = wcsrchr(Source, 0x5Cu);
          v31 = v30 ? v30 + 1 : Source;
          RtlInitUnicodeString(&DestinationString, v31);
          v26 = RtlUnicodeStringToAnsiString(&AnsiString, &DestinationString, 1u);
          if ( v26 >= 0 )
          {
            v26 = ZwQuerySystemInformation(SystemModuleInformation, SystemInformation, 0x130u, &ReturnLength);
            if ( (int)(v26 + 0x80000000) < 0 || v26 == -1073741820 )
            {
              v32 = 296 * SystemInformation[0];
              v33 = PALLOCMEM2((unsigned int)(296 * SystemInformation[0] + 8), 0x706D7447u, 0);
              v34 = v33;
              if ( v33 )
              {
                v26 = ZwQuerySystemInformation(SystemModuleInformation, v33, v32 + 8, &ReturnLength);
                if ( v26 >= 0 )
                {
                  v35 = 0;
                  if ( *v34 )
                  {
                    while ( 1 )
                    {
                      v36 = v35;
                      if ( !strnicmp(
                              (const char *)&v34[74 * v35 + 12] + HIWORD(v34[74 * v35 + 11]),
                              AnsiString.Buffer,
                              AnsiString.Length) )
                        break;
                      if ( ++v35 >= *v34 )
                        goto LABEL_48;
                    }
                    Size = 0;
                    for ( j = RtlImageDirectoryEntryToData(gpvWin32kImageBase, 1u, 1u, &Size); j; j += 5 )
                    {
                      v38 = j[3];
                      if ( !v38 || !*j )
                        break;
                      if ( !strnicmp((const char *)gpvWin32kImageBase + v38, AnsiString.Buffer, AnsiString.Length) )
                      {
                        Size = 0;
                        v39 = *(char **)&v34[74 * v36 + 6];
                        v20[2].Buffer = (PWSTR)RtlImageDirectoryEntryToData(v39, 1u, 0, &Size);
                        v29 = 1;
                        AddressOfEntryPoint = RtlImageNtHeader(v39)->OptionalHeader.AddressOfEntryPoint;
                        *(_QWORD *)&v20[1].Length = v39;
                        *(_QWORD *)&v20[2].Length = &v39[AddressOfEntryPoint];
                        v20[1].Buffer = 0LL;
                        goto LABEL_49;
                      }
                    }
LABEL_48:
                    v29 = 0;
                  }
                }
LABEL_49:
                Win32FreePool((__int64)v34);
              }
            }
            RtlFreeAnsiString(&AnsiString);
            if ( v29 )
            {
              *(_DWORD *)(v22 + 32) |= 2u;
LABEL_20:
              v27 = *(unsigned int *)(v22 + 32);
              *(_DWORD *)(v22 + 56) = -1;
              *(_QWORD *)(v22 + 16) = v20;
              *(_DWORD *)(v22 + 28) = 1;
              *(_DWORD *)(v22 + 24) = 5;
              *(_DWORD *)(v22 + 32) = v27 ^ ((unsigned __int8)v27 ^ (unsigned __int8)(4 * a5)) & 4;
              if ( gpldevDrivers )
                *((_QWORD *)gpldevDrivers + 1) = v22;
              *(_QWORD *)v22 = gpldevDrivers;
              *(_QWORD *)(v22 + 8) = 0LL;
              gpldevDrivers = (struct _LDEV *)v22;
              v28 = WdLogNewEntry5_WdTrace(v27);
              *(_QWORD *)(v28 + 24) = v22;
              WdLogEvent5_WdTrace(v28);
              return (struct _LDEV *)v22;
            }
          }
        }
LABEL_59:
        if ( v26 == -1073741702 )
          DrvLogDisplayDriverEvent(3);
      }
LABEL_61:
      Win32FreePool((__int64)v20);
    }
    if ( v22 )
      Win32FreePool(v22);
LABEL_10:
    FreeSystemRelativePath(&String2);
  }
  v18 = WdLogNewEntry5_WdTrace(v12);
  *(_QWORD *)(v18 + 24) = v6;
  WdLogEvent5_WdTrace(v18);
  return v6;
}
