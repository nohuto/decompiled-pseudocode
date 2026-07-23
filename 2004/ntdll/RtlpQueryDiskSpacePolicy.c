/*
 * XREFs of RtlpQueryDiskSpacePolicy @ 0x180117E38
 * Callers:
 *     RtlQueryResourcePolicy @ 0x1800446F0 (RtlQueryResourcePolicy.c)
 * Callees:
 *     StringCbPrintfW @ 0x180058248 (StringCbPrintfW.c)
 *     RtlStringLengthWorkerW @ 0x18007BAEC (RtlStringLengthWorkerW.c)
 *     __security_check_cookie @ 0x18008C240 (__security_check_cookie.c)
 *     NtClose @ 0x18009CFF0 (NtClose.c)
 *     ZwCreateFile @ 0x18009D8B0 (ZwCreateFile.c)
 *     RtlpQueryDiskSpacePolicyByHandle @ 0x180117F8C (RtlpQueryDiskSpacePolicyByHandle.c)
 */

__int64 __fastcall RtlpQueryDiskSpacePolicy(__int64 a1, _DWORD *a2)
{
  NTSTATUS DiskSpacePolicyByHandle; // ebx
  HANDLE FileHandle; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v6; // [rsp+68h] [rbp-98h] BYREF
  __int64 v7; // [rsp+78h] [rbp-88h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+80h] [rbp-80h] BYREF
  _IO_STATUS_BLOCK IoStatusBlock; // [rsp+B0h] [rbp-50h] BYREF
  wchar_t pszDest[264]; // [rsp+C0h] [rbp-40h] BYREF

  FileHandle = 0LL;
  if ( BYTE2(RtlpUserPolicies) )
  {
    *a2 = BYTE2(RtlpUserPolicies);
    return 0;
  }
  else
  {
    StringCbPrintfW(pszDest, 0x208uLL, L"\\??\\%s", a1);
    v6 = 0LL;
    if ( (int)RtlStringLengthWorkerW(pszDest, 0x7FFFLL, &v7) >= 0 )
    {
      LOWORD(v6) = 2 * v7;
      WORD1(v6) = 2 * v7 + 2;
      *((_QWORD *)&v6 + 1) = pszDest;
    }
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 64;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)&v6;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    DiskSpacePolicyByHandle = ZwCreateFile(
                                &FileHandle,
                                0x100080u,
                                &ObjectAttributes,
                                &IoStatusBlock,
                                0LL,
                                0,
                                7u,
                                1u,
                                0x20u,
                                0LL,
                                0);
    if ( DiskSpacePolicyByHandle >= 0 )
    {
      DiskSpacePolicyByHandle = RtlpQueryDiskSpacePolicyByHandle(FileHandle, a2);
      if ( DiskSpacePolicyByHandle >= 0 )
        DiskSpacePolicyByHandle = 0;
    }
    if ( FileHandle )
      NtClose(FileHandle);
  }
  return (unsigned int)DiskSpacePolicyByHandle;
}
