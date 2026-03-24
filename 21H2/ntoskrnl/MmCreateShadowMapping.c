/*
 * XREFs of MmCreateShadowMapping @ 0x1407A00AC
 * Callers:
 *     KeAllocateProcessorProfileStructures @ 0x1403B64D0 (KeAllocateProcessorProfileStructures.c)
 *     KiShadowProcessorAllocation @ 0x14099F9F4 (KiShadowProcessorAllocation.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140207000 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x14025C2E0 (KiStackAttachProcess.c)
 *     MiGetPageTablePages @ 0x1402E59A0 (MiGetPageTablePages.c)
 *     ExfTryToWakePushLock @ 0x1402F1570 (ExfTryToWakePushLock.c)
 *     MiCleanupPageTablePages @ 0x1402FD2EC (MiCleanupPageTablePages.c)
 *     MiInitializeColorBase @ 0x1402FD478 (MiInitializeColorBase.c)
 *     MiGetPteAddress @ 0x140318100 (MiGetPteAddress.c)
 *     KeAbPostRelease @ 0x140348C80 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14034A990 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14034AD90 (KiLeaveGuardedRegionUnsafe.c)
 *     MiPageTablesNeeded @ 0x1403B5C30 (MiPageTablesNeeded.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     memset @ 0x140414200 (memset.c)
 *     MiMakeShadowPageTableRange @ 0x1407A0274 (MiMakeShadowPageTableRange.c)
 */

__int64 __fastcall MmCreateShadowMapping(unsigned __int64 PteAddress, __int64 a2)
{
  unsigned __int64 v4; // r15
  unsigned __int64 v5; // rax
  __int64 v6; // rax
  _DWORD *v7; // r9
  __int64 *v8; // rdx
  __int64 v9; // r8
  struct _KTHREAD *CurrentThread; // rbx
  PEPROCESS v11; // rdi
  struct _KPROCESS *Process; // r12
  char v13; // r14
  __int64 v15; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD v16[38]; // [rsp+40h] [rbp-C0h] BYREF
  _OWORD v17[3]; // [rsp+170h] [rbp+70h] BYREF
  char v18; // [rsp+1A0h] [rbp+A0h] BYREF

  v15 = 0LL;
  memset(v17, 0, sizeof(v17));
  memset(v16, 0, 0x128uLL);
  LODWORD(v16[8]) = 1;
  v16[4] = &MiSystemPartition;
  LODWORD(v16[7]) = 12;
  v4 = a2 + PteAddress - 1;
  MiInitializeColorBase(PteAddress, 0, (__int64)&v16[34]);
  v5 = MiPageTablesNeeded(PteAddress, v4);
  if ( (int)MiGetPageTablePages((__int64)v16, v5, &v15) < 0 )
    return 0LL;
  v16[3] = v15;
  do
  {
    PteAddress = MiGetPteAddress(PteAddress);
    v6 = MiGetPteAddress(v4);
    *v8 = v6;
    v4 = v6;
    *(v8 - 1) = PteAddress;
  }
  while ( v9 != 1 );
  CurrentThread = KeGetCurrentThread();
  v11 = PsInitialSystemProcess;
  Process = CurrentThread->ApcState.Process;
  if ( Process != PsInitialSystemProcess )
    KiStackAttachProcess(PsInitialSystemProcess, 0LL, (__int64)v17, v7);
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C4DDC8, 0LL);
  MiMakeShadowPageTableRange(PteAddress, v4, (unsigned int)&v18, 3, (__int64)v16);
  v13 = _InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C4DDC8, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v13 & 2) != 0 && (v13 & 4) == 0 )
    ExfTryToWakePushLock(&qword_140C4DDC8);
  KeAbPostRelease((ULONG_PTR)&qword_140C4DDC8);
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  if ( Process != v11 )
    KiUnstackDetachProcess((__int64)v17, 0);
  MiCleanupPageTablePages((__int64)v16);
  return 1LL;
}
