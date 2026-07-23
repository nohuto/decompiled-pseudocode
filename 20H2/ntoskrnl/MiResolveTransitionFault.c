/*
 * XREFs of MiResolveTransitionFault @ 0x140277F70
 * Callers:
 *     MiDispatchFault @ 0x140270220 (MiDispatchFault.c)
 *     MiResolveProtoPteFault @ 0x140276BB0 (MiResolveProtoPteFault.c)
 * Callees:
 *     MiHandleCollidedFault @ 0x140201AA8 (MiHandleCollidedFault.c)
 *     KeSetEvent @ 0x140219280 (KeSetEvent.c)
 *     MiPteInShadowRange @ 0x14021EA50 (MiPteInShadowRange.c)
 *     MiReturnCommit @ 0x140230300 (MiReturnCommit.c)
 *     MiLockAndDecrementShareCount @ 0x140250E00 (MiLockAndDecrementShareCount.c)
 *     MiAllocateWsle @ 0x140272FE0 (MiAllocateWsle.c)
 *     MiCompleteProtoPteFault @ 0x140275570 (MiCompleteProtoPteFault.c)
 *     MiHandleTransitionFault @ 0x140278C30 (MiHandleTransitionFault.c)
 *     MiIsPfnFileOnly @ 0x14027A540 (MiIsPfnFileOnly.c)
 *     MiCaptureDirtyBitToPfn @ 0x14029F1B0 (MiCaptureDirtyBitToPfn.c)
 *     MiEmptyDeferredWorkingSetEntries @ 0x14029F34C (MiEmptyDeferredWorkingSetEntries.c)
 *     MiIsAddressGlobal @ 0x1402A2260 (MiIsAddressGlobal.c)
 *     MiPfnReferenceCountIsZero @ 0x1402A9540 (MiPfnReferenceCountIsZero.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1402B12D0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiUnlockProtoPoolPage @ 0x1402C8010 (MiUnlockProtoPoolPage.c)
 *     MiFreeInPageSupportBlock @ 0x1402CA7B8 (MiFreeInPageSupportBlock.c)
 *     MiUpdatePfnPriority @ 0x1402D3D44 (MiUpdatePfnPriority.c)
 *     KeYieldProcessorEx @ 0x1402DE380 (KeYieldProcessorEx.c)
 *     MiOkToSetPteDirtyForNotValidFault @ 0x14030CCF4 (MiOkToSetPteDirtyForNotValidFault.c)
 *     MiUserPdeOrAbove @ 0x14030CD44 (MiUserPdeOrAbove.c)
 *     MiWritePteShadow @ 0x140313F2C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140313F8C (MiPteHasShadow.c)
 *     MiReleasePageFileInfo @ 0x140344F70 (MiReleasePageFileInfo.c)
 *     MI_PFN_IS_PROTO @ 0x1403F3080 (MI_PFN_IS_PROTO.c)
 *     MiBadRefCount @ 0x1403F3094 (MiBadRefCount.c)
 *     KeBugCheckEx @ 0x1403FBCA0 (KeBugCheckEx.c)
 *     MiMakeProtoReadOnly @ 0x140538D98 (MiMakeProtoReadOnly.c)
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
  __int64 v14; // r9
  __int64 result; // rax
  unsigned __int64 v16; // rbx
  __int64 v17; // r8
  __int64 v18; // rax
  __int64 v19; // r8
  __int64 v20; // rax
  unsigned __int64 v21; // rax
  unsigned int v22; // ebx
  char v23; // cl
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  struct _LIST_ENTRY *v29; // r14
  __int64 v30; // rax
  unsigned __int64 v31; // rbx
  __int64 v32; // rax
  __int64 v33; // rax
  unsigned __int64 v34; // rbx
  int IsAddressGlobal; // eax
  __int64 v36; // r8
  __int64 v37; // rbx
  __int64 v38; // rdi
  unsigned __int64 v39; // rbx
  __int64 v40; // rdx
  __int64 v41; // rax
  __int64 v42; // rax
  _QWORD *v43; // r8
  __int64 v44; // rcx
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // r9
  unsigned __int64 v48; // rdx
  __int64 v49; // r14
  char v50; // r12
  int v51; // r15d
  __int16 v52; // dx
  bool v53; // zf
  __int16 v54; // dx
  __int64 v55; // r9
  __int64 v56; // rax
  unsigned __int64 v57; // r8
  char v58; // al
  int v59; // edx
  unsigned __int64 v60; // r8
  unsigned __int64 v61; // r9
  unsigned __int64 v62; // r10
  __int64 v63; // r11
  __int64 v64; // r9
  __int64 v65; // r14
  unsigned __int64 v66; // r8
  struct _KPRCB *CurrentPrcb; // r9
  __int64 CachedResidentAvailable; // rdx
  signed __int32 v69; // eax
  _SLIST_ENTRY *v70; // rdi
  _BYTE *v71; // rcx
  __int64 v72; // rdx
  __int64 v73; // rcx
  __int64 v74; // r8
  __int64 v75; // r9
  unsigned __int64 v76; // rdi
  __int64 v77; // rax
  char v78; // dl
  int v79; // eax
  __int16 v80; // ax
  char v81; // dl
  unsigned int v82; // [rsp+40h] [rbp-78h] BYREF
  int v83; // [rsp+44h] [rbp-74h] BYREF
  int v84; // [rsp+48h] [rbp-70h] BYREF
  __int64 v85; // [rsp+50h] [rbp-68h]
  __int64 v86; // [rsp+58h] [rbp-60h] BYREF
  PSLIST_ENTRY ListEntry; // [rsp+60h] [rbp-58h] BYREF
  __int64 v88; // [rsp+68h] [rbp-50h]
  unsigned __int64 v89; // [rsp+70h] [rbp-48h]
  __int64 v90; // [rsp+78h] [rbp-40h]

  v5 = (__int64)a5;
  v6 = *(_QWORD *)(a1 + 56);
  v8 = *(_QWORD *)(a1 + 16);
  v9 = Flink;
  v82 = 0;
  v10 = a1;
  *a5 = 0LL;
  v90 = v6;
  v85 = v8;
  ListEntry = 0LL;
  if ( a3 )
  {
    v16 = *(_QWORD *)Flink;
    if ( Flink >= 0xFFFFF6FB7DBED000uLL
      && Flink <= 0xFFFFF6FB7DBED7F8uLL
      && (unsigned int)MiPteHasShadow(a1, Flink, 511LL, a5)
      && (v16 & 1) != 0
      && ((v16 & 0x20) == 0 || (v16 & 0x42) == 0) )
    {
      Flink = (unsigned __int64)KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( Flink )
      {
        v20 = *(_QWORD *)(Flink + 8 * (v19 & (v9 >> 3)));
        Flink = v16 | 0x20;
        if ( (v20 & 0x20) == 0 )
          Flink = v16;
        v16 = Flink;
        if ( (v20 & 0x42) != 0 )
          v16 = Flink | 0x42;
      }
    }
    v21 = v16;
    if ( qword_140C4DDC0 && (v16 & 0x10) == 0 )
      v21 = v16 & ~qword_140C4DDC0;
    v13 = 48 * ((v21 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
LABEL_47:
    if ( (*(_BYTE *)(v13 + 35) & 0x10) != 0 )
    {
      v22 = -1073740023;
LABEL_60:
      _InterlockedAnd64((volatile signed __int64 *)(v13 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( a3 )
      {
        LOBYTE(Flink) = 17;
        MiUnlockProtoPoolPage(a3, Flink);
      }
      return v22;
    }
    Flink = v8 & 1;
    v89 = Flink;
    if ( (v8 & 1) != 0 && *(_BYTE *)(v8 & 0xFFFFFFFFFFFFFFFEuLL) == 1 )
    {
      MiUpdatePfnPriority(v13, *(_DWORD *)((v8 & 0xFFFFFFFFFFFFFFFEuLL) + 80) & 7, 0LL);
      v22 = 0;
      goto LABEL_60;
    }
    __incgsdword(0x2E98u);
    v23 = *(_BYTE *)(v13 + 34);
    if ( (v23 & 8) != 0 )
    {
      if ( (MiFlags & 0x40000) != 0 && (v24 = *(_QWORD *)(v13 + 16) >> 5, (v24 & 0x1F) == 0) && (v24 & 2) != 0
        || (v8 & 1) != 0
        && *(_BYTE *)(v8 & 0xFFFFFFFFFFFFFFFEuLL) == 5
        && (*(_DWORD *)((v8 & 0xFFFFFFFFFFFFFFFEuLL) + 56) & 0x20) != 0 )
      {
        *(_DWORD *)(v10 + 80) |= 0x80u;
        v22 = -1073741801;
        goto LABEL_60;
      }
    }
    if ( (v23 & 0x20) != 0 )
    {
      result = MiHandleCollidedFault(v10, v9, a3, v13, v5, &v82);
      if ( v82 <= 1 || (int)result < 0 )
        return result;
    }
    else
    {
      v86 = 0LL;
      result = MiHandleTransitionFault(v10, v9, a3, v13, &v86, v16, &ListEntry);
      if ( (int)result < 0 )
        return result;
      if ( v86 )
        v13 = v86;
    }
    v29 = a4;
    v30 = *(_QWORD *)(a1 + 16);
    if ( (v30 & 1) != 0 && *(_BYTE *)(v30 & 0xFFFFFFFFFFFFFFFEuLL) == 4 )
    {
      v16 = -865LL;
      *(_QWORD *)v9 = *(_QWORD *)v9 & 0xFFFFFFFFFFFFFC1FuLL | 0x80;
    }
    if ( ((v16 >> 5) & 0x1F) == 0x18 )
      MiMakeProtoReadOnly(v9, v13);
    v31 = *(_QWORD *)v9;
    if ( v9 >= 0xFFFFF6FB7DBED000uLL
      && v9 <= 0xFFFFF6FB7DBED7F8uLL
      && (unsigned int)MiPteHasShadow(v26, v25, v27, v28)
      && (v31 & 1) != 0
      && ((v31 & 0x20) == 0 || (v31 & 0x42) == 0) )
    {
      v25 = (__int64)KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( v25 )
      {
        v32 = *(_QWORD *)(v25 + 8 * ((v9 >> 3) & 0x1FF));
        v25 = v31 | 0x20;
        if ( (v32 & 0x20) == 0 )
          v25 = v31;
        v31 = v25;
        if ( (v32 & 0x42) != 0 )
          v31 = v25 | 0x42;
      }
    }
    v33 = v31;
    if ( qword_140C4DDC0 && (v31 & 0x10) == 0 )
      v33 = v31 & ~qword_140C4DDC0;
    v34 = v33 & 0xFFFFFFFFF000LL | MmProtectToPteMask[(v31 >> 5) & 0x1F] & 0xFFFF000000000E7FuLL | 0x21;
    if ( v9 < 0xFFFFF68000000000uLL || v9 > 0xFFFFF6FFFFFFFFFFuLL )
    {
      v37 = v34 | 0x100;
    }
    else
    {
      if ( v9 >= 0xFFFFF6FB40000000uLL && v9 <= 0xFFFFF6FB7FFFFFFFuLL )
      {
        if ( v9 == 0xFFFFF6FB7DBEDF68uLL )
          v34 |= 0x8000000000000000uLL;
        else
          v34 &= ~0x8000000000000000uLL;
        if ( (unsigned int)MiUserPdeOrAbove(v9, v25, v27, v28) )
          v34 |= 4uLL;
      }
      if ( v9 <= 0xFFFFF6BFFFFFFF78uLL )
        v34 |= 4uLL;
      IsAddressGlobal = MiIsAddressGlobal((__int64)(v9 << 25) >> 16, v25, v34);
      v37 = v34 | 0x100;
      if ( !IsAddressGlobal )
        v37 = v36;
    }
    v38 = ZeroPte;
    v39 = v37 & 0xF0FFFFFFFFFFFFFFuLL | 0xA00000000000000LL;
    v40 = *(_QWORD *)(qword_140C4E4C8 + 8 * ((*(_QWORD *)(v13 + 40) >> 39) & 0x3FFLL));
    v41 = *(_QWORD *)(v13 + 16);
    v88 = v40;
    if ( (v41 & 0x400) == 0 && (v41 & 4) != 0 && (unsigned __int16)v41 >> 12 == *(_DWORD *)(v40 + 1156) )
      v38 = MiCaptureDirtyBitToPfn(v13);
    v42 = *(_QWORD *)(v13 + 16);
    if ( (v42 & 0x400) == 0 && (v42 & 0x4000000) != 0 )
      v39 |= 0x40uLL;
    if ( (v39 & 0x800) != 0 )
    {
      v43 = (_QWORD *)a1;
      if ( a4 && !(unsigned int)MiOkToSetPteDirtyForNotValidFault(v39, *(_QWORD *)a1, a1, v28) )
        v29 = 0LL;
      if ( (*(_BYTE *)(v13 + 34) & 0x10) != 0 )
      {
        if ( v29 || *v43 >= 0xFFFF800000000000uLL )
          goto LABEL_122;
      }
      else if ( v29 && !(unsigned int)MI_PFN_IS_PROTO(v13) )
      {
        v38 = MiCaptureDirtyBitToPfn(v44);
LABEL_122:
        v39 |= 0x42uLL;
      }
    }
    if ( !(unsigned int)MI_PFN_IS_PROTO(v13) )
      goto LABEL_133;
    v48 = v39;
    if ( v9 >= 0xFFFFF6FB7DBED000uLL && v9 <= 0xFFFFF6FB7DBED7F8uLL )
    {
      if ( (unsigned int)MiPteHasShadow(v45, v39, v46, v47) )
      {
        if ( !HIBYTE(word_140C4DE88) )
          v48 |= 0x8000000000000000uLL;
        *(_QWORD *)v9 = v48;
        MiWritePteShadow(v9, v48);
LABEL_133:
        _InterlockedAnd64((volatile signed __int64 *)(v13 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        v49 = a3;
        v50 = 0;
        v51 = 1;
        if ( !a3 )
          goto LABEL_181;
        v84 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(a3 + 24), 0x3FuLL) )
        {
          do
            KeYieldProcessorEx(&v84);
          while ( *(__int64 *)(a3 + 24) < 0 );
        }
        *(_BYTE *)(a3 + 34) &= ~0x20u;
        v52 = *(_WORD *)(a3 + 32);
        if ( !v52 )
          MiBadRefCount(a3);
        v53 = v52 == 1;
        v54 = v52 - 1;
        *(_WORD *)(a3 + 32) = v54;
        if ( v53 && (unsigned int)MiIsPfnFileOnly(a3) )
          goto LABEL_179;
        v55 = *(_QWORD *)(a3 + 40);
        if ( (v55 & 0x1000000000LL) != 0 || (v55 & 0x2000000000000LL) != 0 )
          goto LABEL_180;
        v56 = *(_QWORD *)(a3 + 24) & 0x3FFFFFFFFFFFFFFFLL;
        if ( !v54 )
          goto LABEL_150;
        if ( v54 == 1 )
        {
          if ( v56 )
          {
LABEL_149:
            v51 = 0;
LABEL_150:
            v57 = *(_QWORD *)(a3 + 8) | 0x8000000000000000uLL;
            if ( v57 > 0xFFFFF6BFFFFFFF78uLL || v57 < 0xFFFFF68000000000uLL )
            {
              v58 = *(_BYTE *)(a3 + 35);
              if ( (v58 & 0x20) != 0 )
              {
                *(_BYTE *)(a3 + 35) = v58 & 0xDF;
                goto LABEL_178;
              }
            }
            if ( (unsigned int)MI_PFN_IS_PROTO(a3) && (*(_DWORD *)(a3 + 16) & 0x400LL) != 0 )
            {
              v59 = 1;
            }
            else if ( v60 <= v62 && v60 >= 0xFFFFF68000000000uLL && (*(_BYTE *)(a3 + 35) & 0x20) != 0 )
            {
              v59 = 1;
            }
            else if ( v51 == 1 && (v63 & 0x4000000000000000LL) != 0 )
            {
              v59 = 1;
            }
            v64 = (v61 >> 39) & 0x3FF;
            v65 = *(_QWORD *)(qword_140C4E4C8 + 8 * v64);
            if ( v59 == 1 )
              MiReturnCommit(*(_QWORD *)(qword_140C4E4C8 + 8 * v64), 1LL);
            v66 = 1LL;
            if ( (ULONG_PTR *)v65 != &MiSystemPartition )
              goto LABEL_176;
            CurrentPrcb = KeGetCurrentPrcb();
            CachedResidentAvailable = (int)CurrentPrcb->CachedResidentAvailable;
            if ( (_DWORD)CachedResidentAvailable == -1 )
              goto LABEL_176;
            if ( (unsigned __int64)(CachedResidentAvailable + 1) <= 0x100 )
            {
              do
              {
                v69 = _InterlockedCompareExchange(
                        (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                        CachedResidentAvailable + 1,
                        CachedResidentAvailable);
                v53 = (_DWORD)CachedResidentAvailable == v69;
                LODWORD(CachedResidentAvailable) = v69;
                if ( v53 )
                  goto LABEL_177;
              }
              while ( v69 != -1 && (unsigned __int64)(v69 + 1LL) <= 0x100 );
            }
            if ( (int)CachedResidentAvailable > 192
              && (_DWORD)CachedResidentAvailable == _InterlockedCompareExchange(
                                                      (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                                                      192,
                                                      CachedResidentAvailable) )
            {
              v66 = (int)CachedResidentAvailable - 192 + 1LL;
            }
            if ( v66 )
LABEL_176:
              _InterlockedExchangeAdd64((volatile signed __int64 *)(v65 + 7168), v66);
LABEL_177:
            v49 = a3;
LABEL_178:
            if ( v51 )
LABEL_179:
              MiPfnReferenceCountIsZero(v49, (v49 + 0x58000000000LL) / 48);
LABEL_180:
            _InterlockedAnd64((volatile signed __int64 *)(v49 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_181:
            if ( v38 )
              MiReleasePageFileInfo(v88, v38, 1LL);
            v70 = ListEntry;
            if ( ListEntry )
            {
              if ( SLODWORD(ListEntry[11].Next) > 1 )
                KeSetEvent((PRKEVENT)(&ListEntry[3].Next + 1), 0, 0);
              MiFreeInPageSupportBlock(v70);
            }
            if ( (unsigned int)MI_PFN_IS_PROTO(v13) )
            {
              result = MiCompleteProtoPteFault(a1, v39, a4, 0, v85);
              if ( (int)result < 0 )
                return result;
              return 272LL;
            }
            v71 = (_BYTE *)(v85 & 0xFFFFFFFFFFFFFFFEuLL);
            if ( !v89 || *v71 != 4 )
            {
              v76 = 0LL;
              if ( v89 )
              {
                if ( *v71 == 3 )
                {
                  v39 &= ~0x20uLL;
                  v50 = 1;
                }
                else if ( *v71 == 5 )
                {
                  v76 = v85 & 0xFFFFFFFFFFFFFFFEuLL;
                }
              }
              if ( (*(_BYTE *)(a1 + 69) & 8) != 0 )
              {
                v77 = *(_QWORD *)(a1 + 16);
                if ( (v77 & 1) == 0 || *(_BYTE *)(v77 & 0xFFFFFFFFFFFFFFFEuLL) != 2 )
                  v39 &= ~0x20uLL;
              }
              v78 = *(_BYTE *)(a1 + 69);
              if ( (v78 & 5) == 4 && (v78 & 2) == 0 )
              {
                v79 = *(unsigned __int16 *)(a1 + 66);
                if ( (_WORD)v79
                  && (v79 + *(unsigned __int16 *)(a1 + 64) != (((unsigned int)v9 >> 3) & 0x1FF) || (v78 & 0x10) == 0) )
                {
                  MiEmptyDeferredWorkingSetEntries(a1 + 56);
                }
                v80 = *(_WORD *)(a1 + 66);
                if ( v80 )
                {
                  *(_WORD *)(a1 + 66) = v80 + 1;
                }
                else
                {
                  *(_WORD *)(a1 + 66) = 1;
                  *(_WORD *)(a1 + 64) = ((unsigned int)v9 >> 3) & 0x1FF;
                  if ( (unsigned int)MI_PFN_IS_PROTO(v13) )
                    *(_BYTE *)(a1 + 69) = v81 & 0xEF;
                  else
                    *(_BYTE *)(a1 + 69) = v81 | 0x10;
                }
                v50 |= 4u;
              }
              if ( !(unsigned int)MiAllocateWsle(v90, v9, (_QWORD *)v13, 0, v39, v50, v76) )
              {
                MiLockAndDecrementShareCount(v13, 0);
                return 3221225495LL;
              }
              return 272LL;
            }
            if ( MiPteInShadowRange(v9) )
            {
              if ( (unsigned int)MiPteHasShadow(v73, v72, v74, v75) )
              {
                if ( !HIBYTE(word_140C4DE88) )
                  v39 |= 0x8000000000000000uLL;
                *(_QWORD *)v9 = v39;
                MiWritePteShadow(v9, v39);
                return 272LL;
              }
              if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
                v39 |= 0x8000000000000000uLL;
            }
            *(_QWORD *)v9 = v39;
            return 272LL;
          }
        }
        else if ( v54 != 2 || !v56 )
        {
          goto LABEL_180;
        }
        if ( (*(_BYTE *)(a3 + 34) & 8) == 0 )
          goto LABEL_180;
        goto LABEL_149;
      }
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
        v48 |= 0x8000000000000000uLL;
    }
    *(_QWORD *)v9 = v48;
    goto LABEL_133;
  }
  for ( i = MI_READ_PTE_LOCK_FREE(Flink); (i & 0x800) != 0; i = MI_READ_PTE_LOCK_FREE(v9) )
  {
    if ( (i & 1) == 0 && (!i || !qword_140C4DDC0 || (qword_140C4DDC0 & i) != 0) )
    {
      v12 = i;
      if ( qword_140C4DDC0 && (i & 0x10) == 0 )
        v12 = i & ~qword_140C4DDC0;
      if ( (*(_QWORD *)(48 * ((v12 >> 12) & 0xFFFFFFFFFLL) - 0x57FFFFFFFD8LL) & 0x4000000000000LL) != 0 )
      {
        v13 = 48 * ((v12 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
        v83 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v13 + 24), 0x3FuLL) )
        {
          do
            KeYieldProcessorEx(&v83);
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
          v16 = *(_QWORD *)v9;
          if ( v9 >= 0xFFFFF6FB7DBED000uLL
            && v9 <= 0xFFFFF6FB7DBED7F8uLL
            && (unsigned int)MiPteHasShadow(*(_QWORD *)(v13 + 8), Flink, 511LL, v14)
            && (v16 & 1) != 0
            && ((v16 & 0x20) == 0 || (v16 & 0x42) == 0) )
          {
            Flink = (unsigned __int64)KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
            if ( Flink )
            {
              v18 = *(_QWORD *)(Flink + 8 * (v17 & (v9 >> 3)));
              Flink = v16 | 0x20;
              if ( (v18 & 0x20) == 0 )
                Flink = v16;
              v16 = Flink;
              if ( (v18 & 0x42) != 0 )
                v16 = Flink | 0x42;
            }
          }
          v5 = (__int64)a5;
          v8 = v85;
          v10 = a1;
          goto LABEL_47;
        }
        _InterlockedAnd64((volatile signed __int64 *)(v13 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      }
    }
  }
  return 3221226548LL;
}
