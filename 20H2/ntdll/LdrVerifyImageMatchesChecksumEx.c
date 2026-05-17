/*
 * XREFs of LdrVerifyImageMatchesChecksumEx @ 0x18008AB90
 * Callers:
 *     LdrVerifyImageMatchesChecksum @ 0x1800CE7D0 (LdrVerifyImageMatchesChecksum.c)
 * Callees:
 *     RtlpImageDirectoryEntryToDataEx @ 0x180032920 (RtlpImageDirectoryEntryToDataEx.c)
 *     RtlImageNtHeaderEx @ 0x180032AD0 (RtlImageNtHeaderEx.c)
 *     RtlImageRvaToVa @ 0x180086970 (RtlImageRvaToVa.c)
 *     __security_check_cookie @ 0x18008C340 (__security_check_cookie.c)
 *     NtClose @ 0x18009D290 (NtClose.c)
 *     NtQueryInformationFile @ 0x18009D2D0 (NtQueryInformationFile.c)
 *     ZwMapViewOfSection @ 0x18009D5B0 (ZwMapViewOfSection.c)
 *     NtUnmapViewOfSection @ 0x18009D5F0 (NtUnmapViewOfSection.c)
 *     NtCreateSection @ 0x18009D9F0 (NtCreateSection.c)
 *     NtMakeTemporaryObject @ 0x18009F280 (NtMakeTemporaryObject.c)
 *     _guard_dispatch_icall_nop @ 0x1800A0B90 (_guard_dispatch_icall_nop.c)
 *     LdrpGenericExceptionFilter @ 0x1800D57DC (LdrpGenericExceptionFilter.c)
 *     LdrVerifyMappedImageMatchesChecksum @ 0x1800F5C7C (LdrVerifyMappedImageMatchesChecksum.c)
 */

__int64 __fastcall LdrVerifyImageMatchesChecksumEx(__int64 a1, __int64 a2)
{
  _DWORD *v4; // rsi
  int v5; // eax
  char v6; // r13
  __int64 result; // rax
  int InformationFile; // edi
  int v9; // r13d
  int v10; // eax
  __int64 v11; // r15
  unsigned int v12; // r8d
  __int64 v13; // rax
  __int64 v14; // rax
  char v15; // [rsp+50h] [rbp-A8h]
  unsigned __int64 v16; // [rsp+58h] [rbp-A0h] BYREF
  HANDLE Handle; // [rsp+60h] [rbp-98h] BYREF
  __int64 v18[2]; // [rsp+68h] [rbp-90h] BYREF
  __int64 v19; // [rsp+78h] [rbp-80h] BYREF
  __int64 v20; // [rsp+80h] [rbp-78h] BYREF
  unsigned __int64 v21; // [rsp+88h] [rbp-70h] BYREF
  __int64 v22; // [rsp+90h] [rbp-68h]
  _BYTE v23[16]; // [rsp+98h] [rbp-60h] BYREF
  _BYTE v24[8]; // [rsp+A8h] [rbp-50h] BYREF
  unsigned int v25; // [rsp+B0h] [rbp-48h]

  v20 = a2;
  if ( *(_DWORD *)a2 != 64 || (*(_DWORD *)(a2 + 4) & 0xFFFFFFF8) != 0 )
    return 3221225712LL;
  v4 = (_DWORD *)(a2 + 24);
  if ( (*(_BYTE *)(a2 + 4) & 2) == 0 )
    v4 = &unk_180123648;
  v18[1] = (__int64)v4;
  v5 = v4[7];
  LODWORD(v18[0]) = v5 & 0x1000000;
  LODWORD(v19) = v5 & 0x1000000;
  v15 = (v5 & 0x1000000) != 0;
  v6 = a1 & 1;
  result = NtCreateSection(&Handle, (unsigned int)v4[2], *((_QWORD *)v4 + 2), 0LL, v4[6], v5, a1);
  if ( (int)result >= 0 )
  {
    v16 = 0LL;
    v21 = 0LL;
    InformationFile = ZwMapViewOfSection(Handle, -1LL, &v16, 0LL, 0LL, 0LL, &v21, 1, 0, 16);
    if ( InformationFile < 0 )
      goto LABEL_30;
    if ( v6 )
    {
      v9 = v18[0];
    }
    else
    {
      InformationFile = NtQueryInformationFile(a1, v23, v24, 24LL, 5);
      if ( InformationFile < 0 )
        goto LABEL_29;
      if ( !(unsigned __int8)LdrVerifyMappedImageMatchesChecksum(v16, v21, v25) )
        InformationFile = -1073741279;
      v9 = v18[0];
      if ( InformationFile < 0 )
        goto LABEL_29;
    }
    if ( (*(_BYTE *)(a2 + 4) & 5) != 0 )
    {
      InformationFile = RtlImageNtHeaderEx(0, v16, v21, &v20);
      if ( InformationFile >= 0 )
      {
        if ( (*(_BYTE *)(a2 + 4) & 4) != 0 )
          *(_WORD *)(a2 + 56) = *(_WORD *)(v20 + 22);
        if ( (*(_BYTE *)(a2 + 4) & 1) != 0 && *(_QWORD *)(a2 + 8) )
        {
          v10 = RtlpImageDirectoryEntryToDataEx(v16, v15, 1u, &v19, v18);
          v11 = v18[0];
          if ( v10 < 0 )
            v11 = 0LL;
          v18[0] = v11;
          v22 = v11;
          if ( v11 )
          {
            v19 = 0LL;
            while ( 1 )
            {
              v12 = *(_DWORD *)(v11 + 12);
              if ( !v12 )
                break;
              if ( v9 )
                v13 = v16 + v12;
              else
                v13 = RtlImageRvaToVa(v20, v16, v12, &v19);
              (*(void (__fastcall **)(_QWORD, __int64))(a2 + 8))(*(_QWORD *)(a2 + 16), v13);
              v11 += 20LL;
              v22 = v11;
            }
          }
        }
      }
    }
LABEL_29:
    NtUnmapViewOfSection(-1LL, v16);
LABEL_30:
    if ( InformationFile < 0 || v4 == (_DWORD *)&unk_180123648 )
    {
      v14 = *((_QWORD *)v4 + 2);
      if ( v14 && (*(_BYTE *)(v14 + 24) & 0x10) != 0 )
        NtMakeTemporaryObject(Handle);
      NtClose(Handle);
    }
    else
    {
      *(_QWORD *)v4 = Handle;
    }
    return (unsigned int)InformationFile;
  }
  return result;
}
