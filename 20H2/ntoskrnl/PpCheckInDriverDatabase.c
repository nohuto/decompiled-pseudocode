/*
 * XREFs of PpCheckInDriverDatabase @ 0x14073B530
 * Callers:
 *     PnpPrepareDriverLoading @ 0x14073B76C (PnpPrepareDriverLoading.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140210D50 (RtlInitUnicodeString.c)
 *     KeLeaveCriticalRegionThread @ 0x14021EB00 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseResourceLite @ 0x1402214C0 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x140221C70 (ExAcquireResourceExclusiveLite.c)
 *     McTemplateK0j_EtwWriteTransfer @ 0x14050C0D8 (McTemplateK0j_EtwWriteTransfer.c)
 *     IopBuildFullDriverPath @ 0x140738824 (IopBuildFullDriverPath.c)
 *     PiLookupInDDBCache @ 0x14073B630 (PiLookupInDDBCache.c)
 *     PiLookupInDDB @ 0x14077A41C (PiLookupInDDB.c)
 *     PnpLogEvent @ 0x1408A492C (PnpLogEvent.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PpCheckInDriverDatabase(
        UNICODE_STRING *a1,
        void *a2,
        __int64 a3,
        unsigned int a4,
        int a5,
        __int64 a6)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  int v10; // ebx
  __int64 v11; // r8
  struct _KTHREAD *CurrentThread; // rax
  __int64 v13; // r8
  UNICODE_STRING v15; // [rsp+30h] [rbp-28h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-18h] BYREF

  v15 = 0LL;
  if ( InitIsWinPEMode || !PpBootDDBInitialized )
    return 0LL;
  v10 = IopBuildFullDriverPath(a1, a2, &v15);
  if ( v10 < 0 )
  {
    if ( (PiLoggedErrorEventsMask & 8) == 0 )
    {
      PiLoggedErrorEventsMask |= 8u;
      DestinationString = 0LL;
      RtlInitUnicodeString(&DestinationString, L"BUILD DRIVER PATH FAILED");
      PnpLogEvent(&DestinationString, 0LL, 3221226349LL, 0LL, 0);
    }
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceExclusiveLite(&PiDDBLock, 1u);
    v10 = PiLookupInDDBCache(&v15, a3, v13, a6);
    if ( v10 == -1073741823 )
      v10 = PiLookupInDDB(&v15, a3, a4, a6);
    if ( v10 == -1073740948 && !a5 )
      v10 = -1073740949;
    ExReleaseResourceLite(&PiDDBLock);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    ExFreePoolWithTag(v15.Buffer, 0);
  }
  if ( (unsigned int)(v10 + 1073740949) <= 1 )
  {
    if ( (byte_140C130BA & 2) != 0 )
      McTemplateK0j_EtwWriteTransfer(v9, v8, v11, a6);
  }
  else
  {
    return 0;
  }
  return (unsigned int)v10;
}
