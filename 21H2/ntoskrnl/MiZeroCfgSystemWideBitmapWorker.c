/*
 * XREFs of MiZeroCfgSystemWideBitmapWorker @ 0x140257660
 * Callers:
 *     MiZeroCfgSystemWideBitmap @ 0x140256EA4 (MiZeroCfgSystemWideBitmap.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402042B0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiCapturePageFileInfoInline @ 0x140220130 (MiCapturePageFileInfoInline.c)
 *     MiWritePteShadow @ 0x140234B9C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140234BFC (MiPteHasShadow.c)
 *     MiReleasePageFileInfo @ 0x140255C50 (MiReleasePageFileInfo.c)
 *     MiLockLeafPage @ 0x140257C70 (MiLockLeafPage.c)
 *     MiTransferSoftwarePte @ 0x140258078 (MiTransferSoftwarePte.c)
 *     MiLockNestedPageAtDpcInline @ 0x140258F30 (MiLockNestedPageAtDpcInline.c)
 *     MiUnlinkPageFromList @ 0x1402BC1B0 (MiUnlinkPageFromList.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1402D9760 (MiInsertPageInFreeOrZeroedList.c)
 *     MiUnlockProtoPoolPage @ 0x1402DE040 (MiUnlockProtoPoolPage.c)
 *     MiSetNonResidentPteHeat @ 0x1402E3000 (MiSetNonResidentPteHeat.c)
 *     MiDecrementShareCount @ 0x1402E4A10 (MiDecrementShareCount.c)
 *     MiReleasePageFileSpace @ 0x14030DEA4 (MiReleasePageFileSpace.c)
 *     MiCaptureDirtyBitToPfn @ 0x14031A860 (MiCaptureDirtyBitToPfn.c)
 *     MiLocatePagefileSubsection @ 0x140321A4C (MiLocatePagefileSubsection.c)
 *     MiLockProtoPoolPage @ 0x140324E50 (MiLockProtoPoolPage.c)
 *     MiInsertPageInList @ 0x140331550 (MiInsertPageInList.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140338C10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiMapPageInHyperSpaceWorker @ 0x14033C800 (MiMapPageInHyperSpaceWorker.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x140353660 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiPteInShadowRange @ 0x140353840 (MiPteInShadowRange.c)
 *     KxAcquireQueuedSpinLock @ 0x14035B6C0 (KxAcquireQueuedSpinLock.c)
 *     MiDiscardTransitionPteEx @ 0x140388FE4 (MiDiscardTransitionPteEx.c)
 *     KeZeroSinglePage @ 0x140402F50 (KeZeroSinglePage.c)
 *     memset @ 0x140414300 (memset.c)
 */

void __fastcall MiZeroCfgSystemWideBitmapWorker(__int64 *a1, unsigned __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // r8
  __int64 v4; // rax
  unsigned __int64 v5; // rbx
  __int64 v7; // r12
  __int64 v8; // r9
  __int64 v9; // r13
  __int64 v10; // rcx
  unsigned __int64 v11; // rsi
  __int64 v12; // rax
  __int64 v13; // r10
  __int64 v14; // r15
  unsigned __int64 v15; // rcx
  __int64 v16; // rdx
  unsigned __int64 v17; // r14
  unsigned __int64 v18; // rdx
  unsigned int v19; // r9d
  __int64 v20; // rdi
  __int64 v21; // rcx
  unsigned __int64 v22; // r8
  __int64 v23; // r12
  ULONG_PTR v24; // r13
  __int64 v25; // rax
  __int64 v26; // r8
  __int64 v27; // r9
  unsigned __int64 v28; // rsi
  ULONG_PTR v29; // rsi
  __int64 v30; // rdi
  unsigned __int64 *v31; // rbx
  __int64 v32; // rax
  __int64 v33; // r10
  unsigned __int64 v34; // rbx
  __int16 v35; // r10
  __int64 v36; // r12
  int v37; // eax
  int v38; // edx
  int v39; // eax
  __int64 v40; // r9
  __int64 v41; // r8
  __int64 v42; // rdx
  __int64 v43; // rbx
  int v44; // edi
  int v45; // eax
  __int64 v46; // rax
  __int64 v47; // rax
  __int64 v48; // rbx
  void *v49; // rcx
  __int64 v50; // rdx
  __int64 v51; // rax
  __int64 v52; // rdx
  __int64 v53; // r12
  __int64 v54; // rax
  __int64 v55; // rbx
  size_t v56; // r8
  void *v57; // rcx
  __int64 v58; // rdx
  size_t v59; // r8
  __int64 v60; // rax
  struct _LIST_ENTRY *Flink; // rdx
  unsigned __int64 v62; // rdx
  __int64 v63; // rcx
  ULONG_PTR v64; // r10
  unsigned __int64 v65; // r9
  volatile signed __int32 *v66; // r8
  unsigned int v67; // eax
  int v68; // esi
  unsigned __int64 v69; // rdx
  bool v70; // zf
  unsigned __int64 v71; // [rsp+20h] [rbp-69h]
  unsigned __int64 v72; // [rsp+28h] [rbp-61h]
  __int64 v73; // [rsp+30h] [rbp-59h]
  __int64 v74; // [rsp+38h] [rbp-51h]
  __int64 v75; // [rsp+40h] [rbp-49h]
  unsigned __int64 v76; // [rsp+48h] [rbp-41h] BYREF
  __int64 v77; // [rsp+50h] [rbp-39h]
  unsigned __int64 v78; // [rsp+58h] [rbp-31h] BYREF
  __int64 v79; // [rsp+60h] [rbp-29h]
  unsigned __int64 v80; // [rsp+68h] [rbp-21h] BYREF
  __int64 v81; // [rsp+70h] [rbp-19h] BYREF
  unsigned __int64 v82; // [rsp+78h] [rbp-11h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+80h] [rbp-9h] BYREF
  char v84; // [rsp+F0h] [rbp+67h] BYREF
  unsigned int v85; // [rsp+F8h] [rbp+6Fh]
  int v86; // [rsp+100h] [rbp+77h]
  unsigned int v87; // [rsp+108h] [rbp+7Fh]

  v3 = a3 >> 3;
  v4 = *a1;
  v5 = a2 >> 3;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v7 = (a2 >> 3) & 0xFFF;
  v8 = *(_WORD *)(v4 + 60) & 0x3FF;
  v87 = (a2 >> 3) & 0xFFF;
  v73 = *(_QWORD *)(qword_140C4E688 + 8 * v8);
  v85 = ((a2 >> 3) + v3) & 0xFFF;
  v80 = ((a2 >> 3) + v3 - 1) >> 12;
  v9 = MiLocatePagefileSubsection(a1, &v80);
  v79 = v9;
  v82 = v80;
  v10 = *(_QWORD *)(v9 + 8);
  v78 = v5 >> 12;
  v11 = v10 + 8 * v80;
  v12 = MiLocatePagefileSubsection(a1, &v78);
  v13 = 0LL;
  v14 = v12;
  if ( *(_QWORD *)(v12 + 8) )
  {
    v15 = v78;
  }
  else
  {
    do
    {
      if ( v14 == v9 )
        return;
      v14 = *(_QWORD *)(v14 + 16);
      v15 = 0LL;
      v78 = 0LL;
    }
    while ( !*(_QWORD *)(v14 + 8) );
  }
  v16 = *(_QWORD *)(v14 + 8);
  v17 = v16 + 8 * v15;
  if ( v14 == v9 )
    v18 = v11;
  else
    v18 = v16 + 8LL * *(unsigned int *)(v14 + 44);
  v19 = v85;
  v71 = v18;
  v84 = 17;
  v72 = 0LL;
  v20 = v17 & -(__int64)((_DWORD)v7 != 0);
  v21 = 0LL;
  v74 = 0LL;
  v22 = 0LL;
  v75 = v20;
  v23 = v11 & -(__int64)(v85 != 0);
  v77 = v23;
  while ( v17 < v18 )
  {
LABEL_7:
    if ( (v22 & 0xFFFFFFFFFFFFF000uLL) != (v17 & 0xFFFFFFFFFFFFF000uLL) && v22 )
    {
      LOBYTE(v18) = v84;
      MiUnlockProtoPoolPage(v21, v18);
      v21 = 0LL;
      v72 = 0LL;
      v74 = 0LL;
    }
    if ( v21 )
    {
LABEL_9:
      v24 = MiLockLeafPage(v17, 0LL);
      v25 = MI_READ_PTE_LOCK_FREE(v17);
      v81 = v25;
      v28 = v25;
      if ( (v25 & 1) != 0 )
      {
        if ( (unsigned int)MiPteInShadowRange(&v81)
          && (MiFlags & 0xC00000) != 0
          && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
          && ((v28 & 0x20) == 0 || (v28 & 0x42) == 0) )
        {
          Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
          if ( Flink )
          {
            if ( ((__int64)*(&Flink->Flink + (((unsigned __int64)&v81 >> 3) & 0x1FF)) & 0x20) != 0 )
              v28 |= 0x20uLL;
          }
        }
        v47 = MiMapPageInHyperSpaceWorker((v28 >> 12) & 0xFFFFFFFFFLL, 0LL, 0x80000000LL);
        v48 = v47;
        if ( v17 == v20 )
        {
          v59 = 4096 - v87;
          v49 = (void *)(v47 + v87);
        }
        else
        {
          v49 = (void *)v47;
          if ( v17 != v23 )
          {
            KeZeroSinglePage(v47);
LABEL_52:
            LOBYTE(v50) = 17;
            MiUnmapPageInHyperSpaceWorker(v48, v50, 0x80000000LL);
            v51 = MiCaptureDirtyBitToPfn(v24);
            _InterlockedAnd64((volatile signed __int64 *)(v24 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            if ( !v51 )
              goto LABEL_29;
            v62 = v51;
            v63 = *(_QWORD *)(qword_140C4E688 + 8 * ((*(_QWORD *)(v24 + 40) >> 39) & 0x3FFLL));
            goto LABEL_100;
          }
          v59 = v85;
        }
        memset(v49, 0, v59);
        goto LABEL_52;
      }
      if ( (v25 & 0x400) != 0 )
        goto LABEL_29;
      if ( (v25 & 0x800) == 0 )
      {
        v13 = 0LL;
        if ( v25 && v17 != v20 && v17 != v23 )
        {
          if ( (v25 & 2) != 0 )
          {
            v42 = *(_QWORD *)(v73 + 8LL * ((unsigned __int16)v25 >> 12) + 6944);
            if ( qword_140C4DF80 && (v25 & 0x10) == 0 )
              v25 &= ~qword_140C4DF80;
            v40 = 2LL;
            v41 = HIDWORD(v25);
          }
          else
          {
            v40 = 0LL;
            v41 = 0LL;
            v42 = 0LL;
          }
          v43 = MiTransferSoftwarePte(v28, v42, v41, v40);
          MiReleasePageFileSpace(v73, v28, 0LL);
          v44 = 0;
          v45 = MiPteInShadowRange(v17);
          v13 = 0LL;
          if ( v45 )
          {
            if ( (unsigned int)MiPteHasShadow() )
            {
              v44 = 1;
              if ( HIBYTE(word_140C4E048) != (_BYTE)v13 )
                goto LABEL_42;
              v70 = (v43 & 1) == 0;
            }
            else
            {
              if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
                goto LABEL_42;
              v70 = (v43 & 1) == 0;
            }
            if ( !v70 )
              v43 |= 0x8000000000000000uLL;
          }
LABEL_42:
          *(_QWORD *)v17 = v43;
          if ( v44 )
          {
            MiWritePteShadow(v17, v43);
            goto LABEL_29;
          }
        }
LABEL_30:
        v21 = v74;
        v17 += 8LL;
        v9 = v79;
        v20 = v75;
        goto LABEL_31;
      }
      if ( qword_140C4DF80 )
      {
        if ( (v25 & 0x10) != 0 )
          v28 = v25 & 0xFFFFFFFFFFFFFFEFuLL;
        else
          v28 = ~qword_140C4DF80 & v25;
      }
      v29 = (v28 >> 12) & 0xFFFFFFFFFLL;
      v30 = 0LL;
      if ( *(_WORD *)(v24 + 32) )
        goto LABEL_28;
      if ( v17 == v75 || v17 == v23 )
      {
        v70 = (*(_BYTE *)(v24 + 34) & 0x10) == 0;
        v86 = 0;
        if ( !v70 )
        {
          v53 = *(_QWORD *)(v73 + 4240);
          LockHandle.LockQueue.Next = 0LL;
          LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(v53 + 32);
          KxAcquireQueuedSpinLock(&LockHandle, v53 + 32, v26, v27);
          goto LABEL_60;
        }
        v86 = 1;
        if ( (unsigned int)MiUnlinkPageFromList(v24) )
        {
          v30 = MiCaptureDirtyBitToPfn(v24);
          v53 = 0LL;
LABEL_60:
          v54 = MiMapPageInHyperSpaceWorker(v29, 0LL, 0x80000000LL);
          v55 = v54;
          if ( v17 == v75 )
          {
            v56 = 4096 - v87;
            v57 = (void *)(v54 + v87);
          }
          else
          {
            v56 = v85;
            v57 = (void *)v54;
          }
          memset(v57, 0, v56);
          LOBYTE(v58) = 17;
          MiUnmapPageInHyperSpaceWorker(v55, v58, 0x80000000LL);
          if ( dword_140C4E70C == 1 )
          {
            v64 = v29 & 0x1F;
            LOBYTE(v65) = 1;
            v66 = (volatile signed __int32 *)(qword_140C4E768 + 4 * (v29 >> 5));
            if ( v64 + 1 > 0x20 )
            {
              if ( (v29 & 0x1F) != 0 )
              {
                v68 = v29 & 0x1F;
                _InterlockedOr(v66++, ((1 << (32 - v68)) - 1) << v64);
                v65 = 1LL - (unsigned int)(32 - v68);
                if ( v65 >= 0x20 )
                {
                  v69 = v65 >> 5;
                  v65 += -32LL * (v65 >> 5);
                  do
                  {
                    *v66++ = -1;
                    --v69;
                  }
                  while ( v69 );
                }
                if ( !v65 )
                  goto LABEL_63;
              }
              v67 = (1 << v65) - 1;
            }
            else
            {
              v67 = 1 << v64;
            }
            _InterlockedOr(v66, v67);
          }
LABEL_63:
          if ( v53 )
            KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
          if ( v86 == 1 )
            MiInsertPageInList(v24, 8LL);
LABEL_27:
          v23 = v77;
LABEL_28:
          _InterlockedAnd64((volatile signed __int64 *)(v24 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( !v30 )
          {
LABEL_29:
            v13 = 0LL;
            goto LABEL_30;
          }
          v63 = v73;
          v62 = v30;
LABEL_100:
          MiReleasePageFileInfo(v63, v62, 1);
          goto LABEL_29;
        }
      }
      else if ( (unsigned int)MiUnlinkPageFromList(v24) )
      {
        v31 = (unsigned __int64 *)(v24 + 16);
        v32 = MiCapturePageFileInfoInline((unsigned __int64 *)(v24 + 16), 0, 0);
        v33 = *(_QWORD *)(v24 + 16);
        v30 = v32;
        if ( (v33 & 2) != 0 )
        {
          v52 = *(_QWORD *)(v73 + 8LL * ((unsigned __int16)v33 >> 12) + 6944);
          if ( qword_140C4DF80 && (v33 & 0x10) == 0 )
            v33 &= ~qword_140C4DF80;
          v34 = MiTransferSoftwarePte(*v31, v52, HIDWORD(v33), 2LL);
        }
        else
        {
          v76 = *v31;
          MiSetNonResidentPteHeat(&v76, 0LL);
          v34 = v76;
          if ( (v35 & 0x400) == 0 )
          {
            v34 = v76 & 0xFFFFFFFFFFFFFFF9uLL;
            v76 &= 0xFFFFFFFFFFFFFFF9uLL;
          }
        }
        v36 = 48 * (*(_QWORD *)(v24 + 40) & 0xFFFFFFFFFLL) - 0x58000000000LL;
        v86 = 0;
        v37 = MiPteInShadowRange(v17);
        v38 = 0;
        if ( v37 )
        {
          if ( !(unsigned int)MiPteHasShadow() )
          {
            if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
              && (v34 & 1) != 0 )
            {
              v34 |= 0x8000000000000000uLL;
            }
            goto LABEL_23;
          }
          v39 = 1;
          if ( HIBYTE(word_140C4E048) == (_BYTE)v38 && (v34 & 1) != 0 )
            v34 |= 0x8000000000000000uLL;
        }
        else
        {
LABEL_23:
          v39 = v38;
        }
        *(_QWORD *)v17 = v34;
        if ( v39 )
          MiWritePteShadow(v17, v34);
        MiLockNestedPageAtDpcInline(v36);
        MiDecrementShareCount(v36);
        _InterlockedAnd64((volatile signed __int64 *)(v36 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        MiInsertPageInFreeOrZeroedList(v29);
        goto LABEL_27;
      }
      MiDiscardTransitionPteEx(v24, 0LL);
      _InterlockedAnd64((volatile signed __int64 *)(v24 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      v21 = v74;
      v17 += 8LL;
      v9 = v79;
      v13 = 0LL;
      v18 = v71;
      v20 = v75;
      v22 = v72;
      v19 = v85;
    }
    else
    {
      v46 = MiLockProtoPoolPage(v17, &v84);
      v13 = 0LL;
      v74 = v46;
      v21 = v46;
      if ( v46 )
      {
        v72 = v17;
        goto LABEL_9;
      }
      v17 = (v17 & 0xFFFFFFFFFFFFF000uLL) + 4096;
LABEL_31:
      v18 = v71;
      v22 = v72;
      v19 = v85;
    }
  }
  while ( v14 != v9 )
  {
    v14 = *(_QWORD *)(v14 + 16);
    if ( *(_QWORD *)(v14 + 8) != v13 )
    {
      v17 = *(_QWORD *)(v14 + 8);
      if ( v14 == v9 )
      {
        v18 = *(_QWORD *)(v9 + 8) + 8 * v82;
        v60 = v18;
        if ( !v19 )
          v60 = v23;
        v23 = v60;
        v77 = v60;
      }
      else
      {
        v18 = v17 + 8LL * *(unsigned int *)(v14 + 44);
      }
      v71 = v18;
      goto LABEL_7;
    }
  }
  if ( v21 )
  {
    LOBYTE(v18) = v84;
    MiUnlockProtoPoolPage(v21, v18);
  }
}
