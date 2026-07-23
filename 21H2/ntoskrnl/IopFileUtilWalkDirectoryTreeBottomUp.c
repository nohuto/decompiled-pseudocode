/*
 * XREFs of IopFileUtilWalkDirectoryTreeBottomUp @ 0x14077C878
 * Callers:
 *     NtEnableLastKnownGood @ 0x14077C5B0 (NtEnableLastKnownGood.c)
 * Callees:
 *     RtlCopyUnicodeString @ 0x14035E210 (RtlCopyUnicodeString.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memset @ 0x140414300 (memset.c)
 *     IopFileUtilWalkDirectoryTreeHelper @ 0x14077CA10 (IopFileUtilWalkDirectoryTreeHelper.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall IopFileUtilWalkDirectoryTreeBottomUp(PCUNICODE_STRING SourceString)
{
  __int64 Length; // r14
  int v3; // edi
  UNICODE_STRING *PoolWithTag; // rax
  UNICODE_STRING *v5; // rbx
  _QWORD *v6; // rax
  __int64 v7; // rax
  PVOID v9; // rbx
  PVOID *v10; // rax
  int v11; // [rsp+30h] [rbp-D8h]
  PVOID P; // [rsp+48h] [rbp-C0h] BYREF
  PVOID p_P; // [rsp+50h] [rbp-B8h]
  __int64 v14[2]; // [rsp+58h] [rbp-B0h] BYREF
  _BYTE FileInformation[1024]; // [rsp+68h] [rbp-A0h] BYREF

  Length = SourceString->Length;
  p_P = &P;
  P = &P;
  v3 = 0;
  v14[1] = (__int64)v14;
  v14[0] = (__int64)v14;
  PoolWithTag = (UNICODE_STRING *)ExAllocatePoolWithTag(PagedPool, Length + 38, 0x75466F49u);
  v5 = PoolWithTag;
  if ( !PoolWithTag )
  {
    v3 = -1073741670;
    goto LABEL_5;
  }
  memset(PoolWithTag, 0, Length + 38);
  v5[1].Length = 0;
  v5[1].MaximumLength = SourceString->Length;
  v5[1].Buffer = &v5[2].Length;
  RtlCopyUnicodeString(v5 + 1, SourceString);
  v6 = P;
  if ( *((PVOID **)P + 1) != &P )
LABEL_11:
    __fastfail(3u);
  *(_QWORD *)&v5->Length = P;
  v5->Buffer = (wchar_t *)&P;
  v6[1] = v5;
  P = v5;
  if ( v5 == (UNICODE_STRING *)&P )
    goto LABEL_15;
  do
  {
    v3 = IopFileUtilWalkDirectoryTreeHelper((int)v5 + 16, 8, 0, 0, FileInformation, v11, (__int64)&P);
    if ( v3 < 0 )
    {
LABEL_5:
      while ( 1 )
      {
        v5 = (UNICODE_STRING *)P;
LABEL_6:
        if ( v5 == (UNICODE_STRING *)&P )
          return (unsigned int)v3;
        if ( (PVOID *)v5->Buffer != &P )
          goto LABEL_11;
        v7 = *(_QWORD *)&v5->Length;
        if ( *(UNICODE_STRING **)(*(_QWORD *)&v5->Length + 8LL) != v5 )
          goto LABEL_11;
        P = *(PVOID *)&v5->Length;
        *(_QWORD *)(v7 + 8) = &P;
        ExFreePoolWithTag(v5, 0x75466F49u);
      }
    }
    v5 = *(UNICODE_STRING **)&v5->Length;
  }
  while ( v5 != (UNICODE_STRING *)&P );
  while ( 1 )
  {
    v5 = (UNICODE_STRING *)P;
LABEL_15:
    if ( v5 == (UNICODE_STRING *)&P )
      break;
    v9 = p_P;
    if ( *(PVOID **)p_P != &P )
      goto LABEL_11;
    v10 = (PVOID *)*((_QWORD *)p_P + 1);
    if ( *v10 != p_P )
      goto LABEL_11;
    p_P = (PVOID)*((_QWORD *)p_P + 1);
    *v10 = &P;
    v3 = IopFileUtilWalkDirectoryTreeHelper(
           (int)v9 + 16,
           7,
           (int)PpLastGoodDeleteFilesCallback,
           0,
           FileInformation,
           v11,
           (__int64)v14);
    ExFreePoolWithTag(v9, 0x75466F49u);
  }
  if ( v3 < 0 )
    goto LABEL_6;
  return (unsigned int)v3;
}
