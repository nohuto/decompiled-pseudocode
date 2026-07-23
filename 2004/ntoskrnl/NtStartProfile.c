/*
 * XREFs of NtStartProfile @ 0x140957790
 * Callers:
 *     <none>
 * Callees:
 *     HalPutDmaAdapter @ 0x140208270 (HalPutDmaAdapter.c)
 *     KeWaitForSingleObject @ 0x14020B3A0 (KeWaitForSingleObject.c)
 *     MmMapLockedPagesSpecifyCache @ 0x14021BA60 (MmMapLockedPagesSpecifyCache.c)
 *     MmProbeAndLockPages @ 0x14024D8A0 (MmProbeAndLockPages.c)
 *     MmUnlockPages @ 0x140283990 (MmUnlockPages.c)
 *     KeReleaseMutex @ 0x140284E90 (KeReleaseMutex.c)
 *     KeQueryActiveProcessorCountEx @ 0x1402DE560 (KeQueryActiveProcessorCountEx.c)
 *     MmSizeOfMdl @ 0x140338590 (MmSizeOfMdl.c)
 *     KeStartProfile @ 0x14051671C (KeStartProfile.c)
 *     ObReferenceObjectByHandle @ 0x1405F5C90 (ObReferenceObjectByHandle.c)
 *     KeInitializeProfile @ 0x1408B8BB0 (KeInitializeProfile.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1160 (ExAllocatePoolWithTag.c)
 */

NTSTATUS __cdecl NtStartProfile(HANDLE ProfileHandle)
{
  KPROCESSOR_MODE PreviousMode; // r14
  NTSTATUS result; // eax
  PADAPTER_OBJECT v3; // rbx
  NTSTATUS v4; // edi
  SIZE_T v5; // rax
  char *PoolWithTag; // rax
  void *v7; // rdi
  struct _MDL *v8; // rsi
  __int64 v9; // r10
  _DMA_OPERATIONS *DmaOperations; // r8
  PVOID v11; // r14
  PADAPTER_OBJECT DmaAdapter; // [rsp+78h] [rbp+10h] BYREF
  PVOID P; // [rsp+80h] [rbp+18h]

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  DmaAdapter = 0LL;
  result = ObReferenceObjectByHandle(ProfileHandle, 1u, ExProfileObjectType, PreviousMode, (PVOID *)&DmaAdapter, 0LL);
  if ( result >= 0 )
  {
    KeWaitForSingleObject(&ExpProfileStateMutex, Executive, 0, 0, 0LL);
    v3 = DmaAdapter;
    if ( *(_QWORD *)&DmaAdapter[3].Version )
    {
      v4 = -1073741640;
LABEL_8:
      KeReleaseMutex((PRKMUTEX)&ExpProfileStateMutex, 0);
      HalPutDmaAdapter(v3);
      return v4;
    }
    if ( ExpCurrentProfileUsage == KeQueryActiveProcessorCountEx(0xFFFFu) << 13 )
    {
      v4 = -1073741613;
      goto LABEL_8;
    }
    v5 = MmSizeOfMdl(v3[1].DmaOperations, *(unsigned int *)&v3[2].Version);
    PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, v5 + 248, 0x666F7250u);
    v7 = PoolWithTag;
    P = PoolWithTag;
    if ( !PoolWithTag )
    {
      v4 = -1073741670;
      goto LABEL_8;
    }
    v8 = (struct _MDL *)(PoolWithTag + 248);
    v3[3].DmaOperations = (_DMA_OPERATIONS *)(PoolWithTag + 248);
    v3[2].DmaOperations = (_DMA_OPERATIONS *)PoolWithTag;
    v9 = *(unsigned int *)&v3[2].Version;
    DmaOperations = v3[1].DmaOperations;
    *((_QWORD *)PoolWithTag + 31) = 0LL;
    *((_WORD *)PoolWithTag + 128) = 8
                                  * ((((unsigned __int64)((unsigned __int16)DmaOperations & 0xFFF) + v9 + 4095) >> 12)
                                   + 6);
    *((_WORD *)PoolWithTag + 129) = 0;
    *((_QWORD *)PoolWithTag + 35) = (unsigned __int64)DmaOperations & 0xFFFFFFFFFFFFF000uLL;
    *((_DWORD *)PoolWithTag + 73) = (unsigned __int16)DmaOperations & 0xFFF;
    *((_DWORD *)PoolWithTag + 72) = v9;
    MmProbeAndLockPages((PMDL)(PoolWithTag + 248), PreviousMode, IoWriteAccess);
    v11 = MmMapLockedPagesSpecifyCache((PMDL)v3[3].DmaOperations, 0, MmCached, 0LL, 0, 0x40000010u);
    if ( v11 )
    {
      KeInitializeProfile(
        (__int64)v7,
        *(_QWORD *)&v3->Version,
        (__int64)v11,
        (__int64)v3->DmaOperations,
        *(_QWORD *)&v3[1].Version,
        *(_DWORD *)(&v3[2].Size + 1),
        *(_DWORD *)&v3[4].Version,
        *(_DWORD *)(&v3[4].Size + 1),
        (unsigned __int16 *)&v3[4].DmaOperations);
      KeStartProfile((ULONG_PTR)v7);
      *(_QWORD *)&v3[3].Version = v11;
      ++ExpCurrentProfileUsage;
      KeReleaseMutex((PRKMUTEX)&ExpProfileStateMutex, 0);
      HalPutDmaAdapter(v3);
      return 0;
    }
    else
    {
      KeReleaseMutex((PRKMUTEX)&ExpProfileStateMutex, 0);
      MmUnlockPages(v8);
      ExFreePoolWithTag(v7, 0);
      HalPutDmaAdapter(v3);
      return -1073741670;
    }
  }
  return result;
}
