/*
 * XREFs of PspConvertSiloToServerSilo @ 0x140902C94
 * Callers:
 *     NtSetInformationJobObject @ 0x14061AF00 (NtSetInformationJobObject.c)
 * Callees:
 *     PsIsCurrentThreadInServerSilo @ 0x140205DF0 (PsIsCurrentThreadInServerSilo.c)
 *     PsIsServerSilo @ 0x14027B380 (PsIsServerSilo.c)
 *     memset @ 0x14040A280 (memset.c)
 *     PspJobHasChildren @ 0x1405CFD84 (PspJobHasChildren.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1405F5CD0 (ObpReferenceObjectByHandleWithTag.c)
 *     PspUnlockJob @ 0x14068AAF0 (PspUnlockJob.c)
 *     PspLockJobExclusive @ 0x14068AB34 (PspLockJobExclusive.c)
 *     PsGetParentSilo @ 0x140902730 (PsGetParentSilo.c)
 *     PspDeleteServerSiloGlobals @ 0x140902EEC (PspDeleteServerSiloGlobals.c)
 *     PspQueueDeferredWorkAndWait @ 0x1409031B4 (PspQueueDeferredWorkAndWait.c)
 *     EtwTraceJobServerSiloStateChange @ 0x140932A1C (EtwTraceJobServerSiloStateChange.c)
 *     ObGetSiloRootDirectoryPath @ 0x14097D31C (ObGetSiloRootDirectoryPath.c)
 *     ExAllocatePoolWithTag @ 0x1409B1160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PspConvertSiloToServerSilo(__int64 a1, char a2, ULONG_PTR a3, char a4)
{
  unsigned int v8; // ebx
  _DWORD *PoolWithTag; // rax
  _DWORD *v11; // rdi
  int SiloRootDirectoryPath; // ebp
  struct _KTHREAD *CurrentThread; // r14
  __int64 v14; // rcx
  __int64 v15; // rcx

  v8 = 0;
  if ( PsIsCurrentThreadInServerSilo() )
    return 3221225569LL;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNxCacheAligned, 0x498uLL, 0x476C6953u);
  v11 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  memset(PoolWithTag, 0, 0x498uLL);
  v11[276] = 0;
  v11[277] = 259;
  *((_BYTE *)v11 + 1168) = a4;
  if ( a3
    && (SiloRootDirectoryPath = ObpReferenceObjectByHandleWithTag(
                                  a3,
                                  2,
                                  (__int64)ExEventObjectType,
                                  a2,
                                  0x65446953u,
                                  (_QWORD *)v11 + 139,
                                  0LL,
                                  0LL),
        SiloRootDirectoryPath < 0)
    || (SiloRootDirectoryPath = ObGetSiloRootDirectoryPath(a1, v11 + 270), SiloRootDirectoryPath < 0)
    || ((CurrentThread = KeGetCurrentThread(), PspLockJobExclusive(a1, (__int64)CurrentThread), !PsIsServerSilo(a1))
      ? (!PsGetParentSilo(v14)
       ? (!PspJobHasChildren(a1)
        ? ((*(_DWORD *)(a1 + 256) & 0x400000) != 0
         ? (*(_QWORD *)(a1 + 1272) = v11, SiloRootDirectoryPath = 0)
         : (SiloRootDirectoryPath = -1073741811))
        : (SiloRootDirectoryPath = -1073740529))
       : (SiloRootDirectoryPath = -1073741791))
      : (SiloRootDirectoryPath = -1073740536),
        PspUnlockJob(a1, (__int64)CurrentThread),
        SiloRootDirectoryPath < 0) )
  {
    PspDeleteServerSiloGlobals(v11);
    return (unsigned int)SiloRootDirectoryPath;
  }
  else
  {
    EtwTraceJobServerSiloStateChange(a1, 0LL);
    if ( (int)PspQueueDeferredWorkAndWait(v15, a1) < 0 )
      return (unsigned int)-1073740955;
    return v8;
  }
}
