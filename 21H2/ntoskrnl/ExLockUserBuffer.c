/*
 * XREFs of ExLockUserBuffer @ 0x140683180
 * Callers:
 *     ExpGetLookasideInformation @ 0x1405B1C80 (ExpGetLookasideInformation.c)
 *     NtQueryInformationProcess @ 0x1406212A0 (NtQueryInformationProcess.c)
 *     ExGetSessionPoolTagInformation @ 0x1406832BC (ExGetSessionPoolTagInformation.c)
 *     NtSystemDebugControl @ 0x1407CFC00 (NtSystemDebugControl.c)
 *     KdSystemDebugControl @ 0x1408B9B60 (KdSystemDebugControl.c)
 *     MmGetSessionMappedViewInformation @ 0x1408C48D0 (MmGetSessionMappedViewInformation.c)
 *     MiCopyLargeVad @ 0x1408D9D20 (MiCopyLargeVad.c)
 *     EtwQueryPerformanceTraceInformation @ 0x140937E6C (EtwQueryPerformanceTraceInformation.c)
 *     ExGetSessionBigPoolInformation @ 0x140949F60 (ExGetSessionBigPoolInformation.c)
 *     ExpGetHandleInformation @ 0x14094A384 (ExpGetHandleInformation.c)
 *     ExpGetHandleInformationEx @ 0x14094A404 (ExpGetHandleInformationEx.c)
 *     ExpGetLockInformation @ 0x14094A484 (ExpGetLockInformation.c)
 *     ExpGetObjectInformation @ 0x14094A504 (ExpGetObjectInformation.c)
 *     ExpGetFirmwareEnvironmentVariable @ 0x1409507B4 (ExpGetFirmwareEnvironmentVariable.c)
 *     ExpSetFirmwareEnvironmentVariable @ 0x140951ECC (ExpSetFirmwareEnvironmentVariable.c)
 *     NtEnumerateBootEntries @ 0x140953310 (NtEnumerateBootEntries.c)
 *     NtEnumerateDriverEntries @ 0x140953960 (NtEnumerateDriverEntries.c)
 *     NtEnumerateSystemEnvironmentValuesEx @ 0x140953E20 (NtEnumerateSystemEnvironmentValuesEx.c)
 *     NtQueryBootEntryOrder @ 0x140954140 (NtQueryBootEntryOrder.c)
 *     NtQueryDriverEntryOrder @ 0x1409546C0 (NtQueryDriverEntryOrder.c)
 * Callees:
 *     MmProbeAndLockPages @ 0x140209710 (MmProbeAndLockPages.c)
 *     MmMapLockedPagesSpecifyCache @ 0x140226CC0 (MmMapLockedPagesSpecifyCache.c)
 *     MmSizeOfMdl @ 0x1402986E0 (MmSizeOfMdl.c)
 *     ExUnlockUserBuffer @ 0x1402997FC (ExUnlockUserBuffer.c)
 *     ExAllocatePoolWithQuotaTag @ 0x140353020 (ExAllocatePoolWithQuotaTag.c)
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
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
