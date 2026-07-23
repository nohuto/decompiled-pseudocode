/*
 * XREFs of MiObtainReferencedVadEx @ 0x1402BFBA0
 * Callers:
 *     MiGetWorkingSetInfoList @ 0x14025C83C (MiGetWorkingSetInfoList.c)
 *     MiProbeAndLockPrepare @ 0x1402AEBF0 (MiProbeAndLockPrepare.c)
 *     NtGetWriteWatch @ 0x1403373A0 (NtGetWriteWatch.c)
 *     MmUpdateUserShadowStackValue @ 0x1403F4628 (MmUpdateUserShadowStackValue.c)
 *     MiPrefetchPreallocatePages @ 0x140539860 (MiPrefetchPreallocatePages.c)
 *     MmGetEnclaveModuleList @ 0x14054B974 (MmGetEnclaveModuleList.c)
 *     MiProcessVaContiguityInformation @ 0x140552500 (MiProcessVaContiguityInformation.c)
 *     MmRotatePhysicalView @ 0x1405E48E0 (MmRotatePhysicalView.c)
 *     MmFlushVirtualMemory @ 0x1405E85C4 (MmFlushVirtualMemory.c)
 *     MiCheckShadowStackOverflow @ 0x1405F4DDC (MiCheckShadowStackOverflow.c)
 *     NtAreMappedFilesTheSame @ 0x14061C730 (NtAreMappedFilesTheSame.c)
 *     MmStoreFreeVirtualMemory @ 0x14061E080 (MmStoreFreeVirtualMemory.c)
 *     MmSecureVirtualMemoryAgainstWrites @ 0x140657018 (MmSecureVirtualMemoryAgainstWrites.c)
 *     MiUnmapViewOfSection @ 0x140687D60 (MiUnmapViewOfSection.c)
 *     MmSecureVirtualMemoryEx @ 0x140689890 (MmSecureVirtualMemoryEx.c)
 *     MiCfgMarkValidEntries @ 0x1406BE004 (MiCfgMarkValidEntries.c)
 *     MiProcessVaRangesInfoClass @ 0x1406BE204 (MiProcessVaRangesInfoClass.c)
 *     MiReferenceCfgVad @ 0x1406C10DC (MiReferenceCfgVad.c)
 *     MiAllocateVirtualMemory @ 0x1406E7DB0 (MiAllocateVirtualMemory.c)
 *     MmProtectVirtualMemory @ 0x1406E97C0 (MmProtectVirtualMemory.c)
 *     MmDeleteTeb @ 0x1407007B0 (MmDeleteTeb.c)
 *     NtResetWriteWatch @ 0x140704430 (NtResetWriteWatch.c)
 *     MmFreeVirtualMemory @ 0x1407049E0 (MmFreeVirtualMemory.c)
 *     MiUnmapLockedPagesInUserSpace @ 0x14076DE5C (MiUnmapLockedPagesInUserSpace.c)
 *     MmGetFileNameForAddress @ 0x1408C41A4 (MmGetFileNameForAddress.c)
 *     MmSetGraphicsPtes @ 0x1408C7010 (MmSetGraphicsPtes.c)
 *     MiSetImageHotPatchAllowed @ 0x1408CE664 (MiSetImageHotPatchAllowed.c)
 *     MiQueryMemoryPhysicalContiguity @ 0x1408D1400 (MiQueryMemoryPhysicalContiguity.c)
 *     MiHandleEnclaveFault @ 0x1408D1E68 (MiHandleEnclaveFault.c)
 *     MiInitializeEnclave @ 0x1408D30F0 (MiInitializeEnclave.c)
 *     MmSelectVsmEnclaveByAddress @ 0x1408D3DD4 (MmSelectVsmEnclaveByAddress.c)
 *     NtLoadEnclaveData @ 0x1408D45B0 (NtLoadEnclaveData.c)
 *     NtTerminateEnclave @ 0x1408D4C30 (NtTerminateEnclave.c)
 *     MiDeleteAllHardwareEnclaves @ 0x1409B18F0 (MiDeleteAllHardwareEnclaves.c)
 * Callees:
 *     MiUnlockVadShared @ 0x14027C67C (MiUnlockVadShared.c)
 *     MiUnlockAndDereferenceVadShared @ 0x14027C7C0 (MiUnlockAndDereferenceVadShared.c)
 *     MiUnlockAndDereferenceVad @ 0x1402BF880 (MiUnlockAndDereferenceVad.c)
 *     KiCheckForKernelApcDelivery @ 0x1402EEF30 (KiCheckForKernelApcDelivery.c)
 *     UNLOCK_ADDRESS_SPACE_SHARED @ 0x1403534E0 (UNLOCK_ADDRESS_SPACE_SHARED.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x1403558A0 (ExAcquirePushLockSharedEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140355AE0 (KiLeaveGuardedRegionUnsafe.c)
 *     MiWaitForVadDeletion @ 0x14055C050 (MiWaitForVadDeletion.c)
 */

__int64 __fastcall MiObtainReferencedVadEx(unsigned __int64 a1, char a2, int *a3)
{
  struct _KTHREAD *CurrentThread; // rdi
  _KPROCESS *Process; // r14
  _KPROCESS *v8; // rdx
  __int64 v9; // rbx
  unsigned __int64 v10; // rsi
  ULONG_PTR v11; // rcx
  int v12; // r15d
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  bool v17; // zf
  int v19; // edx
  int v20; // eax

  *a3 = 0;
  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
  --CurrentThread->SpecialApcDisable;
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&Process[1].Affinity.Bitmap[7], 0LL);
  LOBYTE(CurrentThread[1].Queue) |= 2u;
  v8 = KeGetCurrentThread()->ApcState.Process;
  v9 = *(_QWORD *)&v8[1].Spare2[23];
  if ( !v9 )
  {
LABEL_15:
    v19 = -1073741664;
    if ( (Process[1].DirectoryTableBase & 0x2000000000LL) != 0 )
      v19 = -1073741558;
    goto LABEL_17;
  }
  v10 = a1 >> 12;
  if ( v10 < (*(unsigned int *)(v9 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v9 + 32) << 32))
    || v10 > (*(unsigned int *)(v9 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v9 + 33) << 32)) )
  {
    v9 = *(_QWORD *)&v8[1].Spare2[15];
    if ( v9 )
    {
      while ( 1 )
      {
        if ( v10 > (*(unsigned int *)(v9 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v9 + 33) << 32)) )
        {
          v9 = *(_QWORD *)(v9 + 8);
        }
        else
        {
          if ( v10 >= (*(unsigned int *)(v9 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v9 + 32) << 32)) )
          {
            *(_QWORD *)&v8[1].Spare2[23] = v9;
            goto LABEL_4;
          }
          v9 = *(_QWORD *)v9;
        }
        if ( !v9 )
          goto LABEL_15;
      }
    }
    goto LABEL_15;
  }
LABEL_4:
  if ( (a2 & 1) == 0 && (Process[1].DirectoryTableBase & 0x2000000000LL) != 0 )
  {
    v19 = -1073741558;
LABEL_17:
    *a3 = v19;
    UNLOCK_ADDRESS_SPACE_SHARED(CurrentThread, Process);
    KiLeaveGuardedRegionUnsafe(CurrentThread);
    return 0LL;
  }
  if ( !_InterlockedIncrement((volatile signed __int32 *)(v9 + 36)) )
    __fastfail(0xEu);
  UNLOCK_ADDRESS_SPACE_SHARED(CurrentThread, Process);
  --CurrentThread->SpecialApcDisable;
  v11 = v9 + 40;
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
  v17 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v17 && ($C459BD0D405E8E46662177FB3D0A143F *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery(v14, v13, v15, v16);
  if ( (*(_DWORD *)(v9 + 48) & 4) != 0 )
  {
    if ( v12 )
    {
      MiUnlockVadShared((__int64)CurrentThread, v9);
      --CurrentThread->SpecialApcDisable;
      ExAcquirePushLockExclusiveEx(v9 + 40, 0LL);
      LOBYTE(CurrentThread[1].Queue) |= 0x80u;
    }
    MiWaitForVadDeletion(v9);
    MiUnlockAndDereferenceVad((char *)v9);
    v20 = -1073741558;
    if ( (Process[1].DirectoryTableBase & 0x2000000000LL) == 0 )
      v20 = -1073741664;
    *a3 = v20;
  }
  else
  {
    if ( v10 >= (*(unsigned int *)(v9 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v9 + 32) << 32))
      && v10 <= (*(unsigned int *)(v9 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v9 + 33) << 32)) )
    {
      return v9;
    }
    if ( v12 )
      MiUnlockAndDereferenceVadShared((char *)v9);
    else
      MiUnlockAndDereferenceVad((char *)v9);
    *a3 = -1073741664;
  }
  return 0LL;
}
