/*
 * XREFs of PspConvertSiloToServerSilo @ 0x140901E34
 * Callers:
 *     NtSetInformationJobObject @ 0x140660620 (NtSetInformationJobObject.c)
 * Callees:
 *     PsIsCurrentThreadInServerSilo @ 0x14025ED10 (PsIsCurrentThreadInServerSilo.c)
 *     PsIsServerSilo @ 0x1402D9650 (PsIsServerSilo.c)
 *     memset @ 0x140408F80 (memset.c)
 *     PspJobHasChildren @ 0x1405CE9B4 (PspJobHasChildren.c)
 *     PspUnlockJob @ 0x140612970 (PspUnlockJob.c)
 *     PspLockJobExclusive @ 0x1406129B4 (PspLockJobExclusive.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x14062B240 (ObpReferenceObjectByHandleWithTag.c)
 *     PsGetParentSilo @ 0x1409018D0 (PsGetParentSilo.c)
 *     PspDeleteServerSiloGlobals @ 0x1409020A4 (PspDeleteServerSiloGlobals.c)
 *     PspQueueDeferredWorkAndWait @ 0x1409023A4 (PspQueueDeferredWorkAndWait.c)
 *     EtwTraceJobServerSiloStateChange @ 0x14093176C (EtwTraceJobServerSiloStateChange.c)
 *     ObGetSiloRootDirectoryPath @ 0x14097BF7C (ObGetSiloRootDirectoryPath.c)
 *     ExAllocatePoolWithTag @ 0x1409B1030 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PspConvertSiloToServerSilo(__int64 a1, char a2, ULONG_PTR a3, char a4)
{
  unsigned int v8; // ebx
  _DWORD *PoolWithTag; // rax
  _DWORD *v11; // rdi
  ULONG v12; // r9d
  int SiloRootDirectoryPath; // ebp
  struct _KTHREAD *CurrentThread; // r14
  __int64 v15; // rcx
  __int64 v16; // rcx
  _QWORD *Tag; // [rsp+20h] [rbp-38h]

  v8 = 0;
  if ( PsIsCurrentThreadInServerSilo() )
    return 3221225569LL;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNxCacheAligned, 0x490uLL, 0x476C6953u);
  v11 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  memset(PoolWithTag, 0, 0x490uLL);
  v11[274] = 0;
  v11[275] = 259;
  *((_BYTE *)v11 + 1160) = a4;
  if ( a3 )
  {
    LOBYTE(v12) = a2;
    LODWORD(Tag) = 1698982227;
    SiloRootDirectoryPath = ObpReferenceObjectByHandleWithTag(a3, 2LL, ExEventObjectType, v12, Tag, v11 + 276, 0LL, 0LL);
    if ( SiloRootDirectoryPath < 0 )
      goto LABEL_7;
  }
  SiloRootDirectoryPath = ObGetSiloRootDirectoryPath(a1, v11 + 268);
  if ( SiloRootDirectoryPath < 0
    || ((CurrentThread = KeGetCurrentThread(), PspLockJobExclusive(a1, (__int64)CurrentThread), !PsIsServerSilo(a1))
      ? (!PsGetParentSilo(v15)
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
LABEL_7:
    PspDeleteServerSiloGlobals(v11);
    return (unsigned int)SiloRootDirectoryPath;
  }
  else
  {
    EtwTraceJobServerSiloStateChange(a1, 0LL);
    if ( (int)PspQueueDeferredWorkAndWait(v16, a1) < 0 )
      return (unsigned int)-1073740955;
    return v8;
  }
}
