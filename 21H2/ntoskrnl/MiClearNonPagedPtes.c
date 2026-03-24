/*
 * XREFs of MiClearNonPagedPtes @ 0x140296238
 * Callers:
 *     MmFreePoolMemory @ 0x1402FA848 (MmFreePoolMemory.c)
 *     MiCommitPoolMemory @ 0x14030B22C (MiCommitPoolMemory.c)
 *     MmFreeSecurePoolMemory @ 0x140544F08 (MmFreeSecurePoolMemory.c)
 * Callees:
 *     MiWalkPageTables @ 0x1402092C0 (MiWalkPageTables.c)
 *     MiFastLockLeafPageTable @ 0x14020E6D0 (MiFastLockLeafPageTable.c)
 *     MiUnlockWorkingSetShared @ 0x14020F790 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x140219CB0 (MiLockWorkingSetShared.c)
 *     MiUnlockPageTableInternal @ 0x1402855F0 (MiUnlockPageTableInternal.c)
 *     MiDeleteNonPagedPoolPte @ 0x1402964D0 (MiDeleteNonPagedPoolPte.c)
 *     MiDeleteNonPagedPoolTail @ 0x140296850 (MiDeleteNonPagedPoolTail.c)
 *     MiReturnPhysicalPoolPages @ 0x140296934 (MiReturnPhysicalPoolPages.c)
 *     MiGetAnyMultiplexedVm @ 0x1402FD0FC (MiGetAnyMultiplexedVm.c)
 *     MiFillPteHierarchy @ 0x14030C470 (MiFillPteHierarchy.c)
 *     MiGetLeafVa @ 0x14032CE60 (MiGetLeafVa.c)
 *     MiPteInShadowRange @ 0x140348AF0 (MiPteInShadowRange.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     memset @ 0x140414200 (memset.c)
 *     MiLogNonPagedPoolReleaseEvent @ 0x140544C28 (MiLogNonPagedPoolReleaseEvent.c)
 */

__int64 __fastcall MiClearNonPagedPtes(unsigned __int64 LeafVa, __int64 a2, unsigned int a3, unsigned int a4)
{
  char v8; // r15
  __int64 AnyMultiplexedVm; // r12
  unsigned __int64 v10; // r13
  __int64 v11; // rdx
  __int64 v12; // r8
  _DWORD *v13; // r9
  __int64 v14; // r10
  unsigned __int64 v15; // rsi
  unsigned __int64 v16; // rdi
  __int64 v17; // r10
  unsigned __int64 v18; // rbx
  __int64 v19; // rax
  unsigned __int64 v20; // rbx
  __int64 v21; // rdx
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rcx
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v28; // rax
  __int64 v29; // rdx
  _OWORD v30[2]; // [rsp+20h] [rbp-E0h] BYREF
  ULONG_PTR BugCheckParameter2[22]; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v32[28]; // [rsp+F0h] [rbp-10h] BYREF

  memset(BugCheckParameter2, 0, sizeof(BugCheckParameter2));
  memset(v32, 0, sizeof(v32));
  v8 = 0;
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(5LL);
  BugCheckParameter2[4] = LeafVa;
  LOWORD(BugCheckParameter2[0]) = 2183;
  v32[25] = __PAIR64__(a4, a3);
  BugCheckParameter2[19] = (ULONG_PTR)MiDeleteNonPagedPoolPte;
  v10 = (a2 << 12) + LeafVa - 1;
  BugCheckParameter2[5] = v10;
  BugCheckParameter2[20] = (ULONG_PTR)MiDeleteNonPagedPoolTail;
  BugCheckParameter2[21] = (ULONG_PTR)v32;
  v32[1] = 20LL;
  LODWORD(v32[0]) = v11;
  WORD2(v32[0]) = v11;
  v32[2] = v11;
  v32[3] = v11;
  BugCheckParameter2[3] = AnyMultiplexedVm;
  BYTE6(BugCheckParameter2[0]) = MiLockWorkingSetShared(AnyMultiplexedVm, v11, v12, v13);
  if ( LeafVa <= v10 )
  {
    do
    {
      memset(v30, 0, sizeof(v30));
      if ( !(unsigned int)MiFastLockLeafPageTable(AnyMultiplexedVm, LeafVa, 0) )
        break;
      MiFillPteHierarchy(LeafVa, v30);
      v15 = *((_QWORD *)v30 + v14);
      v16 = *((_QWORD *)v30 + (int)v14 - 1);
      MiFillPteHierarchy(v10, v30);
      v18 = *((_QWORD *)v30 + v17);
      if ( v18 > (v16 & 0xFFFFFFFFFFFFF000uLL | 0xFF8) )
        v18 = v16 & 0xFFFFFFFFFFFFF000uLL | 0xFF8;
      while ( v16 <= v18 )
      {
        MiDeleteNonPagedPoolPte((ULONG_PTR)BugCheckParameter2);
        v19 = (unsigned int)BYTE3(BugCheckParameter2[0]) + 1;
        BYTE3(BugCheckParameter2[0]) = 0;
        v16 += 8 * v19;
      }
      MiDeleteNonPagedPoolTail(BugCheckParameter2);
      v20 = *(_QWORD *)v15;
      if ( (unsigned int)MiPteInShadowRange(v15, v21)
        && (MiFlags & 0xC00000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && (v20 & 1) != 0
        && ((v20 & 0x20) == 0 || (v20 & 0x42) == 0) )
      {
        Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( Flink )
        {
          v28 = *((_QWORD *)&Flink->Flink + ((v15 >> 3) & 0x1FF));
          v29 = v20 | 0x20;
          if ( (v28 & 0x20) == 0 )
            v29 = v20;
          v20 = v29;
          if ( (v28 & 0x42) != 0 )
            v20 = v29 | 0x42;
        }
      }
      if ( (*(_QWORD *)(48 * ((v20 >> 12) & 0xFFFFFFFFFLL) - 0x57FFFFFFFE8LL) & 0x3FFFFFFFFFFFFFFFLL) == 1 )
        v8 = 1;
      MiUnlockPageTableInternal(AnyMultiplexedVm, v15);
      LeafVa = MiGetLeafVa(v16, v22, v23, v24);
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
  MiUnlockWorkingSetShared(AnyMultiplexedVm, BYTE6(BugCheckParameter2[0]));
  v25 = v32[23];
  if ( v32[23] )
  {
    if ( (BYTE4(PerfGlobalGroupMask) & 1) != 0 )
    {
      MiLogNonPagedPoolReleaseEvent();
      v25 = v32[23];
    }
    MiReturnPhysicalPoolPages(v25, 2LL);
  }
  if ( v32[24] )
    MiReturnPhysicalPoolPages(v32[24], 3LL);
  return HIDWORD(v32[26]);
}
