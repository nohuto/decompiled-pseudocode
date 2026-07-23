/*
 * XREFs of LdrpMapDllSearchPath @ 0x18005F500
 * Callers:
 *     LdrpProcessWork @ 0x18005EB1C (LdrpProcessWork.c)
 *     LdrpLoadEnclaveModule @ 0x1800CD7B8 (LdrpLoadEnclaveModule.c)
 * Callees:
 *     RtlReleasePath @ 0x180011F80 (RtlReleasePath.c)
 *     LdrpInitializeDllPath @ 0x1800169B8 (LdrpInitializeDllPath.c)
 *     NtdllpFreeStringRoutine @ 0x180022E70 (NtdllpFreeStringRoutine.c)
 *     LdrpSearchPath @ 0x18005ED5C (LdrpSearchPath.c)
 *     LdrpIsSecurityEtwLoggingEnabled @ 0x18005F4A0 (LdrpIsSecurityEtwLoggingEnabled.c)
 *     LdrpFreeUnicodeString @ 0x18005F7D0 (LdrpFreeUnicodeString.c)
 *     LdrpAppCompatRedirect @ 0x18005F808 (LdrpAppCompatRedirect.c)
 *     LdrpFindExistingModule @ 0x18005FA04 (LdrpFindExistingModule.c)
 *     LdrpHashUnicodeString @ 0x18005FAA0 (LdrpHashUnicodeString.c)
 *     LdrpMapDllNtFileName @ 0x18005FAD4 (LdrpMapDllNtFileName.c)
 *     LdrpLoadContextReplaceModule @ 0x1800601EC (LdrpLoadContextReplaceModule.c)
 *     __security_check_cookie @ 0x18008C240 (__security_check_cookie.c)
 *     LdrpLogEtwDllSearchResults @ 0x1800CEE34 (LdrpLogEtwDllSearchResults.c)
 */

__int64 __fastcall LdrpMapDllSearchPath(__int64 a1)
{
  __int64 v1; // r9
  __int64 v2; // rsi
  int v4; // r14d
  __int64 v5; // r8
  PWSTR *v6; // r15
  int v7; // eax
  int ExistingModule; // ebx
  _UNICODE_STRING v9; // xmm1
  bool v11; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v12; // [rsp+54h] [rbp-ACh] BYREF
  _UNICODE_STRING v13; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v14; // [rsp+68h] [rbp-98h] BYREF
  _UNICODE_STRING String1; // [rsp+70h] [rbp-90h] BYREF
  __int128 v16; // [rsp+80h] [rbp-80h] BYREF
  int v17; // [rsp+90h] [rbp-70h] BYREF
  _WORD *v18; // [rsp+98h] [rbp-68h]
  _WORD v19[128]; // [rsp+A0h] [rbp-60h] BYREF
  PWSTR Path[15]; // [rsp+1A0h] [rbp+A0h] BYREF
  char v21; // [rsp+21Ch] [rbp+11Ch]

  v1 = *(_QWORD *)(a1 + 48);
  v2 = *(_QWORD *)(a1 + 56);
  v14 = 0LL;
  v11 = 0;
  v18 = v19;
  v4 = 0;
  v17 = 0x1000000;
  v19[0] = 0;
  v12 = 0;
  v16 = 0LL;
  v13 = 0LL;
  if ( v1 && (v5 = *(unsigned int *)(v1 + 280), (((LdrpPolicyBits & 4) != 0 ? 32512 : 31488) & (unsigned int)v5) != 0) )
  {
    LdrpInitializeDllPath(
      *(const WCHAR **)(v1 + 80),
      (const WCHAR *)(v5 & ((-(__int64)((LdrpPolicyBits & 4) != 0) & 0x400) + 31488) | 1),
      (const WCHAR **)Path);
    v6 = Path;
  }
  else
  {
    LdrpInitializeDllPath(0LL, 0LL, (const WCHAR **)Path);
    v6 = *(PWSTR **)(a1 + 16);
  }
  while ( 1 )
  {
    v7 = LdrpSearchPath(
           (const UNICODE_STRING *)a1,
           (__int64)v6,
           (*(_DWORD *)(a1 + 32) & 8) != 0,
           (wchar_t **)&v16,
           &v17,
           (__int64)&String1,
           &v13,
           &v11,
           (__int64)&v12);
    ExistingModule = v7;
    if ( v11 )
      *(_DWORD *)(v2 + 104) |= 1u;
    if ( v7 == -1073741515 )
      break;
    if ( v7 < 0 )
      goto LABEL_14;
LABEL_8:
    v4 = 1;
    if ( !*(_QWORD *)(a1 + 168) )
    {
      ExistingModule = LdrpAppCompatRedirect(a1, (unsigned int)&v13, (unsigned int)&String1, (unsigned int)&v17, v7);
      if ( ExistingModule < 0 )
        goto LABEL_14;
      if ( (*(_DWORD *)(a1 + 32) & 0x10000) != 0 )
        v12 |= 1u;
      *(_DWORD *)(v2 + 264) = LdrpHashUnicodeString(&String1);
      ExistingModule = LdrpFindExistingModule(&String1, &v13, (__int64)&v14);
      if ( ExistingModule != -1073741515 )
        goto LABEL_14;
    }
    LdrpFreeUnicodeString(v2 + 72);
    v9 = String1;
    *(_UNICODE_STRING *)(v2 + 72) = v13;
    *(_UNICODE_STRING *)(v2 + 88) = v9;
    v13 = 0LL;
    ExistingModule = LdrpMapDllNtFileName(a1, &v17);
    if ( ExistingModule != 1073741838 )
      goto LABEL_14;
    if ( v19 != v18 )
      NtdllpFreeStringRoutine(v18);
    v17 = 0x1000000;
    v18 = v19;
    v19[0] = 0;
  }
  if ( !v4 )
    goto LABEL_8;
  ExistingModule = -1073741701;
LABEL_14:
  if ( v14 )
  {
    LdrpLoadContextReplaceModule(a1);
  }
  else if ( LdrpIsSecurityEtwLoggingEnabled() )
  {
    LdrpLogEtwDllSearchResults(v12, a1);
  }
  if ( v19 != v18 )
    NtdllpFreeStringRoutine(v18);
  v17 = 0x1000000;
  v18 = v19;
  v19[0] = 0;
  LdrpFreeUnicodeString(&v13);
  if ( v21 )
    RtlReleasePath(Path[0]);
  return (unsigned int)ExistingModule;
}
