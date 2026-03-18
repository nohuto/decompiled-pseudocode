/*
 * XREFs of MiZeroCfgSystemWideBitmapWorker @ 0x1402F64EC
 * Callers:
 *     MiZeroCfgSystemWideBitmap @ 0x1402F2DE8 (MiZeroCfgSystemWideBitmap.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14020A870 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiLockProtoPoolPage @ 0x140229D70 (MiLockProtoPoolPage.c)
 *     MiUnlockProtoPoolPage @ 0x14022A960 (MiUnlockProtoPoolPage.c)
 *     MiInsertPageInList @ 0x140235AB0 (MiInsertPageInList.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140238530 (MI_READ_PTE_LOCK_FREE.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x1402385A0 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiPteInShadowRange @ 0x1402386B0 (MiPteInShadowRange.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x14023E080 (MiInsertPageInFreeOrZeroedList.c)
 *     MiLocatePagefileSubsection @ 0x14024AB7C (MiLocatePagefileSubsection.c)
 *     MiReleasePageFileSpace @ 0x1402525F0 (MiReleasePageFileSpace.c)
 *     KxAcquireQueuedSpinLock @ 0x14029AB10 (KxAcquireQueuedSpinLock.c)
 *     MiUnlinkPageFromList @ 0x1402A9D50 (MiUnlinkPageFromList.c)
 *     MiCaptureDirtyBitToPfn @ 0x1402B6870 (MiCaptureDirtyBitToPfn.c)
 *     MiSetNonResidentPteHeat @ 0x1402B78F0 (MiSetNonResidentPteHeat.c)
 *     MiReleasePageFileInfo @ 0x1402D4690 (MiReleasePageFileInfo.c)
 *     MiTransferSoftwarePte @ 0x1402F4DA8 (MiTransferSoftwarePte.c)
 *     MiLockLeafPage @ 0x1402F6AF0 (MiLockLeafPage.c)
 *     MiDecrementShareCount @ 0x1402F7060 (MiDecrementShareCount.c)
 *     MiMapPageInHyperSpaceWorker @ 0x1402F7480 (MiMapPageInHyperSpaceWorker.c)
 *     MiWritePteShadow @ 0x14032ECC0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14032ED20 (MiPteHasShadow.c)
 *     MiCapturePageFileInfoInline @ 0x1403334B0 (MiCapturePageFileInfoInline.c)
 *     MiLockNestedPageAtDpcInline @ 0x14033B220 (MiLockNestedPageAtDpcInline.c)
 *     MiDiscardTransitionPteEx @ 0x140386594 (MiDiscardTransitionPteEx.c)
 *     KeZeroSinglePage @ 0x1403FAFC0 (KeZeroSinglePage.c)
 *     memset @ 0x14040A280 (memset.c)
 */

void __fastcall MiZeroCfgSystemWideBitmapWorker(unsigned int *a1, unsigned __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // r8
  __int64 v4; // rax
  unsigned __int64 v5; // rbx
  __int64 v7; // r12
  __int64 v8; // r9
  unsigned int *v9; // r13
  __int64 v10; // rcx
  unsigned __int64 v11; // rsi
  unsigned int *v12; // rax
  __int64 v13; // r10
  unsigned int *v14; // r15
  unsigned __int64 v15; // rcx
  __int64 v16; // rdx
  unsigned __int64 v17; // r14
  unsigned __int64 v18; // rdx
  unsigned int v19; // r9d
  __int64 v20; // rdi
  __int64 v21; // rcx
  unsigned __int64 v22; // r8
  __int64 v23; // r12
  __int64 v24; // r13
  __int64 v25; // rax
  unsigned __int64 v26; // rsi
  ULONG_PTR v27; // rsi
  __int64 v28; // rdi
  unsigned __int64 *v29; // rbx
  __int64 v30; // rax
  __int64 v31; // r10
  unsigned __int64 v32; // rbx
  __int16 v33; // r10
  __int64 v34; // r12
  BOOL v35; // eax
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  int v39; // edx
  int v40; // eax
  unsigned int v41; // r8d
  __int64 v42; // rdx
  unsigned __int64 v43; // rbx
  int v44; // edi
  BOOL v45; // eax
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // r9
  __int64 v50; // rax
  __int64 v51; // rax
  unsigned __int64 v52; // rbx
  void *v53; // rcx
  __int64 v54; // rax
  __int64 v55; // rdx
  __int64 v56; // r12
  __int64 v57; // rax
  unsigned __int64 v58; // rbx
  size_t v59; // r8
  void *v60; // rcx
  size_t v61; // r8
  __int64 v62; // rax
  struct _LIST_ENTRY *Flink; // rdx
  unsigned __int64 v64; // rdx
  __int64 v65; // rcx
  ULONG_PTR v66; // r10
  unsigned __int64 v67; // r9
  volatile signed __int32 *v68; // r8
  unsigned int v69; // eax
  int v70; // esi
  unsigned __int64 v71; // rdx
  bool v72; // zf
  unsigned __int64 v73; // [rsp+20h] [rbp-69h]
  unsigned __int64 v74; // [rsp+28h] [rbp-61h]
  __int64 v75; // [rsp+30h] [rbp-59h]
  __int64 v76; // [rsp+38h] [rbp-51h]
  __int64 v77; // [rsp+40h] [rbp-49h]
  unsigned __int64 v78; // [rsp+48h] [rbp-41h] BYREF
  __int64 v79; // [rsp+50h] [rbp-39h]
  unsigned __int64 v80; // [rsp+58h] [rbp-31h] BYREF
  unsigned int *v81; // [rsp+60h] [rbp-29h]
  unsigned __int64 v82; // [rsp+68h] [rbp-21h] BYREF
  __int64 v83; // [rsp+70h] [rbp-19h] BYREF
  unsigned __int64 v84; // [rsp+78h] [rbp-11h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+80h] [rbp-9h] BYREF
  unsigned __int8 v86; // [rsp+F0h] [rbp+67h] BYREF
  unsigned int v87; // [rsp+F8h] [rbp+6Fh]
  int v88; // [rsp+100h] [rbp+77h]
  unsigned int v89; // [rsp+108h] [rbp+7Fh]

  v3 = a3 >> 3;
  v4 = *(_QWORD *)a1;
  v5 = a2 >> 3;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v7 = (a2 >> 3) & 0xFFF;
  v8 = *(_WORD *)(v4 + 60) & 0x3FF;
  v89 = (a2 >> 3) & 0xFFF;
  v75 = *(_QWORD *)(qword_140C4E448 + 8 * v8);
  v87 = ((a2 >> 3) + v3) & 0xFFF;
  v82 = ((a2 >> 3) + v3 - 1) >> 12;
  v9 = MiLocatePagefileSubsection(a1, &v82);
  v81 = v9;
  v84 = v82;
  v10 = *((_QWORD *)v9 + 1);
  v80 = v5 >> 12;
  v11 = v10 + 8 * v82;
  v12 = MiLocatePagefileSubsection(a1, &v80);
  v13 = 0LL;
  v14 = v12;
  if ( *((_QWORD *)v12 + 1) )
  {
    v15 = v80;
  }
  else
  {
    do
    {
      if ( v14 == v9 )
        return;
      v14 = (unsigned int *)*((_QWORD *)v14 + 2);
      v15 = 0LL;
      v80 = 0LL;
    }
    while ( !*((_QWORD *)v14 + 1) );
  }
  v16 = *((_QWORD *)v14 + 1);
  v17 = v16 + 8 * v15;
  if ( v14 == v9 )
    v18 = v11;
  else
    v18 = v16 + 8LL * v14[11];
  v19 = v87;
  v73 = v18;
  v86 = 17;
  v74 = 0LL;
  v20 = v17 & -(__int64)((_DWORD)v7 != 0);
  v21 = 0LL;
  v76 = 0LL;
  v22 = 0LL;
  v77 = v20;
  v23 = v11 & -(__int64)(v87 != 0);
  v79 = v23;
  while ( v17 < v18 )
  {
LABEL_7:
    if ( (v22 & 0xFFFFFFFFFFFFF000uLL) != (v17 & 0xFFFFFFFFFFFFF000uLL) && v22 )
    {
      LOBYTE(v18) = v86;
      MiUnlockProtoPoolPage(v21, v18);
      v21 = 0LL;
      v74 = 0LL;
      v76 = 0LL;
    }
    if ( v21 )
    {
LABEL_9:
      v24 = MiLockLeafPage(v17, 0LL);
      v25 = MI_READ_PTE_LOCK_FREE(v17);
      v83 = v25;
      v26 = v25;
      if ( (v25 & 1) != 0 )
      {
        if ( MiPteInShadowRange((unsigned __int64)&v83)
          && (MiFlags & 0xC00000) != 0
          && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
          && ((v26 & 0x20) == 0 || (v26 & 0x42) == 0) )
        {
          Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
          if ( Flink )
          {
            if ( ((__int64)*(&Flink->Flink + (((unsigned __int64)&v83 >> 3) & 0x1FF)) & 0x20) != 0 )
              v26 |= 0x20uLL;
          }
        }
        v51 = MiMapPageInHyperSpaceWorker((v26 >> 12) & 0xFFFFFFFFFLL, 0LL, 0x80000000LL);
        v52 = v51;
        if ( v17 == v20 )
        {
          v61 = 4096 - v89;
          v53 = (void *)(v51 + v89);
        }
        else
        {
          v53 = (void *)v51;
          if ( v17 != v23 )
          {
            KeZeroSinglePage(v51);
LABEL_52:
            MiUnmapPageInHyperSpaceWorker(v52, 0x11u, 0x80000000);
            v54 = MiCaptureDirtyBitToPfn(v24);
            _InterlockedAnd64((volatile signed __int64 *)(v24 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            if ( !v54 )
              goto LABEL_29;
            v64 = v54;
            v65 = *(_QWORD *)(qword_140C4E448 + 8 * ((*(_QWORD *)(v24 + 40) >> 39) & 0x3FFLL));
            goto LABEL_100;
          }
          v61 = v87;
        }
        memset(v53, 0, v61);
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
            v42 = *(_QWORD *)(v75 + 8LL * ((unsigned __int16)v25 >> 12) + 6944);
            if ( qword_140C4DD40 && (v25 & 0x10) == 0 )
              v25 &= ~qword_140C4DD40;
            v41 = HIDWORD(v25);
          }
          else
          {
            v41 = 0;
            v42 = 0LL;
          }
          v43 = MiTransferSoftwarePte(v26, v42, v41);
          MiReleasePageFileSpace(v75, v26);
          v44 = 0;
          v45 = MiPteInShadowRange(v17);
          v13 = 0LL;
          if ( v45 )
          {
            if ( (unsigned int)MiPteHasShadow(v47, v46, v48, v49) )
            {
              v44 = 1;
              if ( HIBYTE(word_140C4DE08) != (_BYTE)v13 )
                goto LABEL_42;
              v72 = (v43 & 1) == 0;
            }
            else
            {
              if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
                goto LABEL_42;
              v72 = (v43 & 1) == 0;
            }
            if ( !v72 )
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
        v21 = v76;
        v17 += 8LL;
        v9 = v81;
        v20 = v77;
        goto LABEL_31;
      }
      if ( qword_140C4DD40 )
      {
        if ( (v25 & 0x10) != 0 )
          v26 = v25 & 0xFFFFFFFFFFFFFFEFuLL;
        else
          v26 = ~qword_140C4DD40 & v25;
      }
      v27 = (v26 >> 12) & 0xFFFFFFFFFLL;
      v28 = 0LL;
      if ( *(_WORD *)(v24 + 32) )
        goto LABEL_28;
      if ( v17 == v77 || v17 == v23 )
      {
        v72 = (*(_BYTE *)(v24 + 34) & 0x10) == 0;
        v88 = 0;
        if ( !v72 )
        {
          v56 = *(_QWORD *)(v75 + 4240);
          LockHandle.LockQueue.Next = 0LL;
          LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(v56 + 32);
          KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)(v56 + 32));
          goto LABEL_60;
        }
        v88 = 1;
        if ( (unsigned int)MiUnlinkPageFromList(v24, 0) )
        {
          v28 = MiCaptureDirtyBitToPfn(v24);
          v56 = 0LL;
LABEL_60:
          v57 = MiMapPageInHyperSpaceWorker(v27, 0LL, 0x80000000LL);
          v58 = v57;
          if ( v17 == v77 )
          {
            v59 = 4096 - v89;
            v60 = (void *)(v57 + v89);
          }
          else
          {
            v59 = v87;
            v60 = (void *)v57;
          }
          memset(v60, 0, v59);
          MiUnmapPageInHyperSpaceWorker(v58, 0x11u, 0x80000000);
          if ( dword_140C4E4CC == 1 )
          {
            v66 = v27 & 0x1F;
            LOBYTE(v67) = 1;
            v68 = (volatile signed __int32 *)(qword_140C4E528 + 4 * (v27 >> 5));
            if ( v66 + 1 > 0x20 )
            {
              if ( (v27 & 0x1F) != 0 )
              {
                v70 = v27 & 0x1F;
                _InterlockedOr(v68++, ((1 << (32 - v70)) - 1) << v66);
                v67 = 1LL - (unsigned int)(32 - v70);
                if ( v67 >= 0x20 )
                {
                  v71 = v67 >> 5;
                  v67 += -32LL * (v67 >> 5);
                  do
                  {
                    *v68++ = -1;
                    --v71;
                  }
                  while ( v71 );
                }
                if ( !v67 )
                  goto LABEL_63;
              }
              v69 = (1 << v67) - 1;
            }
            else
            {
              v69 = 1 << v66;
            }
            _InterlockedOr(v68, v69);
          }
LABEL_63:
          if ( v56 )
            KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
          if ( v88 == 1 )
            MiInsertPageInList(v24, 8u);
LABEL_27:
          v23 = v79;
LABEL_28:
          _InterlockedAnd64((volatile signed __int64 *)(v24 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( !v28 )
          {
LABEL_29:
            v13 = 0LL;
            goto LABEL_30;
          }
          v65 = v75;
          v64 = v28;
LABEL_100:
          MiReleasePageFileInfo(v65, v64, 1);
          goto LABEL_29;
        }
      }
      else if ( (unsigned int)MiUnlinkPageFromList(v24, 0) )
      {
        v29 = (unsigned __int64 *)(v24 + 16);
        v30 = MiCapturePageFileInfoInline(v24 + 16, 0LL);
        v31 = *(_QWORD *)(v24 + 16);
        v28 = v30;
        if ( (v31 & 2) != 0 )
        {
          v55 = *(_QWORD *)(v75 + 8LL * ((unsigned __int16)v31 >> 12) + 6944);
          if ( qword_140C4DD40 && (v31 & 0x10) == 0 )
            v31 &= ~qword_140C4DD40;
          v32 = MiTransferSoftwarePte(*v29, v55, HIDWORD(v31));
        }
        else
        {
          v78 = *v29;
          MiSetNonResidentPteHeat(&v78, 0);
          v32 = v78;
          if ( (v33 & 0x400) == 0 )
          {
            v32 = v78 & 0xFFFFFFFFFFFFFFF9uLL;
            v78 &= 0xFFFFFFFFFFFFFFF9uLL;
          }
        }
        v34 = 48 * (*(_QWORD *)(v24 + 40) & 0xFFFFFFFFFLL) - 0x58000000000LL;
        v88 = 0;
        v35 = MiPteInShadowRange(v17);
        v39 = 0;
        if ( v35 )
        {
          if ( !(unsigned int)MiPteHasShadow(v36, 0LL, v37, v38) )
          {
            if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
              && (v32 & 1) != 0 )
            {
              v32 |= 0x8000000000000000uLL;
            }
            goto LABEL_23;
          }
          v40 = 1;
          if ( HIBYTE(word_140C4DE08) == (_BYTE)v39 && (v32 & 1) != 0 )
            v32 |= 0x8000000000000000uLL;
        }
        else
        {
LABEL_23:
          v40 = v39;
        }
        *(_QWORD *)v17 = v32;
        if ( v40 )
          MiWritePteShadow(v17, v32);
        MiLockNestedPageAtDpcInline(v34);
        MiDecrementShareCount(v34);
        _InterlockedAnd64((volatile signed __int64 *)(v34 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        MiInsertPageInFreeOrZeroedList(v27, 2);
        goto LABEL_27;
      }
      MiDiscardTransitionPteEx(v24, 0LL);
      _InterlockedAnd64((volatile signed __int64 *)(v24 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      v21 = v76;
      v17 += 8LL;
      v9 = v81;
      v13 = 0LL;
      v18 = v73;
      v20 = v77;
      v22 = v74;
      v19 = v87;
    }
    else
    {
      v50 = MiLockProtoPoolPage(v17, &v86);
      v13 = 0LL;
      v76 = v50;
      v21 = v50;
      if ( v50 )
      {
        v74 = v17;
        goto LABEL_9;
      }
      v17 = (v17 & 0xFFFFFFFFFFFFF000uLL) + 4096;
LABEL_31:
      v18 = v73;
      v22 = v74;
      v19 = v87;
    }
  }
  while ( v14 != v9 )
  {
    v14 = (unsigned int *)*((_QWORD *)v14 + 2);
    if ( *((_QWORD *)v14 + 1) != v13 )
    {
      v17 = *((_QWORD *)v14 + 1);
      if ( v14 == v9 )
      {
        v18 = *((_QWORD *)v9 + 1) + 8 * v84;
        v62 = v18;
        if ( !v19 )
          v62 = v23;
        v23 = v62;
        v79 = v62;
      }
      else
      {
        v18 = v17 + 8LL * v14[11];
      }
      v73 = v18;
      goto LABEL_7;
    }
  }
  if ( v21 )
  {
    LOBYTE(v18) = v86;
    MiUnlockProtoPoolPage(v21, v18);
  }
}
