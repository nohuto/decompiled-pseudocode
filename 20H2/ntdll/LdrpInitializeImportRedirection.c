/*
 * XREFs of LdrpInitializeImportRedirection @ 0x180081BF4
 * Callers:
 *     LdrpInitializeProcess @ 0x1800D1F00 (LdrpInitializeProcess.c)
 * Callees:
 *     RtlReleasePath @ 0x180011F80 (RtlReleasePath.c)
 *     LdrpInitializeDllPath @ 0x1800169B8 (LdrpInitializeDllPath.c)
 *     LdrpLoadDll @ 0x18001733C (LdrpLoadDll.c)
 *     LdrpReleaseLoaderLock @ 0x18003E6A4 (LdrpReleaseLoaderLock.c)
 *     LdrpAcquireLoaderLock @ 0x18003E704 (LdrpAcquireLoaderLock.c)
 *     LdrpDropLastInProgressCount @ 0x18005D97C (LdrpDropLastInProgressCount.c)
 *     LdrpDrainWorkQueue @ 0x18005EA04 (LdrpDrainWorkQueue.c)
 *     LdrpInitializeGraphRecurse @ 0x18006C048 (LdrpInitializeGraphRecurse.c)
 *     __security_check_cookie @ 0x18008C340 (__security_check_cookie.c)
 *     LdrpLogDbgPrint @ 0x1800CDCC8 (LdrpLogDbgPrint.c)
 *     LdrpLogImportRedirectionTelemetry @ 0x1800CF704 (LdrpLogImportRedirectionTelemetry.c)
 *     LdrpBuildImportRedirection @ 0x1800D5214 (LdrpBuildImportRedirection.c)
 */

__int64 LdrpInitializeImportRedirection()
{
  int Dll; // ebx
  _UNICODE_STRING *p_RedirectionDllName; // rdi
  char v3; // al
  __int64 v4; // rcx
  _BYTE v5[8]; // [rsp+38h] [rbp-49h] BYREF
  __int64 v6; // [rsp+40h] [rbp-41h] BYREF
  PWSTR Path[15]; // [rsp+48h] [rbp-39h] BYREF
  char v8; // [rsp+C4h] [rbp+43h]

  Dll = 0;
  p_RedirectionDllName = &NtCurrentPeb()->ProcessParameters->RedirectionDllName;
  if ( p_RedirectionDllName->Length )
  {
    if ( (LdrpDebugFlags & 5) != 0 )
      LdrpLogDbgPrint(
        (unsigned int)"minkernel\\ntdll\\ldrredirect.c",
        572,
        (unsigned int)"LdrpInitializeImportRedirection",
        2,
        (__int64)"Loading import redirection DLL: '%wZ'\n",
        p_RedirectionDllName);
    LdrpInitializeDllPath(0LL, 0LL, (const WCHAR **)Path);
    Dll = LdrpLoadDll((__int64)p_RedirectionDllName, (__int64)Path, 16777217, (__int64)&v6);
    if ( v8 )
      RtlReleasePath(Path[0]);
    if ( Dll >= 0 )
    {
      Dll = LdrpBuildImportRedirection(v6);
      if ( Dll >= 0 )
      {
        LdrpDrainWorkQueue(0);
        LdrpAcquireLoaderLock();
        v5[0] = 0;
        Dll = LdrpInitializeGraphRecurse(*(__int64 **)(v6 + 152), 0LL, v5);
        LdrpReleaseLoaderLock(v4, 2, Dll);
        LdrpDropLastInProgressCount();
        if ( Dll >= 0 )
        {
          *(_DWORD *)(*(_QWORD *)(v6 + 152) + 24LL) = -1;
          *(_WORD *)(**(_QWORD **)(v6 + 152) - 52LL) = -1;
          LdrpLogImportRedirectionTelemetry(v6);
          LdrpRedirectionModule = v6;
        }
      }
      else
      {
        v3 = LdrpDebugFlags;
        if ( (LdrpDebugFlags & 3) != 0 )
        {
          LdrpLogDbgPrint(
            (unsigned int)"minkernel\\ntdll\\ldrredirect.c",
            599,
            (unsigned int)"LdrpInitializeImportRedirection",
            0,
            (__int64)"Unable to build import redirection Table, Status = 0x%x\n",
            Dll);
          v3 = LdrpDebugFlags;
        }
        if ( (v3 & 0x10) != 0 )
          __debugbreak();
      }
    }
  }
  return (unsigned int)Dll;
}
