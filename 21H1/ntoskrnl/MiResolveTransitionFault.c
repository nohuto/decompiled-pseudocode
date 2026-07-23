/*
 * XREFs of MiResolveTransitionFault @ 0x140216120
 * Callers:
 *     MiDispatchFault @ 0x14020E3D0 (MiDispatchFault.c)
 *     MiResolveProtoPteFault @ 0x140214D60 (MiResolveProtoPteFault.c)
 * Callees:
 *     MiAllocateWsle @ 0x140211190 (MiAllocateWsle.c)
 *     MiCompleteProtoPteFault @ 0x140213720 (MiCompleteProtoPteFault.c)
 *     MiHandleTransitionFault @ 0x140216DE0 (MiHandleTransitionFault.c)
 *     MiIsPfnFileOnly @ 0x1402186F0 (MiIsPfnFileOnly.c)
 *     MiCaptureDirtyBitToPfn @ 0x140223BF0 (MiCaptureDirtyBitToPfn.c)
 *     KeYieldProcessorEx @ 0x140244550 (KeYieldProcessorEx.c)
 *     KeSetEvent @ 0x14024A230 (KeSetEvent.c)
 *     MiReturnCommit @ 0x14027D3E0 (MiReturnCommit.c)
 *     MiFreeInPageSupportBlock @ 0x140282584 (MiFreeInPageSupportBlock.c)
 *     MiUnlockProtoPoolPage @ 0x1402839B0 (MiUnlockProtoPoolPage.c)
 *     MiIsAddressGlobal @ 0x140286000 (MiIsAddressGlobal.c)
 *     MiPfnReferenceCountIsZero @ 0x14028D5B0 (MiPfnReferenceCountIsZero.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140291580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140291700 (MiPteInShadowRange.c)
 *     MiUpdatePfnPriority @ 0x1402A91E0 (MiUpdatePfnPriority.c)
 *     MiEmptyDeferredWorkingSetEntries @ 0x1402B6294 (MiEmptyDeferredWorkingSetEntries.c)
 *     MiWritePteShadow @ 0x1402F2F20 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402F2F80 (MiPteHasShadow.c)
 *     MiOkToSetPteDirtyForNotValidFault @ 0x1402FD554 (MiOkToSetPteDirtyForNotValidFault.c)
 *     MiUserPdeOrAbove @ 0x1402FD5C0 (MiUserPdeOrAbove.c)
 *     MiHandleCollidedFault @ 0x140341780 (MiHandleCollidedFault.c)
 *     MiReleasePageFileInfo @ 0x14034EFC0 (MiReleasePageFileInfo.c)
 *     MiLockAndDecrementShareCount @ 0x140351040 (MiLockAndDecrementShareCount.c)
 *     MI_PFN_IS_PROTO @ 0x1403ED8B8 (MI_PFN_IS_PROTO.c)
 *     MiBadRefCount @ 0x1403ED8CC (MiBadRefCount.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 *     MiMakeProtoReadOnly @ 0x140534D78 (MiMakeProtoReadOnly.c)
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
  ULONG_PTR v13; // rsi
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
  __int64 v25; // rcx
  _QWORD *v26; // r8
  __int64 v27; // r9
  struct _LIST_ENTRY *v28; // r14
  __int64 v29; // rax
  unsigned __int64 v30; // rbx
  __int64 v31; // rax
  __int64 v32; // rax
  unsigned __int64 v33; // rbx
  int IsAddressGlobal; // eax
  __int64 v35; // rbx
  __int64 v36; // rdi
  unsigned __int64 v37; // rbx
  __int64 v38; // rdx
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rcx
  __int64 CachedResidentAvailable; // rdx
  __int64 v43; // rcx
  unsigned __int64 v44; // r8
  __int64 v45; // r14
  char v46; // r12
  int v47; // r15d
  bool v48; // zf
  __int64 v49; // r9
  __int64 v50; // rax
  char v51; // al
  unsigned __int64 v52; // r8
  unsigned __int64 v53; // r9
  unsigned __int64 v54; // r10
  __int64 v55; // r11
  __int64 v56; // r9
  __int64 v57; // r14
  struct _KPRCB *CurrentPrcb; // r9
  signed __int32 v59; // eax
  _SLIST_ENTRY *v60; // rdi
  __int64 v61; // rdx
  _BYTE *v62; // rcx
  __int64 v63; // rdx
  __int64 v64; // rcx
  unsigned __int64 v65; // rdi
  __int64 v66; // rax
  char v67; // dl
  int v68; // eax
  __int16 v69; // ax
  __int64 v70; // rdx
  char v71; // dl
  unsigned int v72; // [rsp+40h] [rbp-78h] BYREF
  int v73; // [rsp+44h] [rbp-74h] BYREF
  int v74; // [rsp+48h] [rbp-70h] BYREF
  __int64 v75; // [rsp+50h] [rbp-68h]
  ULONG_PTR v76; // [rsp+58h] [rbp-60h] BYREF
  PSLIST_ENTRY ListEntry; // [rsp+60h] [rbp-58h] BYREF
  __int64 v78; // [rsp+68h] [rbp-50h]
  unsigned __int64 v79; // [rsp+70h] [rbp-48h]
  __int64 v80; // [rsp+78h] [rbp-40h]

  v5 = (__int64)a5;
  v6 = *(_QWORD *)(a1 + 56);
  v8 = *(_QWORD *)(a1 + 16);
  v9 = Flink;
  v72 = 0;
  v10 = a1;
  *a5 = 0LL;
  v80 = v6;
  v75 = v8;
  ListEntry = 0LL;
  if ( a3 )
  {
    v15 = *(_QWORD *)Flink;
    if ( Flink >= 0xFFFFF6FB7DBED000uLL
      && Flink <= 0xFFFFF6FB7DBED7F8uLL
      && (unsigned int)MiPteHasShadow(a1, Flink)
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
    if ( qword_140C4DE80 && (v15 & 0x10) == 0 )
      v20 = v15 & ~qword_140C4DE80;
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
    v79 = Flink;
    if ( (v8 & 1) != 0 && *(_BYTE *)(v8 & 0xFFFFFFFFFFFFFFFEuLL) == 1 )
    {
      MiUpdatePfnPriority(v13, *(_DWORD *)((v8 & 0xFFFFFFFFFFFFFFFEuLL) + 80) & 7, 0LL, v5);
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
      result = MiHandleCollidedFault(v10, v9, a3, v13, v5, (__int64)&v72);
      if ( v72 <= 1 || (int)result < 0 )
        return result;
    }
    else
    {
      v76 = 0LL;
      result = MiHandleTransitionFault(v10, v9, a3, v13, &v76, v15, &ListEntry);
      if ( (int)result < 0 )
        return result;
      if ( v76 )
        v13 = v76;
    }
    v28 = a4;
    v29 = *(_QWORD *)(a1 + 16);
    if ( (v29 & 1) != 0 && *(_BYTE *)(v29 & 0xFFFFFFFFFFFFFFFEuLL) == 4 )
    {
      v15 = -865LL;
      *(_QWORD *)v9 = *(_QWORD *)v9 & 0xFFFFFFFFFFFFFC1FuLL | 0x80;
    }
    if ( ((v15 >> 5) & 0x1F) == 0x18 )
      MiMakeProtoReadOnly(v9, v13);
    v30 = *(_QWORD *)v9;
    if ( v9 >= 0xFFFFF6FB7DBED000uLL
      && v9 <= 0xFFFFF6FB7DBED7F8uLL
      && (unsigned int)MiPteHasShadow(v25, v24)
      && (v30 & 1) != 0
      && ((v30 & 0x20) == 0 || (v30 & 0x42) == 0) )
    {
      v24 = (__int64)KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( v24 )
      {
        v31 = *(_QWORD *)(v24 + 8 * ((v9 >> 3) & 0x1FF));
        v24 = v30 | 0x20;
        if ( (v31 & 0x20) == 0 )
          v24 = v30;
        v30 = v24;
        if ( (v31 & 0x42) != 0 )
          v30 = v24 | 0x42;
      }
    }
    v32 = v30;
    if ( qword_140C4DE80 && (v30 & 0x10) == 0 )
      v32 = v30 & ~qword_140C4DE80;
    v33 = v32 & 0xFFFFFFFFF000LL | MmProtectToPteMask[(v30 >> 5) & 0x1F] & 0xFFFF000000000E7FuLL | 0x21;
    if ( v9 < 0xFFFFF68000000000uLL || v9 > 0xFFFFF6FFFFFFFFFFuLL )
    {
      v35 = v33 | 0x100;
    }
    else
    {
      if ( v9 >= 0xFFFFF6FB40000000uLL && v9 <= 0xFFFFF6FB7FFFFFFFuLL )
      {
        if ( v9 == 0xFFFFF6FB7DBEDF68uLL )
          v33 |= 0x8000000000000000uLL;
        else
          v33 &= ~0x8000000000000000uLL;
        if ( (unsigned int)MiUserPdeOrAbove(v9, v24, v26, v27) )
          v33 |= 4uLL;
      }
      if ( v9 <= 0xFFFFF6BFFFFFFF78uLL )
        v33 |= 4uLL;
      IsAddressGlobal = MiIsAddressGlobal((__int64)(v9 << 25) >> 16, v24, v33);
      v35 = v33 | 0x100;
      if ( !IsAddressGlobal )
        v35 = (__int64)v26;
    }
    v36 = ZeroPte;
    v37 = v35 & 0xF0FFFFFFFFFFFFFFuLL | 0xA00000000000000LL;
    v38 = *(_QWORD *)(qword_140C4E588 + 8 * ((*(_QWORD *)(v13 + 40) >> 39) & 0x3FFLL));
    v39 = *(_QWORD *)(v13 + 16);
    v78 = v38;
    if ( (v39 & 0x400) == 0 && (v39 & 4) != 0 && (unsigned __int16)v39 >> 12 == *(_DWORD *)(v38 + 1156) )
      v36 = MiCaptureDirtyBitToPfn(v13);
    v40 = *(_QWORD *)(v13 + 16);
    if ( (v40 & 0x400) == 0 && (v40 & 0x4000000) != 0 )
      v37 |= 0x40uLL;
    if ( (v37 & 0x800) != 0 )
    {
      v26 = (_QWORD *)a1;
      if ( a4 && !(unsigned int)MiOkToSetPteDirtyForNotValidFault(v37, *(_QWORD *)a1) )
        v28 = 0LL;
      if ( (*(_BYTE *)(v13 + 34) & 0x10) != 0 )
      {
        if ( v28 || *v26 >= 0xFFFF800000000000uLL )
          goto LABEL_122;
      }
      else if ( v28 && !(unsigned int)MI_PFN_IS_PROTO(v13, v38, v26) )
      {
        v36 = MiCaptureDirtyBitToPfn(v41);
LABEL_122:
        v37 |= 0x42uLL;
      }
    }
    if ( !(unsigned int)MI_PFN_IS_PROTO(v13, v38, v26) )
      goto LABEL_133;
    CachedResidentAvailable = v37;
    if ( v9 >= 0xFFFFF6FB7DBED000uLL && v9 <= 0xFFFFF6FB7DBED7F8uLL )
    {
      if ( (unsigned int)MiPteHasShadow(v43, v37) )
      {
        if ( !HIBYTE(word_140C4DF48) )
          CachedResidentAvailable |= 0x8000000000000000uLL;
        *(_QWORD *)v9 = CachedResidentAvailable;
        MiWritePteShadow(v9, CachedResidentAvailable);
LABEL_133:
        _InterlockedAnd64((volatile signed __int64 *)(v13 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        v45 = a3;
        v46 = 0;
        v47 = 1;
        if ( !a3 )
          goto LABEL_181;
        v74 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(a3 + 24), 0x3FuLL) )
        {
          do
            KeYieldProcessorEx(&v74);
          while ( *(__int64 *)(a3 + 24) < 0 );
        }
        *(_BYTE *)(a3 + 34) &= ~0x20u;
        CachedResidentAvailable = *(unsigned __int16 *)(a3 + 32);
        if ( !(_WORD)CachedResidentAvailable )
          MiBadRefCount(a3);
        v48 = (_WORD)CachedResidentAvailable == 1;
        LOWORD(CachedResidentAvailable) = CachedResidentAvailable - 1;
        *(_WORD *)(a3 + 32) = CachedResidentAvailable;
        if ( v48 && (unsigned int)MiIsPfnFileOnly(a3) )
          goto LABEL_179;
        v49 = *(_QWORD *)(a3 + 40);
        if ( (v49 & 0x1000000000LL) != 0 || (v49 & 0x2000000000000LL) != 0 )
          goto LABEL_180;
        v50 = *(_QWORD *)(a3 + 24) & 0x3FFFFFFFFFFFFFFFLL;
        if ( !(_WORD)CachedResidentAvailable )
          goto LABEL_150;
        if ( (_WORD)CachedResidentAvailable == 1 )
        {
          if ( v50 )
          {
LABEL_149:
            v47 = 0;
LABEL_150:
            v44 = *(_QWORD *)(a3 + 8) | 0x8000000000000000uLL;
            if ( v44 > 0xFFFFF6BFFFFFFF78uLL || v44 < 0xFFFFF68000000000uLL )
            {
              v51 = *(_BYTE *)(a3 + 35);
              if ( (v51 & 0x20) != 0 )
              {
                *(_BYTE *)(a3 + 35) = v51 & 0xDF;
                goto LABEL_178;
              }
            }
            if ( (unsigned int)MI_PFN_IS_PROTO(a3, 0LL, v44) && (*(_DWORD *)(a3 + 16) & 0x400LL) != 0 )
            {
              CachedResidentAvailable = 1LL;
            }
            else if ( v52 <= v54 && v52 >= 0xFFFFF68000000000uLL && (*(_BYTE *)(a3 + 35) & 0x20) != 0 )
            {
              CachedResidentAvailable = 1LL;
            }
            else if ( v47 == 1 && (v55 & 0x4000000000000000LL) != 0 )
            {
              CachedResidentAvailable = 1LL;
            }
            v56 = (v53 >> 39) & 0x3FF;
            v57 = *(_QWORD *)(qword_140C4E588 + 8 * v56);
            if ( (_DWORD)CachedResidentAvailable == 1 )
              MiReturnCommit(*(_QWORD *)(qword_140C4E588 + 8 * v56), 1LL);
            v44 = 1LL;
            if ( (ULONG_PTR *)v57 != &MiSystemPartition )
              goto LABEL_176;
            CurrentPrcb = KeGetCurrentPrcb();
            CachedResidentAvailable = (int)CurrentPrcb->CachedResidentAvailable;
            if ( (_DWORD)CachedResidentAvailable == -1 )
              goto LABEL_176;
            if ( (unsigned __int64)(CachedResidentAvailable + 1) <= 0x100 )
            {
              do
              {
                v59 = _InterlockedCompareExchange(
                        (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                        CachedResidentAvailable + 1,
                        CachedResidentAvailable);
                v48 = (_DWORD)CachedResidentAvailable == v59;
                CachedResidentAvailable = v59;
                if ( v48 )
                  goto LABEL_177;
              }
              while ( v59 != -1 && (unsigned __int64)(v59 + 1LL) <= 0x100 );
            }
            if ( (int)CachedResidentAvailable > 192
              && (_DWORD)CachedResidentAvailable == _InterlockedCompareExchange(
                                                      (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                                                      192,
                                                      CachedResidentAvailable) )
            {
              v44 = (int)CachedResidentAvailable - 192 + 1LL;
            }
            if ( v44 )
LABEL_176:
              v44 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v57 + 7168), v44);
LABEL_177:
            v45 = a3;
LABEL_178:
            if ( v47 )
LABEL_179:
              MiPfnReferenceCountIsZero(v45, (v45 + 0x58000000000LL) / 48);
LABEL_180:
            _InterlockedAnd64((volatile signed __int64 *)(v45 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_181:
            if ( v36 )
              MiReleasePageFileInfo(v78, v36, 1LL);
            v60 = ListEntry;
            if ( ListEntry )
            {
              if ( SLODWORD(ListEntry[11].Next) > 1 )
                KeSetEvent((PRKEVENT)(&ListEntry[3].Next + 1), 0, 0);
              MiFreeInPageSupportBlock(v60);
            }
            if ( (unsigned int)MI_PFN_IS_PROTO(v13, CachedResidentAvailable, v44) )
            {
              result = MiCompleteProtoPteFault(a1, v37, a4, 0, v75);
              if ( (int)result < 0 )
                return result;
              return 272LL;
            }
            v62 = (_BYTE *)(v75 & 0xFFFFFFFFFFFFFFFEuLL);
            if ( !v79 || *v62 != 4 )
            {
              v65 = 0LL;
              if ( v79 )
              {
                if ( *v62 == 3 )
                {
                  v37 &= ~0x20uLL;
                  v46 = 1;
                }
                else if ( *v62 == 5 )
                {
                  v65 = v75 & 0xFFFFFFFFFFFFFFFEuLL;
                }
              }
              if ( (*(_BYTE *)(a1 + 69) & 8) != 0 )
              {
                v66 = *(_QWORD *)(a1 + 16);
                if ( (v66 & 1) == 0 || *(_BYTE *)(v66 & 0xFFFFFFFFFFFFFFFEuLL) != 2 )
                  v37 &= ~0x20uLL;
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
                  v70 = *(unsigned __int8 *)(a1 + 69);
                  *(_WORD *)(a1 + 66) = 1;
                  *(_WORD *)(a1 + 64) = ((unsigned int)v9 >> 3) & 0x1FF;
                  if ( (unsigned int)MI_PFN_IS_PROTO(v13, v70, 511LL) )
                    *(_BYTE *)(a1 + 69) = v71 & 0xEF;
                  else
                    *(_BYTE *)(a1 + 69) = v71 | 0x10;
                }
                v46 |= 4u;
              }
              if ( !(unsigned int)MiAllocateWsle(v80, v9, v13, 0, v37, v46, v65) )
              {
                MiLockAndDecrementShareCount(v13, 0LL);
                return 3221225495LL;
              }
              return 272LL;
            }
            if ( (unsigned int)MiPteInShadowRange(v9, v61) )
            {
              if ( (unsigned int)MiPteHasShadow(v64, v63) )
              {
                if ( !HIBYTE(word_140C4DF48) )
                  v37 |= 0x8000000000000000uLL;
                *(_QWORD *)v9 = v37;
                MiWritePteShadow(v9, v37);
                return 272LL;
              }
              if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
                v37 |= 0x8000000000000000uLL;
            }
            *(_QWORD *)v9 = v37;
            return 272LL;
          }
        }
        else if ( (_WORD)CachedResidentAvailable != 2 || !v50 )
        {
          goto LABEL_180;
        }
        if ( (*(_BYTE *)(a3 + 34) & 8) == 0 )
          goto LABEL_180;
        goto LABEL_149;
      }
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
        CachedResidentAvailable |= 0x8000000000000000uLL;
    }
    *(_QWORD *)v9 = CachedResidentAvailable;
    goto LABEL_133;
  }
  for ( i = MI_READ_PTE_LOCK_FREE(Flink); (i & 0x800) != 0; i = MI_READ_PTE_LOCK_FREE(v9) )
  {
    if ( (i & 1) == 0 && (!i || !qword_140C4DE80 || (qword_140C4DE80 & i) != 0) )
    {
      v12 = i;
      if ( qword_140C4DE80 && (i & 0x10) == 0 )
        v12 = i & ~qword_140C4DE80;
      if ( (*(_QWORD *)(48 * ((v12 >> 12) & 0xFFFFFFFFFLL) - 0x57FFFFFFFD8LL) & 0x4000000000000LL) != 0 )
      {
        v13 = 48 * ((v12 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
        v73 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v13 + 24), 0x3FuLL) )
        {
          do
            KeYieldProcessorEx(&v73);
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
            && (unsigned int)MiPteHasShadow(*(_QWORD *)(v13 + 8), Flink)
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
          v8 = v75;
          v10 = a1;
          goto LABEL_47;
        }
        _InterlockedAnd64((volatile signed __int64 *)(v13 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      }
    }
  }
  return 3221226548LL;
}
