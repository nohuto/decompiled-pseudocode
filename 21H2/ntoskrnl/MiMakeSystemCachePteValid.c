/*
 * XREFs of MiMakeSystemCachePteValid @ 0x14035E91C
 * Callers:
 *     MmCopyToCachedPage @ 0x140331500 (MmCopyToCachedPage.c)
 * Callees:
 *     MiUnlockWorkingSetShared @ 0x14020F790 (MiUnlockWorkingSetShared.c)
 *     MiAllocateWsle @ 0x140211CC0 (MiAllocateWsle.c)
 *     MiIsPfnFileOnly @ 0x140218D60 (MiIsPfnFileOnly.c)
 *     MiUnlockPageTableInternal @ 0x1402855F0 (MiUnlockPageTableInternal.c)
 *     MiLockAndDecrementShareCount @ 0x1402D5EE0 (MiLockAndDecrementShareCount.c)
 *     MiLockPageInline @ 0x1402FFE30 (MiLockPageInline.c)
 *     MiLockWorkingSetOptimal @ 0x14030FC94 (MiLockWorkingSetOptimal.c)
 *     MiReferenceControlAreaFile @ 0x14031CEB0 (MiReferenceControlAreaFile.c)
 *     MiStartingOffset @ 0x14031E410 (MiStartingOffset.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14032DEC0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiMakeValidPte @ 0x14032E730 (MiMakeValidPte.c)
 *     MiPteInShadowRange @ 0x140348AF0 (MiPteInShadowRange.c)
 *     MiDereferenceControlAreaFile @ 0x1403571E4 (MiDereferenceControlAreaFile.c)
 *     PfSnLogPageFault @ 0x14035EB88 (PfSnLogPageFault.c)
 */

void __fastcall MiMakeSystemCachePteValid(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, char a4)
{
  unsigned __int64 v6; // rbx
  BOOL v9; // esi
  _QWORD *v10; // rdi
  int v11; // r15d
  unsigned __int64 v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // r8
  _DWORD *v15; // r9
  __int64 v16; // rbx
  _DWORD *v17; // r9
  __int64 v18; // r8
  unsigned __int64 v19; // rdx
  unsigned __int64 ValidPte; // r8
  unsigned __int64 v21; // rdx
  __int64 v22; // rsi
  unsigned __int64 v23; // r14
  int Wsle; // eax
  __int64 v25; // rsi
  __int64 v26; // rdi
  ULONG_PTR v27; // rbx
  unsigned __int64 v28; // rax
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v30; // rax
  struct _LIST_ENTRY *v31; // rdx
  __int64 v32; // rax
  __int64 v33; // r8
  unsigned __int8 v34; // [rsp+40h] [rbp-20h]
  __int64 v35; // [rsp+48h] [rbp-18h] BYREF
  unsigned __int64 v36; // [rsp+50h] [rbp-10h]
  char v37; // [rsp+A8h] [rbp+48h] BYREF
  unsigned __int64 v38; // [rsp+B0h] [rbp+50h] BYREF

  v38 = a3;
  v37 = 0;
  v6 = a3;
  v9 = MiPteInShadowRange((unsigned __int64)&v38);
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
      v30 = *((_QWORD *)&Flink->Flink + (((unsigned __int64)&v38 >> 3) & 0x1FF));
      if ( (v30 & 0x20) == 0 )
        v6 = a3;
      if ( (v30 & 0x42) != 0 )
        v6 |= 0x42uLL;
    }
    else
    {
      v6 = v38;
    }
  }
  v10 = (_QWORD *)(48 * ((v6 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL);
  v11 = 0;
  v35 = MI_READ_PTE_LOCK_FREE(((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v12 = v35;
  if ( MiPteInShadowRange((unsigned __int64)&v35) && (MiFlags & 0xC00000) != 0 )
  {
    v13 = 1LL;
    if ( KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && (v12 & 1) != 0
      && ((v12 & 0x20) == 0 || (v12 & 0x42) == 0) )
    {
      v13 = (__int64)KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( v13 )
      {
        if ( (*(_QWORD *)(v13 + 8 * (((unsigned __int64)&v35 >> 3) & 0x1FF)) & 0x20) != 0 )
          v12 |= 0x20uLL;
      }
    }
  }
  v16 = 48 * ((v12 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
  v34 = MiLockPageInline(v16, v13, v14, v15);
  *(_QWORD *)(v16 + 24) ^= (*(_QWORD *)(v16 + 24) ^ (*(_QWORD *)(v16 + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v16 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v36 = MiLockWorkingSetOptimal(a1, a2, &v37, v17);
  v35 = MI_READ_PTE_LOCK_FREE(a2);
  if ( (v35 & 1) != 0 )
  {
    Wsle = 0;
    v23 = 0LL;
    v22 = 0LL;
    goto LABEL_10;
  }
  v19 = v38;
  ValidPte = v38;
  if ( v9
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v38 & 1) != 0
    && ((v38 & 0x20) == 0 || (v38 & 0x42) == 0) )
  {
    v31 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( v31 )
    {
      v32 = *((_QWORD *)&v31->Flink + (((unsigned __int64)&v38 >> 3) & 0x1FF));
      v19 = v38 | 0x20;
      if ( (v32 & 0x20) == 0 )
        v19 = v38;
      if ( (v32 & 0x42) != 0 )
        v19 |= 0x42uLL;
    }
    else
    {
      v19 = v38;
    }
  }
  if ( (v35 & 8) != 0 )
    ValidPte = MiMakeValidPte(a2, (v19 >> 12) & 0xFFFFFFFFFLL, 536870913);
  v21 = ValidPte & 0xFFFFFFFFFFFFFEFBuLL | ((unsigned __int64)(word_140C4E008 & 1) << 8);
  if ( (a4 & 8) != 0 && MiIsPfnFileOnly((__int64)v10) )
    v21 &= 0xFFFFFFFFFFFFFFBDuLL;
  v22 = v10[2];
  v23 = v10[1] | 0x8000000000000000uLL;
  Wsle = MiAllocateWsle(a1, a2, v10, 0, v21, 0, 0LL);
  if ( Wsle )
  {
    if ( PfSnNumActiveTraces && (v22 & 0x400) != 0 )
      v11 = 1;
LABEL_10:
    if ( Wsle )
      goto LABEL_11;
  }
  MiLockAndDecrementShareCount((__int64)v10, 0LL, v18);
  MiLockAndDecrementShareCount(v16, 0LL, v33);
LABEL_11:
  MiUnlockPageTableInternal(a1, v36);
  MiUnlockWorkingSetShared(a1, v34);
  if ( v11 )
  {
    if ( qword_140C4DF40 )
    {
      if ( (v22 & 0x10) == 0 )
        v22 &= ~qword_140C4DF40;
    }
    v25 = v22 >> 16;
    v26 = *(_QWORD *)v25;
    v27 = MiReferenceControlAreaFile(*(_QWORD *)v25);
    v28 = MiStartingOffset((__int64 *)v25, v23, 0xFFFFFFFF);
    PfSnLogPageFault(v27, v28, 4LL);
    MiDereferenceControlAreaFile(v26, v27);
  }
}
