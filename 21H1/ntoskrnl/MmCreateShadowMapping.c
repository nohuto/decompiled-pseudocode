/*
 * XREFs of MmCreateShadowMapping @ 0x1407824F8
 * Callers:
 *     KeAllocateProcessorProfileStructures @ 0x1403AC860 (KeAllocateProcessorProfileStructures.c)
 *     KiShadowProcessorAllocation @ 0x14099A884 (KiShadowProcessorAllocation.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x14025E290 (KiUnstackDetachProcess.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140260DE0 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     MiGetPteAddress @ 0x14027AF40 (MiGetPteAddress.c)
 *     KiStackAttachProcess @ 0x1402A88C0 (KiStackAttachProcess.c)
 *     MiInitializeColorBase @ 0x140310E1C (MiInitializeColorBase.c)
 *     MiCleanupPageTablePages @ 0x140326464 (MiCleanupPageTablePages.c)
 *     MiGetPageTablePages @ 0x1403290D0 (MiGetPageTablePages.c)
 *     ExfTryToWakePushLock @ 0x14035A680 (ExfTryToWakePushLock.c)
 *     MiPageTablesNeeded @ 0x1403ABFC0 (MiPageTablesNeeded.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     memset @ 0x140408F80 (memset.c)
 *     MiMakeShadowPageTableRange @ 0x1407826C0 (MiMakeShadowPageTableRange.c)
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
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // r8
  _DWORD *v18; // r9
  __int64 v20; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD v21[38]; // [rsp+40h] [rbp-C0h] BYREF
  _OWORD v22[3]; // [rsp+170h] [rbp+70h] BYREF
  char v23; // [rsp+1A0h] [rbp+A0h] BYREF

  v20 = 0LL;
  memset(v22, 0, sizeof(v22));
  memset(v21, 0, 0x128uLL);
  LODWORD(v21[8]) = 1;
  v21[4] = &MiSystemPartition;
  LODWORD(v21[7]) = 12;
  v4 = a2 + PteAddress - 1;
  MiInitializeColorBase(PteAddress, 0, (__int64)&v21[34]);
  v5 = MiPageTablesNeeded(PteAddress, v4);
  if ( (int)MiGetPageTablePages((__int64)v21, v5, &v20) < 0 )
    return 0LL;
  v21[3] = v20;
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
    KiStackAttachProcess(PsInitialSystemProcess, 0LL, (__int64)v22, v7);
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C4DD08, 0LL);
  MiMakeShadowPageTableRange(PteAddress, v4, (unsigned int)&v23, 3, (__int64)v21);
  v13 = _InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C4DD08, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v13 & 2) != 0 && (v13 & 4) == 0 )
    ExfTryToWakePushLock(&qword_140C4DD08);
  KeAbPostRelease((ULONG_PTR)&qword_140C4DD08);
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread, v14, v15, v16);
  if ( Process != v11 )
    KiUnstackDetachProcess((__int64)v22, 0LL, v17, v18);
  MiCleanupPageTablePages((__int64)v21);
  return 1LL;
}
