/*
 * XREFs of EtwpCoverageSamplerSetBloomFilter @ 0x1409471B4
 * Callers:
 *     EtwpSetCoverageSamplerInformation @ 0x140947B0C (EtwpSetCoverageSamplerInformation.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     ExfTryToWakePushLock @ 0x1402FC2C0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 *     MmUnmapViewInSystemSpace @ 0x14060ACA0 (MmUnmapViewInSystemSpace.c)
 *     MmMapViewInSystemSpace @ 0x14061E6F0 (MmMapViewInSystemSpace.c)
 *     ObReferenceObjectByHandle @ 0x140707FA0 (ObReferenceObjectByHandle.c)
 */

__int64 __fastcall EtwpCoverageSamplerSetBloomFilter(ULONG_PTR BugCheckParameter2, __int64 a2, KPROCESSOR_MODE a3)
{
  struct _DMA_ADAPTER *v3; // rbp
  NTSTATUS v6; // ebx
  void *v7; // r10
  unsigned int v8; // ecx
  NTSTATUS v9; // eax
  __int64 v10; // rax
  int v11; // r14d
  struct _KTHREAD *CurrentThread; // rax
  void *v13; // rcx
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  PVOID MappedBase; // [rsp+60h] [rbp+8h] BYREF
  PVOID Section; // [rsp+68h] [rbp+10h] BYREF
  ULONG_PTR ViewSize; // [rsp+78h] [rbp+20h] BYREF

  MappedBase = 0LL;
  v3 = 0LL;
  if ( *(_DWORD *)(a2 + 12) != *(_DWORD *)(BugCheckParameter2 + 28) )
    return (unsigned int)-1073741811;
  v7 = *(void **)a2;
  v8 = *(_DWORD *)(a2 + 8);
  if ( !*(_QWORD *)a2 )
  {
    if ( !v8 && !*(_DWORD *)(a2 + 16) )
    {
      v11 = 0;
      goto LABEL_15;
    }
    goto LABEL_18;
  }
  if ( !v8 || ((v8 - 1) & v8) != 0 || v8 > 0x8000000 || (unsigned int)(*(_DWORD *)(a2 + 16) - 1) > 9 )
    return (unsigned int)-1073741811;
  Section = 0LL;
  v9 = ObReferenceObjectByHandle(v7, 4u, MmSectionObjectType, a3, &Section, 0LL);
  v3 = (struct _DMA_ADAPTER *)Section;
  v6 = v9;
  if ( v9 >= 0 )
  {
    ViewSize = *(unsigned int *)(a2 + 8);
    v6 = MmMapViewInSystemSpace(Section, &MappedBase, &ViewSize);
    if ( v6 < 0 )
      goto LABEL_19;
    v10 = *(unsigned int *)(a2 + 8);
    if ( ViewSize == v10 )
    {
      v11 = 8 * v10 - 1;
LABEL_15:
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquirePushLockExclusiveEx(BugCheckParameter2, 0LL);
      v13 = *(void **)(BugCheckParameter2 + 1192);
      *(_QWORD *)(BugCheckParameter2 + 8) = KeGetCurrentThread();
      *(_QWORD *)(BugCheckParameter2 + 1192) = MappedBase;
      *(_DWORD *)(BugCheckParameter2 + 1200) = *(_DWORD *)(a2 + 8);
      *(_DWORD *)(BugCheckParameter2 + 1204) = v11;
      v14 = *(_DWORD *)(a2 + 16);
      *(_QWORD *)(BugCheckParameter2 + 8) = 0LL;
      *(_DWORD *)(BugCheckParameter2 + 1208) = v14;
      MappedBase = v13;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(BugCheckParameter2);
      KeAbPostRelease(BugCheckParameter2);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v15, v16, v17);
      v6 = 0;
      goto LABEL_19;
    }
LABEL_18:
    v6 = -1073741811;
LABEL_19:
    if ( MappedBase )
      MmUnmapViewInSystemSpace(MappedBase);
  }
  if ( v3 )
    HalPutDmaAdapter(v3);
  return (unsigned int)v6;
}
