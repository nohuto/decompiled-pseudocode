/*
 * XREFs of MiMakeSystemCachePteValid @ 0x1402BB58C
 * Callers:
 *     MmCopyToCachedPage @ 0x14027CC60 (MmCopyToCachedPage.c)
 * Callees:
 *     MiUnlockWorkingSetShared @ 0x14020EC60 (MiUnlockWorkingSetShared.c)
 *     MiAllocateWsle @ 0x140211190 (MiAllocateWsle.c)
 *     MiIsPfnFileOnly @ 0x1402186F0 (MiIsPfnFileOnly.c)
 *     MiDereferenceControlAreaFile @ 0x14028244C (MiDereferenceControlAreaFile.c)
 *     MiReferenceControlAreaFile @ 0x140282C60 (MiReferenceControlAreaFile.c)
 *     MiMakeValidPte @ 0x14028D330 (MiMakeValidPte.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140291580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140291700 (MiPteInShadowRange.c)
 *     MiStartingOffset @ 0x14029EDC0 (MiStartingOffset.c)
 *     MiLockWorkingSetOptimal @ 0x1402BC3DC (MiLockWorkingSetOptimal.c)
 *     MiUnlockPageTableInternal @ 0x1402DB860 (MiUnlockPageTableInternal.c)
 *     PfSnLogPageFault @ 0x14032428C (PfSnLogPageFault.c)
 *     MiLockPageInline @ 0x140346F60 (MiLockPageInline.c)
 *     MiLockAndDecrementShareCount @ 0x140351040 (MiLockAndDecrementShareCount.c)
 */

void __fastcall MiMakeSystemCachePteValid(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, char a4)
{
  unsigned __int64 v6; // rbx
  BOOL v9; // esi
  __int64 v10; // rdi
  int v11; // r15d
  unsigned __int64 v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // rbx
  unsigned __int64 v16; // rdx
  unsigned __int64 ValidPte; // r8
  unsigned __int64 v18; // rdx
  __int64 v19; // rsi
  unsigned __int64 v20; // r14
  int Wsle; // eax
  __int64 v22; // rsi
  __int64 v23; // rdi
  ULONG_PTR v24; // rbx
  unsigned __int64 v25; // rax
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v27; // rax
  struct _LIST_ENTRY *v28; // rdx
  __int64 v29; // rax
  unsigned __int8 v30; // [rsp+40h] [rbp-20h]
  __int64 v31; // [rsp+48h] [rbp-18h] BYREF
  __int64 v32; // [rsp+50h] [rbp-10h]
  char v33; // [rsp+A8h] [rbp+48h] BYREF
  unsigned __int64 v34; // [rsp+B0h] [rbp+50h] BYREF

  v34 = a3;
  v33 = 0;
  v6 = a3;
  v9 = MiPteInShadowRange((unsigned __int64)&v34);
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
      v27 = *((_QWORD *)&Flink->Flink + (((unsigned __int64)&v34 >> 3) & 0x1FF));
      if ( (v27 & 0x20) == 0 )
        v6 = a3;
      if ( (v27 & 0x42) != 0 )
        v6 |= 0x42uLL;
    }
    else
    {
      v6 = v34;
    }
  }
  v10 = 48 * ((v6 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
  v11 = 0;
  v31 = MI_READ_PTE_LOCK_FREE(((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v12 = v31;
  if ( MiPteInShadowRange((unsigned __int64)&v31) && (MiFlags & 0xC00000) != 0 )
  {
    v13 = 1LL;
    if ( KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && (v12 & 1) != 0
      && ((v12 & 0x20) == 0 || (v12 & 0x42) == 0) )
    {
      v13 = (__int64)KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( v13 )
      {
        if ( (*(_QWORD *)(v13 + 8 * (((unsigned __int64)&v31 >> 3) & 0x1FF)) & 0x20) != 0 )
          v12 |= 0x20uLL;
      }
    }
  }
  v15 = 48 * ((v12 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
  v30 = MiLockPageInline(v15, v13, v14);
  *(_QWORD *)(v15 + 24) ^= (*(_QWORD *)(v15 + 24) ^ (*(_QWORD *)(v15 + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v15 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v32 = MiLockWorkingSetOptimal(a1, a2, &v33);
  v31 = MI_READ_PTE_LOCK_FREE(a2);
  if ( (v31 & 1) != 0 )
  {
    Wsle = 0;
    v20 = 0LL;
    v19 = 0LL;
    goto LABEL_10;
  }
  v16 = v34;
  ValidPte = v34;
  if ( v9
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v34 & 1) != 0
    && ((v34 & 0x20) == 0 || (v34 & 0x42) == 0) )
  {
    v28 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( v28 )
    {
      v29 = *((_QWORD *)&v28->Flink + (((unsigned __int64)&v34 >> 3) & 0x1FF));
      v16 = v34 | 0x20;
      if ( (v29 & 0x20) == 0 )
        v16 = v34;
      if ( (v29 & 0x42) != 0 )
        v16 |= 0x42uLL;
    }
    else
    {
      v16 = v34;
    }
  }
  if ( (v31 & 8) != 0 )
    ValidPte = MiMakeValidPte(a2, (v16 >> 12) & 0xFFFFFFFFFLL, 536870913LL, 1LL);
  v18 = ValidPte & 0xFFFFFFFFFFFFFEFBuLL | ((unsigned __int64)(word_140C4DF48 & 1) << 8);
  if ( (a4 & 8) != 0 && MiIsPfnFileOnly(v10) )
    v18 &= 0xFFFFFFFFFFFFFFBDuLL;
  v19 = *(_QWORD *)(v10 + 16);
  v20 = *(_QWORD *)(v10 + 8) | 0x8000000000000000uLL;
  Wsle = MiAllocateWsle(a1, a2, v10, 0, v18, 0, 0LL);
  if ( Wsle )
  {
    if ( PfSnNumActiveTraces && (v19 & 0x400) != 0 )
      v11 = 1;
LABEL_10:
    if ( Wsle )
      goto LABEL_11;
  }
  MiLockAndDecrementShareCount(v10, 0LL);
  MiLockAndDecrementShareCount(v15, 0LL);
LABEL_11:
  MiUnlockPageTableInternal(a1, v32);
  MiUnlockWorkingSetShared(a1, v30);
  if ( v11 )
  {
    if ( qword_140C4DE80 )
    {
      if ( (v19 & 0x10) == 0 )
        v19 &= ~qword_140C4DE80;
    }
    v22 = v19 >> 16;
    v23 = *(_QWORD *)v22;
    v24 = MiReferenceControlAreaFile(*(_QWORD *)v22);
    v25 = MiStartingOffset((__int64 *)v22, v20, 0xFFFFFFFFLL);
    PfSnLogPageFault(v24, v25, 4LL);
    MiDereferenceControlAreaFile(v23, v24);
  }
}
