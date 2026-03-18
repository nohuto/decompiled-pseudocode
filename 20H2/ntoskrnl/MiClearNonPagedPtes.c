/*
 * XREFs of MiClearNonPagedPtes @ 0x140301340
 * Callers:
 *     MmFreePoolMemory @ 0x140237AB4 (MmFreePoolMemory.c)
 *     MiCommitPoolMemory @ 0x1402CAD1C (MiCommitPoolMemory.c)
 *     MmFreeSecurePoolMemory @ 0x140543404 (MmFreeSecurePoolMemory.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14021EA50 (MiPteInShadowRange.c)
 *     MiGetAnyMultiplexedVm @ 0x14024EF1C (MiGetAnyMultiplexedVm.c)
 *     MiWalkPageTables @ 0x14026A5E0 (MiWalkPageTables.c)
 *     MiFastLockLeafPageTable @ 0x14026F9F0 (MiFastLockLeafPageTable.c)
 *     MiUnlockWorkingSetShared @ 0x140270AB0 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x14027B490 (MiLockWorkingSetShared.c)
 *     MiGetLeafVa @ 0x1402B0270 (MiGetLeafVa.c)
 *     MiFillPteHierarchy @ 0x1402CC250 (MiFillPteHierarchy.c)
 *     MiDeleteNonPagedPoolPte @ 0x1403015D0 (MiDeleteNonPagedPoolPte.c)
 *     MiDeleteNonPagedPoolTail @ 0x140301950 (MiDeleteNonPagedPoolTail.c)
 *     MiReturnPhysicalPoolPages @ 0x140301A34 (MiReturnPhysicalPoolPages.c)
 *     MiUnlockPageTableInternal @ 0x14035B910 (MiUnlockPageTableInternal.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     memset @ 0x140411300 (memset.c)
 *     MiLogNonPagedPoolReleaseEvent @ 0x140543124 (MiLogNonPagedPoolReleaseEvent.c)
 */

__int64 __fastcall MiClearNonPagedPtes(ULONG_PTR LeafVa, __int64 a2, unsigned int a3, unsigned int a4)
{
  char v8; // r15
  char *AnyMultiplexedVm; // r12
  unsigned __int64 v10; // r13
  __int64 v11; // rdx
  __int64 v12; // r10
  unsigned __int64 v13; // rsi
  unsigned __int64 v14; // rdi
  __int64 v15; // r10
  unsigned __int64 v16; // rbx
  __int64 v17; // rax
  unsigned __int64 v18; // rbx
  __int64 v19; // rcx
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v22; // rax
  __int64 v23; // rdx
  _OWORD v24[2]; // [rsp+20h] [rbp-E0h] BYREF
  ULONG_PTR BugCheckParameter2[22]; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v26[28]; // [rsp+F0h] [rbp-10h] BYREF

  memset(BugCheckParameter2, 0, sizeof(BugCheckParameter2));
  memset(v26, 0, sizeof(v26));
  v8 = 0;
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(5);
  BugCheckParameter2[4] = LeafVa;
  LOWORD(BugCheckParameter2[0]) = 2183;
  v26[25] = __PAIR64__(a4, a3);
  BugCheckParameter2[19] = (ULONG_PTR)MiDeleteNonPagedPoolPte;
  v10 = (a2 << 12) + LeafVa - 1;
  BugCheckParameter2[5] = v10;
  BugCheckParameter2[20] = (ULONG_PTR)MiDeleteNonPagedPoolTail;
  BugCheckParameter2[21] = (ULONG_PTR)v26;
  v26[1] = 20LL;
  LODWORD(v26[0]) = v11;
  WORD2(v26[0]) = v11;
  v26[2] = v11;
  v26[3] = v11;
  BugCheckParameter2[3] = (ULONG_PTR)AnyMultiplexedVm;
  BYTE6(BugCheckParameter2[0]) = MiLockWorkingSetShared((__int64)AnyMultiplexedVm);
  if ( LeafVa <= v10 )
  {
    do
    {
      memset(v24, 0, sizeof(v24));
      if ( !(unsigned int)MiFastLockLeafPageTable((__int64)AnyMultiplexedVm, LeafVa, 0) )
        break;
      MiFillPteHierarchy(LeafVa, (unsigned __int64 *)v24);
      v13 = *((_QWORD *)v24 + v12);
      v14 = *((_QWORD *)v24 + (int)v12 - 1);
      MiFillPteHierarchy(v10, (unsigned __int64 *)v24);
      v16 = *((_QWORD *)v24 + v15);
      if ( v16 > (v14 & 0xFFFFFFFFFFFFF000uLL | 0xFF8) )
        v16 = v14 & 0xFFFFFFFFFFFFF000uLL | 0xFF8;
      while ( v14 <= v16 )
      {
        MiDeleteNonPagedPoolPte((ULONG_PTR)BugCheckParameter2);
        v17 = (unsigned int)BYTE3(BugCheckParameter2[0]) + 1;
        BYTE3(BugCheckParameter2[0]) = 0;
        v14 += 8 * v17;
      }
      MiDeleteNonPagedPoolTail(BugCheckParameter2);
      v18 = *(_QWORD *)v13;
      if ( MiPteInShadowRange(v13)
        && (MiFlags & 0xC00000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && (v18 & 1) != 0
        && ((v18 & 0x20) == 0 || (v18 & 0x42) == 0) )
      {
        Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( Flink )
        {
          v22 = *((_QWORD *)&Flink->Flink + ((v13 >> 3) & 0x1FF));
          v23 = v18 | 0x20;
          if ( (v22 & 0x20) == 0 )
            v23 = v18;
          v18 = v23;
          if ( (v22 & 0x42) != 0 )
            v18 = v23 | 0x42;
        }
      }
      if ( (*(_QWORD *)(48 * ((v18 >> 12) & 0xFFFFFFFFFLL) - 0x57FFFFFFFE8LL) & 0x3FFFFFFFFFFFFFFFLL) == 1 )
        v8 = 1;
      MiUnlockPageTableInternal(AnyMultiplexedVm);
      LeafVa = MiGetLeafVa(v14);
    }
    while ( LeafVa <= v10 );
    if ( !v8 )
    {
      if ( LeafVa > v10 )
        goto LABEL_14;
      BugCheckParameter2[4] = LeafVa;
    }
    MiWalkPageTables((__int64)BugCheckParameter2);
  }
LABEL_14:
  MiUnlockWorkingSetShared((__int64)AnyMultiplexedVm, BYTE6(BugCheckParameter2[0]));
  v19 = v26[23];
  if ( v26[23] )
  {
    if ( (BYTE4(PerfGlobalGroupMask) & 1) != 0 )
    {
      MiLogNonPagedPoolReleaseEvent();
      v19 = v26[23];
    }
    MiReturnPhysicalPoolPages(v19, 2LL);
  }
  if ( v26[24] )
    MiReturnPhysicalPoolPages(v26[24], 3LL);
  return HIDWORD(v26[26]);
}
