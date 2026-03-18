/*
 * XREFs of MiObtainReferencedVadEx @ 0x140267570
 * Callers:
 *     NtGetWriteWatch @ 0x14028FD10 (NtGetWriteWatch.c)
 *     MiProbeAndLockPrepare @ 0x1402A7E50 (MiProbeAndLockPrepare.c)
 *     MiGetWorkingSetInfoList @ 0x140347A3C (MiGetWorkingSetInfoList.c)
 *     MiPrefetchPreallocatePages @ 0x140533B00 (MiPrefetchPreallocatePages.c)
 *     MmGetEnclaveModuleList @ 0x140545C14 (MmGetEnclaveModuleList.c)
 *     MiProcessVaContiguityInformation @ 0x14054C7D0 (MiProcessVaContiguityInformation.c)
 *     MiAllocateVirtualMemory @ 0x1405ED060 (MiAllocateVirtualMemory.c)
 *     MmSecureVirtualMemoryAgainstWrites @ 0x14061606C (MmSecureVirtualMemoryAgainstWrites.c)
 *     MmProtectVirtualMemory @ 0x14062CEF0 (MmProtectVirtualMemory.c)
 *     NtResetWriteWatch @ 0x14062DC10 (NtResetWriteWatch.c)
 *     MmFreeVirtualMemory @ 0x14062E1C0 (MmFreeVirtualMemory.c)
 *     MiUnmapViewOfSection @ 0x140635E10 (MiUnmapViewOfSection.c)
 *     MmDeleteTeb @ 0x14063A688 (MmDeleteTeb.c)
 *     MiCfgMarkValidEntries @ 0x14063C194 (MiCfgMarkValidEntries.c)
 *     MiReferenceCfgVad @ 0x1406511E8 (MiReferenceCfgVad.c)
 *     MmSecureVirtualMemoryEx @ 0x1406BA960 (MmSecureVirtualMemoryEx.c)
 *     MmRotatePhysicalView @ 0x1406BD3F0 (MmRotatePhysicalView.c)
 *     MiCheckShadowStackOverflow @ 0x1406C5888 (MiCheckShadowStackOverflow.c)
 *     MmFlushVirtualMemory @ 0x1406DC964 (MmFlushVirtualMemory.c)
 *     MiProcessVaRangesInfoClass @ 0x1406DD768 (MiProcessVaRangesInfoClass.c)
 *     NtAreMappedFilesTheSame @ 0x1406E74A0 (NtAreMappedFilesTheSame.c)
 *     MmStoreFreeVirtualMemory @ 0x1406E8C30 (MmStoreFreeVirtualMemory.c)
 *     MiUnmapLockedPagesInUserSpace @ 0x1407594EC (MiUnmapLockedPagesInUserSpace.c)
 *     MmGetFileNameForAddress @ 0x1408BF6F4 (MmGetFileNameForAddress.c)
 *     MmSetGraphicsPtes @ 0x1408C2560 (MmSetGraphicsPtes.c)
 *     MiSetImageHotPatchAllowed @ 0x1408C9BB4 (MiSetImageHotPatchAllowed.c)
 *     MiQueryMemoryPhysicalContiguity @ 0x1408CC950 (MiQueryMemoryPhysicalContiguity.c)
 *     MiHandleEnclaveFault @ 0x1408CD3B8 (MiHandleEnclaveFault.c)
 *     MiInitializeEnclave @ 0x1408CE640 (MiInitializeEnclave.c)
 *     MmSelectVsmEnclaveByAddress @ 0x1408CF324 (MmSelectVsmEnclaveByAddress.c)
 *     NtLoadEnclaveData @ 0x1408CFB00 (NtLoadEnclaveData.c)
 *     NtTerminateEnclave @ 0x1408D0180 (NtTerminateEnclave.c)
 *     MiDeleteAllHardwareEnclaves @ 0x1409ACCF0 (MiDeleteAllHardwareEnclaves.c)
 * Callees:
 *     MiUnlockAndDereferenceVad @ 0x14021A7A0 (MiUnlockAndDereferenceVad.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x140260BA0 (ExAcquirePushLockSharedEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140260DE0 (KiLeaveGuardedRegionUnsafe.c)
 *     UNLOCK_ADDRESS_SPACE_SHARED @ 0x140264380 (UNLOCK_ADDRESS_SPACE_SHARED.c)
 *     MiUnlockAndDereferenceVadShared @ 0x1402A45A0 (MiUnlockAndDereferenceVadShared.c)
 *     MiUnlockVadShared @ 0x1402A5470 (MiUnlockVadShared.c)
 *     KiCheckForKernelApcDelivery @ 0x1403599E0 (KiCheckForKernelApcDelivery.c)
 *     MiWaitForVadDeletion @ 0x140556320 (MiWaitForVadDeletion.c)
 */

volatile signed __int32 *__fastcall MiObtainReferencedVadEx(unsigned __int64 a1, char a2, int *a3)
{
  struct _KTHREAD *CurrentThread; // rdi
  __int64 Process; // r14
  _KPROCESS *v8; // rdx
  volatile signed __int32 *v9; // rbx
  unsigned __int64 v10; // rsi
  ULONG_PTR v11; // rcx
  int v12; // r15d
  __int64 v13; // rcx
  bool v14; // zf
  int v16; // edx
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  int v20; // eax

  *a3 = 0;
  CurrentThread = KeGetCurrentThread();
  Process = (__int64)CurrentThread->ApcState.Process;
  --CurrentThread->SpecialApcDisable;
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockSharedEx(Process + 1224, 0LL);
  LOBYTE(CurrentThread[1].Queue) |= 2u;
  v8 = KeGetCurrentThread()->ApcState.Process;
  v9 = *(volatile signed __int32 **)&v8[1].Spare2[23];
  if ( !v9 )
  {
LABEL_15:
    v16 = -1073741664;
    if ( (*(_DWORD *)(Process + 1124) & 0x20) != 0 )
      v16 = -1073741558;
    goto LABEL_17;
  }
  v10 = a1 >> 12;
  if ( v10 < (*((unsigned int *)v9 + 6) | ((unsigned __int64)*((unsigned __int8 *)v9 + 32) << 32))
    || v10 > (*((unsigned int *)v9 + 7) | ((unsigned __int64)*((unsigned __int8 *)v9 + 33) << 32)) )
  {
    v9 = *(volatile signed __int32 **)&v8[1].Spare2[15];
    if ( v9 )
    {
      while ( 1 )
      {
        if ( v10 > (*((unsigned int *)v9 + 7) | ((unsigned __int64)*((unsigned __int8 *)v9 + 33) << 32)) )
        {
          v9 = (volatile signed __int32 *)*((_QWORD *)v9 + 1);
        }
        else
        {
          if ( v10 >= (*((unsigned int *)v9 + 6) | ((unsigned __int64)*((unsigned __int8 *)v9 + 32) << 32)) )
          {
            *(_QWORD *)&v8[1].Spare2[23] = v9;
            goto LABEL_4;
          }
          v9 = *(volatile signed __int32 **)v9;
        }
        if ( !v9 )
          goto LABEL_15;
      }
    }
    goto LABEL_15;
  }
LABEL_4:
  if ( (a2 & 1) == 0 && (*(_DWORD *)(Process + 1124) & 0x20) != 0 )
  {
    v16 = -1073741558;
LABEL_17:
    *a3 = v16;
    UNLOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, Process);
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread, v17, v18, v19);
    return 0LL;
  }
  if ( !_InterlockedIncrement(v9 + 9) )
    __fastfail(0xEu);
  UNLOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, Process);
  --CurrentThread->SpecialApcDisable;
  v11 = (ULONG_PTR)(v9 + 10);
  v12 = a2 & 2;
  if ( v12 )
  {
    ExAcquirePushLockSharedEx(v11, 0LL);
    BYTE1(CurrentThread[1].Queue) |= 0x40u;
  }
  else
  {
    ExAcquirePushLockExclusiveEx(v11, 0LL);
    LOBYTE(CurrentThread[1].Queue) |= 0x80u;
  }
  v14 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v14 && ($C774EFD68449142D8271B1EC1EB7FB26 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery(v13);
  if ( (v9[12] & 4) != 0 )
  {
    if ( v12 )
    {
      MiUnlockVadShared(CurrentThread, v9);
      --CurrentThread->SpecialApcDisable;
      ExAcquirePushLockExclusiveEx((ULONG_PTR)(v9 + 10), 0LL);
      LOBYTE(CurrentThread[1].Queue) |= 0x80u;
    }
    MiWaitForVadDeletion(v9);
    MiUnlockAndDereferenceVad((char *)v9);
    v20 = -1073741558;
    if ( (*(_DWORD *)(Process + 1124) & 0x20) == 0 )
      v20 = -1073741664;
    *a3 = v20;
  }
  else
  {
    if ( v10 >= (*((unsigned int *)v9 + 6) | ((unsigned __int64)*((unsigned __int8 *)v9 + 32) << 32))
      && v10 <= (*((unsigned int *)v9 + 7) | ((unsigned __int64)*((unsigned __int8 *)v9 + 33) << 32)) )
    {
      return v9;
    }
    if ( v12 )
      MiUnlockAndDereferenceVadShared((PVOID)v9);
    else
      MiUnlockAndDereferenceVad((char *)v9);
    *a3 = -1073741664;
  }
  return 0LL;
}
