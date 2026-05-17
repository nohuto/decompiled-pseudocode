/*
 * XREFs of RtlpQueryDiskSpacePolicy @ 0x180118270
 * Callers:
 *     RtlQueryResourcePolicy @ 0x180044700 (RtlQueryResourcePolicy.c)
 * Callees:
 *     RtlStringLengthWorkerW @ 0x1800473F4 (RtlStringLengthWorkerW.c)
 *     StringCbPrintfW @ 0x18004C564 (StringCbPrintfW.c)
 *     __security_check_cookie @ 0x18008C940 (__security_check_cookie.c)
 *     NtClose @ 0x18009D820 (NtClose.c)
 *     ZwCreateFile @ 0x18009E0E0 (ZwCreateFile.c)
 *     RtlpQueryDiskSpacePolicyByHandle @ 0x1801183C4 (RtlpQueryDiskSpacePolicyByHandle.c)
 */

__int64 __fastcall RtlpQueryDiskSpacePolicy(__int64 a1, _DWORD *a2)
{
  int File; // ebx
  __int128 v5; // [rsp+68h] [rbp-98h] BYREF
  __int64 v6; // [rsp+78h] [rbp-88h] BYREF
  int v7; // [rsp+80h] [rbp-80h]
  __int64 v8; // [rsp+88h] [rbp-78h]
  __int128 *v9; // [rsp+90h] [rbp-70h]
  int v10; // [rsp+98h] [rbp-68h]
  __int128 v11; // [rsp+A0h] [rbp-60h]
  wchar_t pszDest[264]; // [rsp+C0h] [rbp-40h] BYREF

  if ( BYTE2(RtlpUserPolicies) )
  {
    *a2 = BYTE2(RtlpUserPolicies);
    return 0;
  }
  else
  {
    StringCbPrintfW(pszDest, 0x208uLL, L"\\??\\%s", a1);
    v5 = 0LL;
    if ( (int)RtlStringLengthWorkerW(pszDest, 0x7FFFLL, &v6) >= 0 )
    {
      LOWORD(v5) = 2 * v6;
      WORD1(v5) = 2 * v6 + 2;
      *((_QWORD *)&v5 + 1) = pszDest;
    }
    v7 = 48;
    v8 = 0LL;
    v10 = 64;
    v9 = &v5;
    v11 = 0LL;
    File = ZwCreateFile();
    if ( File >= 0 )
    {
      File = RtlpQueryDiskSpacePolicyByHandle(0LL, a2);
      if ( File >= 0 )
        return 0;
    }
  }
  return (unsigned int)File;
}
