/*
 * XREFs of AdtpObjsInitialize @ 0x1407AAC70
 * Callers:
 *     AdtpInitializeAuditingCommon @ 0x1407AAC30 (AdtpInitializeAuditingCommon.c)
 * Callees:
 *     ExInitializeResourceLite @ 0x140213470 (ExInitializeResourceLite.c)
 *     RtlCopyUnicodeString @ 0x1402909B0 (RtlCopyUnicodeString.c)
 *     RtlInitUnicodeString @ 0x140298F60 (RtlInitUnicodeString.c)
 *     NtEnumerateValueKey @ 0x1405E8E00 (NtEnumerateValueKey.c)
 *     NtClose @ 0x1405F78C0 (NtClose.c)
 *     NtEnumerateKey @ 0x140672B00 (NtEnumerateKey.c)
 *     CmOpenKey @ 0x140693E90 (CmOpenKey.c)
 *     RtlIntegerToUnicodeString @ 0x1406FF600 (RtlIntegerToUnicodeString.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1160 (ExAllocatePoolWithTag.c)
 */

int AdtpObjsInitialize()
{
  int v0; // ebx
  HANDLE v1; // r14
  bool v2; // r12
  __int64 v3; // rdi
  unsigned int v4; // esi
  char *v5; // r15
  int result; // eax
  unsigned int v7; // esi
  char *v8; // r15
  int v9; // eax
  int v10; // esi
  ULONG v11; // r15d
  bool i; // sf
  bool v13; // zf
  HANDLE v14; // r13
  unsigned __int16 *PoolWithTag; // rax
  unsigned __int16 *v16; // rdi
  char *v17; // rax
  char *v18; // rsi
  UNICODE_STRING *v19; // r14
  unsigned __int16 v20; // cx
  SIZE_T v21; // rdx
  PVOID v22; // rax
  HANDLE v23; // rdi
  unsigned int v24; // r13d
  int v25; // r15d
  char *v26; // rdi
  char *v27; // rsi
  char *v28; // rax
  __int16 v29; // cx
  SIZE_T v30; // rdx
  PVOID v31; // rax
  size_t Size; // [rsp+20h] [rbp-59h]
  HANDLE Handle; // [rsp+30h] [rbp-49h] BYREF
  char *v34; // [rsp+38h] [rbp-41h]
  UNICODE_STRING SourceString; // [rsp+40h] [rbp-39h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-29h] BYREF
  __int128 v37; // [rsp+60h] [rbp-19h] BYREF
  __int128 v38; // [rsp+70h] [rbp-9h]
  __int128 v39; // [rsp+80h] [rbp+7h]
  SIZE_T NumberOfBytes; // [rsp+E0h] [rbp+67h] BYREF
  ULONG v41; // [rsp+E8h] [rbp+6Fh]
  HANDLE v42; // [rsp+F0h] [rbp+77h] BYREF
  HANDLE v43; // [rsp+F8h] [rbp+7Fh] BYREF

  v0 = 0;
  v43 = 0LL;
  Handle = 0LL;
  v37 = 0LL;
  v1 = 0LL;
  v42 = 0LL;
  v38 = 0LL;
  LODWORD(NumberOfBytes) = 0;
  v2 = 1;
  v39 = 0LL;
  v34 = 0LL;
  DestinationString = 0LL;
  AdtpSourceModules = 0LL;
  SourceString = 0LL;
  ExInitializeResourceLite(&AdtpSourceModuleLock);
  LODWORD(v3) = 0;
  v4 = 0;
  v5 = (char *)&unk_140C13642;
  while ( 1 )
  {
    *(_DWORD *)(v5 - 2) = 1572864;
    *(_QWORD *)(v5 + 6) = (char *)&AdtpAccessIdsStringBuffer + 2 * (unsigned int)v3;
    result = RtlIntegerToUnicodeString(v4 + 1537, 0xAu, (PUNICODE_STRING)&AdtpEventIdStringStandard + v4);
    if ( result < 0 )
      break;
    v3 = (unsigned int)(v3 + 12);
    ++v4;
    v5 += 16;
    if ( v4 > 6 )
    {
      v7 = 0;
      v8 = (char *)&unk_140C13542;
      while ( 1 )
      {
        *(_QWORD *)(v8 + 6) = (char *)&AdtpAccessIdsStringBuffer + 2 * v3;
        *(_DWORD *)(v8 - 2) = 1572864;
        result = RtlIntegerToUnicodeString(v7 + 1552, 0xAu, (PUNICODE_STRING)&AdtpEventIdStringSpecific + v7);
        if ( result < 0 )
          break;
        v3 = (unsigned int)(v3 + 12);
        ++v7;
        v8 += 16;
        if ( v7 > 0xF )
        {
          RtlInitUnicodeString(
            &DestinationString,
            L"\\Registry\\Machine\\System\\CurrentControlSet\\Services\\EventLog\\Security");
          LODWORD(v37) = 48;
          *(_QWORD *)&v38 = &DestinationString;
          *((_QWORD *)&v37 + 1) = 0LL;
          DWORD2(v38) = 576;
          v39 = 0LL;
          v9 = CmOpenKey(&v43, 131097, (__int64)&v37, 0, 0LL);
          v10 = v9;
          if ( v9 == -1073741772 )
            return 0;
          v11 = 0;
          for ( i = v9 < 0; ; i = v10 < 0 )
          {
            v41 = v11;
            if ( i )
              break;
            v14 = v43;
            LODWORD(Size) = 0;
            v10 = NtEnumerateKey(v43, v11, 0, 0LL, Size, &NumberOfBytes);
            if ( v10 == -1073741789 )
            {
              PoolWithTag = (unsigned __int16 *)ExAllocatePoolWithTag(
                                                  PagedPool,
                                                  (unsigned int)NumberOfBytes,
                                                  0x6B416553u);
              v16 = PoolWithTag;
              if ( !PoolWithTag )
                return -1073741801;
              LODWORD(Size) = NumberOfBytes;
              v10 = NtEnumerateKey(v14, v11, 0, PoolWithTag, Size, &NumberOfBytes);
              if ( v10 >= 0 )
              {
                v2 = 1;
                v17 = (char *)ExAllocatePoolWithTag(PagedPool, 0x20uLL, 0x6B416553u);
                v34 = v17;
                v18 = v17;
                if ( !v17 )
                  return -1073741801;
                v19 = (UNICODE_STRING *)(v17 + 8);
                *(_QWORD *)v17 = AdtpSourceModules;
                AdtpSourceModules = (__int64)v17;
                *((_QWORD *)v17 + 3) = 0LL;
                v20 = v16[6];
                *((_WORD *)v17 + 4) = v20;
                v21 = (unsigned __int16)(v20 + 2);
                *((_WORD *)v17 + 5) = v21;
                v22 = ExAllocatePoolWithTag(PagedPool, v21, 0x6B416553u);
                *((_QWORD *)v18 + 2) = v22;
                if ( !v22 )
                  return -1073741801;
                SourceString.Length = v16[6];
                SourceString.MaximumLength = SourceString.Length;
                SourceString.Buffer = v16 + 8;
                RtlCopyUnicodeString(v19, &SourceString);
                ExFreePoolWithTag(v16, 0);
                *(_QWORD *)&v38 = v19;
                LODWORD(v37) = 48;
                *((_QWORD *)&v37 + 1) = v14;
                DWORD2(v38) = 576;
                v39 = 0LL;
                result = CmOpenKey(&Handle, 131097, (__int64)&v37, 0, 0LL);
                if ( result < 0 )
                  return result;
                RtlInitUnicodeString(&SourceString, L"ObjectNames");
                LODWORD(v37) = 48;
                v23 = Handle;
                *((_QWORD *)&v37 + 1) = Handle;
                *(_QWORD *)&v38 = &SourceString;
                DWORD2(v38) = 576;
                v39 = 0LL;
                v10 = CmOpenKey(&v42, 131097, (__int64)&v37, 0, 0LL);
                NtClose(v23);
                v1 = v42;
                if ( v10 == -1073741772 )
                {
                  v2 = 0;
                  v10 = 0;
                }
              }
            }
            v24 = 0;
            v13 = v10 == 0;
            if ( v10 >= 0 )
            {
              do
              {
                if ( !v2 )
                  break;
                LODWORD(Size) = 0;
                v25 = NtEnumerateValueKey(v1, v24, 1u, 0LL, Size, &NumberOfBytes);
                if ( v25 == -1073741789 )
                {
                  v26 = (char *)ExAllocatePoolWithTag(PagedPool, (unsigned int)NumberOfBytes, 0x6B416553u);
                  if ( !v26 )
                    return -1073741801;
                  LODWORD(Size) = NumberOfBytes;
                  v25 = NtEnumerateValueKey(v1, v24, 1u, v26, Size, &NumberOfBytes);
                  if ( v25 >= 0 )
                  {
                    v27 = (char *)ExAllocatePoolWithTag(PagedPool, 0x20uLL, 0x6B416553u);
                    if ( !v27 )
                      return -1073741801;
                    v28 = v34;
                    *(_QWORD *)v27 = *((_QWORD *)v34 + 3);
                    *((_QWORD *)v28 + 3) = v27;
                    v29 = *((_WORD *)v26 + 8);
                    *((_WORD *)v27 + 4) = v29;
                    v30 = (unsigned __int16)(v29 + 2);
                    *((_WORD *)v27 + 5) = v30;
                    v31 = ExAllocatePoolWithTag(PagedPool, v30, 0x6B416553u);
                    *((_QWORD *)v27 + 2) = v31;
                    if ( !v31 )
                      return -1073741801;
                    SourceString.Length = *((_WORD *)v26 + 8);
                    SourceString.MaximumLength = SourceString.Length;
                    SourceString.Buffer = (wchar_t *)(v26 + 20);
                    RtlCopyUnicodeString((PUNICODE_STRING)(v27 + 8), &SourceString);
                    if ( *((_DWORD *)v26 + 3) < 4u )
                      *((_DWORD *)v27 + 6) = 1552;
                    else
                      *((_DWORD *)v27 + 6) = *(_DWORD *)&v26[*((unsigned int *)v26 + 2)];
                  }
                  ExFreePoolWithTag(v26, 0);
                }
                v10 = 0;
                if ( v25 != -2147483622 )
                  v10 = v25;
                ++v24;
                v2 = v25 != -2147483622;
              }
              while ( v10 >= 0 );
              v11 = v41;
              v13 = v10 == 0;
            }
            if ( v13 && !v2 )
            {
              if ( v1 )
              {
                NtClose(v1);
                v1 = 0LL;
                v42 = 0LL;
              }
            }
            ++v11;
          }
          NtClose(v43);
          if ( v10 != -2147483622 )
            return v10;
          return v0;
        }
      }
      return result;
    }
  }
  return result;
}
