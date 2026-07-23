/*
 * XREFs of MiMakeSystemCachePteValid @ 0x1402A384C
 * Callers:
 *     MmCopyToCachedPage @ 0x14033C250 (MmCopyToCachedPage.c)
 * Callees:
 *     MiUnlockPageTableInternal @ 0x140202790 (MiUnlockPageTableInternal.c)
 *     MiLockAndDecrementShareCount @ 0x140287230 (MiLockAndDecrementShareCount.c)
 *     PfSnLogPageFault @ 0x1402A3AB8 (PfSnLogPageFault.c)
 *     MiUnlockWorkingSetShared @ 0x1402B4090 (MiUnlockWorkingSetShared.c)
 *     MiAllocateWsle @ 0x1402B65C0 (MiAllocateWsle.c)
 *     MiIsPfnFileOnly @ 0x1402BD660 (MiIsPfnFileOnly.c)
 *     MiLockPageInline @ 0x14030AB80 (MiLockPageInline.c)
 *     MiLockWorkingSetOptimal @ 0x14031A9E4 (MiLockWorkingSetOptimal.c)
 *     MiReferenceControlAreaFile @ 0x140327C00 (MiReferenceControlAreaFile.c)
 *     MiStartingOffset @ 0x140329160 (MiStartingOffset.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140338C10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiMakeValidPte @ 0x140339480 (MiMakeValidPte.c)
 *     MiPteInShadowRange @ 0x140353840 (MiPteInShadowRange.c)
 *     MiDereferenceControlAreaFile @ 0x140361F34 (MiDereferenceControlAreaFile.c)
 */

__int64 __fastcall MiMakeSystemCachePteValid(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, char a4)
{
  unsigned __int64 v6; // rbx
  int v9; // esi
  __int64 v10; // rdi
  int v11; // r15d
  unsigned __int64 v12; // rbx
  __int64 v13; // rbx
  unsigned __int64 v14; // rdx
  __int64 ValidPte; // r8
  unsigned __int64 v16; // r8
  unsigned __int64 v17; // rdx
  __int64 v18; // rsi
  unsigned __int64 v19; // r14
  int Wsle; // eax
  __int64 v21; // rdx
  __int64 result; // rax
  __int64 v23; // rsi
  __int64 v24; // rdi
  __int64 v25; // rbx
  __int64 v26; // rax
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v28; // rax
  struct _LIST_ENTRY *v29; // rdx
  struct _LIST_ENTRY *v30; // rdx
  __int64 v31; // rax
  char v32; // [rsp+40h] [rbp-20h]
  __int64 v33; // [rsp+48h] [rbp-18h] BYREF
  unsigned __int64 v34; // [rsp+50h] [rbp-10h]
  char v35; // [rsp+A8h] [rbp+48h] BYREF
  unsigned __int64 v36; // [rsp+B0h] [rbp+50h] BYREF

  v36 = a3;
  v35 = 0;
  v6 = a3;
  v9 = MiPteInShadowRange(&v36);
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
      v28 = *((_QWORD *)&Flink->Flink + (((unsigned __int64)&v36 >> 3) & 0x1FF));
      if ( (v28 & 0x20) == 0 )
        v6 = a3;
      if ( (v28 & 0x42) != 0 )
        v6 |= 0x42uLL;
    }
    else
    {
      v6 = v36;
    }
  }
  v10 = 48 * ((v6 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
  v11 = 0;
  v33 = MI_READ_PTE_LOCK_FREE(((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v12 = v33;
  if ( (unsigned int)MiPteInShadowRange(&v33)
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v12 & 1) != 0
    && ((v12 & 0x20) == 0 || (v12 & 0x42) == 0) )
  {
    v29 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( v29 )
    {
      if ( ((__int64)*(&v29->Flink + (((unsigned __int64)&v33 >> 3) & 0x1FF)) & 0x20) != 0 )
        v12 |= 0x20uLL;
    }
  }
  v13 = 48 * ((v12 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
  v32 = MiLockPageInline(v13);
  *(_QWORD *)(v13 + 24) ^= (*(_QWORD *)(v13 + 24) ^ (*(_QWORD *)(v13 + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v13 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v34 = MiLockWorkingSetOptimal(a1, a2, &v35);
  v33 = MI_READ_PTE_LOCK_FREE(a2);
  if ( (v33 & 1) != 0 )
  {
    Wsle = 0;
    v19 = 0LL;
    v18 = 0LL;
    goto LABEL_10;
  }
  v14 = v36;
  ValidPte = v36;
  if ( v9
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v36 & 1) != 0
    && ((v36 & 0x20) == 0 || (v36 & 0x42) == 0) )
  {
    v30 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( v30 )
    {
      v31 = *((_QWORD *)&v30->Flink + (((unsigned __int64)&v36 >> 3) & 0x1FF));
      v14 = v36 | 0x20;
      if ( (v31 & 0x20) == 0 )
        v14 = v36;
      if ( (v31 & 0x42) != 0 )
        v14 |= 0x42uLL;
    }
    else
    {
      v14 = v36;
    }
  }
  if ( (v33 & 8) != 0 )
    ValidPte = MiMakeValidPte(a2, (v14 >> 12) & 0xFFFFFFFFFLL, 536870913LL);
  v16 = ValidPte & 0xFFFFFFFFFFFFFEFBuLL;
  v17 = v16 | ((unsigned __int64)(word_140C4E048 & 1) << 8);
  if ( (a4 & 8) != 0 && (unsigned int)MiIsPfnFileOnly(v10, v17, v16) )
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
  MiLockAndDecrementShareCount(v10, 0);
  MiLockAndDecrementShareCount(v13, 0);
LABEL_11:
  MiUnlockPageTableInternal(a1, v34);
  LOBYTE(v21) = v32;
  result = MiUnlockWorkingSetShared(a1, v21);
  if ( v11 )
  {
    if ( qword_140C4DF80 )
    {
      if ( (v18 & 0x10) == 0 )
        v18 &= ~qword_140C4DF80;
    }
    v23 = v18 >> 16;
    v24 = *(_QWORD *)v23;
    v25 = MiReferenceControlAreaFile(*(_QWORD *)v23);
    v26 = MiStartingOffset(v23, v19, 0xFFFFFFFFLL);
    PfSnLogPageFault(v25, v26, 4LL);
    return MiDereferenceControlAreaFile(v24, v25);
  }
  return result;
}
