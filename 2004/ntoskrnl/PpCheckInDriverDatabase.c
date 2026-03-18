/*
 * XREFs of PpCheckInDriverDatabase @ 0x14072CAB4
 * Callers:
 *     PnpPrepareDriverLoading @ 0x14072CCF0 (PnpPrepareDriverLoading.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x140208540 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x140208CF0 (ExAcquireResourceExclusiveLite.c)
 *     KeLeaveCriticalRegionThread @ 0x14020B010 (KeLeaveCriticalRegionThread.c)
 *     RtlInitUnicodeString @ 0x140298F60 (RtlInitUnicodeString.c)
 *     McTemplateK0j_EtwWriteTransfer @ 0x1405087A8 (McTemplateK0j_EtwWriteTransfer.c)
 *     IopBuildFullDriverPath @ 0x140729D94 (IopBuildFullDriverPath.c)
 *     PiLookupInDDBCache @ 0x14072CBB4 (PiLookupInDDBCache.c)
 *     PiLookupInDDB @ 0x14076B65C (PiLookupInDDB.c)
 *     PnpLogEvent @ 0x14089EDFC (PnpLogEvent.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
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
