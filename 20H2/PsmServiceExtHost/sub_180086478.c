/*
 * XREFs of sub_180086478 @ 0x180086478
 * Callers:
 *     sub_18003FFFC @ 0x18003FFFC (sub_18003FFFC.c)
 * Callees:
 *     sub_18002C174 @ 0x18002C174 (sub_18002C174.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 *     NtClose @ 0x18004547C (NtClose.c)
 *     sub_1800865F0 @ 0x1800865F0 (sub_1800865F0.c)
 */

__int64 __fastcall sub_180086478(__int64 a1, _DWORD *a2)
{
  NTSTATUS v3; // ebx
  wchar_t *v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  void *FileHandle; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v9; // [rsp+68h] [rbp-98h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+78h] [rbp-88h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+A8h] [rbp-58h] BYREF
  wchar_t Buffer[264]; // [rsp+C0h] [rbp-40h] BYREF

  FileHandle = 0LL;
  if ( BYTE2(qword_1800B4F18) )
  {
    *a2 = BYTE2(qword_1800B4F18);
    return 0;
  }
  else
  {
    sub_18002C174(Buffer, 0x208uLL, L"\\??\\%s", a1);
    v4 = Buffer;
    v9 = 0LL;
    v5 = 0x7FFFLL;
    do
    {
      if ( !*v4 )
        break;
      ++v4;
      --v5;
    }
    while ( v5 );
    v6 = (0x7FFF - v5) & -(__int64)(v5 != 0);
    if ( v5 )
    {
      LOWORD(v9) = 2 * v6;
      WORD1(v9) = 2 * v6 + 2;
      *((_QWORD *)&v9 + 1) = Buffer;
    }
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 64;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)&v9;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v3 = NtCreateFile(&FileHandle, 0x100080u, &ObjectAttributes, &IoStatusBlock, 0LL, 0, 7u, 1u, 0x20u, 0LL, 0);
    if ( v3 >= 0 )
    {
      v3 = sub_1800865F0(FileHandle, a2);
      if ( v3 >= 0 )
        v3 = 0;
    }
    if ( FileHandle )
      NtClose(FileHandle);
  }
  return (unsigned int)v3;
}
