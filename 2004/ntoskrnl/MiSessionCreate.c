/*
 * XREFs of MiSessionCreate @ 0x140773E2C
 * Callers:
 *     MmInitializeProcessAddressSpace @ 0x1406B424C (MmInitializeProcessAddressSpace.c)
 *     MiMapProcessExecutable @ 0x1406B4D28 (MiMapProcessExecutable.c)
 * Callees:
 *     MiGetPteAddress @ 0x140221EF0 (MiGetPteAddress.c)
 *     MiReturnCommit @ 0x140224390 (MiReturnCommit.c)
 *     MiPteInShadowRange @ 0x1402386B0 (MiPteInShadowRange.c)
 *     MiAllocatePool @ 0x140247F80 (MiAllocatePool.c)
 *     MiCreateSystemWsles @ 0x14025A450 (MiCreateSystemWsles.c)
 *     MiChargeCommit @ 0x1402ACF70 (MiChargeCommit.c)
 *     MiGetProcessPartition @ 0x1402AD1E0 (MiGetProcessPartition.c)
 *     MiMakeDemandZeroPte @ 0x1402B6020 (MiMakeDemandZeroPte.c)
 *     MiWritePteShadow @ 0x14032ECC0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14032ED20 (MiPteHasShadow.c)
 *     ExInitializeSessionHeapManager @ 0x14039A834 (ExInitializeSessionHeapManager.c)
 *     MiMakeZeroedPageTables @ 0x14039B0B0 (MiMakeZeroedPageTables.c)
 *     MiDereferenceSession @ 0x140703578 (MiDereferenceSession.c)
 *     MiSessionObjectCreate @ 0x1407740A4 (MiSessionObjectCreate.c)
 *     MiInitializeSystemSpaceMap @ 0x140774370 (MiInitializeSystemSpaceMap.c)
 *     MiInitializeSystemWorkingSetList @ 0x1407743DC (MiInitializeSystemWorkingSetList.c)
 *     MiInitializeDynamicBitmap @ 0x1407744FC (MiInitializeDynamicBitmap.c)
 *     MiSessionCreateInternal @ 0x140774830 (MiSessionCreateInternal.c)
 *     MiInitializeSessionGlobals @ 0x1407750C0 (MiInitializeSessionGlobals.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 */

__int64 MiSessionCreate()
{
  __int64 result; // rax
  _KPROCESS *Process; // rsi
  __int64 ProcessPartition; // rbp
  unsigned __int64 v3; // rsi
  unsigned __int64 v4; // r13
  __int64 v5; // rdx
  _QWORD *PteAddress; // r14
  __int64 v7; // rax
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // r15
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rax
  __int64 v13; // rdx
  int v14; // edx
  __int64 DemandZeroPte; // rdi
  unsigned __int64 v16; // rbx
  int v17; // r12d
  __int64 v18; // r8
  int v19; // ecx
  int v20; // edx
  unsigned __int64 v21; // rax
  PVOID Pool; // rax
  int v23; // ebx
  bool v24; // zf

  result = MiInitializeSessionGlobals();
  if ( (int)result < 0 )
    return result;
  Process = KeGetCurrentThread()->ApcState.Process;
  ProcessPartition = MiGetProcessPartition((__int64)Process);
  result = MiSessionCreateInternal(ProcessPartition);
  if ( (int)result < 0 )
    return result;
  v3 = Process[1].AffinityPadding[5];
  v4 = v3 + 256;
  if ( !(unsigned int)MiCreateSystemWsles()
    || !(unsigned int)MiInitializeDynamicBitmap(v3 + 880, qword_140C4DBB0, 0x200000LL, 0LL) )
  {
    goto LABEL_24;
  }
  *(_QWORD *)(v3 + 840) = qword_140C4CB90;
  *(_QWORD *)(v3 + 832) = 0x10000LL;
  PteAddress = (_QWORD *)MiGetPteAddress(qword_140C4CB90);
  v7 = MiGetPteAddress(v5 + 0x1FFF);
  v8 = qword_140C4CB98;
  v9 = v7;
  if ( !qword_140C4CB98 )
  {
    v8 = ((v7 - (__int64)PteAddress) >> 3) + 1;
    qword_140C4CB98 = v8;
  }
  if ( !(unsigned int)MiChargeCommit(ProcessPartition, v8, 0) )
    goto LABEL_24;
  if ( !(unsigned int)MiMakeZeroedPageTables((__int64)PteAddress, v9, 1u, 11) )
  {
    MiReturnCommit(ProcessPartition, qword_140C4CB98);
    goto LABEL_24;
  }
  v12 = qword_140C4CB98 + *(_QWORD *)(v3 + 48);
  *(_DWORD *)(v3 + 4) |= 8u;
  v13 = *(unsigned int *)(v3 + 4);
  *(_QWORD *)(v3 + 48) = v12;
  DemandZeroPte = MiMakeDemandZeroPte(4, v13, v10, v11);
  if ( (unsigned __int64)PteAddress > v9 )
    goto LABEL_15;
  do
  {
    v16 = DemandZeroPte;
    v17 = 0;
    if ( !MiPteInShadowRange((unsigned __int64)PteAddress) )
      goto LABEL_11;
    if ( (unsigned int)MiPteHasShadow() )
    {
      v17 = 1;
      if ( HIBYTE(word_140C4DE08) )
        goto LABEL_11;
      v24 = (DemandZeroPte & 1) == 0;
    }
    else
    {
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
        goto LABEL_11;
      v24 = (DemandZeroPte & 1) == 0;
    }
    if ( !v24 )
      v16 = DemandZeroPte | 0x8000000000000000uLL;
LABEL_11:
    *PteAddress = v16;
    if ( v17 )
      MiWritePteShadow((__int64)PteAddress, v16, v18);
    ++PteAddress;
  }
  while ( (unsigned __int64)PteAddress <= v9 );
  v14 = *(_DWORD *)(v3 + 4);
  v4 = v3 + 256;
LABEL_15:
  *(_DWORD *)(v3 + 4) = v14 | 0x10;
  MiInitializeSystemWorkingSetList(ProcessPartition, v4, 1LL);
  v19 = qword_140C4CBA0;
  *(_QWORD *)(v3 + 56) = qword_140C4CBA0;
  v20 = qword_140C4CBA0 - 1;
  *(_QWORD *)(v3 + 64) = qword_140C4CBA0 + 0x1FFFFFFFFFLL;
  result = ExInitializeSessionHeapManager(v19, v20);
  if ( (int)result >= 0 )
  {
    *(_DWORD *)(v3 + 4) |= 0x80u;
    v21 = KeGetCurrentThread()->ApcState.Process[1].AffinityPadding[5];
    *(_QWORD *)(v21 + 168) = 0LL;
    *(_QWORD *)(v21 + 176) = 0x2000000LL;
    *(_DWORD *)(v21 + 4) |= 4u;
    Pool = MiAllocatePool(260, 1uLL, 0x6C6F6F50u);
    if ( Pool )
      ExFreePoolWithTag(Pool, 0);
    *(_DWORD *)(v3 + 4) |= 1u;
    if ( (unsigned int)MiInitializeSystemSpaceMap(v3 + 192) )
    {
      v23 = MiSessionObjectCreate();
      if ( v23 < 0 )
        MiDereferenceSession();
      return (unsigned int)v23;
    }
LABEL_24:
    MiDereferenceSession();
    return 3221225626LL;
  }
  return result;
}
