/*
 * XREFs of RtlpGetVolumeHandle @ 0x18008BA5C
 * Callers:
 *     RtlpDiskSpeedInitialize @ 0x18008B940 (RtlpDiskSpeedInitialize.c)
 *     RtlpQueryDiskWriteConstraintPolicy @ 0x180118478 (RtlpQueryDiskWriteConstraintPolicy.c)
 * Callees:
 *     RtlStringLengthWorkerW @ 0x1800473F4 (RtlStringLengthWorkerW.c)
 *     StringCbPrintfW @ 0x18004C564 (StringCbPrintfW.c)
 *     __security_check_cookie @ 0x18008C940 (__security_check_cookie.c)
 *     ZwCreateFile @ 0x18009E0E0 (ZwCreateFile.c)
 */

__int64 __fastcall RtlpGetVolumeHandle(unsigned __int16 *a1, _QWORD *a2)
{
  __int64 v2; // r9
  __int64 result; // rax
  __int64 v5; // [rsp+60h] [rbp-29h] BYREF
  __int128 v6; // [rsp+68h] [rbp-21h] BYREF
  __int64 v7; // [rsp+78h] [rbp-11h] BYREF
  int v8; // [rsp+80h] [rbp-9h] BYREF
  __int64 v9; // [rsp+88h] [rbp-1h]
  __int128 *v10; // [rsp+90h] [rbp+7h]
  int v11; // [rsp+98h] [rbp+Fh]
  __int128 v12; // [rsp+A0h] [rbp+17h]
  _BYTE v13[16]; // [rsp+B0h] [rbp+27h] BYREF
  wchar_t pszDest[12]; // [rsp+C0h] [rbp+37h] BYREF

  v2 = *a1;
  v5 = 0LL;
  StringCbPrintfW(pszDest, 0x14uLL, L"\\??\\%C:", v2);
  v6 = 0LL;
  if ( (int)RtlStringLengthWorkerW(pszDest, 0x7FFFLL, &v7) >= 0 )
  {
    LOWORD(v6) = 2 * v7;
    WORD1(v6) = 2 * v7 + 2;
    *((_QWORD *)&v6 + 1) = pszDest;
  }
  v9 = 0LL;
  v8 = 48;
  v11 = 64;
  v10 = &v6;
  v12 = 0LL;
  result = ZwCreateFile(&v5, 1048704LL, &v8, v13, 0LL, 0, 7, 1, 32, 0LL, 0);
  if ( (int)result >= 0 )
  {
    *a2 = v5;
    return 0LL;
  }
  return result;
}
