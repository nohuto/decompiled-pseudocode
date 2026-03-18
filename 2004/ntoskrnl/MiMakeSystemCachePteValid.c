/*
 * XREFs of MiMakeSystemCachePteValid @ 0x14026255C
 * Callers:
 *     MmCopyToCachedPage @ 0x140223C10 (MmCopyToCachedPage.c)
 * Callees:
 *     MiDereferenceControlAreaFile @ 0x1402293FC (MiDereferenceControlAreaFile.c)
 *     MiReferenceControlAreaFile @ 0x140229C10 (MiReferenceControlAreaFile.c)
 *     MiMakeValidPte @ 0x1402342E0 (MiMakeValidPte.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140238530 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1402386B0 (MiPteInShadowRange.c)
 *     MiStartingOffset @ 0x140245D90 (MiStartingOffset.c)
 *     MiLockWorkingSetOptimal @ 0x1402633AC (MiLockWorkingSetOptimal.c)
 *     MiUnlockPageTableInternal @ 0x140278B10 (MiUnlockPageTableInternal.c)
 *     MiUnlockWorkingSetShared @ 0x1402A1770 (MiUnlockWorkingSetShared.c)
 *     MiAllocateWsle @ 0x1402A3CA0 (MiAllocateWsle.c)
 *     MiIsPfnFileOnly @ 0x1402AB200 (MiIsPfnFileOnly.c)
 *     MiLockAndDecrementShareCount @ 0x1402F5064 (MiLockAndDecrementShareCount.c)
 *     MiLockPageInline @ 0x140317C20 (MiLockPageInline.c)
 *     PfSnLogPageFault @ 0x1403293AC (PfSnLogPageFault.c)
 */

void __fastcall MiMakeSystemCachePteValid(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, char a4)
{
  unsigned __int64 v6; // rbx
  BOOL v9; // esi
  __int64 v10; // rdi
  int v11; // r15d
  unsigned __int64 v12; // rbx
  __int64 v13; // rbx
  unsigned __int64 v14; // rdx
  unsigned __int64 ValidPte; // r8
  unsigned __int64 v16; // r8
  unsigned __int64 v17; // rdx
  __int64 v18; // rsi
  unsigned __int64 v19; // r14
  int Wsle; // eax
  __int64 v21; // rdx
  __int64 v22; // rsi
  __int64 v23; // rdi
  ULONG_PTR v24; // rbx
  unsigned __int64 v25; // rax
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v27; // rax
  struct _LIST_ENTRY *v28; // rdx
  struct _LIST_ENTRY *v29; // rdx
  __int64 v30; // rax
  char v31; // [rsp+40h] [rbp-20h]
  __int64 v32; // [rsp+48h] [rbp-18h] BYREF
  __int64 v33; // [rsp+50h] [rbp-10h]
  char v34; // [rsp+A8h] [rbp+48h] BYREF
  unsigned __int64 v35; // [rsp+B0h] [rbp+50h] BYREF

  v35 = a3;
  v34 = 0;
  v6 = a3;
  v9 = MiPteInShadowRange((unsigned __int64)&v35);
  if ( v9
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v6 & 1) != 0
    && ((v6 & 0x20) == 0 || (v6 & 0x42) == 0) )
  {
    Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( Flink )
    {
      v6 |= 0x20uLL;
      v27 = *((_QWORD *)&Flink->Flink + (((unsigned __int64)&v35 >> 3) & 0x1FF));
      if ( (v27 & 0x20) == 0 )
        v6 = a3;
      if ( (v27 & 0x42) != 0 )
        v6 |= 0x42uLL;
    }
    else
    {
      v6 = v35;
    }
  }
  v10 = 48 * ((v6 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
  v11 = 0;
  v32 = MI_READ_PTE_LOCK_FREE(((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v12 = v32;
  if ( MiPteInShadowRange((unsigned __int64)&v32)
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v12 & 1) != 0
    && ((v12 & 0x20) == 0 || (v12 & 0x42) == 0) )
  {
    v28 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( v28 )
    {
      if ( ((__int64)*(&v28->Flink + (((unsigned __int64)&v32 >> 3) & 0x1FF)) & 0x20) != 0 )
        v12 |= 0x20uLL;
    }
  }
  v13 = 48 * ((v12 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
  v31 = MiLockPageInline(v13);
  *(_QWORD *)(v13 + 24) ^= (*(_QWORD *)(v13 + 24) ^ (*(_QWORD *)(v13 + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v13 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v33 = MiLockWorkingSetOptimal(a1, a2, &v34);
  v32 = MI_READ_PTE_LOCK_FREE(a2);
  if ( (v32 & 1) != 0 )
  {
    Wsle = 0;
    v19 = 0LL;
    v18 = 0LL;
    goto LABEL_10;
  }
  v14 = v35;
  ValidPte = v35;
  if ( v9
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v35 & 1) != 0
    && ((v35 & 0x20) == 0 || (v35 & 0x42) == 0) )
  {
    v29 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( v29 )
    {
      v30 = *((_QWORD *)&v29->Flink + (((unsigned __int64)&v35 >> 3) & 0x1FF));
      v14 = v35 | 0x20;
      if ( (v30 & 0x20) == 0 )
        v14 = v35;
      if ( (v30 & 0x42) != 0 )
        v14 |= 0x42uLL;
    }
    else
    {
      v14 = v35;
    }
  }
  if ( (v32 & 8) != 0 )
    ValidPte = MiMakeValidPte(a2, (v14 >> 12) & 0xFFFFFFFFFLL, 536870913LL, 1LL);
  v16 = ValidPte & 0xFFFFFFFFFFFFFEFBuLL;
  v17 = v16 | ((unsigned __int64)(word_140C4DE08 & 1) << 8);
  if ( (a4 & 8) != 0 && (unsigned int)MiIsPfnFileOnly(v10, v17, v16, 1LL) )
    v17 &= 0xFFFFFFFFFFFFFFBDuLL;
  v18 = *(_QWORD *)(v10 + 16);
  v19 = *(_QWORD *)(v10 + 8) | 0x8000000000000000uLL;
  Wsle = MiAllocateWsle(a1, a2, v10, 0, v17, 0, 0LL);
  if ( Wsle )
  {
    if ( PfSnNumActiveTraces && (v18 & 0x400) != 0 )
      v11 = 1;
LABEL_10:
    if ( Wsle )
      goto LABEL_11;
  }
  MiLockAndDecrementShareCount(v10, 0LL);
  MiLockAndDecrementShareCount(v13, 0LL);
LABEL_11:
  MiUnlockPageTableInternal(a1, v33);
  LOBYTE(v21) = v31;
  MiUnlockWorkingSetShared(a1, v21);
  if ( v11 )
  {
    if ( qword_140C4DD40 )
    {
      if ( (v18 & 0x10) == 0 )
        v18 &= ~qword_140C4DD40;
    }
    v22 = v18 >> 16;
    v23 = *(_QWORD *)v22;
    v24 = MiReferenceControlAreaFile(*(_QWORD *)v22);
    v25 = MiStartingOffset((__int64 *)v22, v19, 0xFFFFFFFF);
    PfSnLogPageFault(v24, v25, 4LL);
    MiDereferenceControlAreaFile(v23, v24);
  }
}
