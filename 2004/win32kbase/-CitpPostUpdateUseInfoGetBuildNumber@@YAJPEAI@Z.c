/*
 * XREFs of ?CitpPostUpdateUseInfoGetBuildNumber@@YAJPEAI@Z @ 0x1C0038D94
 * Callers:
 *     ?CitpPostUpdateUseInfoLoad@@YAJPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C00363A0 (-CitpPostUpdateUseInfoLoad@@YAJPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00CCA30 (__security_check_cookie.c)
 *     memset @ 0x1C00D3880 (memset.c)
 *     ?CitpLogFailureWorker@@YAXJPEBDI@Z @ 0x1C01F9B6C (-CitpLogFailureWorker@@YAXJPEBDI@Z.c)
 */

__int64 __fastcall CitpPostUpdateUseInfoGetBuildNumber(unsigned int *a1)
{
  NTSTATUS Version; // eax
  const char *v3; // rdx
  unsigned int v4; // ebx
  struct _OSVERSIONINFOW VersionInformation; // [rsp+20h] [rbp-138h] BYREF

  *a1 = 0;
  memset(&VersionInformation.dwMajorVersion, 0, 0x118uLL);
  VersionInformation.dwOSVersionInfoSize = 284;
  Version = RtlGetVersion(&VersionInformation);
  v4 = Version;
  if ( Version < 0 )
  {
    CitpLogFailureWorker(Version, v3, 0x136Fu);
  }
  else
  {
    v4 = 0;
    *a1 = VersionInformation.dwBuildNumber;
  }
  return v4;
}
