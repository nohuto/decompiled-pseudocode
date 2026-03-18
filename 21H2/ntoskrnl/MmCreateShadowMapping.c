/*
 * XREFs of MmCreateShadowMapping @ 0x14082A644
 * Callers:
 *     KeAllocateProcessorProfileStructures @ 0x1403D83A0 (KeAllocateProcessorProfileStructures.c)
 *     KiShadowProcessorAllocation @ 0x140A5A148 (KiShadowProcessorAllocation.c)
 * Callees:
 *     MiGetPfnLink @ 0x140258680 (MiGetPfnLink.c)
 *     MiCleanupPageTablePages @ 0x14026DFF0 (MiCleanupPageTablePages.c)
 *     MiInitializeColorBase @ 0x14026E158 (MiInitializeColorBase.c)
 *     MiInitializeLargePfnList @ 0x14026E1F4 (MiInitializeLargePfnList.c)
 *     MiGetPageTablePages @ 0x14027D03C (MiGetPageTablePages.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     KiUnstackDetachProcess @ 0x1402D0930 (KiUnstackDetachProcess.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     KiStackAttachProcess @ 0x14030D5C0 (KiStackAttachProcess.c)
 *     MiGetPteAddress @ 0x140313C70 (MiGetPteAddress.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     MiPageTablesNeeded @ 0x1403C25CC (MiPageTablesNeeded.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     MiMakeShadowPageTableRange @ 0x14082A864 (MiMakeShadowPageTableRange.c)
 */

__int64 __fastcall MmCreateShadowMapping(unsigned __int64 PteAddress, __int64 a2)
{
  unsigned __int64 v4; // r12
  __int64 v5; // r9
  unsigned __int64 v6; // rax
  __int64 v7; // rcx
  __int64 PfnLink; // rax
  _QWORD **v9; // rdx
  _QWORD *v10; // rcx
  __int64 v11; // rax
  _DWORD *v12; // r9
  __int64 *v13; // rdx
  __int64 v14; // r8
  struct _KTHREAD *CurrentThread; // rbx
  PEPROCESS v16; // rdi
  struct _KPROCESS *Process; // r15
  char v18; // si
  bool v19; // zf
  __int64 v21; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD v22[46]; // [rsp+40h] [rbp-C0h] BYREF
  _OWORD v23[3]; // [rsp+1B0h] [rbp+B0h] BYREF
  char v24; // [rsp+1E0h] [rbp+E0h] BYREF

  v21 = 0LL;
  memset(v23, 0, sizeof(v23));
  memset(v22, 0, 0x168uLL);
  v4 = a2 + PteAddress - 1;
  MiInitializeLargePfnList(v22);
  LODWORD(v22[15]) = 12;
  v22[12] = &MiSystemPartition;
  LODWORD(v22[16]) = 1;
  MiInitializeColorBase(PteAddress, 0LL, (__int64)&v22[42], v5);
  v6 = MiPageTablesNeeded(PteAddress, v4);
  if ( (int)MiGetPageTablePages((__int64)v22, v6, 0, &v21) < 0 )
    return 0LL;
  v7 = v21;
  if ( v21 )
  {
    do
    {
      PfnLink = MiGetPfnLink(v7);
      if ( *v9 != &v22[9] )
        __fastfail(3u);
      v10[1] = v9;
      *v10 = &v22[9];
      *v9 = v10;
      ++v22[11];
      v22[10] = v10;
      v7 = PfnLink;
    }
    while ( PfnLink );
  }
  do
  {
    PteAddress = MiGetPteAddress(PteAddress);
    v11 = MiGetPteAddress(v4);
    *v13 = v11;
    v4 = v11;
    *(v13 - 1) = PteAddress;
  }
  while ( v14 != 1 );
  CurrentThread = KeGetCurrentThread();
  v16 = PsInitialSystemProcess;
  Process = CurrentThread->ApcState.Process;
  if ( Process != PsInitialSystemProcess )
    KiStackAttachProcess(PsInitialSystemProcess, 0LL, (__int64)v23, v12);
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C50628, 0LL);
  MiMakeShadowPageTableRange(PteAddress, v4, (unsigned int)&v24, 3, (__int64)v22);
  v18 = _InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C50628, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v18 & 2) != 0 && (v18 & 4) == 0 )
    ExfTryToWakePushLock(&qword_140C50628);
  KeAbPostRelease((ULONG_PTR)&qword_140C50628);
  v19 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v19 && ($CEA84C04E3712D858E5667A507841A2A *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
  if ( Process != v16 )
    KiUnstackDetachProcess((__int64)v23, 0LL);
  MiCleanupPageTablePages((__int64)v22);
  return 1LL;
}
