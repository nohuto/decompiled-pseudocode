/*
 * XREFs of MiResolveTransitionFault @ 0x1402A8C30
 * Callers:
 *     MiDispatchFault @ 0x1402A0EE0 (MiDispatchFault.c)
 *     MiResolveProtoPteFault @ 0x1402A7870 (MiResolveProtoPteFault.c)
 * Callees:
 *     MiReturnCommit @ 0x140224390 (MiReturnCommit.c)
 *     MiFreeInPageSupportBlock @ 0x140229534 (MiFreeInPageSupportBlock.c)
 *     MiUnlockProtoPoolPage @ 0x14022A960 (MiUnlockProtoPoolPage.c)
 *     MiIsAddressGlobal @ 0x14022CFB0 (MiIsAddressGlobal.c)
 *     MiPfnReferenceCountIsZero @ 0x140234560 (MiPfnReferenceCountIsZero.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140238530 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1402386B0 (MiPteInShadowRange.c)
 *     MiUpdatePfnPriority @ 0x1402501B0 (MiUpdatePfnPriority.c)
 *     MiEmptyDeferredWorkingSetEntries @ 0x14025D264 (MiEmptyDeferredWorkingSetEntries.c)
 *     KeYieldProcessorEx @ 0x140280C50 (KeYieldProcessorEx.c)
 *     KeSetEvent @ 0x140286AD0 (KeSetEvent.c)
 *     MiAllocateWsle @ 0x1402A3CA0 (MiAllocateWsle.c)
 *     MiCompleteProtoPteFault @ 0x1402A6230 (MiCompleteProtoPteFault.c)
 *     MiHandleTransitionFault @ 0x1402A98F0 (MiHandleTransitionFault.c)
 *     MiIsPfnFileOnly @ 0x1402AB200 (MiIsPfnFileOnly.c)
 *     MiCaptureDirtyBitToPfn @ 0x1402B6870 (MiCaptureDirtyBitToPfn.c)
 *     MiReleasePageFileInfo @ 0x1402D4690 (MiReleasePageFileInfo.c)
 *     MiLockAndDecrementShareCount @ 0x1402F5064 (MiLockAndDecrementShareCount.c)
 *     MiHandleCollidedFault @ 0x140312448 (MiHandleCollidedFault.c)
 *     MiWritePteShadow @ 0x14032ECC0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14032ED20 (MiPteHasShadow.c)
 *     MiOkToSetPteDirtyForNotValidFault @ 0x14033A894 (MiOkToSetPteDirtyForNotValidFault.c)
 *     MiUserPdeOrAbove @ 0x14033A900 (MiUserPdeOrAbove.c)
 *     MI_PFN_IS_PROTO @ 0x1403EEC18 (MI_PFN_IS_PROTO.c)
 *     MiBadRefCount @ 0x1403EEC2C (MiBadRefCount.c)
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
 *     MiMakeProtoReadOnly @ 0x1405353C8 (MiMakeProtoReadOnly.c)
 */

__int64 __fastcall MiResolveTransitionFault(__int64 a1, unsigned __int64 Flink, __int64 a3, __int64 a4, _QWORD *a5)
{
  __int64 v5; // r9
  __int64 v6; // rax
  __int64 v8; // r10
  unsigned __int64 v9; // r13
  __int64 v10; // r11
  ULONG_PTR i; // rbx
  __int64 v12; // r8
  __int64 v13; // r9
  unsigned __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rsi
  __int64 v17; // r9
  __int64 result; // rax
  unsigned __int64 v19; // rbx
  __int64 v20; // r8
  __int64 v21; // rax
  __int64 v22; // r8
  __int64 v23; // rax
  unsigned __int64 v24; // rax
  unsigned int v25; // ebx
  char v26; // cl
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // r14
  __int64 v33; // rax
  unsigned __int64 v34; // rbx
  struct _LIST_ENTRY *v35; // rdx
  __int64 v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rax
  unsigned __int64 v39; // rbx
  __int64 v40; // r8
  __int64 v41; // rbx
  __int64 v42; // rdi
  unsigned __int64 v43; // rbx
  __int64 v44; // rdx
  __int64 v45; // rax
  __int64 v46; // rax
  _QWORD *v47; // r8
  __int64 v48; // rcx
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // r8
  __int64 v52; // r9
  __int64 v53; // r14
  char v54; // r12
  int v55; // r15d
  __int64 v56; // rdx
  bool v57; // zf
  __int64 v58; // r9
  __int64 v59; // rax
  unsigned __int64 v60; // r8
  char v61; // al
  int v62; // edx
  unsigned __int64 v63; // r8
  unsigned __int64 v64; // r9
  unsigned __int64 v65; // r10
  __int64 v66; // r11
  __int64 v67; // r9
  __int64 v68; // r14
  unsigned __int64 v69; // r8
  struct _KPRCB *CurrentPrcb; // r9
  __int64 CachedResidentAvailable; // rdx
  signed __int32 v72; // eax
  _SLIST_ENTRY *v73; // rdi
  _BYTE *v74; // rcx
  __int64 v75; // rdx
  __int64 v76; // rcx
  __int64 v77; // r8
  __int64 v78; // r9
  unsigned __int64 v79; // rdi
  __int64 v80; // rax
  char v81; // dl
  int v82; // eax
  __int16 v83; // ax
  char v84; // dl
  unsigned int v85; // [rsp+40h] [rbp-78h] BYREF
  int v86; // [rsp+44h] [rbp-74h] BYREF
  int v87; // [rsp+48h] [rbp-70h] BYREF
  __int64 v88; // [rsp+50h] [rbp-68h]
  __int64 v89; // [rsp+58h] [rbp-60h] BYREF
  PSLIST_ENTRY ListEntry; // [rsp+60h] [rbp-58h] BYREF
  __int64 v91; // [rsp+68h] [rbp-50h]
  unsigned __int64 v92; // [rsp+70h] [rbp-48h]
  __int64 v93; // [rsp+78h] [rbp-40h]

  v5 = (__int64)a5;
  v6 = *(_QWORD *)(a1 + 56);
  v8 = *(_QWORD *)(a1 + 16);
  v9 = Flink;
  v85 = 0;
  v10 = a1;
  *a5 = 0LL;
  v93 = v6;
  v88 = v8;
  ListEntry = 0LL;
  if ( a3 )
  {
    v19 = *(_QWORD *)Flink;
    if ( Flink >= 0xFFFFF6FB7DBED000uLL
      && Flink <= 0xFFFFF6FB7DBED7F8uLL
      && (unsigned int)MiPteHasShadow(a1, Flink, 511LL, a5)
      && (v19 & 1) != 0
      && ((v19 & 0x20) == 0 || (v19 & 0x42) == 0) )
    {
      Flink = (unsigned __int64)KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( Flink )
      {
        v23 = *(_QWORD *)(Flink + 8 * (v22 & (v9 >> 3)));
        Flink = v19 | 0x20;
        if ( (v23 & 0x20) == 0 )
          Flink = v19;
        v19 = Flink;
        if ( (v23 & 0x42) != 0 )
          v19 = Flink | 0x42;
      }
    }
    v24 = v19;
    if ( qword_140C4DD40 && (v19 & 0x10) == 0 )
      v24 = v19 & ~qword_140C4DD40;
    v16 = 48 * ((v24 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
LABEL_47:
    if ( (*(_BYTE *)(v16 + 35) & 0x10) != 0 )
    {
      v25 = -1073740023;
LABEL_60:
      _InterlockedAnd64((volatile signed __int64 *)(v16 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( a3 )
      {
        LOBYTE(Flink) = 17;
        MiUnlockProtoPoolPage(a3, Flink);
      }
      return v25;
    }
    Flink = v8 & 1;
    v92 = Flink;
    if ( (v8 & 1) != 0 && *(_BYTE *)(v8 & 0xFFFFFFFFFFFFFFFEuLL) == 1 )
    {
      MiUpdatePfnPriority(v16);
      v25 = 0;
      goto LABEL_60;
    }
    __incgsdword(0x2E98u);
    v26 = *(_BYTE *)(v16 + 34);
    if ( (v26 & 8) != 0 )
    {
      if ( (MiFlags & 0x40000) != 0 && (v27 = *(_QWORD *)(v16 + 16) >> 5, (v27 & 0x1F) == 0) && (v27 & 2) != 0
        || (v8 & 1) != 0
        && *(_BYTE *)(v8 & 0xFFFFFFFFFFFFFFFEuLL) == 5
        && (*(_DWORD *)((v8 & 0xFFFFFFFFFFFFFFFEuLL) + 56) & 0x20) != 0 )
      {
        *(_DWORD *)(v10 + 80) |= 0x80u;
        v25 = -1073741801;
        goto LABEL_60;
      }
    }
    if ( (v26 & 0x20) != 0 )
    {
      result = MiHandleCollidedFault(v10, v9, a3, v16, v5, (__int64)&v85);
      if ( v85 <= 1 || (int)result < 0 )
        return result;
    }
    else
    {
      v89 = 0LL;
      result = MiHandleTransitionFault(v10, v9, a3, v16, &v89, v19, &ListEntry);
      if ( (int)result < 0 )
        return result;
      if ( v89 )
        v16 = v89;
    }
    v32 = a4;
    v33 = *(_QWORD *)(a1 + 16);
    if ( (v33 & 1) != 0 && *(_BYTE *)(v33 & 0xFFFFFFFFFFFFFFFEuLL) == 4 )
    {
      v19 = -865LL;
      *(_QWORD *)v9 = *(_QWORD *)v9 & 0xFFFFFFFFFFFFFC1FuLL | 0x80;
    }
    if ( ((v19 >> 5) & 0x1F) == 0x18 )
      MiMakeProtoReadOnly(v9, v16);
    v34 = *(_QWORD *)v9;
    if ( v9 >= 0xFFFFF6FB7DBED000uLL
      && v9 <= 0xFFFFF6FB7DBED7F8uLL
      && (unsigned int)MiPteHasShadow(v29, v28, v30, v31)
      && (v34 & 1) != 0
      && ((v34 & 0x20) == 0 || (v34 & 0x42) == 0) )
    {
      v35 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( v35 )
      {
        v36 = *((_QWORD *)&v35->Flink + ((v9 >> 3) & 0x1FF));
        v37 = v34 | 0x20;
        if ( (v36 & 0x20) == 0 )
          v37 = v34;
        v34 = v37;
        if ( (v36 & 0x42) != 0 )
          v34 = v37 | 0x42;
      }
    }
    v38 = v34;
    if ( qword_140C4DD40 && (v34 & 0x10) == 0 )
      v38 = v34 & ~qword_140C4DD40;
    v39 = v38 & 0xFFFFFFFFF000LL | MmProtectToPteMask[(v34 >> 5) & 0x1F] & 0xFFFF000000000E7FuLL | 0x21;
    if ( v9 < 0xFFFFF68000000000uLL || v9 > 0xFFFFF6FFFFFFFFFFuLL )
    {
      v41 = v39 | 0x100;
    }
    else
    {
      if ( v9 >= 0xFFFFF6FB40000000uLL && v9 <= 0xFFFFF6FB7FFFFFFFuLL )
      {
        if ( v9 == 0xFFFFF6FB7DBEDF68uLL )
          v39 |= 0x8000000000000000uLL;
        else
          v39 &= ~0x8000000000000000uLL;
        if ( (unsigned int)MiUserPdeOrAbove(v9) )
          v39 |= 4uLL;
      }
      if ( v9 <= 0xFFFFF6BFFFFFFF78uLL )
        v39 |= 4uLL;
      v41 = v39 | 0x100;
      if ( !(unsigned int)MiIsAddressGlobal((__int64)(v9 << 25) >> 16) )
        v41 = v40;
    }
    v42 = ZeroPte;
    v43 = v41 & 0xF0FFFFFFFFFFFFFFuLL | 0xA00000000000000LL;
    v44 = *(_QWORD *)(qword_140C4E448 + 8 * ((*(_QWORD *)(v16 + 40) >> 39) & 0x3FFLL));
    v45 = *(_QWORD *)(v16 + 16);
    v91 = v44;
    if ( (v45 & 0x400) == 0 && (v45 & 4) != 0 && (unsigned __int16)v45 >> 12 == *(_DWORD *)(v44 + 1156) )
      v42 = MiCaptureDirtyBitToPfn(v16);
    v46 = *(_QWORD *)(v16 + 16);
    if ( (v46 & 0x400) == 0 && (v46 & 0x4000000) != 0 )
      v43 |= 0x40uLL;
    if ( (v43 & 0x800) != 0 )
    {
      v47 = (_QWORD *)a1;
      if ( a4 && !(unsigned int)MiOkToSetPteDirtyForNotValidFault(v43, *(_QWORD *)a1, a1, v31) )
        v32 = 0LL;
      if ( (*(_BYTE *)(v16 + 34) & 0x10) != 0 )
      {
        if ( v32 || *v47 >= 0xFFFF800000000000uLL )
          goto LABEL_122;
      }
      else if ( v32 && !(unsigned int)MI_PFN_IS_PROTO(v16) )
      {
        v42 = MiCaptureDirtyBitToPfn(v48);
LABEL_122:
        v43 |= 0x42uLL;
      }
    }
    if ( !(unsigned int)MI_PFN_IS_PROTO(v16) )
      goto LABEL_133;
    v49 = v43;
    if ( v9 >= 0xFFFFF6FB7DBED000uLL && v9 <= 0xFFFFF6FB7DBED7F8uLL )
    {
      if ( (unsigned int)MiPteHasShadow(v50, v43, v51, v52) )
      {
        if ( !HIBYTE(word_140C4DE08) )
          v49 |= 0x8000000000000000uLL;
        *(_QWORD *)v9 = v49;
        MiWritePteShadow(v9, v49);
LABEL_133:
        _InterlockedAnd64((volatile signed __int64 *)(v16 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        v53 = a3;
        v54 = 0;
        v55 = 1;
        if ( !a3 )
          goto LABEL_181;
        v87 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(a3 + 24), 0x3FuLL) )
        {
          do
            KeYieldProcessorEx(&v87, v49, v51, v52);
          while ( *(__int64 *)(a3 + 24) < 0 );
        }
        *(_BYTE *)(a3 + 34) &= ~0x20u;
        v56 = *(unsigned __int16 *)(a3 + 32);
        if ( !(_WORD)v56 )
          MiBadRefCount(a3);
        v57 = (_WORD)v56 == 1;
        LOWORD(v56) = v56 - 1;
        *(_WORD *)(a3 + 32) = v56;
        if ( v57 && (unsigned int)MiIsPfnFileOnly(a3, v56, v51, v52) )
          goto LABEL_179;
        v58 = *(_QWORD *)(a3 + 40);
        if ( (v58 & 0x1000000000LL) != 0 || (v58 & 0x2000000000000LL) != 0 )
          goto LABEL_180;
        v59 = *(_QWORD *)(a3 + 24) & 0x3FFFFFFFFFFFFFFFLL;
        if ( !(_WORD)v56 )
          goto LABEL_150;
        if ( (_WORD)v56 == 1 )
        {
          if ( v59 )
          {
LABEL_149:
            v55 = 0;
LABEL_150:
            v60 = *(_QWORD *)(a3 + 8) | 0x8000000000000000uLL;
            if ( v60 > 0xFFFFF6BFFFFFFF78uLL || v60 < 0xFFFFF68000000000uLL )
            {
              v61 = *(_BYTE *)(a3 + 35);
              if ( (v61 & 0x20) != 0 )
              {
                *(_BYTE *)(a3 + 35) = v61 & 0xDF;
                goto LABEL_178;
              }
            }
            if ( (unsigned int)MI_PFN_IS_PROTO(a3) && (*(_DWORD *)(a3 + 16) & 0x400LL) != 0 )
            {
              v62 = 1;
            }
            else if ( v63 <= v65 && v63 >= 0xFFFFF68000000000uLL && (*(_BYTE *)(a3 + 35) & 0x20) != 0 )
            {
              v62 = 1;
            }
            else if ( v55 == 1 && (v66 & 0x4000000000000000LL) != 0 )
            {
              v62 = 1;
            }
            v67 = (v64 >> 39) & 0x3FF;
            v68 = *(_QWORD *)(qword_140C4E448 + 8 * v67);
            if ( v62 == 1 )
              MiReturnCommit(*(_QWORD *)(qword_140C4E448 + 8 * v67), 1LL);
            v69 = 1LL;
            if ( (ULONG_PTR *)v68 != &MiSystemPartition )
              goto LABEL_176;
            CurrentPrcb = KeGetCurrentPrcb();
            CachedResidentAvailable = (int)CurrentPrcb->CachedResidentAvailable;
            if ( (_DWORD)CachedResidentAvailable == -1 )
              goto LABEL_176;
            if ( (unsigned __int64)(CachedResidentAvailable + 1) <= 0x100 )
            {
              do
              {
                v72 = _InterlockedCompareExchange(
                        (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                        CachedResidentAvailable + 1,
                        CachedResidentAvailable);
                v57 = (_DWORD)CachedResidentAvailable == v72;
                LODWORD(CachedResidentAvailable) = v72;
                if ( v57 )
                  goto LABEL_177;
              }
              while ( v72 != -1 && (unsigned __int64)(v72 + 1LL) <= 0x100 );
            }
            if ( (int)CachedResidentAvailable > 192
              && (_DWORD)CachedResidentAvailable == _InterlockedCompareExchange(
                                                      (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                                                      192,
                                                      CachedResidentAvailable) )
            {
              v69 = (int)CachedResidentAvailable - 192 + 1LL;
            }
            if ( v69 )
LABEL_176:
              _InterlockedExchangeAdd64((volatile signed __int64 *)(v68 + 7168), v69);
LABEL_177:
            v53 = a3;
LABEL_178:
            if ( v55 )
LABEL_179:
              MiPfnReferenceCountIsZero(v53, (v53 + 0x58000000000LL) / 48);
LABEL_180:
            _InterlockedAnd64((volatile signed __int64 *)(v53 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_181:
            if ( v42 )
              MiReleasePageFileInfo(v91, v42, 1LL);
            v73 = ListEntry;
            if ( ListEntry )
            {
              if ( SLODWORD(ListEntry[11].Next) > 1 )
                KeSetEvent((PRKEVENT)(&ListEntry[3].Next + 1), 0, 0);
              MiFreeInPageSupportBlock(v73);
            }
            if ( (unsigned int)MI_PFN_IS_PROTO(v16) )
            {
              result = MiCompleteProtoPteFault(a1, v43, a4, 0, v88);
              if ( (int)result < 0 )
                return result;
              return 272LL;
            }
            v74 = (_BYTE *)(v88 & 0xFFFFFFFFFFFFFFFEuLL);
            if ( !v92 || *v74 != 4 )
            {
              v79 = 0LL;
              if ( v92 )
              {
                if ( *v74 == 3 )
                {
                  v43 &= ~0x20uLL;
                  v54 = 1;
                }
                else if ( *v74 == 5 )
                {
                  v79 = v88 & 0xFFFFFFFFFFFFFFFEuLL;
                }
              }
              if ( (*(_BYTE *)(a1 + 69) & 8) != 0 )
              {
                v80 = *(_QWORD *)(a1 + 16);
                if ( (v80 & 1) == 0 || *(_BYTE *)(v80 & 0xFFFFFFFFFFFFFFFEuLL) != 2 )
                  v43 &= ~0x20uLL;
              }
              v81 = *(_BYTE *)(a1 + 69);
              if ( (v81 & 5) == 4 && (v81 & 2) == 0 )
              {
                v82 = *(unsigned __int16 *)(a1 + 66);
                if ( (_WORD)v82
                  && (v82 + *(unsigned __int16 *)(a1 + 64) != (((unsigned int)v9 >> 3) & 0x1FF) || (v81 & 0x10) == 0) )
                {
                  MiEmptyDeferredWorkingSetEntries((__int64 *)(a1 + 56));
                }
                v83 = *(_WORD *)(a1 + 66);
                if ( v83 )
                {
                  *(_WORD *)(a1 + 66) = v83 + 1;
                }
                else
                {
                  *(_WORD *)(a1 + 66) = 1;
                  *(_WORD *)(a1 + 64) = ((unsigned int)v9 >> 3) & 0x1FF;
                  if ( (unsigned int)MI_PFN_IS_PROTO(v16) )
                    *(_BYTE *)(a1 + 69) = v84 & 0xEF;
                  else
                    *(_BYTE *)(a1 + 69) = v84 | 0x10;
                }
                v54 |= 4u;
              }
              if ( !(unsigned int)MiAllocateWsle(v93, v9, v16, 0, v43, v54, v79) )
              {
                MiLockAndDecrementShareCount(v16, 0LL);
                return 3221225495LL;
              }
              return 272LL;
            }
            if ( MiPteInShadowRange(v9) )
            {
              if ( (unsigned int)MiPteHasShadow(v76, v75, v77, v78) )
              {
                if ( !HIBYTE(word_140C4DE08) )
                  v43 |= 0x8000000000000000uLL;
                *(_QWORD *)v9 = v43;
                MiWritePteShadow(v9, v43);
                return 272LL;
              }
              if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
                v43 |= 0x8000000000000000uLL;
            }
            *(_QWORD *)v9 = v43;
            return 272LL;
          }
        }
        else if ( (_WORD)v56 != 2 || !v59 )
        {
          goto LABEL_180;
        }
        if ( (*(_BYTE *)(a3 + 34) & 8) == 0 )
          goto LABEL_180;
        goto LABEL_149;
      }
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
        v49 |= 0x8000000000000000uLL;
    }
    *(_QWORD *)v9 = v49;
    goto LABEL_133;
  }
  for ( i = MI_READ_PTE_LOCK_FREE(Flink); (i & 0x800) != 0; i = MI_READ_PTE_LOCK_FREE(v9) )
  {
    v12 = 0xFFFFFA8000000000uLL;
    v13 = 0x4000000000000LL;
    if ( (i & 1) == 0 && (!i || !qword_140C4DD40 || (qword_140C4DD40 & i) != 0) )
    {
      v14 = i;
      if ( qword_140C4DD40 && (i & 0x10) == 0 )
        v14 = i & ~qword_140C4DD40;
      v15 = 6 * ((v14 >> 12) & 0xFFFFFFFFFLL);
      if ( (*(_QWORD *)(48 * ((v14 >> 12) & 0xFFFFFFFFFLL) - 0x57FFFFFFFD8LL) & 0x4000000000000LL) != 0 )
      {
        v16 = 48 * ((v14 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
        v86 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v16 + 24), 0x3FuLL) )
        {
          do
            KeYieldProcessorEx(&v86, v15, v12, v13);
          while ( *(__int64 *)(v16 + 24) < 0 );
        }
        if ( MI_READ_PTE_LOCK_FREE(v9) == i )
        {
          Flink = 0x8000000000000000uLL;
          if ( (*(_QWORD *)(v16 + 8) | 0x8000000000000000uLL) != v9 )
          {
            Flink = 0x1000000000LL;
            if ( (*(_QWORD *)(v16 + 40) & 0x1000000000LL) == 0 )
              KeBugCheckEx(0x1Au, 0x411uLL, v9, i, *(_QWORD *)(v16 + 8));
          }
          v19 = *(_QWORD *)v9;
          if ( v9 >= 0xFFFFF6FB7DBED000uLL
            && v9 <= 0xFFFFF6FB7DBED7F8uLL
            && (unsigned int)MiPteHasShadow(*(_QWORD *)(v16 + 8), Flink, 511LL, v17)
            && (v19 & 1) != 0
            && ((v19 & 0x20) == 0 || (v19 & 0x42) == 0) )
          {
            Flink = (unsigned __int64)KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
            if ( Flink )
            {
              v21 = *(_QWORD *)(Flink + 8 * (v20 & (v9 >> 3)));
              Flink = v19 | 0x20;
              if ( (v21 & 0x20) == 0 )
                Flink = v19;
              v19 = Flink;
              if ( (v21 & 0x42) != 0 )
                v19 = Flink | 0x42;
            }
          }
          v5 = (__int64)a5;
          v8 = v88;
          v10 = a1;
          goto LABEL_47;
        }
        _InterlockedAnd64((volatile signed __int64 *)(v16 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      }
    }
  }
  return 3221226548LL;
}
