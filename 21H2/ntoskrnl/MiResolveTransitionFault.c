/*
 * XREFs of MiResolveTransitionFault @ 0x1402BB090
 * Callers:
 *     MiDispatchFault @ 0x1402B3800 (MiDispatchFault.c)
 *     MiResolveProtoPteFault @ 0x1402B9CD0 (MiResolveProtoPteFault.c)
 * Callees:
 *     MiHandleCollidedFault @ 0x14020909C (MiHandleCollidedFault.c)
 *     MiOkToSetPteDirtyForNotValidFault @ 0x140229FC4 (MiOkToSetPteDirtyForNotValidFault.c)
 *     MiUserPdeOrAbove @ 0x14022A014 (MiUserPdeOrAbove.c)
 *     MiWritePteShadow @ 0x140234B9C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140234BFC (MiPteHasShadow.c)
 *     MiReleasePageFileInfo @ 0x140255C50 (MiReleasePageFileInfo.c)
 *     MiUpdatePfnPriority @ 0x14025ED44 (MiUpdatePfnPriority.c)
 *     MiLockAndDecrementShareCount @ 0x140287230 (MiLockAndDecrementShareCount.c)
 *     MiAllocateWsle @ 0x1402B65C0 (MiAllocateWsle.c)
 *     MiCompleteProtoPteFault @ 0x1402B8690 (MiCompleteProtoPteFault.c)
 *     MiHandleTransitionFault @ 0x1402BBD50 (MiHandleTransitionFault.c)
 *     MiIsPfnFileOnly @ 0x1402BD660 (MiIsPfnFileOnly.c)
 *     MiUnlockProtoPoolPage @ 0x1402DE040 (MiUnlockProtoPoolPage.c)
 *     KeYieldProcessorEx @ 0x1402EFAD0 (KeYieldProcessorEx.c)
 *     MiFreeInPageSupportBlock @ 0x14030762C (MiFreeInPageSupportBlock.c)
 *     MiCaptureDirtyBitToPfn @ 0x14031A860 (MiCaptureDirtyBitToPfn.c)
 *     MiReturnCommit @ 0x140322FF0 (MiReturnCommit.c)
 *     MiEmptyDeferredWorkingSetEntries @ 0x140326744 (MiEmptyDeferredWorkingSetEntries.c)
 *     MiIsAddressGlobal @ 0x140329860 (MiIsAddressGlobal.c)
 *     MiPfnReferenceCountIsZero @ 0x140330B40 (MiPfnReferenceCountIsZero.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140338C10 (MI_READ_PTE_LOCK_FREE.c)
 *     KeSetEvent @ 0x14034E2F0 (KeSetEvent.c)
 *     MiPteInShadowRange @ 0x140353840 (MiPteInShadowRange.c)
 *     MI_PFN_IS_PROTO @ 0x1403F48C8 (MI_PFN_IS_PROTO.c)
 *     MiBadRefCount @ 0x1403F48DC (MiBadRefCount.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     MiMakeProtoReadOnly @ 0x14053AAD8 (MiMakeProtoReadOnly.c)
 */

__int64 __fastcall MiResolveTransitionFault(
        __int64 a1,
        unsigned __int64 Flink,
        __int64 a3,
        struct _LIST_ENTRY *a4,
        _QWORD *a5)
{
  __int64 v5; // r9
  __int64 v6; // rax
  __int64 v8; // r10
  unsigned __int64 v9; // r13
  __int64 v10; // r11
  ULONG_PTR i; // rbx
  unsigned __int64 v12; // rax
  __int64 v13; // rsi
  __int64 result; // rax
  unsigned __int64 v15; // rbx
  __int64 v16; // r8
  __int64 v17; // rax
  __int64 v18; // r8
  __int64 v19; // rax
  unsigned __int64 v20; // rax
  unsigned int v21; // ebx
  char v22; // cl
  __int64 v23; // rax
  __int64 v24; // rdx
  struct _LIST_ENTRY *v25; // r14
  __int64 v26; // rax
  unsigned __int64 v27; // rbx
  __int64 v28; // rax
  __int64 v29; // rax
  unsigned __int64 v30; // rbx
  int IsAddressGlobal; // eax
  __int64 v32; // r8
  __int64 v33; // rbx
  unsigned __int64 v34; // rdi
  unsigned __int64 v35; // rbx
  __int64 v36; // rdx
  __int64 v37; // rax
  __int64 v38; // rax
  _QWORD *v39; // r8
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // rdx
  __int64 v43; // r14
  char v44; // r12
  int v45; // r15d
  __int64 v46; // rdx
  bool v47; // zf
  __int64 v48; // r9
  __int64 v49; // rax
  unsigned __int64 v50; // r8
  char v51; // al
  int v52; // edx
  unsigned __int64 v53; // r8
  unsigned __int64 v54; // r9
  unsigned __int64 v55; // r10
  __int64 v56; // r11
  __int64 v57; // r9
  __int64 v58; // r14
  unsigned __int64 v59; // r8
  struct _KPRCB *CurrentPrcb; // r9
  __int64 CachedResidentAvailable; // rdx
  signed __int32 v62; // eax
  _SLIST_ENTRY *v63; // rdi
  _BYTE *v64; // rcx
  unsigned __int64 v65; // rdi
  __int64 v66; // rax
  char v67; // dl
  int v68; // eax
  __int16 v69; // ax
  char v70; // dl
  unsigned int v71; // [rsp+40h] [rbp-78h] BYREF
  int v72; // [rsp+44h] [rbp-74h] BYREF
  int v73; // [rsp+48h] [rbp-70h] BYREF
  __int64 v74; // [rsp+50h] [rbp-68h]
  __int64 v75; // [rsp+58h] [rbp-60h] BYREF
  PSLIST_ENTRY ListEntry; // [rsp+60h] [rbp-58h] BYREF
  __int64 v77; // [rsp+68h] [rbp-50h]
  unsigned __int64 v78; // [rsp+70h] [rbp-48h]
  __int64 v79; // [rsp+78h] [rbp-40h]

  v5 = (__int64)a5;
  v6 = *(_QWORD *)(a1 + 56);
  v8 = *(_QWORD *)(a1 + 16);
  v9 = Flink;
  v71 = 0;
  v10 = a1;
  *a5 = 0LL;
  v79 = v6;
  v74 = v8;
  ListEntry = 0LL;
  if ( a3 )
  {
    v15 = *(_QWORD *)Flink;
    if ( Flink >= 0xFFFFF6FB7DBED000uLL
      && Flink <= 0xFFFFF6FB7DBED7F8uLL
      && (unsigned int)MiPteHasShadow()
      && (v15 & 1) != 0
      && ((v15 & 0x20) == 0 || (v15 & 0x42) == 0) )
    {
      Flink = (unsigned __int64)KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( Flink )
      {
        v19 = *(_QWORD *)(Flink + 8 * (v18 & (v9 >> 3)));
        Flink = v15 | 0x20;
        if ( (v19 & 0x20) == 0 )
          Flink = v15;
        v15 = Flink;
        if ( (v19 & 0x42) != 0 )
          v15 = Flink | 0x42;
      }
    }
    v20 = v15;
    if ( qword_140C4DF80 && (v15 & 0x10) == 0 )
      v20 = v15 & ~qword_140C4DF80;
    v13 = 48 * ((v20 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
LABEL_47:
    if ( (*(_BYTE *)(v13 + 35) & 0x10) != 0 )
    {
      v21 = -1073740023;
LABEL_60:
      _InterlockedAnd64((volatile signed __int64 *)(v13 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( a3 )
      {
        LOBYTE(Flink) = 17;
        MiUnlockProtoPoolPage(a3, Flink);
      }
      return v21;
    }
    Flink = v8 & 1;
    v78 = Flink;
    if ( (v8 & 1) != 0 && *(_BYTE *)(v8 & 0xFFFFFFFFFFFFFFFEuLL) == 1 )
    {
      MiUpdatePfnPriority(v13);
      v21 = 0;
      goto LABEL_60;
    }
    __incgsdword(0x2E98u);
    v22 = *(_BYTE *)(v13 + 34);
    if ( (v22 & 8) != 0 )
    {
      if ( (MiFlags & 0x40000) != 0 && (v23 = *(_QWORD *)(v13 + 16) >> 5, (v23 & 0x1F) == 0) && (v23 & 2) != 0
        || (v8 & 1) != 0
        && *(_BYTE *)(v8 & 0xFFFFFFFFFFFFFFFEuLL) == 5
        && (*(_DWORD *)((v8 & 0xFFFFFFFFFFFFFFFEuLL) + 56) & 0x20) != 0 )
      {
        *(_DWORD *)(v10 + 80) |= 0x80u;
        v21 = -1073741801;
        goto LABEL_60;
      }
    }
    if ( (v22 & 0x20) != 0 )
    {
      result = MiHandleCollidedFault(v10, v9, a3, v13, v5, &v71);
      if ( v71 <= 1 || (int)result < 0 )
        return result;
    }
    else
    {
      v75 = 0LL;
      result = MiHandleTransitionFault(v10, v9, a3, v13, &v75, v15, &ListEntry);
      if ( (int)result < 0 )
        return result;
      if ( v75 )
        v13 = v75;
    }
    v25 = a4;
    v26 = *(_QWORD *)(a1 + 16);
    if ( (v26 & 1) != 0 && *(_BYTE *)(v26 & 0xFFFFFFFFFFFFFFFEuLL) == 4 )
    {
      v15 = -865LL;
      *(_QWORD *)v9 = *(_QWORD *)v9 & 0xFFFFFFFFFFFFFC1FuLL | 0x80;
    }
    if ( ((v15 >> 5) & 0x1F) == 0x18 )
      MiMakeProtoReadOnly(v9, v13);
    v27 = *(_QWORD *)v9;
    if ( v9 >= 0xFFFFF6FB7DBED000uLL
      && v9 <= 0xFFFFF6FB7DBED7F8uLL
      && (unsigned int)MiPteHasShadow()
      && (v27 & 1) != 0
      && ((v27 & 0x20) == 0 || (v27 & 0x42) == 0) )
    {
      v24 = (__int64)KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( v24 )
      {
        v28 = *(_QWORD *)(v24 + 8 * ((v9 >> 3) & 0x1FF));
        v24 = v27 | 0x20;
        if ( (v28 & 0x20) == 0 )
          v24 = v27;
        v27 = v24;
        if ( (v28 & 0x42) != 0 )
          v27 = v24 | 0x42;
      }
    }
    v29 = v27;
    if ( qword_140C4DF80 && (v27 & 0x10) == 0 )
      v29 = v27 & ~qword_140C4DF80;
    v30 = v29 & 0xFFFFFFFFF000LL | MmProtectToPteMask[(v27 >> 5) & 0x1F] & 0xFFFF000000000E7FuLL | 0x21;
    if ( v9 < 0xFFFFF68000000000uLL || v9 > 0xFFFFF6FFFFFFFFFFuLL )
    {
      v33 = v30 | 0x100;
    }
    else
    {
      if ( v9 >= 0xFFFFF6FB40000000uLL && v9 <= 0xFFFFF6FB7FFFFFFFuLL )
      {
        if ( v9 == 0xFFFFF6FB7DBEDF68uLL )
          v30 |= 0x8000000000000000uLL;
        else
          v30 &= ~0x8000000000000000uLL;
        if ( (unsigned int)MiUserPdeOrAbove(v9) )
          v30 |= 4uLL;
      }
      if ( v9 <= 0xFFFFF6BFFFFFFF78uLL )
        v30 |= 4uLL;
      IsAddressGlobal = MiIsAddressGlobal((__int64)(v9 << 25) >> 16, v24, v30);
      v33 = v30 | 0x100;
      if ( !IsAddressGlobal )
        v33 = v32;
    }
    v34 = ZeroPte;
    v35 = v33 & 0xF0FFFFFFFFFFFFFFuLL | 0xA00000000000000LL;
    v36 = *(_QWORD *)(qword_140C4E688 + 8 * ((*(_QWORD *)(v13 + 40) >> 39) & 0x3FFLL));
    v37 = *(_QWORD *)(v13 + 16);
    v77 = v36;
    if ( (v37 & 0x400) == 0 && (v37 & 4) != 0 && (unsigned __int16)v37 >> 12 == *(_DWORD *)(v36 + 1156) )
      v34 = MiCaptureDirtyBitToPfn(v13);
    v38 = *(_QWORD *)(v13 + 16);
    if ( (v38 & 0x400) == 0 && (v38 & 0x4000000) != 0 )
      v35 |= 0x40uLL;
    if ( (v35 & 0x800) != 0 )
    {
      v39 = (_QWORD *)a1;
      if ( a4 && !MiOkToSetPteDirtyForNotValidFault(v35, *(_QWORD *)a1) )
        v25 = 0LL;
      if ( (*(_BYTE *)(v13 + 34) & 0x10) != 0 )
      {
        if ( v25 || *v39 >= 0xFFFF800000000000uLL )
          goto LABEL_122;
      }
      else if ( v25 && !(unsigned int)MI_PFN_IS_PROTO(v13) )
      {
        v34 = MiCaptureDirtyBitToPfn(v40);
LABEL_122:
        v35 |= 0x42uLL;
      }
    }
    if ( !(unsigned int)MI_PFN_IS_PROTO(v13) )
      goto LABEL_133;
    v42 = v35;
    if ( v9 >= 0xFFFFF6FB7DBED000uLL && v9 <= 0xFFFFF6FB7DBED7F8uLL )
    {
      if ( (unsigned int)MiPteHasShadow() )
      {
        if ( !HIBYTE(word_140C4E048) )
          v42 |= 0x8000000000000000uLL;
        *(_QWORD *)v9 = v42;
        MiWritePteShadow(v9, v42);
LABEL_133:
        _InterlockedAnd64((volatile signed __int64 *)(v13 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        v43 = a3;
        v44 = 0;
        v45 = 1;
        if ( !a3 )
          goto LABEL_181;
        v73 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(a3 + 24), 0x3FuLL) )
        {
          do
            KeYieldProcessorEx(&v73);
          while ( *(__int64 *)(a3 + 24) < 0 );
        }
        *(_BYTE *)(a3 + 34) &= ~0x20u;
        v46 = *(unsigned __int16 *)(a3 + 32);
        if ( !(_WORD)v46 )
          MiBadRefCount(a3);
        v47 = (_WORD)v46 == 1;
        LOWORD(v46) = v46 - 1;
        *(_WORD *)(a3 + 32) = v46;
        if ( v47 && (unsigned int)MiIsPfnFileOnly(a3, v46, v41) )
          goto LABEL_179;
        v48 = *(_QWORD *)(a3 + 40);
        if ( (v48 & 0x1000000000LL) != 0 || (v48 & 0x2000000000000LL) != 0 )
          goto LABEL_180;
        v49 = *(_QWORD *)(a3 + 24) & 0x3FFFFFFFFFFFFFFFLL;
        if ( !(_WORD)v46 )
          goto LABEL_150;
        if ( (_WORD)v46 == 1 )
        {
          if ( v49 )
          {
LABEL_149:
            v45 = 0;
LABEL_150:
            v50 = *(_QWORD *)(a3 + 8) | 0x8000000000000000uLL;
            if ( v50 > 0xFFFFF6BFFFFFFF78uLL || v50 < 0xFFFFF68000000000uLL )
            {
              v51 = *(_BYTE *)(a3 + 35);
              if ( (v51 & 0x20) != 0 )
              {
                *(_BYTE *)(a3 + 35) = v51 & 0xDF;
                goto LABEL_178;
              }
            }
            if ( (unsigned int)MI_PFN_IS_PROTO(a3) && (*(_DWORD *)(a3 + 16) & 0x400LL) != 0 )
            {
              v52 = 1;
            }
            else if ( v53 <= v55 && v53 >= 0xFFFFF68000000000uLL && (*(_BYTE *)(a3 + 35) & 0x20) != 0 )
            {
              v52 = 1;
            }
            else if ( v45 == 1 && (v56 & 0x4000000000000000LL) != 0 )
            {
              v52 = 1;
            }
            v57 = (v54 >> 39) & 0x3FF;
            v58 = *(_QWORD *)(qword_140C4E688 + 8 * v57);
            if ( v52 == 1 )
              MiReturnCommit(*(_QWORD *)(qword_140C4E688 + 8 * v57), 1LL, v53, v57);
            v59 = 1LL;
            if ( (ULONG_PTR *)v58 != &MiSystemPartition )
              goto LABEL_176;
            CurrentPrcb = KeGetCurrentPrcb();
            CachedResidentAvailable = (int)CurrentPrcb->CachedResidentAvailable;
            if ( (_DWORD)CachedResidentAvailable == -1 )
              goto LABEL_176;
            if ( (unsigned __int64)(CachedResidentAvailable + 1) <= 0x100 )
            {
              do
              {
                v62 = _InterlockedCompareExchange(
                        (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                        CachedResidentAvailable + 1,
                        CachedResidentAvailable);
                v47 = (_DWORD)CachedResidentAvailable == v62;
                LODWORD(CachedResidentAvailable) = v62;
                if ( v47 )
                  goto LABEL_177;
              }
              while ( v62 != -1 && (unsigned __int64)(v62 + 1LL) <= 0x100 );
            }
            if ( (int)CachedResidentAvailable > 192
              && (_DWORD)CachedResidentAvailable == _InterlockedCompareExchange(
                                                      (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                                                      192,
                                                      CachedResidentAvailable) )
            {
              v59 = (int)CachedResidentAvailable - 192 + 1LL;
            }
            if ( v59 )
LABEL_176:
              _InterlockedExchangeAdd64((volatile signed __int64 *)(v58 + 7168), v59);
LABEL_177:
            v43 = a3;
LABEL_178:
            if ( v45 )
LABEL_179:
              MiPfnReferenceCountIsZero(v43, (v43 + 0x58000000000LL) / 48);
LABEL_180:
            _InterlockedAnd64((volatile signed __int64 *)(v43 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_181:
            if ( v34 )
              MiReleasePageFileInfo(v77, v34, 1);
            v63 = ListEntry;
            if ( ListEntry )
            {
              if ( SLODWORD(ListEntry[11].Next) > 1 )
                KeSetEvent((PRKEVENT)(&ListEntry[3].Next + 1), 0, 0);
              MiFreeInPageSupportBlock(v63);
            }
            if ( (unsigned int)MI_PFN_IS_PROTO(v13) )
            {
              result = MiCompleteProtoPteFault(a1, v35, a4, 0, v74);
              if ( (int)result < 0 )
                return result;
              return 272LL;
            }
            v64 = (_BYTE *)(v74 & 0xFFFFFFFFFFFFFFFEuLL);
            if ( !v78 || *v64 != 4 )
            {
              v65 = 0LL;
              if ( v78 )
              {
                if ( *v64 == 3 )
                {
                  v35 &= ~0x20uLL;
                  v44 = 1;
                }
                else if ( *v64 == 5 )
                {
                  v65 = v74 & 0xFFFFFFFFFFFFFFFEuLL;
                }
              }
              if ( (*(_BYTE *)(a1 + 69) & 8) != 0 )
              {
                v66 = *(_QWORD *)(a1 + 16);
                if ( (v66 & 1) == 0 || *(_BYTE *)(v66 & 0xFFFFFFFFFFFFFFFEuLL) != 2 )
                  v35 &= ~0x20uLL;
              }
              v67 = *(_BYTE *)(a1 + 69);
              if ( (v67 & 5) == 4 && (v67 & 2) == 0 )
              {
                v68 = *(unsigned __int16 *)(a1 + 66);
                if ( (_WORD)v68
                  && (v68 + *(unsigned __int16 *)(a1 + 64) != (((unsigned int)v9 >> 3) & 0x1FF) || (v67 & 0x10) == 0) )
                {
                  MiEmptyDeferredWorkingSetEntries(a1 + 56);
                }
                v69 = *(_WORD *)(a1 + 66);
                if ( v69 )
                {
                  *(_WORD *)(a1 + 66) = v69 + 1;
                }
                else
                {
                  *(_WORD *)(a1 + 66) = 1;
                  *(_WORD *)(a1 + 64) = ((unsigned int)v9 >> 3) & 0x1FF;
                  if ( (unsigned int)MI_PFN_IS_PROTO(v13) )
                    *(_BYTE *)(a1 + 69) = v70 & 0xEF;
                  else
                    *(_BYTE *)(a1 + 69) = v70 | 0x10;
                }
                v44 |= 4u;
              }
              if ( !(unsigned int)MiAllocateWsle(v79, v9, (_QWORD *)v13, 0, v35, v44, v65) )
              {
                MiLockAndDecrementShareCount(v13, 0);
                return 3221225495LL;
              }
              return 272LL;
            }
            if ( (unsigned int)MiPteInShadowRange(v9) )
            {
              if ( (unsigned int)MiPteHasShadow() )
              {
                if ( !HIBYTE(word_140C4E048) )
                  v35 |= 0x8000000000000000uLL;
                *(_QWORD *)v9 = v35;
                MiWritePteShadow(v9, v35);
                return 272LL;
              }
              if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
                v35 |= 0x8000000000000000uLL;
            }
            *(_QWORD *)v9 = v35;
            return 272LL;
          }
        }
        else if ( (_WORD)v46 != 2 || !v49 )
        {
          goto LABEL_180;
        }
        if ( (*(_BYTE *)(a3 + 34) & 8) == 0 )
          goto LABEL_180;
        goto LABEL_149;
      }
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
        v42 |= 0x8000000000000000uLL;
    }
    *(_QWORD *)v9 = v42;
    goto LABEL_133;
  }
  for ( i = MI_READ_PTE_LOCK_FREE(Flink); (i & 0x800) != 0; i = MI_READ_PTE_LOCK_FREE(v9) )
  {
    if ( (i & 1) == 0 && (!i || !qword_140C4DF80 || (qword_140C4DF80 & i) != 0) )
    {
      v12 = i;
      if ( qword_140C4DF80 && (i & 0x10) == 0 )
        v12 = i & ~qword_140C4DF80;
      if ( (*(_QWORD *)(48 * ((v12 >> 12) & 0xFFFFFFFFFLL) - 0x57FFFFFFFD8LL) & 0x4000000000000LL) != 0 )
      {
        v13 = 48 * ((v12 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
        v72 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v13 + 24), 0x3FuLL) )
        {
          do
            KeYieldProcessorEx(&v72);
          while ( *(__int64 *)(v13 + 24) < 0 );
        }
        if ( MI_READ_PTE_LOCK_FREE(v9) == i )
        {
          Flink = 0x8000000000000000uLL;
          if ( (*(_QWORD *)(v13 + 8) | 0x8000000000000000uLL) != v9 )
          {
            Flink = 0x1000000000LL;
            if ( (*(_QWORD *)(v13 + 40) & 0x1000000000LL) == 0 )
              KeBugCheckEx(0x1Au, 0x411uLL, v9, i, *(_QWORD *)(v13 + 8));
          }
          v15 = *(_QWORD *)v9;
          if ( v9 >= 0xFFFFF6FB7DBED000uLL
            && v9 <= 0xFFFFF6FB7DBED7F8uLL
            && (unsigned int)MiPteHasShadow()
            && (v15 & 1) != 0
            && ((v15 & 0x20) == 0 || (v15 & 0x42) == 0) )
          {
            Flink = (unsigned __int64)KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
            if ( Flink )
            {
              v17 = *(_QWORD *)(Flink + 8 * (v16 & (v9 >> 3)));
              Flink = v15 | 0x20;
              if ( (v17 & 0x20) == 0 )
                Flink = v15;
              v15 = Flink;
              if ( (v17 & 0x42) != 0 )
                v15 = Flink | 0x42;
            }
          }
          v5 = (__int64)a5;
          v8 = v74;
          v10 = a1;
          goto LABEL_47;
        }
        _InterlockedAnd64((volatile signed __int64 *)(v13 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      }
    }
  }
  return 3221226548LL;
}
