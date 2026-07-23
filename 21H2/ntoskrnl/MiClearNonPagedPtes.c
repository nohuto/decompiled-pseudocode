/*
 * XREFs of MiClearNonPagedPtes @ 0x14021AB20
 * Callers:
 *     MmFreePoolMemory @ 0x140305598 (MmFreePoolMemory.c)
 *     MiCommitPoolMemory @ 0x140315F7C (MiCommitPoolMemory.c)
 *     MmFreeSecurePoolMemory @ 0x140545148 (MmFreeSecurePoolMemory.c)
 * Callees:
 *     MiUnlockPageTableInternal @ 0x140202790 (MiUnlockPageTableInternal.c)
 *     MiDeleteNonPagedPoolPte @ 0x14021ADB0 (MiDeleteNonPagedPoolPte.c)
 *     MiDeleteNonPagedPoolTail @ 0x14021B130 (MiDeleteNonPagedPoolTail.c)
 *     MiReturnPhysicalPoolPages @ 0x14021B214 (MiReturnPhysicalPoolPages.c)
 *     MiWalkPageTables @ 0x1402ADBC0 (MiWalkPageTables.c)
 *     MiFastLockLeafPageTable @ 0x1402B2FD0 (MiFastLockLeafPageTable.c)
 *     MiUnlockWorkingSetShared @ 0x1402B4090 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402BE5B0 (MiLockWorkingSetShared.c)
 *     MiGetAnyMultiplexedVm @ 0x140307E4C (MiGetAnyMultiplexedVm.c)
 *     MiFillPteHierarchy @ 0x1403171C0 (MiFillPteHierarchy.c)
 *     MiGetLeafVa @ 0x140337BB0 (MiGetLeafVa.c)
 *     MiPteInShadowRange @ 0x140353840 (MiPteInShadowRange.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memset @ 0x140414300 (memset.c)
 *     MiLogNonPagedPoolReleaseEvent @ 0x140544E68 (MiLogNonPagedPoolReleaseEvent.c)
 */

__int64 __fastcall MiClearNonPagedPtes(unsigned __int64 LeafVa, __int64 a2, unsigned int a3, unsigned int a4)
{
  char v8; // r15
  __int64 AnyMultiplexedVm; // r12
  unsigned __int64 v10; // r13
  __int64 v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // r10
  unsigned __int64 v14; // rsi
  unsigned __int64 v15; // rdi
  __int64 v16; // r10
  unsigned __int64 v17; // rbx
  __int64 v18; // rax
  unsigned __int64 v19; // rbx
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
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(5LL);
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
  BugCheckParameter2[3] = AnyMultiplexedVm;
  BYTE6(BugCheckParameter2[0]) = MiLockWorkingSetShared(AnyMultiplexedVm);
  if ( LeafVa <= v10 )
  {
    do
    {
      memset(v25, 0, sizeof(v25));
      if ( !(unsigned int)MiFastLockLeafPageTable(AnyMultiplexedVm, LeafVa, 0LL) )
        break;
      MiFillPteHierarchy(LeafVa, v25);
      v14 = *((_QWORD *)v25 + v13);
      v15 = *((_QWORD *)v25 + (int)v13 - 1);
      MiFillPteHierarchy(v10, v25);
      v17 = *((_QWORD *)v25 + v16);
      if ( v17 > (v15 & 0xFFFFFFFFFFFFF000uLL | 0xFF8) )
        v17 = v15 & 0xFFFFFFFFFFFFF000uLL | 0xFF8;
      while ( v15 <= v17 )
      {
        MiDeleteNonPagedPoolPte((ULONG_PTR)BugCheckParameter2);
        v18 = (unsigned int)BYTE3(BugCheckParameter2[0]) + 1;
        BYTE3(BugCheckParameter2[0]) = 0;
        v15 += 8 * v18;
      }
      MiDeleteNonPagedPoolTail(BugCheckParameter2);
      v19 = *(_QWORD *)v14;
      if ( (unsigned int)MiPteInShadowRange(v14)
        && (MiFlags & 0xC00000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && (v19 & 1) != 0
        && ((v19 & 0x20) == 0 || (v19 & 0x42) == 0) )
      {
        Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( Flink )
        {
          v23 = *((_QWORD *)&Flink->Flink + ((v14 >> 3) & 0x1FF));
          v24 = v19 | 0x20;
          if ( (v23 & 0x20) == 0 )
            v24 = v19;
          v19 = v24;
          if ( (v23 & 0x42) != 0 )
            v19 = v24 | 0x42;
        }
      }
      if ( (*(_QWORD *)(48 * ((v19 >> 12) & 0xFFFFFFFFFLL) - 0x57FFFFFFFE8LL) & 0x3FFFFFFFFFFFFFFFLL) == 1 )
        v8 = 1;
      MiUnlockPageTableInternal(AnyMultiplexedVm, v14);
      LeafVa = MiGetLeafVa(v15);
    }
    while ( LeafVa <= v10 );
    if ( !v8 )
    {
      if ( LeafVa > v10 )
        goto LABEL_14;
      BugCheckParameter2[4] = LeafVa;
    }
    MiWalkPageTables(BugCheckParameter2);
  }
LABEL_14:
  LOBYTE(v12) = BYTE6(BugCheckParameter2[0]);
  MiUnlockWorkingSetShared(AnyMultiplexedVm, v12);
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
