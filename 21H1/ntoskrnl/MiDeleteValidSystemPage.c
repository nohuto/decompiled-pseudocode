/*
 * XREFs of MiDeleteValidSystemPage @ 0x1402235A0
 * Callers:
 *     MiDeleteKernelStack @ 0x1402263A0 (MiDeleteKernelStack.c)
 *     MiTerminateWsleCluster @ 0x14029AE10 (MiTerminateWsleCluster.c)
 *     MiDeleteSystemPagableVm @ 0x1402AB670 (MiDeleteSystemPagableVm.c)
 * Callees:
 *     MiCaptureDirtyBitToPfn @ 0x140223BF0 (MiCaptureDirtyBitToPfn.c)
 *     MiGetContainingPageTable @ 0x140227150 (MiGetContainingPageTable.c)
 *     KeYieldProcessorEx @ 0x140244550 (KeYieldProcessorEx.c)
 *     MiPfnShareCountIsZero @ 0x14028E490 (MiPfnShareCountIsZero.c)
 *     MiPteInShadowRange @ 0x140291700 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1402F2F20 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402F2F80 (MiPteHasShadow.c)
 *     MiReleasePageFileInfo @ 0x14034EFC0 (MiReleasePageFileInfo.c)
 *     MiDecrementCombinedPte @ 0x140364274 (MiDecrementCombinedPte.c)
 *     MiIsPfnSystemCharged @ 0x140379C18 (MiIsPfnSystemCharged.c)
 *     MI_PFN_IS_PROTO @ 0x1403ED8B8 (MI_PFN_IS_PROTO.c)
 *     MiBadShareCount @ 0x1403ED924 (MiBadShareCount.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 *     MiDriverPageIsDangling @ 0x14052FCD4 (MiDriverPageIsDangling.c)
 */

struct _KTHREAD *__fastcall MiDeleteValidSystemPage(__int64 a1, ULONG_PTR a2, int a3, __int64 a4)
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
  unsigned __int64 v18; // rdx
  __int64 v19; // rsi
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // r10
  int v24; // r11d
  __int64 v25; // rax
  __int64 v26; // rbp
  int v27; // r11d
  __int64 v28; // rcx
  __int64 v29; // r12
  char v30; // r10
  unsigned __int64 v31; // rbx
  struct _KTHREAD *result; // rax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rcx
  int IsZero; // ebx
  __int64 v39; // rcx
  int v40; // [rsp+30h] [rbp-68h] BYREF
  int v41; // [rsp+34h] [rbp-64h] BYREF
  ULONG_PTR v42; // [rsp+38h] [rbp-60h] BYREF
  __int64 v43; // [rsp+40h] [rbp-58h]
  unsigned __int64 v44; // [rsp+48h] [rbp-50h]
  int v46; // [rsp+A8h] [rbp+10h] BYREF
  int v47; // [rsp+B0h] [rbp+18h]
  __int64 v48; // [rsp+B8h] [rbp+20h]

  v48 = a4;
  v47 = a3;
  v4 = ZeroPte;
  v5 = *(_QWORD *)a2;
  v44 = 0LL;
  v7 = a1;
  v8 = 0xFFFFF6FB7DBED000uLL;
  if ( a2 >= 0xFFFFF6FB7DBED000uLL
    && a2 <= 0xFFFFF6FB7DBED7F8uLL
    && (unsigned int)MiPteHasShadow(a1, 0xFFFFF6FB7DBED7F8uLL)
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
  v42 = v5;
  v13 = *(_QWORD *)(qword_140C4E588 + 8 * v12);
  if ( (unsigned __int64)&v42 < v8 || (unsigned __int64)&v42 > 0xFFFFF6FB7DBED7F8uLL )
    goto LABEL_23;
  if ( !(unsigned int)MiPteHasShadow(&v42, v5) || (v5 & 1) == 0 || (v5 & 0x20) != 0 && (v5 & 0x42) != 0 )
    goto LABEL_24;
  v15 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
  if ( !v15 )
  {
LABEL_23:
    v14 = v5;
    goto LABEL_24;
  }
  v16 = *((_QWORD *)&v15->Flink + (((unsigned __int64)&v42 >> 3) & 0x1FF));
  v14 = v5 | 0x20;
  if ( (v16 & 0x20) == 0 )
    v14 = v5;
  if ( (v16 & 0x42) != 0 )
    v14 |= 0x42uLL;
LABEL_24:
  v17 = 48 * ((v14 >> 12) & 0xFFFFFFFFFLL);
  v18 = *(_QWORD *)(v17 - 0x58000000000LL + 40);
  v19 = v17 - 0x58000000000LL;
  v43 = *(_QWORD *)(qword_140C4E588 + 8 * ((v18 >> 39) & 0x3FF));
  if ( (unsigned int)MI_PFN_IS_PROTO(v17 - 0x58000000000LL, v18, 0xFFFFFA8000000000uLL) )
  {
    if ( (v20 & 0x1000000000LL) == 0 )
    {
      v25 = *(_QWORD *)(v19 + 8);
      if ( v25 > 0 )
        v44 = v25 | 0x8000000000000000uLL;
    }
    v26 = 48 * MiGetContainingPageTable(a2, v20) - 0x58000000000LL;
    v46 = v27;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v19 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v46);
      while ( *(__int64 *)(v19 + 24) < 0 );
    }
    if ( (v5 & 0x42) != 0 )
      v4 = MiCaptureDirtyBitToPfn(v17 - 0x58000000000LL);
    v28 = *(_QWORD *)(v19 + 16);
    if ( (v28 & 0x400) == 0 || (v5 & 0x200) != 0 )
    {
      v29 = v48;
      v30 = v47;
      ++*(_QWORD *)(v48 + 24);
    }
    else
    {
      if ( qword_140C4DE80 && (v28 & 0x10) == 0 )
        v28 &= ~qword_140C4DE80;
      v29 = v48;
      v30 = v47;
      v28 = *(_DWORD *)(*(_QWORD *)(v28 >> 16) + 56LL) & 0x820;
      if ( (_DWORD)v28 == 2080 )
        ++*(_QWORD *)(v48 + 24);
    }
    goto LABEL_67;
  }
  if ( v19 != qword_140C4ECA0 )
  {
    v28 = *(_QWORD *)(v19 + 8);
    if ( (v28 | 0x8000000000000000uLL) != a2 )
      KeBugCheckEx(0x1Au, 0x404uLL, a2, v5, *(_QWORD *)(v19 + 8));
    ++*(_QWORD *)(v22 + 24);
    v26 = v21 + 48 * (v23 & v20);
    v40 = v24;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v19 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v40);
      while ( *(__int64 *)(v19 + 24) < 0 );
    }
    *(_QWORD *)(v19 + 24) |= 0x4000000000000000uLL;
    if ( ((*(_QWORD *)(v19 + 40) >> 60) & 7) == 2 )
    {
      v35 = MiCaptureDirtyBitToPfn(v17 - 0x58000000000LL);
      v28 = *(unsigned __int16 *)(v19 + 32);
      v4 = v35;
      if ( (!(_WORD)v28 || (unsigned int)v28 > 2 && ((_DWORD)v28 != 3 || (*(_BYTE *)(v19 + 34) & 8) == 0)) && v43 != v13 )
        KeBugCheckEx(0x1Au, 0x406uLL, a2, v17 / 48, *(unsigned __int16 *)(v19 + 32));
      *(_QWORD *)(v19 + 40) &= 0x8FFFFFFFFFFFFFFFuLL;
    }
    v30 = v47;
    if ( (v47 & 4) != 0 && (unsigned int)MiIsPfnSystemCharged(v17 - 0x58000000000LL) )
    {
      MiDriverPageIsDangling();
      *(_BYTE *)(v19 + 35) &= ~0x20u;
    }
    v29 = v48;
LABEL_67:
    if ( (v30 & 0x10) != 0 )
      *(_BYTE *)(v19 + 35) &= ~8u;
    v36 = ZeroPte;
    if ( a2 >= 0xFFFFF6FB7DBED000uLL && a2 <= 0xFFFFF6FB7DBED7F8uLL )
    {
      if ( (unsigned int)MiPteHasShadow(v28, ZeroPte) )
      {
        if ( !HIBYTE(word_140C4DF48) && (v36 & 1) != 0 )
          v36 |= 0x8000000000000000uLL;
        *(_QWORD *)a2 = v36;
        MiWritePteShadow(a2, v36);
        goto LABEL_80;
      }
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
        && (v36 & 1) != 0 )
      {
        v36 |= 0x8000000000000000uLL;
      }
    }
    *(_QWORD *)a2 = v36;
LABEL_80:
    if ( (*(_BYTE *)(v19 + 34) & 7) != 6 )
      MiBadShareCount(v19);
    v37 = *(_QWORD *)(v19 + 24);
    *(_QWORD *)(v19 + 24) = v37 ^ (((v37 & 0x3FFFFFFFFFFFFFFFLL) - 1) ^ v37) & 0x3FFFFFFFFFFFFFFFLL;
    if ( (v37 & 0x3FFFFFFFFFFFFFFFLL) == 1 )
      IsZero = MiPfnShareCountIsZero(v19);
    else
      IsZero = 2;
    _InterlockedAnd64((volatile signed __int64 *)(v19 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v41 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v26 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v41);
      while ( *(__int64 *)(v26 + 24) < 0 );
    }
    if ( (*(_BYTE *)(v26 + 34) & 7) != 6 )
      MiBadShareCount(v26);
    v39 = *(_QWORD *)(v26 + 24);
    *(_QWORD *)(v26 + 24) = v39 ^ (((v39 & 0x3FFFFFFFFFFFFFFFLL) - 1) ^ v39) & 0x3FFFFFFFFFFFFFFFLL;
    if ( (v39 & 0x3FFFFFFFFFFFFFFFLL) == 1 )
      MiPfnShareCountIsZero(v26);
    _InterlockedAnd64((volatile signed __int64 *)(v26 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( v4 )
      MiReleasePageFileInfo(v43, v4, 1LL);
    result = (struct _KTHREAD *)v44;
    if ( v44 )
    {
      result = (struct _KTHREAD *)MiDecrementCombinedPte(a1, v44);
      IsZero = (int)result;
    }
    if ( IsZero == 3 )
      ++*(_QWORD *)(v29 + 8);
    return result;
  }
  v31 = ZeroPte;
  result = (struct _KTHREAD *)MiPteInShadowRange(a2, v20);
  if ( !(_DWORD)result )
  {
LABEL_51:
    *(_QWORD *)a2 = v31;
    return result;
  }
  if ( !(unsigned int)MiPteHasShadow(v34, v33) )
  {
    result = KeGetCurrentThread();
    if ( (HIDWORD(result->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 && (ZeroPte & 1) != 0 )
      v31 = ZeroPte | 0x8000000000000000uLL;
    goto LABEL_51;
  }
  if ( !HIBYTE(word_140C4DF48) && (ZeroPte & 1) != 0 )
    v31 = ZeroPte | 0x8000000000000000uLL;
  *(_QWORD *)a2 = v31;
  return (struct _KTHREAD *)MiWritePteShadow(a2, v31);
}
