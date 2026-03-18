/*
 * XREFs of MiSessionCreate @ 0x140771A1C
 * Callers:
 *     MiMapProcessExecutable @ 0x14064EB10 (MiMapProcessExecutable.c)
 *     MmInitializeProcessAddressSpace @ 0x14064EE7C (MmInitializeProcessAddressSpace.c)
 * Callees:
 *     MiChargeCommit @ 0x14021A460 (MiChargeCommit.c)
 *     MiGetProcessPartition @ 0x14021A6D0 (MiGetProcessPartition.c)
 *     MiMakeDemandZeroPte @ 0x1402233A0 (MiMakeDemandZeroPte.c)
 *     MiGetPteAddress @ 0x14027AF40 (MiGetPteAddress.c)
 *     MiReturnCommit @ 0x14027D3E0 (MiReturnCommit.c)
 *     MiPteInShadowRange @ 0x140291700 (MiPteInShadowRange.c)
 *     MiAllocatePool @ 0x1402A0FB0 (MiAllocatePool.c)
 *     MiCreateSystemWsles @ 0x1402B3480 (MiCreateSystemWsles.c)
 *     MiWritePteShadow @ 0x1402F2F20 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402F2F80 (MiPteHasShadow.c)
 *     ExInitializeSessionHeapManager @ 0x14039A0A4 (ExInitializeSessionHeapManager.c)
 *     MiMakeZeroedPageTables @ 0x14039A920 (MiMakeZeroedPageTables.c)
 *     MiDereferenceSession @ 0x1406E07E8 (MiDereferenceSession.c)
 *     MiSessionObjectCreate @ 0x140771C94 (MiSessionObjectCreate.c)
 *     MiInitializeSystemSpaceMap @ 0x140771F60 (MiInitializeSystemSpaceMap.c)
 *     MiInitializeSystemWorkingSetList @ 0x140771FCC (MiInitializeSystemWorkingSetList.c)
 *     MiInitializeDynamicBitmap @ 0x1407720EC (MiInitializeDynamicBitmap.c)
 *     MiSessionCreateInternal @ 0x140772420 (MiSessionCreateInternal.c)
 *     MiInitializeSessionGlobals @ 0x140772CB0 (MiInitializeSessionGlobals.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
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
  __int64 v10; // rax
  int v11; // edx
  __int64 DemandZeroPte; // rdi
  unsigned __int64 v13; // rbx
  int v14; // r12d
  int v15; // ecx
  int v16; // edx
  unsigned __int64 v17; // rax
  PVOID Pool; // rax
  int v19; // ebx
  bool v20; // zf

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
    || !(unsigned int)MiInitializeDynamicBitmap(v3 + 880, qword_140C4DCF0, 0x200000LL, 0LL) )
  {
    goto LABEL_24;
  }
  *(_QWORD *)(v3 + 840) = qword_140C4CCD0;
  *(_QWORD *)(v3 + 832) = 0x10000LL;
  PteAddress = (_QWORD *)MiGetPteAddress(qword_140C4CCD0);
  v7 = MiGetPteAddress(v5 + 0x1FFF);
  v8 = qword_140C4CCD8;
  v9 = v7;
  if ( !qword_140C4CCD8 )
  {
    v8 = ((v7 - (__int64)PteAddress) >> 3) + 1;
    qword_140C4CCD8 = v8;
  }
  if ( !(unsigned int)MiChargeCommit(ProcessPartition, v8, 0) )
    goto LABEL_24;
  if ( !(unsigned int)MiMakeZeroedPageTables((__int64)PteAddress, v9, 1u, 11) )
  {
    MiReturnCommit(ProcessPartition, qword_140C4CCD8);
    goto LABEL_24;
  }
  v10 = qword_140C4CCD8 + *(_QWORD *)(v3 + 48);
  *(_DWORD *)(v3 + 4) |= 8u;
  *(_QWORD *)(v3 + 48) = v10;
  DemandZeroPte = MiMakeDemandZeroPte(4);
  if ( (unsigned __int64)PteAddress > v9 )
    goto LABEL_15;
  do
  {
    v13 = DemandZeroPte;
    v14 = 0;
    if ( !MiPteInShadowRange((unsigned __int64)PteAddress) )
      goto LABEL_11;
    if ( (unsigned int)MiPteHasShadow() )
    {
      v14 = 1;
      if ( HIBYTE(word_140C4DF48) )
        goto LABEL_11;
      v20 = (DemandZeroPte & 1) == 0;
    }
    else
    {
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
        goto LABEL_11;
      v20 = (DemandZeroPte & 1) == 0;
    }
    if ( !v20 )
      v13 = DemandZeroPte | 0x8000000000000000uLL;
LABEL_11:
    *PteAddress = v13;
    if ( v14 )
      MiWritePteShadow((__int64)PteAddress, v13);
    ++PteAddress;
  }
  while ( (unsigned __int64)PteAddress <= v9 );
  v11 = *(_DWORD *)(v3 + 4);
  v4 = v3 + 256;
LABEL_15:
  *(_DWORD *)(v3 + 4) = v11 | 0x10;
  MiInitializeSystemWorkingSetList(ProcessPartition, v4, 1LL);
  v15 = qword_140C4CCE0;
  *(_QWORD *)(v3 + 56) = qword_140C4CCE0;
  v16 = qword_140C4CCE0 - 1;
  *(_QWORD *)(v3 + 64) = qword_140C4CCE0 + 0x1FFFFFFFFFLL;
  result = ExInitializeSessionHeapManager(v15, v16);
  if ( (int)result >= 0 )
  {
    *(_DWORD *)(v3 + 4) |= 0x80u;
    v17 = KeGetCurrentThread()->ApcState.Process[1].AffinityPadding[5];
    *(_QWORD *)(v17 + 168) = 0LL;
    *(_QWORD *)(v17 + 176) = 0x2000000LL;
    *(_DWORD *)(v17 + 4) |= 4u;
    Pool = MiAllocatePool(260, 1uLL, 0x6C6F6F50u);
    if ( Pool )
      ExFreePoolWithTag(Pool, 0);
    *(_DWORD *)(v3 + 4) |= 1u;
    if ( (unsigned int)MiInitializeSystemSpaceMap(v3 + 192) )
    {
      v19 = MiSessionObjectCreate();
      if ( v19 < 0 )
        MiDereferenceSession();
      return (unsigned int)v19;
    }
LABEL_24:
    MiDereferenceSession();
    return 3221225626LL;
  }
  return result;
}
