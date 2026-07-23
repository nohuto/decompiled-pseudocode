/*
 * XREFs of MmCreateShadowMapping @ 0x1407A02AC
 * Callers:
 *     KeAllocateProcessorProfileStructures @ 0x1403B6640 (KeAllocateProcessorProfileStructures.c)
 *     KiShadowProcessorAllocation @ 0x1409A0924 (KiShadowProcessorAllocation.c)
 * Callees:
 *     KiStackAttachProcess @ 0x14027D850 (KiStackAttachProcess.c)
 *     MiGetPageTablePages @ 0x140296CF0 (MiGetPageTablePages.c)
 *     KiUnstackDetachProcess @ 0x1402AB900 (KiUnstackDetachProcess.c)
 *     ExfTryToWakePushLock @ 0x1402FC2C0 (ExfTryToWakePushLock.c)
 *     MiCleanupPageTablePages @ 0x14030803C (MiCleanupPageTablePages.c)
 *     MiInitializeColorBase @ 0x1403081C8 (MiInitializeColorBase.c)
 *     MiGetPteAddress @ 0x140322E50 (MiGetPteAddress.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140355AE0 (KiLeaveGuardedRegionUnsafe.c)
 *     MiPageTablesNeeded @ 0x1403B5DA0 (MiPageTablesNeeded.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memset @ 0x140414300 (memset.c)
 *     MiMakeShadowPageTableRange @ 0x1407A0474 (MiMakeShadowPageTableRange.c)
 */

__int64 __fastcall MmCreateShadowMapping(unsigned __int64 PteAddress, __int64 a2)
{
  unsigned __int64 v4; // r15
  unsigned __int64 v5; // rax
  __int64 v6; // rax
  __int64 *v7; // rdx
  __int64 v8; // r8
  struct _KTHREAD *CurrentThread; // rbx
  PEPROCESS v10; // rdi
  struct _KPROCESS *Process; // r12
  char v12; // r14
  __int64 v14; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD v15[38]; // [rsp+40h] [rbp-C0h] BYREF
  _OWORD v16[3]; // [rsp+170h] [rbp+70h] BYREF
  char v17; // [rsp+1A0h] [rbp+A0h] BYREF

  v14 = 0LL;
  memset(v16, 0, sizeof(v16));
  memset(v15, 0, 0x128uLL);
  LODWORD(v15[8]) = 1;
  v15[4] = &MiSystemPartition;
  LODWORD(v15[7]) = 12;
  v4 = a2 + PteAddress - 1;
  MiInitializeColorBase(PteAddress, 0, (__int64)&v15[34]);
  v5 = MiPageTablesNeeded(PteAddress, v4);
  if ( (int)MiGetPageTablePages((__int64)v15, v5, &v14) < 0 )
    return 0LL;
  v15[3] = v14;
  do
  {
    PteAddress = MiGetPteAddress(PteAddress);
    v6 = MiGetPteAddress(v4);
    *v7 = v6;
    v4 = v6;
    *(v7 - 1) = PteAddress;
  }
  while ( v8 != 1 );
  CurrentThread = KeGetCurrentThread();
  v10 = PsInitialSystemProcess;
  Process = CurrentThread->ApcState.Process;
  if ( Process != PsInitialSystemProcess )
    KiStackAttachProcess(PsInitialSystemProcess, 0, (__int64)v16);
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C4DE08, 0LL);
  MiMakeShadowPageTableRange(PteAddress, v4, (unsigned int)&v17, 3, (__int64)v15);
  v12 = _InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C4DE08, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v12 & 2) != 0 && (v12 & 4) == 0 )
    ExfTryToWakePushLock(&qword_140C4DE08);
  KeAbPostRelease((ULONG_PTR)&qword_140C4DE08);
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  if ( Process != v10 )
    KiUnstackDetachProcess((__int64)v16, 0LL);
  MiCleanupPageTablePages((__int64)v15);
  return 1LL;
}
