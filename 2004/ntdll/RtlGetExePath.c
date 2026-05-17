/*
 * XREFs of RtlGetExePath @ 0x1800822B0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpGetCachedPath @ 0x180011708 (RtlpGetCachedPath.c)
 *     RtlQueryEnvironmentVariable @ 0x1800157E0 (RtlQueryEnvironmentVariable.c)
 *     wcschr @ 0x180091D60 (wcschr.c)
 */

__int64 __fastcall RtlGetExePath(const wchar_t *a1, _QWORD *a2)
{
  _BOOL8 v3; // r8
  __int64 CachedPath; // rax
  unsigned __int64 v6; // [rsp+50h] [rbp+18h] BYREF

  v3 = !wcschr(a1, 0x5Cu)
    && (unsigned int)RtlQueryEnvironmentVariable(0LL, L"NoDefaultCurrentDirectoryInExePath", 0x22uLL, 0LL, 0LL, &v6) != -1073741568;
  CachedPath = RtlpGetCachedPath(
                 (__int64 *)&RtlpExeSearchPath,
                 (__int64 (__fastcall *)(__int64, __int64))RtlpComputeExePath,
                 v3,
                 0LL);
  if ( CachedPath )
  {
    *a2 = CachedPath + 128;
    return 0LL;
  }
  else
  {
    *a2 = 0LL;
    return 3221225495LL;
  }
}
