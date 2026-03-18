/*
 * XREFs of MiMakeSystemCachePteValid @ 0x140356A3C
 * Callers:
 *     MmCopyToCachedPage @ 0x1402B4910 (MmCopyToCachedPage.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14021EA50 (MiPteInShadowRange.c)
 *     MiLockAndDecrementShareCount @ 0x140250E00 (MiLockAndDecrementShareCount.c)
 *     MiUnlockWorkingSetShared @ 0x140270AB0 (MiUnlockWorkingSetShared.c)
 *     MiAllocateWsle @ 0x140272FE0 (MiAllocateWsle.c)
 *     MiIsPfnFileOnly @ 0x14027A540 (MiIsPfnFileOnly.c)
 *     MiLockWorkingSetOptimal @ 0x14029C0FC (MiLockWorkingSetOptimal.c)
 *     MiDereferenceControlAreaFile @ 0x1402A039C (MiDereferenceControlAreaFile.c)
 *     MiReferenceControlAreaFile @ 0x1402A0600 (MiReferenceControlAreaFile.c)
 *     MiStartingOffset @ 0x1402A1B60 (MiStartingOffset.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1402B12D0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiMakeValidPte @ 0x1402B1B40 (MiMakeValidPte.c)
 *     MiLockPageInline @ 0x14034E290 (MiLockPageInline.c)
 *     PfSnLogPageFault @ 0x140356CA8 (PfSnLogPageFault.c)
 *     MiUnlockPageTableInternal @ 0x14035B910 (MiUnlockPageTableInternal.c)
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
  unsigned __int64 v17; // rdx
  unsigned __int64 ValidPte; // r8
  unsigned __int64 v19; // rdx
  __int64 v20; // rsi
  unsigned __int64 v21; // r14
  int Wsle; // eax
  __int64 v23; // rsi
  __int64 v24; // rdi
  ULONG_PTR v25; // rbx
  unsigned __int64 v26; // rax
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v28; // rax
  struct _LIST_ENTRY *v29; // rdx
  __int64 v30; // rax
  unsigned __int8 v31; // [rsp+40h] [rbp-20h]
  _QWORD v32[3]; // [rsp+48h] [rbp-18h] BYREF
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
      v28 = *((_QWORD *)&Flink->Flink + (((unsigned __int64)&v34 >> 3) & 0x1FF));
      if ( (v28 & 0x20) == 0 )
        v6 = a3;
      if ( (v28 & 0x42) != 0 )
        v6 |= 0x42uLL;
    }
    else
    {
      v6 = v34;
    }
  }
  v10 = (_QWORD *)(48 * ((v6 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL);
  v11 = 0;
  v32[0] = MI_READ_PTE_LOCK_FREE(((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v12 = v32[0];
  if ( MiPteInShadowRange((unsigned __int64)v32) && (MiFlags & 0xC00000) != 0 )
  {
    v13 = 1LL;
    if ( KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && (v12 & 1) != 0
      && ((v12 & 0x20) == 0 || (v12 & 0x42) == 0) )
    {
      v13 = (__int64)KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( v13 )
      {
        if ( (*(_QWORD *)(v13 + 8 * (((unsigned __int64)v32 >> 3) & 0x1FF)) & 0x20) != 0 )
          v12 |= 0x20uLL;
      }
    }
  }
  v16 = 48 * ((v12 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
  v31 = MiLockPageInline(v16, v13, v14, v15);
  *(_QWORD *)(v16 + 24) ^= (*(_QWORD *)(v16 + 24) ^ (*(_QWORD *)(v16 + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v16 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v32[1] = MiLockWorkingSetOptimal(a1, a2, &v33);
  v32[0] = MI_READ_PTE_LOCK_FREE(a2);
  if ( (v32[0] & 1) != 0 )
  {
    Wsle = 0;
    v21 = 0LL;
    v20 = 0LL;
    goto LABEL_10;
  }
  v17 = v34;
  ValidPte = v34;
  if ( v9
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v34 & 1) != 0
    && ((v34 & 0x20) == 0 || (v34 & 0x42) == 0) )
  {
    v29 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( v29 )
    {
      v30 = *((_QWORD *)&v29->Flink + (((unsigned __int64)&v34 >> 3) & 0x1FF));
      v17 = v34 | 0x20;
      if ( (v30 & 0x20) == 0 )
        v17 = v34;
      if ( (v30 & 0x42) != 0 )
        v17 |= 0x42uLL;
    }
    else
    {
      v17 = v34;
    }
  }
  if ( (v32[0] & 8) != 0 )
    ValidPte = MiMakeValidPte(a2, (v17 >> 12) & 0xFFFFFFFFFLL, 536870913LL, 1LL);
  v19 = ValidPte & 0xFFFFFFFFFFFFFEFBuLL | ((unsigned __int64)(word_140C4DE88 & 1) << 8);
  if ( (a4 & 8) != 0 && MiIsPfnFileOnly((__int64)v10) )
    v19 &= 0xFFFFFFFFFFFFFFBDuLL;
  v20 = v10[2];
  v21 = v10[1] | 0x8000000000000000uLL;
  Wsle = MiAllocateWsle(a1, a2, v10, 0, v19, 0, 0LL);
  if ( Wsle )
  {
    if ( PfSnNumActiveTraces && (v20 & 0x400) != 0 )
      v11 = 1;
LABEL_10:
    if ( Wsle )
      goto LABEL_11;
  }
  MiLockAndDecrementShareCount((__int64)v10, 0);
  MiLockAndDecrementShareCount(v16, 0);
LABEL_11:
  MiUnlockPageTableInternal(a1);
  MiUnlockWorkingSetShared(a1, v31);
  if ( v11 )
  {
    if ( qword_140C4DDC0 )
    {
      if ( (v20 & 0x10) == 0 )
        v20 &= ~qword_140C4DDC0;
    }
    v23 = v20 >> 16;
    v24 = *(_QWORD *)v23;
    v25 = MiReferenceControlAreaFile(*(_QWORD *)v23);
    v26 = MiStartingOffset((__int64 *)v23, v21, 0xFFFFFFFF);
    PfSnLogPageFault(v25, v26, 4LL);
    MiDereferenceControlAreaFile(v24, v25);
  }
}
