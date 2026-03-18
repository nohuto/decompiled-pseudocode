/*
 * XREFs of MiClearNonPagedPtes @ 0x1402F1DCC
 * Callers:
 *     MmFreePoolMemory @ 0x1402AC0AC (MmFreePoolMemory.c)
 *     MiCommitPoolMemory @ 0x1402B16DC (MiCommitPoolMemory.c)
 *     MmFreeSecurePoolMemory @ 0x14053F3E4 (MmFreeSecurePoolMemory.c)
 * Callees:
 *     MiFastLockLeafPageTable @ 0x14020DBA0 (MiFastLockLeafPageTable.c)
 *     MiUnlockWorkingSetShared @ 0x14020EC60 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x140219640 (MiLockWorkingSetShared.c)
 *     MiWalkPageTables @ 0x14025DB00 (MiWalkPageTables.c)
 *     MiGetLeafVa @ 0x140290520 (MiGetLeafVa.c)
 *     MiPteInShadowRange @ 0x140291700 (MiPteInShadowRange.c)
 *     MiGetAnyMultiplexedVm @ 0x1402A9158 (MiGetAnyMultiplexedVm.c)
 *     MiFillPteHierarchy @ 0x1402B2490 (MiFillPteHierarchy.c)
 *     MiUnlockPageTableInternal @ 0x1402DB860 (MiUnlockPageTableInternal.c)
 *     MiDeleteNonPagedPoolPte @ 0x1402F2060 (MiDeleteNonPagedPoolPte.c)
 *     MiDeleteNonPagedPoolTail @ 0x1402F2370 (MiDeleteNonPagedPoolTail.c)
 *     MiReturnPhysicalPoolPages @ 0x1402F2454 (MiReturnPhysicalPoolPages.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     memset @ 0x140408F80 (memset.c)
 *     MiLogNonPagedPoolReleaseEvent @ 0x14053F104 (MiLogNonPagedPoolReleaseEvent.c)
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
  __int64 v19; // r8
  __int64 v20; // rcx
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v23; // rax
  __int64 v24; // rdx
  _OWORD v25[2]; // [rsp+20h] [rbp-E0h] BYREF
  ULONG_PTR BugCheckParameter2[22]; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v27[28]; // [rsp+F0h] [rbp-10h] BYREF

  memset(BugCheckParameter2, 0, sizeof(BugCheckParameter2));
  memset(v27, 0, sizeof(v27));
  v8 = 0;
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(5);
  BugCheckParameter2[4] = LeafVa;
  LOWORD(BugCheckParameter2[0]) = 2183;
  v27[25] = __PAIR64__(a4, a3);
  BugCheckParameter2[19] = (ULONG_PTR)MiDeleteNonPagedPoolPte;
  v10 = (a2 << 12) + LeafVa - 1;
  BugCheckParameter2[5] = v10;
  BugCheckParameter2[20] = (ULONG_PTR)MiDeleteNonPagedPoolTail;
  BugCheckParameter2[21] = (ULONG_PTR)v27;
  v27[1] = 20LL;
  LODWORD(v27[0]) = v11;
  WORD2(v27[0]) = v11;
  v27[2] = v11;
  v27[3] = v11;
  BugCheckParameter2[3] = (ULONG_PTR)AnyMultiplexedVm;
  BYTE6(BugCheckParameter2[0]) = MiLockWorkingSetShared((__int64)AnyMultiplexedVm);
  if ( LeafVa <= v10 )
  {
    do
    {
      memset(v25, 0, sizeof(v25));
      if ( !(unsigned int)MiFastLockLeafPageTable((__int64)AnyMultiplexedVm, LeafVa, 0) )
        break;
      MiFillPteHierarchy(LeafVa, (unsigned __int64 *)v25);
      v13 = *((_QWORD *)v25 + v12);
      v14 = *((_QWORD *)v25 + (int)v12 - 1);
      MiFillPteHierarchy(v10, (unsigned __int64 *)v25);
      v16 = *((_QWORD *)v25 + v15);
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
          v23 = *((_QWORD *)&Flink->Flink + ((v13 >> 3) & 0x1FF));
          v24 = v18 | 0x20;
          if ( (v23 & 0x20) == 0 )
            v24 = v18;
          v18 = v24;
          if ( (v23 & 0x42) != 0 )
            v18 = v24 | 0x42;
        }
      }
      v19 = *(_QWORD *)(48 * ((v18 >> 12) & 0xFFFFFFFFFLL) - 0x57FFFFFFFE8LL) & 0x3FFFFFFFFFFFFFFFLL;
      if ( v19 == 1 )
        v8 = 1;
      MiUnlockPageTableInternal((__int64)AnyMultiplexedVm, v13, v19);
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
  v20 = v27[23];
  if ( v27[23] )
  {
    if ( (BYTE4(PerfGlobalGroupMask) & 1) != 0 )
    {
      MiLogNonPagedPoolReleaseEvent();
      v20 = v27[23];
    }
    MiReturnPhysicalPoolPages(v20, 2LL);
  }
  if ( v27[24] )
    MiReturnPhysicalPoolPages(v27[24], 3LL);
  return HIDWORD(v27[26]);
}
