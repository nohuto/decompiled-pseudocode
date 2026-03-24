/*
 * XREFs of MiDeleteValidSystemPage @ 0x140328E20
 * Callers:
 *     MiDeleteKernelStack @ 0x140272740 (MiDeleteKernelStack.c)
 *     MiDeleteSystemPagableVm @ 0x140305A80 (MiDeleteSystemPagableVm.c)
 *     MiTerminateWsleCluster @ 0x14033AD20 (MiTerminateWsleCluster.c)
 * Callees:
 *     MiGetContainingPageTable @ 0x14023E450 (MiGetContainingPageTable.c)
 *     KeYieldProcessorEx @ 0x14024B280 (KeYieldProcessorEx.c)
 *     MiReleasePageFileInfo @ 0x140267CB0 (MiReleasePageFileInfo.c)
 *     MiWritePteShadow @ 0x1402B69BC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402B6A1C (MiPteHasShadow.c)
 *     MiCaptureDirtyBitToPfn @ 0x14030FB10 (MiCaptureDirtyBitToPfn.c)
 *     MiPfnShareCountIsZero @ 0x140326190 (MiPfnShareCountIsZero.c)
 *     MiPteInShadowRange @ 0x140348AF0 (MiPteInShadowRange.c)
 *     MiDecrementCombinedPte @ 0x140366EC4 (MiDecrementCombinedPte.c)
 *     MiIsPfnSystemCharged @ 0x14037C958 (MiIsPfnSystemCharged.c)
 *     MI_PFN_IS_PROTO @ 0x1403F48C8 (MI_PFN_IS_PROTO.c)
 *     MiBadShareCount @ 0x1403F4934 (MiBadShareCount.c)
 *     KeBugCheckEx @ 0x1403FDEF0 (KeBugCheckEx.c)
 *     MiDriverPageIsDangling @ 0x1405357F4 (MiDriverPageIsDangling.c)
 */

char __fastcall MiDeleteValidSystemPage(__int64 a1, unsigned __int64 a2, int a3, __int64 a4)
{
  unsigned __int64 v4; // rdi
  ULONG_PTR v5; // rbx
  __int64 v7; // r8
  unsigned __int64 v8; // r10
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r13
  unsigned __int64 v14; // rdx
  struct _LIST_ENTRY *v15; // rdx
  __int64 v16; // rax
  __int64 v17; // r12
  __int64 v18; // rsi
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // r10
  int v23; // r11d
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rbp
  int v27; // r11d
  __int64 v28; // rcx
  __int64 v29; // r12
  char v30; // r10
  unsigned __int64 v31; // rbx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v33; // r8
  __int64 v34; // rdx
  __int64 v35; // rax
  unsigned int v36; // ecx
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // rdx
  int IsZero; // ebx
  __int64 v41; // rcx
  unsigned __int64 v42; // rdx
  int v44; // [rsp+30h] [rbp-68h] BYREF
  int v45; // [rsp+34h] [rbp-64h] BYREF
  ULONG_PTR v46; // [rsp+38h] [rbp-60h] BYREF
  __int64 v47; // [rsp+40h] [rbp-58h]
  unsigned __int64 v48; // [rsp+48h] [rbp-50h]
  int v50; // [rsp+A8h] [rbp+10h] BYREF
  int v51; // [rsp+B0h] [rbp+18h]
  __int64 v52; // [rsp+B8h] [rbp+20h]

  v52 = a4;
  v51 = a3;
  v4 = ZeroPte;
  v5 = *(_QWORD *)a2;
  v48 = 0LL;
  v7 = a1;
  v8 = 0xFFFFF6FB7DBED000uLL;
  if ( a2 >= 0xFFFFF6FB7DBED000uLL
    && a2 <= 0xFFFFF6FB7DBED7F8uLL
    && (unsigned int)MiPteHasShadow()
    && (v5 & 1) != 0
    && ((v5 & 0x20) == 0 || (v5 & 0x42) == 0) )
  {
    Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( Flink )
    {
      v10 = *((_QWORD *)&Flink->Flink + ((a2 >> 3) & 0x1FF));
      v11 = v5 | 0x20;
      if ( (v10 & 0x20) == 0 )
        v11 = v5;
      v5 = v11;
      if ( (v10 & 0x42) != 0 )
        v5 = v11 | 0x42;
    }
  }
  v12 = *(unsigned __int16 *)(v7 + 174);
  v46 = v5;
  v13 = *(_QWORD *)(qword_140C4E648 + 8 * v12);
  if ( (unsigned __int64)&v46 < v8 || (unsigned __int64)&v46 > 0xFFFFF6FB7DBED7F8uLL )
    goto LABEL_23;
  if ( !(unsigned int)MiPteHasShadow() || (v5 & 1) == 0 || (v5 & 0x20) != 0 && (v5 & 0x42) != 0 )
    goto LABEL_24;
  v15 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
  if ( !v15 )
  {
LABEL_23:
    v14 = v5;
    goto LABEL_24;
  }
  v16 = *((_QWORD *)&v15->Flink + (((unsigned __int64)&v46 >> 3) & 0x1FF));
  v14 = v5 | 0x20;
  if ( (v16 & 0x20) == 0 )
    v14 = v5;
  if ( (v16 & 0x42) != 0 )
    v14 |= 0x42uLL;
LABEL_24:
  v17 = 48 * ((v14 >> 12) & 0xFFFFFFFFFLL);
  v18 = v17 - 0x58000000000LL;
  v47 = *(_QWORD *)(qword_140C4E648 + 8 * ((*(_QWORD *)(v17 - 0x58000000000LL + 40) >> 39) & 0x3FFLL));
  if ( (unsigned int)MI_PFN_IS_PROTO(v17 - 0x58000000000LL) )
  {
    if ( (v19 & 0x1000000000LL) == 0 )
    {
      v24 = *(_QWORD *)(v18 + 8);
      if ( v24 > 0 )
        v48 = v24 | 0x8000000000000000uLL;
    }
    v26 = 48 * MiGetContainingPageTable(a2) - 0x58000000000LL;
    v50 = v27;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v18 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v50, v25, v20, v21);
      while ( *(__int64 *)(v18 + 24) < 0 );
    }
    if ( (v5 & 0x42) != 0 )
      v4 = MiCaptureDirtyBitToPfn(v17 - 0x58000000000LL);
    v28 = *(_QWORD *)(v18 + 16);
    if ( (v28 & 0x400) == 0 || (v5 & 0x200) != 0 )
    {
      v29 = v52;
      v30 = v51;
      ++*(_QWORD *)(v52 + 24);
    }
    else
    {
      if ( qword_140C4DF40 && (v28 & 0x10) == 0 )
        v28 &= ~qword_140C4DF40;
      v29 = v52;
      v30 = v51;
      if ( (*(_DWORD *)(*(_QWORD *)(v28 >> 16) + 56LL) & 0x820) == 0x820 )
        ++*(_QWORD *)(v52 + 24);
    }
    goto LABEL_67;
  }
  if ( v18 != qword_140C4ED60 )
  {
    if ( (*(_QWORD *)(v18 + 8) | 0x8000000000000000uLL) != a2 )
      KeBugCheckEx(0x1Au, 0x404uLL, a2, v5, *(_QWORD *)(v18 + 8));
    v34 = v22 & v19;
    ++*(_QWORD *)(v21 + 24);
    v26 = v20 + 48 * v34;
    v44 = v23;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v18 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v44, v34, v20, v21);
      while ( *(__int64 *)(v18 + 24) < 0 );
    }
    *(_QWORD *)(v18 + 24) |= 0x4000000000000000uLL;
    if ( ((*(_QWORD *)(v18 + 40) >> 60) & 7) == 2 )
    {
      v35 = MiCaptureDirtyBitToPfn(v17 - 0x58000000000LL);
      v36 = *(unsigned __int16 *)(v18 + 32);
      v4 = v35;
      if ( (!(_WORD)v36 || v36 > 2 && (v36 != 3 || (*(_BYTE *)(v18 + 34) & 8) == 0)) && v47 != v13 )
        KeBugCheckEx(0x1Au, 0x406uLL, a2, v17 / 48, *(unsigned __int16 *)(v18 + 32));
      *(_QWORD *)(v18 + 40) &= 0x8FFFFFFFFFFFFFFFuLL;
    }
    v30 = v51;
    if ( (v51 & 4) != 0 && (unsigned int)MiIsPfnSystemCharged(v17 - 0x58000000000LL) )
    {
      MiDriverPageIsDangling();
      *(_BYTE *)(v18 + 35) &= ~0x20u;
    }
    v29 = v52;
LABEL_67:
    if ( (v30 & 0x10) != 0 )
      *(_BYTE *)(v18 + 35) &= ~8u;
    v37 = ZeroPte;
    if ( a2 >= 0xFFFFF6FB7DBED000uLL && a2 <= 0xFFFFF6FB7DBED7F8uLL )
    {
      if ( (unsigned int)MiPteHasShadow() )
      {
        if ( !HIBYTE(word_140C4E008) && (v37 & 1) != 0 )
          v37 |= 0x8000000000000000uLL;
        *(_QWORD *)a2 = v37;
        MiWritePteShadow(a2, v37, v20);
        goto LABEL_80;
      }
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
        && (v37 & 1) != 0 )
      {
        v37 |= 0x8000000000000000uLL;
      }
    }
    *(_QWORD *)a2 = v37;
LABEL_80:
    if ( (*(_BYTE *)(v18 + 34) & 7) != 6 )
      MiBadShareCount(v18);
    v38 = *(_QWORD *)(v18 + 24);
    v39 = (v38 & 0x3FFFFFFFFFFFFFFFLL) - 1;
    *(_QWORD *)(v18 + 24) = v38 ^ (v39 ^ v38) & 0x3FFFFFFFFFFFFFFFLL;
    if ( (v38 & 0x3FFFFFFFFFFFFFFFLL) == 1 )
      IsZero = MiPfnShareCountIsZero(v18, v39);
    else
      IsZero = 2;
    _InterlockedAnd64((volatile signed __int64 *)(v18 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v45 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v26 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v45, v39, v20, v21);
      while ( *(__int64 *)(v26 + 24) < 0 );
    }
    if ( (*(_BYTE *)(v26 + 34) & 7) != 6 )
      MiBadShareCount(v26);
    v41 = *(_QWORD *)(v26 + 24);
    v42 = (v41 & 0x3FFFFFFFFFFFFFFFLL) - 1;
    *(_QWORD *)(v26 + 24) = v41 ^ (v42 ^ v41) & 0x3FFFFFFFFFFFFFFFLL;
    if ( (v41 & 0x3FFFFFFFFFFFFFFFLL) == 1 )
      MiPfnShareCountIsZero(v26, v42);
    _InterlockedAnd64((volatile signed __int64 *)(v26 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( v4 )
      MiReleasePageFileInfo(v47, v4, 1);
    LOBYTE(CurrentThread) = v48;
    if ( v48 )
    {
      LODWORD(CurrentThread) = MiDecrementCombinedPte(a1, v48);
      IsZero = (int)CurrentThread;
    }
    if ( IsZero == 3 )
      ++*(_QWORD *)(v29 + 8);
    return (char)CurrentThread;
  }
  v31 = ZeroPte;
  LODWORD(CurrentThread) = MiPteInShadowRange(a2, v19);
  if ( !(_DWORD)CurrentThread )
  {
LABEL_51:
    *(_QWORD *)a2 = v31;
    return (char)CurrentThread;
  }
  if ( !(unsigned int)MiPteHasShadow() )
  {
    CurrentThread = KeGetCurrentThread();
    if ( (HIDWORD(CurrentThread->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 && (ZeroPte & 1) != 0 )
      v31 = ZeroPte | 0x8000000000000000uLL;
    goto LABEL_51;
  }
  if ( !HIBYTE(word_140C4E008) && (ZeroPte & 1) != 0 )
    v31 = ZeroPte | 0x8000000000000000uLL;
  *(_QWORD *)a2 = v31;
  LOBYTE(CurrentThread) = MiWritePteShadow(a2, v31, v33);
  return (char)CurrentThread;
}
