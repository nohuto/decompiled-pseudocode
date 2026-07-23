/*
 * XREFs of RtlpOpenAndMapCustomCultureFile @ 0x1800FD2E0
 * Callers:
 *     RtlpGetCustomCultureData @ 0x1800FCE10 (RtlpGetCustomCultureData.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x18003BA40 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x18008C240 (__security_check_cookie.c)
 *     NtClose @ 0x18009CFF0 (NtClose.c)
 *     ZwMapViewOfSection @ 0x18009D310 (ZwMapViewOfSection.c)
 *     NtOpenFile @ 0x18009D470 (NtOpenFile.c)
 *     NtCreateSection @ 0x18009D750 (NtCreateSection.c)
 *     RtlStringCchCatW @ 0x1800EF2A0 (RtlStringCchCatW.c)
 *     RtlpGetFileSize @ 0x1800FCFA4 (RtlpGetFileSize.c)
 */

__int64 __fastcall RtlpOpenAndMapCustomCultureFile(__int64 a1, PVOID *a2, _QWORD *a3)
{
  WCHAR *v5; // rdx
  __int64 v6; // r8
  WCHAR v7; // ax
  WCHAR *v8; // rax
  __int64 v9; // rcx
  WCHAR *v10; // rax
  __int64 v11; // rax
  WCHAR *v12; // rcx
  __int64 v13; // rbx
  __int64 v14; // rdx
  char *v15; // rax
  WCHAR v16; // r8
  WCHAR *v17; // rax
  NTSTATUS v18; // ebx
  HANDLE v19; // rcx
  HANDLE FileHandle; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v22; // [rsp+58h] [rbp-A8h] BYREF
  HANDLE SectionHandle; // [rsp+60h] [rbp-A0h] BYREF
  ULONG_PTR ViewSize; // [rsp+68h] [rbp-98h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+70h] [rbp-90h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+80h] [rbp-80h] BYREF
  _IO_STATUS_BLOCK IoStatusBlock; // [rsp+B0h] [rbp-50h] BYREF
  WCHAR SourceString[264]; // [rsp+C0h] [rbp-40h] BYREF

  v5 = SourceString;
  v6 = 256LL;
  do
  {
    if ( v6 == -2147483390 )
      break;
    v7 = *(WCHAR *)((char *)v5 + (char *)L"\\SystemRoot\\Globalization\\" - (char *)SourceString);
    if ( !v7 )
      break;
    *v5++ = v7;
    --v6;
  }
  while ( v6 );
  v8 = v5 - 1;
  if ( v6 )
    v8 = v5;
  *v8 = 0;
  if ( !v6 || (int)RtlStringCchCatW(SourceString, 256LL, a1) < 0 )
    return 3221225473LL;
  v9 = 256LL;
  v10 = SourceString;
  do
  {
    if ( !*v10 )
      break;
    ++v10;
    --v9;
  }
  while ( v9 );
  v11 = v9 ? 256 - v9 : 0LL;
  if ( !v9 )
    return 3221225473LL;
  v12 = &SourceString[v11];
  v13 = 256 - v11;
  if ( 256 != v11 )
  {
    v14 = 2147483646LL;
    v15 = (char *)((char *)L".nlp" - (char *)v12);
    do
    {
      if ( !v14 )
        break;
      v16 = *(WCHAR *)((char *)v12 + (_QWORD)v15);
      if ( !v16 )
        break;
      *v12 = v16;
      --v14;
      ++v12;
      --v13;
    }
    while ( v13 );
  }
  v17 = v12 - 1;
  if ( v13 )
    v17 = v12;
  *v17 = 0;
  if ( !v13 )
    return 3221225473LL;
  RtlInitUnicodeString(&DestinationString, SourceString);
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 64;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v18 = NtOpenFile(&FileHandle, 0x80100000, &ObjectAttributes, &IoStatusBlock, 1u, 0);
  if ( v18 >= 0 )
  {
    if ( RtlpGetFileSize(FileHandle, &v22) < 0 || HIDWORD(v22) )
    {
      v18 = -1073741823;
    }
    else
    {
      *a3 = (unsigned int)v22;
      v18 = NtCreateSection(&SectionHandle, 0xF0005u, 0LL, 0LL, 2u, 0x8000000u, FileHandle);
      if ( v18 >= 0 )
      {
        v19 = SectionHandle;
        *a2 = 0LL;
        ViewSize = 0LL;
        v18 = ZwMapViewOfSection(v19, (HANDLE)0xFFFFFFFFFFFFFFFFLL, a2, 0LL, 0LL, 0LL, &ViewSize, ViewShare, 0, 2u);
        NtClose(SectionHandle);
      }
    }
    NtClose(FileHandle);
  }
  return (unsigned int)v18;
}
