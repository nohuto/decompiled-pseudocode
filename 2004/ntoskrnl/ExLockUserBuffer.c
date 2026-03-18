/*
 * XREFs of ExLockUserBuffer @ 0x1406DE498
 * Callers:
 *     ExpGetLookasideInformation @ 0x1405AC720 (ExpGetLookasideInformation.c)
 *     NtQueryInformationProcess @ 0x140661E20 (NtQueryInformationProcess.c)
 *     ExGetSessionPoolTagInformation @ 0x1406DE15C (ExGetSessionPoolTagInformation.c)
 *     NtSystemDebugControl @ 0x1407BD0B0 (NtSystemDebugControl.c)
 *     KdSystemDebugControl @ 0x1408B6A60 (KdSystemDebugControl.c)
 *     MmGetSessionMappedViewInformation @ 0x1408C12D0 (MmGetSessionMappedViewInformation.c)
 *     MiCopyLargeVad @ 0x1408D6720 (MiCopyLargeVad.c)
 *     EtwQueryPerformanceTraceInformation @ 0x14093486C (EtwQueryPerformanceTraceInformation.c)
 *     ExGetSessionBigPoolInformation @ 0x1409469D0 (ExGetSessionBigPoolInformation.c)
 *     ExpGetHandleInformation @ 0x140946DF4 (ExpGetHandleInformation.c)
 *     ExpGetHandleInformationEx @ 0x140946E74 (ExpGetHandleInformationEx.c)
 *     ExpGetLockInformation @ 0x140946EF4 (ExpGetLockInformation.c)
 *     ExpGetObjectInformation @ 0x140946F74 (ExpGetObjectInformation.c)
 *     ExpGetFirmwareEnvironmentVariable @ 0x14094D224 (ExpGetFirmwareEnvironmentVariable.c)
 *     ExpSetFirmwareEnvironmentVariable @ 0x14094E93C (ExpSetFirmwareEnvironmentVariable.c)
 *     NtEnumerateBootEntries @ 0x14094FD80 (NtEnumerateBootEntries.c)
 *     NtEnumerateDriverEntries @ 0x1409503D0 (NtEnumerateDriverEntries.c)
 *     NtEnumerateSystemEnvironmentValuesEx @ 0x140950890 (NtEnumerateSystemEnvironmentValuesEx.c)
 *     NtQueryBootEntryOrder @ 0x140950BB0 (NtQueryBootEntryOrder.c)
 *     NtQueryDriverEntryOrder @ 0x140951130 (NtQueryDriverEntryOrder.c)
 * Callees:
 *     MmMapLockedPagesSpecifyCache @ 0x14021BA60 (MmMapLockedPagesSpecifyCache.c)
 *     MmProbeAndLockPages @ 0x14024D8A0 (MmProbeAndLockPages.c)
 *     ExAllocatePoolWithQuotaTag @ 0x140297DA0 (ExAllocatePoolWithQuotaTag.c)
 *     ExUnlockUserBuffer @ 0x140335610 (ExUnlockUserBuffer.c)
 *     MmSizeOfMdl @ 0x140338590 (MmSizeOfMdl.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
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
