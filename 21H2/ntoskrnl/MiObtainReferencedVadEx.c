/*
 * XREFs of MiObtainReferencedVadEx @ 0x14021B2A0
 * Callers:
 *     MiProbeAndLockPrepare @ 0x14020A2F0 (MiProbeAndLockPrepare.c)
 *     MiGetWorkingSetInfoList @ 0x14026E89C (MiGetWorkingSetInfoList.c)
 *     NtGetWriteWatch @ 0x14032C650 (NtGetWriteWatch.c)
 *     MmUpdateUserShadowStackValue @ 0x1403F4628 (MmUpdateUserShadowStackValue.c)
 *     MiPrefetchPreallocatePages @ 0x140539620 (MiPrefetchPreallocatePages.c)
 *     MmGetEnclaveModuleList @ 0x14054B734 (MmGetEnclaveModuleList.c)
 *     MiProcessVaContiguityInformation @ 0x1405522C0 (MiProcessVaContiguityInformation.c)
 *     MiAllocateVirtualMemory @ 0x1405F8650 (MiAllocateVirtualMemory.c)
 *     MmProtectVirtualMemory @ 0x1405FA060 (MmProtectVirtualMemory.c)
 *     MiUnmapViewOfSection @ 0x14061E0F0 (MiUnmapViewOfSection.c)
 *     MmSecureVirtualMemoryEx @ 0x14061FC20 (MmSecureVirtualMemoryEx.c)
 *     MmSecureVirtualMemoryAgainstWrites @ 0x1406621F8 (MmSecureVirtualMemoryAgainstWrites.c)
 *     MmRotatePhysicalView @ 0x140682910 (MmRotatePhysicalView.c)
 *     MmFlushVirtualMemory @ 0x140689134 (MmFlushVirtualMemory.c)
 *     MiCheckShadowStackOverflow @ 0x14069588C (MiCheckShadowStackOverflow.c)
 *     NtAreMappedFilesTheSame @ 0x1406BD520 (NtAreMappedFilesTheSame.c)
 *     MmStoreFreeVirtualMemory @ 0x1406BEF90 (MmStoreFreeVirtualMemory.c)
 *     MmDeleteTeb @ 0x1406E93D0 (MmDeleteTeb.c)
 *     NtResetWriteWatch @ 0x1406ED050 (NtResetWriteWatch.c)
 *     MmFreeVirtualMemory @ 0x1406ED600 (MmFreeVirtualMemory.c)
 *     MiCfgMarkValidEntries @ 0x14070F9B4 (MiCfgMarkValidEntries.c)
 *     MiProcessVaRangesInfoClass @ 0x14070FBB4 (MiProcessVaRangesInfoClass.c)
 *     MiReferenceCfgVad @ 0x140712A8C (MiReferenceCfgVad.c)
 *     MiUnmapLockedPagesInUserSpace @ 0x14076DC9C (MiUnmapLockedPagesInUserSpace.c)
 *     MmGetFileNameForAddress @ 0x1408C4044 (MmGetFileNameForAddress.c)
 *     MmSetGraphicsPtes @ 0x1408C6EB0 (MmSetGraphicsPtes.c)
 *     MiSetImageHotPatchAllowed @ 0x1408CE504 (MiSetImageHotPatchAllowed.c)
 *     MiQueryMemoryPhysicalContiguity @ 0x1408D12A0 (MiQueryMemoryPhysicalContiguity.c)
 *     MiHandleEnclaveFault @ 0x1408D1D08 (MiHandleEnclaveFault.c)
 *     MiInitializeEnclave @ 0x1408D2F90 (MiInitializeEnclave.c)
 *     MmSelectVsmEnclaveByAddress @ 0x1408D3C74 (MmSelectVsmEnclaveByAddress.c)
 *     NtLoadEnclaveData @ 0x1408D4450 (NtLoadEnclaveData.c)
 *     NtTerminateEnclave @ 0x1408D4AD0 (NtTerminateEnclave.c)
 *     MiDeleteAllHardwareEnclaves @ 0x1409B09C0 (MiDeleteAllHardwareEnclaves.c)
 * Callees:
 *     MiUnlockAndDereferenceVad @ 0x14021AF80 (MiUnlockAndDereferenceVad.c)
 *     KiCheckForKernelApcDelivery @ 0x14024A6E0 (KiCheckForKernelApcDelivery.c)
 *     MiUnlockVadShared @ 0x14025B10C (MiUnlockVadShared.c)
 *     MiUnlockAndDereferenceVadShared @ 0x14025B250 (MiUnlockAndDereferenceVadShared.c)
 *     UNLOCK_ADDRESS_SPACE_SHARED @ 0x140348790 (UNLOCK_ADDRESS_SPACE_SHARED.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14034A990 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x14034AB50 (ExAcquirePushLockSharedEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14034AD90 (KiLeaveGuardedRegionUnsafe.c)
 *     MiWaitForVadDeletion @ 0x14055BE10 (MiWaitForVadDeletion.c)
 */

volatile signed __int32 *__fastcall MiObtainReferencedVadEx(unsigned __int64 a1, char a2, int *a3)
{
  struct _KTHREAD *CurrentThread; // rdi
  _KPROCESS *Process; // r14
  _KPROCESS *v8; // rdx
  volatile signed __int32 *v9; // rbx
  unsigned __int64 v10; // rsi
  ULONG_PTR v11; // rcx
  int v12; // r15d
  bool v13; // zf
  int v15; // edx
  int v16; // eax

  *a3 = 0;
  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
  --CurrentThread->SpecialApcDisable;
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&Process[1].Affinity.Bitmap[7], 0LL);
  LOBYTE(CurrentThread[1].Queue) |= 2u;
  v8 = KeGetCurrentThread()->ApcState.Process;
  v9 = *(volatile signed __int32 **)&v8[1].Spare2[23];
  if ( !v9 )
  {
LABEL_15:
    v15 = -1073741664;
    if ( (Process[1].DirectoryTableBase & 0x2000000000LL) != 0 )
      v15 = -1073741558;
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
  if ( (a2 & 1) == 0 && (Process[1].DirectoryTableBase & 0x2000000000LL) != 0 )
  {
    v15 = -1073741558;
LABEL_17:
    *a3 = v15;
    UNLOCK_ADDRESS_SPACE_SHARED(CurrentThread, Process);
    KiLeaveGuardedRegionUnsafe(CurrentThread);
    return 0LL;
  }
  if ( !_InterlockedIncrement(v9 + 9) )
    __fastfail(0xEu);
  UNLOCK_ADDRESS_SPACE_SHARED(CurrentThread, Process);
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
  v13 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v13 && ($C459BD0D405E8E46662177FB3D0A143F *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
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
    v16 = -1073741558;
    if ( (Process[1].DirectoryTableBase & 0x2000000000LL) == 0 )
      v16 = -1073741664;
    *a3 = v16;
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
