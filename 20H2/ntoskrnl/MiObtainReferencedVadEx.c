/*
 * XREFs of MiObtainReferencedVadEx @ 0x14027CA80
 * Callers:
 *     MiProbeAndLockPrepare @ 0x14026B610 (MiProbeAndLockPrepare.c)
 *     NtGetWriteWatch @ 0x1402AFA60 (NtGetWriteWatch.c)
 *     MiGetWorkingSetInfoList @ 0x14034F6A8 (MiGetWorkingSetInfoList.c)
 *     MmUpdateUserShadowStackValue @ 0x1403F2DE0 (MmUpdateUserShadowStackValue.c)
 *     MiPrefetchPreallocatePages @ 0x140537B20 (MiPrefetchPreallocatePages.c)
 *     MmGetEnclaveModuleList @ 0x140549C34 (MmGetEnclaveModuleList.c)
 *     MiProcessVaContiguityInformation @ 0x1405507F0 (MiProcessVaContiguityInformation.c)
 *     NtResetWriteWatch @ 0x140624640 (NtResetWriteWatch.c)
 *     MmFreeVirtualMemory @ 0x140624BF0 (MmFreeVirtualMemory.c)
 *     MiCfgMarkValidEntries @ 0x140629948 (MiCfgMarkValidEntries.c)
 *     MmDeleteTeb @ 0x140658D4C (MmDeleteTeb.c)
 *     MmRotatePhysicalView @ 0x14065CA40 (MmRotatePhysicalView.c)
 *     MiAllocateVirtualMemory @ 0x14067B2A0 (MiAllocateVirtualMemory.c)
 *     MmProtectVirtualMemory @ 0x14067CCB0 (MmProtectVirtualMemory.c)
 *     MmSecureVirtualMemoryAgainstWrites @ 0x14068317C (MmSecureVirtualMemoryAgainstWrites.c)
 *     MiUnmapViewOfSection @ 0x140685830 (MiUnmapViewOfSection.c)
 *     MmSecureVirtualMemoryEx @ 0x1406B3E40 (MmSecureVirtualMemoryEx.c)
 *     MiCheckShadowStackOverflow @ 0x1406BC158 (MiCheckShadowStackOverflow.c)
 *     MmFlushVirtualMemory @ 0x1406D2554 (MmFlushVirtualMemory.c)
 *     MiProcessVaRangesInfoClass @ 0x1406D371C (MiProcessVaRangesInfoClass.c)
 *     MmStoreFreeVirtualMemory @ 0x1406DEFDC (MmStoreFreeVirtualMemory.c)
 *     MiReferenceCfgVad @ 0x1406F006C (MiReferenceCfgVad.c)
 *     NtAreMappedFilesTheSame @ 0x1406F0FC0 (NtAreMappedFilesTheSame.c)
 *     MiUnmapLockedPagesInUserSpace @ 0x140769C5C (MiUnmapLockedPagesInUserSpace.c)
 *     MmGetFileNameForAddress @ 0x1408C6884 (MmGetFileNameForAddress.c)
 *     MmSetGraphicsPtes @ 0x1408C96F0 (MmSetGraphicsPtes.c)
 *     MiSetImageHotPatchAllowed @ 0x1408D0D44 (MiSetImageHotPatchAllowed.c)
 *     MiQueryMemoryPhysicalContiguity @ 0x1408D3AE0 (MiQueryMemoryPhysicalContiguity.c)
 *     MiHandleEnclaveFault @ 0x1408D4548 (MiHandleEnclaveFault.c)
 *     MiInitializeEnclave @ 0x1408D57D0 (MiInitializeEnclave.c)
 *     MmSelectVsmEnclaveByAddress @ 0x1408D64B4 (MmSelectVsmEnclaveByAddress.c)
 *     NtLoadEnclaveData @ 0x1408D6C90 (NtLoadEnclaveData.c)
 *     NtTerminateEnclave @ 0x1408D7310 (NtTerminateEnclave.c)
 *     MiDeleteAllHardwareEnclaves @ 0x1409B3AC0 (MiDeleteAllHardwareEnclaves.c)
 * Callees:
 *     UNLOCK_ADDRESS_SPACE_SHARED @ 0x14021E7C0 (UNLOCK_ADDRESS_SPACE_SHARED.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140220A40 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x140220C00 (ExAcquirePushLockSharedEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140220E40 (KiLeaveGuardedRegionUnsafe.c)
 *     MiUnlockAndDereferenceVadShared @ 0x14022C070 (MiUnlockAndDereferenceVadShared.c)
 *     MiUnlockAndDereferenceVad @ 0x14027C760 (MiUnlockAndDereferenceVad.c)
 *     KiCheckForKernelApcDelivery @ 0x1402DDA40 (KiCheckForKernelApcDelivery.c)
 *     MiUnlockVadShared @ 0x140338F00 (MiUnlockVadShared.c)
 *     MiWaitForVadDeletion @ 0x14055A340 (MiWaitForVadDeletion.c)
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
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  bool v17; // zf
  int v19; // edx
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
    v19 = -1073741664;
    if ( (*(_DWORD *)(Process + 1124) & 0x20) != 0 )
      v19 = -1073741558;
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
    v19 = -1073741558;
LABEL_17:
    *a3 = v19;
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
  v17 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v17 && ($C774EFD68449142D8271B1EC1EB7FB26 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery(v14, v13, v15, v16);
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
      MiUnlockAndDereferenceVadShared((char *)v9);
    else
      MiUnlockAndDereferenceVad((PVOID)v9);
    *a3 = -1073741664;
  }
  return 0LL;
}
