/*
 * XREFs of MiDeleteValidSystemPage @ 0x1402AC570
 * Callers:
 *     MiDeleteSystemPagableVm @ 0x140236D90 (MiDeleteSystemPagableVm.c)
 *     MiDeleteKernelStack @ 0x140265A40 (MiDeleteKernelStack.c)
 *     MiTerminateWsleCluster @ 0x1402BF020 (MiTerminateWsleCluster.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14021EA50 (MiPteInShadowRange.c)
 *     MiGetContainingPageTable @ 0x14029C940 (MiGetContainingPageTable.c)
 *     MiCaptureDirtyBitToPfn @ 0x14029F1B0 (MiCaptureDirtyBitToPfn.c)
 *     MiPfnShareCountIsZero @ 0x1402A98E0 (MiPfnShareCountIsZero.c)
 *     KeYieldProcessorEx @ 0x1402DE380 (KeYieldProcessorEx.c)
 *     MiWritePteShadow @ 0x140313F2C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140313F8C (MiPteHasShadow.c)
 *     MiReleasePageFileInfo @ 0x140344F70 (MiReleasePageFileInfo.c)
 *     MiDecrementCombinedPte @ 0x140366C14 (MiDecrementCombinedPte.c)
 *     MiIsPfnSystemCharged @ 0x14037C6C8 (MiIsPfnSystemCharged.c)
 *     MI_PFN_IS_PROTO @ 0x1403F3080 (MI_PFN_IS_PROTO.c)
 *     MiBadShareCount @ 0x1403F30EC (MiBadShareCount.c)
 *     KeBugCheckEx @ 0x1403FBCA0 (KeBugCheckEx.c)
 *     MiDriverPageIsDangling @ 0x140533CF4 (MiDriverPageIsDangling.c)
 */

struct _KTHREAD *__fastcall MiDeleteValidSystemPage(__int64 a1, unsigned __int64 a2, int a3, __int64 a4)
{
  __int64 v4; // rdi
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
  __int64 v25; // rbp
  int v26; // r11d
  __int64 v27; // rcx
  __int64 v28; // r12
  char v29; // r10
  unsigned __int64 v30; // rbx
  struct _KTHREAD *result; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rcx
  unsigned __int64 v39; // rdx
  int IsZero; // ebx
  __int64 v41; // rcx
  unsigned __int64 v42; // rdx
  int v43; // [rsp+30h] [rbp-68h] BYREF
  int v44; // [rsp+34h] [rbp-64h] BYREF
  ULONG_PTR v45; // [rsp+38h] [rbp-60h] BYREF
  __int64 v46; // [rsp+40h] [rbp-58h]
  unsigned __int64 v47; // [rsp+48h] [rbp-50h]
  int v49; // [rsp+A8h] [rbp+10h] BYREF
  int v50; // [rsp+B0h] [rbp+18h]
  __int64 v51; // [rsp+B8h] [rbp+20h]

  v51 = a4;
  v50 = a3;
  v4 = ZeroPte;
  v5 = *(_QWORD *)a2;
  v47 = 0LL;
  v7 = a1;
  v8 = 0xFFFFF6FB7DBED000uLL;
  if ( a2 >= 0xFFFFF6FB7DBED000uLL
    && a2 <= 0xFFFFF6FB7DBED7F8uLL
    && (unsigned int)MiPteHasShadow(a1, 0xFFFFF6FB7DBED7F8uLL, a1, a4)
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
  v45 = v5;
  v13 = *(_QWORD *)(qword_140C4E4C8 + 8 * v12);
  if ( (unsigned __int64)&v45 < v8 || (unsigned __int64)&v45 > 0xFFFFF6FB7DBED7F8uLL )
    goto LABEL_23;
  if ( !(unsigned int)MiPteHasShadow(&v45, v5, v7, a4) || (v5 & 1) == 0 || (v5 & 0x20) != 0 && (v5 & 0x42) != 0 )
    goto LABEL_24;
  v15 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
  if ( !v15 )
  {
LABEL_23:
    v14 = v5;
    goto LABEL_24;
  }
  v16 = *((_QWORD *)&v15->Flink + (((unsigned __int64)&v45 >> 3) & 0x1FF));
  v14 = v5 | 0x20;
  if ( (v16 & 0x20) == 0 )
    v14 = v5;
  if ( (v16 & 0x42) != 0 )
    v14 |= 0x42uLL;
LABEL_24:
  v17 = 48 * ((v14 >> 12) & 0xFFFFFFFFFLL);
  v18 = v17 - 0x58000000000LL;
  v46 = *(_QWORD *)(qword_140C4E4C8 + 8 * ((*(_QWORD *)(v17 - 0x58000000000LL + 40) >> 39) & 0x3FFLL));
  if ( (unsigned int)MI_PFN_IS_PROTO(v17 - 0x58000000000LL) )
  {
    if ( (v19 & 0x1000000000LL) == 0 )
    {
      v24 = *(_QWORD *)(v18 + 8);
      if ( v24 > 0 )
        v47 = v24 | 0x8000000000000000uLL;
    }
    v25 = 48 * MiGetContainingPageTable(a2) - 0x58000000000LL;
    v49 = v26;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v18 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v49);
      while ( *(__int64 *)(v18 + 24) < 0 );
    }
    if ( (v5 & 0x42) != 0 )
      v4 = MiCaptureDirtyBitToPfn(v17 - 0x58000000000LL);
    v27 = *(_QWORD *)(v18 + 16);
    if ( (v27 & 0x400) == 0 || (v5 & 0x200) != 0 )
    {
      v28 = v51;
      v29 = v50;
      ++*(_QWORD *)(v51 + 24);
    }
    else
    {
      if ( qword_140C4DDC0 && (v27 & 0x10) == 0 )
        v27 &= ~qword_140C4DDC0;
      v28 = v51;
      v29 = v50;
      v27 = *(_DWORD *)(*(_QWORD *)(v27 >> 16) + 56LL) & 0x820;
      if ( (_DWORD)v27 == 2080 )
        ++*(_QWORD *)(v51 + 24);
    }
    goto LABEL_67;
  }
  if ( v18 != qword_140C4EBE0 )
  {
    v27 = *(_QWORD *)(v18 + 8);
    if ( (v27 | 0x8000000000000000uLL) != a2 )
      KeBugCheckEx(0x1Au, 0x404uLL, a2, v5, *(_QWORD *)(v18 + 8));
    ++*(_QWORD *)(v21 + 24);
    v25 = v20 + 48 * (v22 & v19);
    v43 = v23;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v18 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v43);
      while ( *(__int64 *)(v18 + 24) < 0 );
    }
    *(_QWORD *)(v18 + 24) |= 0x4000000000000000uLL;
    if ( ((*(_QWORD *)(v18 + 40) >> 60) & 7) == 2 )
    {
      v36 = MiCaptureDirtyBitToPfn(v17 - 0x58000000000LL);
      v27 = *(unsigned __int16 *)(v18 + 32);
      v4 = v36;
      if ( (!(_WORD)v27 || (unsigned int)v27 > 2 && ((_DWORD)v27 != 3 || (*(_BYTE *)(v18 + 34) & 8) == 0)) && v46 != v13 )
        KeBugCheckEx(0x1Au, 0x406uLL, a2, v17 / 48, *(unsigned __int16 *)(v18 + 32));
      *(_QWORD *)(v18 + 40) &= 0x8FFFFFFFFFFFFFFFuLL;
    }
    v29 = v50;
    if ( (v50 & 4) != 0 && (unsigned int)MiIsPfnSystemCharged(v17 - 0x58000000000LL) )
    {
      MiDriverPageIsDangling();
      *(_BYTE *)(v18 + 35) &= ~0x20u;
    }
    v28 = v51;
LABEL_67:
    if ( (v29 & 0x10) != 0 )
      *(_BYTE *)(v18 + 35) &= ~8u;
    v37 = ZeroPte;
    if ( a2 >= 0xFFFFF6FB7DBED000uLL && a2 <= 0xFFFFF6FB7DBED7F8uLL )
    {
      if ( (unsigned int)MiPteHasShadow(v27, ZeroPte, v20, v21) )
      {
        if ( !HIBYTE(word_140C4DE88) && (v37 & 1) != 0 )
          v37 |= 0x8000000000000000uLL;
        *(_QWORD *)a2 = v37;
        MiWritePteShadow(a2, v37);
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
    v44 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v25 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v44);
      while ( *(__int64 *)(v25 + 24) < 0 );
    }
    if ( (*(_BYTE *)(v25 + 34) & 7) != 6 )
      MiBadShareCount(v25);
    v41 = *(_QWORD *)(v25 + 24);
    v42 = (v41 & 0x3FFFFFFFFFFFFFFFLL) - 1;
    *(_QWORD *)(v25 + 24) = v41 ^ (v42 ^ v41) & 0x3FFFFFFFFFFFFFFFLL;
    if ( (v41 & 0x3FFFFFFFFFFFFFFFLL) == 1 )
      MiPfnShareCountIsZero(v25, v42);
    _InterlockedAnd64((volatile signed __int64 *)(v25 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( v4 )
      MiReleasePageFileInfo(v46, v4, 1LL);
    result = (struct _KTHREAD *)v47;
    if ( v47 )
    {
      result = (struct _KTHREAD *)MiDecrementCombinedPte(a1, v47);
      IsZero = (int)result;
    }
    if ( IsZero == 3 )
      ++*(_QWORD *)(v28 + 8);
    return result;
  }
  v30 = ZeroPte;
  result = (struct _KTHREAD *)MiPteInShadowRange(a2);
  if ( !(_DWORD)result )
  {
LABEL_51:
    *(_QWORD *)a2 = v30;
    return result;
  }
  if ( !(unsigned int)MiPteHasShadow(v33, v32, v34, v35) )
  {
    result = KeGetCurrentThread();
    if ( (HIDWORD(result->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 && (ZeroPte & 1) != 0 )
      v30 = ZeroPte | 0x8000000000000000uLL;
    goto LABEL_51;
  }
  if ( !HIBYTE(word_140C4DE88) && (ZeroPte & 1) != 0 )
    v30 = ZeroPte | 0x8000000000000000uLL;
  *(_QWORD *)a2 = v30;
  return (struct _KTHREAD *)MiWritePteShadow(a2, v30);
}
