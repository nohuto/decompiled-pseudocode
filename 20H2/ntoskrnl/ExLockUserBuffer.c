/*
 * XREFs of ExLockUserBuffer @ 0x14065C658
 * Callers:
 *     ExpGetLookasideInformation @ 0x1405B0280 (ExpGetLookasideInformation.c)
 *     NtQueryInformationProcess @ 0x140636B80 (NtQueryInformationProcess.c)
 *     ExGetSessionPoolTagInformation @ 0x14065C31C (ExGetSessionPoolTagInformation.c)
 *     NtSystemDebugControl @ 0x1407CB940 (NtSystemDebugControl.c)
 *     KdSystemDebugControl @ 0x1408BC680 (KdSystemDebugControl.c)
 *     MmGetSessionMappedViewInformation @ 0x1408C7110 (MmGetSessionMappedViewInformation.c)
 *     MiCopyLargeVad @ 0x1408DC560 (MiCopyLargeVad.c)
 *     EtwQueryPerformanceTraceInformation @ 0x14093A69C (EtwQueryPerformanceTraceInformation.c)
 *     ExGetSessionBigPoolInformation @ 0x14094C790 (ExGetSessionBigPoolInformation.c)
 *     ExpGetHandleInformation @ 0x14094CBB4 (ExpGetHandleInformation.c)
 *     ExpGetHandleInformationEx @ 0x14094CC34 (ExpGetHandleInformationEx.c)
 *     ExpGetLockInformation @ 0x14094CCB4 (ExpGetLockInformation.c)
 *     ExpGetObjectInformation @ 0x14094CD34 (ExpGetObjectInformation.c)
 *     ExpGetFirmwareEnvironmentVariable @ 0x140952FE4 (ExpGetFirmwareEnvironmentVariable.c)
 *     ExpSetFirmwareEnvironmentVariable @ 0x1409546FC (ExpSetFirmwareEnvironmentVariable.c)
 *     NtEnumerateBootEntries @ 0x140955B40 (NtEnumerateBootEntries.c)
 *     NtEnumerateDriverEntries @ 0x140956190 (NtEnumerateDriverEntries.c)
 *     NtEnumerateSystemEnvironmentValuesEx @ 0x140956650 (NtEnumerateSystemEnvironmentValuesEx.c)
 *     NtQueryBootEntryOrder @ 0x140956970 (NtQueryBootEntryOrder.c)
 *     NtQueryDriverEntryOrder @ 0x140956EF0 (NtQueryDriverEntryOrder.c)
 * Callees:
 *     ExAllocatePoolWithQuotaTag @ 0x14020A530 (ExAllocatePoolWithQuotaTag.c)
 *     ExUnlockUserBuffer @ 0x14025EE10 (ExUnlockUserBuffer.c)
 *     MmSizeOfMdl @ 0x14025F2E0 (MmSizeOfMdl.c)
 *     MmProbeAndLockPages @ 0x14026AA30 (MmProbeAndLockPages.c)
 *     MmMapLockedPagesSpecifyCache @ 0x1402864D0 (MmMapLockedPagesSpecifyCache.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
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
