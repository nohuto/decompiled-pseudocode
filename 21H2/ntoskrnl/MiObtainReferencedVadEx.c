/*
 * XREFs of MiObtainReferencedVadEx @ 0x14030E7C0
 * Callers:
 *     NtGetWriteWatch @ 0x1402CF630 (NtGetWriteWatch.c)
 *     MiGetWorkingSetInfoList @ 0x1402E67E8 (MiGetWorkingSetInfoList.c)
 *     MiProbeAndLockPrepare @ 0x140319F70 (MiProbeAndLockPrepare.c)
 *     MiPrefetchPreallocatePages @ 0x140594C08 (MiPrefetchPreallocatePages.c)
 *     MmUpdateUserShadowStackValue @ 0x1405A7A98 (MmUpdateUserShadowStackValue.c)
 *     MmGetEnclaveModuleList @ 0x1405AA214 (MmGetEnclaveModuleList.c)
 *     MiProcessVaContiguityInformation @ 0x1405B4EA0 (MiProcessVaContiguityInformation.c)
 *     MmRotatePhysicalView @ 0x140660170 (MmRotatePhysicalView.c)
 *     MmSecureVirtualMemoryEx @ 0x1406A2440 (MmSecureVirtualMemoryEx.c)
 *     MiCheckForUserStackOverflow @ 0x1406B42F4 (MiCheckForUserStackOverflow.c)
 *     MiUnmapLockedPagesInUserSpace @ 0x1406E2C14 (MiUnmapLockedPagesInUserSpace.c)
 *     MiUnmapViewOfSection @ 0x1406F8D30 (MiUnmapViewOfSection.c)
 *     NtResetWriteWatch @ 0x140700F70 (NtResetWriteWatch.c)
 *     MiProcessVaRangesInfoClass @ 0x140753B20 (MiProcessVaRangesInfoClass.c)
 *     MiCfgMarkValidEntries @ 0x140753C58 (MiCfgMarkValidEntries.c)
 *     MiReferenceCfgVad @ 0x14075876C (MiReferenceCfgVad.c)
 *     MmDeleteTeb @ 0x14079EE84 (MmDeleteTeb.c)
 *     MmSecureVirtualMemoryAgainstWrites @ 0x1407A4A8C (MmSecureVirtualMemoryAgainstWrites.c)
 *     MmFreeVirtualMemory @ 0x1407B99C0 (MmFreeVirtualMemory.c)
 *     MmProtectVirtualMemory @ 0x1407B9FA0 (MmProtectVirtualMemory.c)
 *     MiCopyVirtualMemory @ 0x1407BB560 (MiCopyVirtualMemory.c)
 *     MiAllocateVirtualMemory @ 0x1407BE3C0 (MiAllocateVirtualMemory.c)
 *     MmFlushVirtualMemory @ 0x1407F0478 (MmFlushVirtualMemory.c)
 *     NtAreMappedFilesTheSame @ 0x1407FAEE0 (NtAreMappedFilesTheSame.c)
 *     MmStoreFreeVirtualMemory @ 0x1408042A4 (MmStoreFreeVirtualMemory.c)
 *     MmGetFileNameForAddress @ 0x140881A9A (MmGetFileNameForAddress.c)
 *     MmSetGraphicsPtes @ 0x14096B560 (MmSetGraphicsPtes.c)
 *     MiGetVadForHotPatchInProgress @ 0x140973534 (MiGetVadForHotPatchInProgress.c)
 *     MiQueryMemoryPhysicalContiguity @ 0x140978430 (MiQueryMemoryPhysicalContiguity.c)
 *     MiHandleEnclaveFault @ 0x140978EDC (MiHandleEnclaveFault.c)
 *     MiInitializeEnclave @ 0x14097A120 (MiInitializeEnclave.c)
 *     MmSelectVsmEnclaveByAddress @ 0x14097AC7C (MmSelectVsmEnclaveByAddress.c)
 *     NtLoadEnclaveData @ 0x14097B500 (NtLoadEnclaveData.c)
 *     NtTerminateEnclave @ 0x14097BB30 (NtTerminateEnclave.c)
 *     MiDeleteAllHardwareEnclaves @ 0x140A6A570 (MiDeleteAllHardwareEnclaves.c)
 * Callees:
 *     MiWaitForVadDeletion @ 0x140202010 (MiWaitForVadDeletion.c)
 *     MiUnlockVadShared @ 0x140280EF8 (MiUnlockVadShared.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     UNLOCK_ADDRESS_SPACE_SHARED @ 0x14030EA00 (UNLOCK_ADDRESS_SPACE_SHARED.c)
 *     MiUnlockAndDereferenceVadShared @ 0x14030EA70 (MiUnlockAndDereferenceVadShared.c)
 *     MiUnlockAndDereferenceVad @ 0x14032E700 (MiUnlockAndDereferenceVad.c)
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
  bool v13; // zf
  int v15; // eax
  int v16; // eax

  *a3 = 0;
  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
  --CurrentThread->SpecialApcDisable;
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&Process[1].Affinity.StaticBitmap[7], 0LL);
  LOBYTE(CurrentThread[1].Queue) |= 2u;
  v8 = KeGetCurrentThread()->ApcState.Process;
  v9 = *(_QWORD *)&v8[1].Spare2[23];
  if ( !v9 )
  {
LABEL_16:
    v15 = -1073741558;
    if ( (Process[1].DirectoryTableBase & 0x2000000000LL) == 0 )
      v15 = -1073741664;
    goto LABEL_18;
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
          goto LABEL_16;
      }
    }
    goto LABEL_16;
  }
LABEL_4:
  if ( (a2 & 1) == 0 && (Process[1].DirectoryTableBase & 0x2000000000LL) != 0 )
  {
    v15 = -1073741558;
LABEL_18:
    *a3 = v15;
    UNLOCK_ADDRESS_SPACE_SHARED(CurrentThread, Process);
    v13 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v13 && ($CEA84C04E3712D858E5667A507841A2A *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery();
    return 0LL;
  }
  if ( !_InterlockedIncrement((volatile signed __int32 *)(v9 + 36)) )
    __fastfail(0xEu);
  UNLOCK_ADDRESS_SPACE_SHARED(CurrentThread, Process);
  v11 = v9 + 40;
  v12 = a2 & 2;
  --CurrentThread->SpecialApcDisable;
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
  if ( v13 && ($CEA84C04E3712D858E5667A507841A2A *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
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
    MiUnlockAndDereferenceVad((PVOID)v9);
    v16 = -1073741558;
    if ( (Process[1].DirectoryTableBase & 0x2000000000LL) == 0 )
      v16 = -1073741664;
    *a3 = v16;
  }
  else
  {
    if ( v10 >= (*(unsigned int *)(v9 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v9 + 32) << 32))
      && v10 <= (*(unsigned int *)(v9 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v9 + 33) << 32)) )
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
