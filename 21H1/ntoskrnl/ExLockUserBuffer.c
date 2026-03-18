/*
 * XREFs of ExLockUserBuffer @ 0x1406BD108
 * Callers:
 *     ExpGetLookasideInformation @ 0x1405AC030 (ExpGetLookasideInformation.c)
 *     NtQueryInformationProcess @ 0x1405DBB20 (NtQueryInformationProcess.c)
 *     ExGetSessionPoolTagInformation @ 0x1406BCDCC (ExGetSessionPoolTagInformation.c)
 *     NtSystemDebugControl @ 0x1407B9F40 (NtSystemDebugControl.c)
 *     KdSystemDebugControl @ 0x1408B5740 (KdSystemDebugControl.c)
 *     MmGetSessionMappedViewInformation @ 0x1408BFF80 (MmGetSessionMappedViewInformation.c)
 *     MiCopyLargeVad @ 0x1408D53D0 (MiCopyLargeVad.c)
 *     EtwQueryPerformanceTraceInformation @ 0x1409335CC (EtwQueryPerformanceTraceInformation.c)
 *     ExGetSessionBigPoolInformation @ 0x140945730 (ExGetSessionBigPoolInformation.c)
 *     ExpGetHandleInformation @ 0x140945B54 (ExpGetHandleInformation.c)
 *     ExpGetHandleInformationEx @ 0x140945BD4 (ExpGetHandleInformationEx.c)
 *     ExpGetLockInformation @ 0x140945C54 (ExpGetLockInformation.c)
 *     ExpGetObjectInformation @ 0x140945CD4 (ExpGetObjectInformation.c)
 *     ExpGetFirmwareEnvironmentVariable @ 0x14094BE84 (ExpGetFirmwareEnvironmentVariable.c)
 *     ExpSetFirmwareEnvironmentVariable @ 0x14094D59C (ExpSetFirmwareEnvironmentVariable.c)
 *     NtEnumerateBootEntries @ 0x14094E9E0 (NtEnumerateBootEntries.c)
 *     NtEnumerateDriverEntries @ 0x14094F030 (NtEnumerateDriverEntries.c)
 *     NtEnumerateSystemEnvironmentValuesEx @ 0x14094F4F0 (NtEnumerateSystemEnvironmentValuesEx.c)
 *     NtQueryBootEntryOrder @ 0x14094F810 (NtQueryBootEntryOrder.c)
 *     NtQueryDriverEntryOrder @ 0x14094FD90 (NtQueryDriverEntryOrder.c)
 * Callees:
 *     ExAllocatePoolWithQuotaTag @ 0x1402421D0 (ExAllocatePoolWithQuotaTag.c)
 *     MmMapLockedPagesSpecifyCache @ 0x140274AB0 (MmMapLockedPagesSpecifyCache.c)
 *     MmProbeAndLockPages @ 0x1402A68D0 (MmProbeAndLockPages.c)
 *     ExUnlockUserBuffer @ 0x1402F85E0 (ExUnlockUserBuffer.c)
 *     MmSizeOfMdl @ 0x1402FB560 (MmSizeOfMdl.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ExLockUserBuffer(
        unsigned __int64 a1,
        unsigned int a2,
        KPROCESSOR_MODE a3,
        LOCK_OPERATION a4,
        _QWORD *P,
        struct _MDL **a6)
{
  __int64 v8; // r13
  SIZE_T v10; // rax
  struct _MDL *PoolWithQuotaTag; // rax
  struct _MDL *v12; // rbx
  PVOID MappedSystemVa; // rax

  v8 = a2;
  *P = 0LL;
  *a6 = 0LL;
  v10 = MmSizeOfMdl((PVOID)a1, a2);
  PoolWithQuotaTag = (struct _MDL *)ExAllocatePoolWithQuotaTag((POOL_TYPE)520, v10, 0x6F666E49u);
  v12 = PoolWithQuotaTag;
  if ( PoolWithQuotaTag )
  {
    PoolWithQuotaTag->Next = 0LL;
    PoolWithQuotaTag->Size = 8 * ((((a1 & 0xFFF) + v8 + 4095) >> 12) + 6);
    PoolWithQuotaTag->MdlFlags = 0;
    PoolWithQuotaTag->StartVa = (PVOID)(a1 & 0xFFFFFFFFFFFFF000uLL);
    PoolWithQuotaTag->ByteOffset = a1 & 0xFFF;
    PoolWithQuotaTag->ByteCount = v8;
    MmProbeAndLockPages(PoolWithQuotaTag, a3, a4);
    v12->MdlFlags |= 0x2000u;
    if ( (v12->MdlFlags & 5) != 0 )
      MappedSystemVa = v12->MappedSystemVa;
    else
      MappedSystemVa = MmMapLockedPagesSpecifyCache(v12, 0, MmCached, 0LL, 0, 0x40000020u);
    *P = MappedSystemVa;
    if ( MappedSystemVa )
    {
      *a6 = v12;
      return 0LL;
    }
    ExUnlockUserBuffer(v12);
  }
  return 3221225626LL;
}
