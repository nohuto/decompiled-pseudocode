/*
 * XREFs of MiObtainReferencedVadEx @ 0x14020E520
 * Callers:
 *     NtGetWriteWatch @ 0x140236CC0 (NtGetWriteWatch.c)
 *     MiProbeAndLockPrepare @ 0x14024EE20 (MiProbeAndLockPrepare.c)
 *     MiGetWorkingSetInfoList @ 0x1403186FC (MiGetWorkingSetInfoList.c)
 *     MmUpdateUserShadowStackValue @ 0x1403EE978 (MmUpdateUserShadowStackValue.c)
 *     MiPrefetchPreallocatePages @ 0x140534150 (MiPrefetchPreallocatePages.c)
 *     MmGetEnclaveModuleList @ 0x140546264 (MmGetEnclaveModuleList.c)
 *     MiProcessVaContiguityInformation @ 0x14054CE20 (MiProcessVaContiguityInformation.c)
 *     MmProtectVirtualMemory @ 0x1405F7EB0 (MmProtectVirtualMemory.c)
 *     NtResetWriteWatch @ 0x1405F8BD0 (NtResetWriteWatch.c)
 *     MmFreeVirtualMemory @ 0x1405F9180 (MmFreeVirtualMemory.c)
 *     MiUnmapViewOfSection @ 0x140600DD0 (MiUnmapViewOfSection.c)
 *     MmDeleteTeb @ 0x140605648 (MmDeleteTeb.c)
 *     MiCfgMarkValidEntries @ 0x140607044 (MiCfgMarkValidEntries.c)
 *     MmSecureVirtualMemoryAgainstWrites @ 0x14062ECA4 (MmSecureVirtualMemoryAgainstWrites.c)
 *     MiAllocateVirtualMemory @ 0x140696560 (MiAllocateVirtualMemory.c)
 *     MiReferenceCfgVad @ 0x1406D5C14 (MiReferenceCfgVad.c)
 *     MmSecureVirtualMemoryEx @ 0x1406DBC70 (MmSecureVirtualMemoryEx.c)
 *     MmRotatePhysicalView @ 0x1406DE780 (MmRotatePhysicalView.c)
 *     MiCheckShadowStackOverflow @ 0x1406E5298 (MiCheckShadowStackOverflow.c)
 *     MmFlushVirtualMemory @ 0x1406FF904 (MmFlushVirtualMemory.c)
 *     MiProcessVaRangesInfoClass @ 0x140700488 (MiProcessVaRangesInfoClass.c)
 *     NtAreMappedFilesTheSame @ 0x14070B3D0 (NtAreMappedFilesTheSame.c)
 *     MmStoreFreeVirtualMemory @ 0x14070CACC (MmStoreFreeVirtualMemory.c)
 *     MiUnmapLockedPagesInUserSpace @ 0x14075B36C (MiUnmapLockedPagesInUserSpace.c)
 *     MmGetFileNameForAddress @ 0x1408C0A44 (MmGetFileNameForAddress.c)
 *     MmSetGraphicsPtes @ 0x1408C38B0 (MmSetGraphicsPtes.c)
 *     MiSetImageHotPatchAllowed @ 0x1408CAF04 (MiSetImageHotPatchAllowed.c)
 *     MiQueryMemoryPhysicalContiguity @ 0x1408CDCA0 (MiQueryMemoryPhysicalContiguity.c)
 *     MiHandleEnclaveFault @ 0x1408CE708 (MiHandleEnclaveFault.c)
 *     MiInitializeEnclave @ 0x1408CF990 (MiInitializeEnclave.c)
 *     MmSelectVsmEnclaveByAddress @ 0x1408D0674 (MmSelectVsmEnclaveByAddress.c)
 *     NtLoadEnclaveData @ 0x1408D0E50 (NtLoadEnclaveData.c)
 *     NtTerminateEnclave @ 0x1408D14D0 (NtTerminateEnclave.c)
 *     MiDeleteAllHardwareEnclaves @ 0x1409ADB50 (MiDeleteAllHardwareEnclaves.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140207AC0 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x140207C80 (ExAcquirePushLockSharedEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140207EC0 (KiLeaveGuardedRegionUnsafe.c)
 *     UNLOCK_ADDRESS_SPACE_SHARED @ 0x14020B330 (UNLOCK_ADDRESS_SPACE_SHARED.c)
 *     MiUnlockAndDereferenceVadShared @ 0x14024B570 (MiUnlockAndDereferenceVadShared.c)
 *     MiUnlockVadShared @ 0x14024C440 (MiUnlockVadShared.c)
 *     KiCheckForKernelApcDelivery @ 0x140273D40 (KiCheckForKernelApcDelivery.c)
 *     MiUnlockAndDereferenceVad @ 0x1402AD420 (MiUnlockAndDereferenceVad.c)
 *     MiWaitForVadDeletion @ 0x140556970 (MiWaitForVadDeletion.c)
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
  bool v13; // zf
  int v15; // edx
  int v16; // eax

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
    v15 = -1073741664;
    if ( (*(_DWORD *)(Process + 1124) & 0x20) != 0 )
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
  if ( (a2 & 1) == 0 && (*(_DWORD *)(Process + 1124) & 0x20) != 0 )
  {
    v15 = -1073741558;
LABEL_17:
    *a3 = v15;
    UNLOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, Process);
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
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
  v13 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v13 && ($C774EFD68449142D8271B1EC1EB7FB26 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
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
    MiUnlockAndDereferenceVad((PVOID)v9);
    v16 = -1073741558;
    if ( (*(_DWORD *)(Process + 1124) & 0x20) == 0 )
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
      MiUnlockAndDereferenceVad((PVOID)v9);
    *a3 = -1073741664;
  }
  return 0LL;
}
