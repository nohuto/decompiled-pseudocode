/*
 * XREFs of MiZeroCfgSystemWideBitmapWorker @ 0x1402696C0
 * Callers:
 *     MiZeroCfgSystemWideBitmap @ 0x140268F04 (MiZeroCfgSystemWideBitmap.c)
 * Callees:
 *     MiUnlinkPageFromList @ 0x1402178B0 (MiUnlinkPageFromList.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x140234F10 (MiInsertPageInFreeOrZeroedList.c)
 *     MiUnlockProtoPoolPage @ 0x1402397F0 (MiUnlockProtoPoolPage.c)
 *     MiSetNonResidentPteHeat @ 0x14023E7B0 (MiSetNonResidentPteHeat.c)
 *     MiDecrementShareCount @ 0x1402401C0 (MiDecrementShareCount.c)
 *     MiReleasePageFileInfo @ 0x140267CB0 (MiReleasePageFileInfo.c)
 *     MiLockLeafPage @ 0x140269CD0 (MiLockLeafPage.c)
 *     MiTransferSoftwarePte @ 0x14026A0D8 (MiTransferSoftwarePte.c)
 *     MiLockNestedPageAtDpcInline @ 0x14026AF90 (MiLockNestedPageAtDpcInline.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140287110 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiCapturePageFileInfoInline @ 0x1402A2CF0 (MiCapturePageFileInfoInline.c)
 *     MiWritePteShadow @ 0x1402B69BC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402B6A1C (MiPteHasShadow.c)
 *     MiReleasePageFileSpace @ 0x140303154 (MiReleasePageFileSpace.c)
 *     MiCaptureDirtyBitToPfn @ 0x14030FB10 (MiCaptureDirtyBitToPfn.c)
 *     MiLocatePagefileSubsection @ 0x140316CFC (MiLocatePagefileSubsection.c)
 *     MiLockProtoPoolPage @ 0x14031A100 (MiLockProtoPoolPage.c)
 *     MiInsertPageInList @ 0x140326800 (MiInsertPageInList.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14032DEC0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiMapPageInHyperSpaceWorker @ 0x140331AB0 (MiMapPageInHyperSpaceWorker.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x140348910 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiPteInShadowRange @ 0x140348AF0 (MiPteInShadowRange.c)
 *     KxAcquireQueuedSpinLock @ 0x140350970 (KxAcquireQueuedSpinLock.c)
 *     MiDiscardTransitionPteEx @ 0x140388E94 (MiDiscardTransitionPteEx.c)
 *     KeZeroSinglePage @ 0x140402D70 (KeZeroSinglePage.c)
 *     memset @ 0x140414200 (memset.c)
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
  __int64 v26; // rdx
  __int64 v27; // r8
  unsigned __int64 v28; // rsi
  ULONG_PTR v29; // rsi
  __int64 v30; // rdi
  _QWORD *v31; // rbx
  __int64 v32; // rax
  __int64 v33; // r10
  __int64 v34; // rdx
  unsigned __int64 v35; // rbx
  __int16 v36; // r10
  __int64 v37; // r12
  int v38; // eax
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  int v42; // edx
  int v43; // eax
  __int64 v44; // r9
  __int64 v45; // r8
  __int64 v46; // rdx
  __int64 v47; // rbx
  int v48; // edi
  __int64 v49; // rdx
  int v50; // eax
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // r8
  __int64 v54; // r9
  __int64 v55; // rax
  __int64 v56; // r9
  __int64 v57; // rax
  __int64 v58; // rbx
  void *v59; // rcx
  __int64 v60; // rdx
  __int64 v61; // rax
  __int64 v62; // rdx
  __int64 v63; // r12
  __int64 v64; // r9
  __int64 v65; // rax
  __int64 v66; // rbx
  size_t v67; // r8
  void *v68; // rcx
  __int64 v69; // rdx
  size_t v70; // r8
  __int64 v71; // rdx
  __int64 v72; // rax
  struct _LIST_ENTRY *Flink; // rdx
  unsigned __int64 v74; // rdx
  __int64 v75; // rcx
  ULONG_PTR v76; // r10
  unsigned __int64 v77; // r9
  volatile signed __int32 *v78; // r8
  unsigned int v79; // eax
  int v80; // esi
  unsigned __int64 v81; // rdx
  bool v82; // zf
  __int64 v83; // [rsp+20h] [rbp-69h]
  unsigned __int64 v84; // [rsp+28h] [rbp-61h]
  __int64 v85; // [rsp+30h] [rbp-59h]
  __int64 v86; // [rsp+38h] [rbp-51h]
  __int64 v87; // [rsp+40h] [rbp-49h]
  unsigned __int64 v88; // [rsp+48h] [rbp-41h] BYREF
  __int64 v89; // [rsp+50h] [rbp-39h]
  unsigned __int64 v90; // [rsp+58h] [rbp-31h] BYREF
  __int64 v91; // [rsp+60h] [rbp-29h]
  unsigned __int64 v92; // [rsp+68h] [rbp-21h] BYREF
  __int64 v93; // [rsp+70h] [rbp-19h] BYREF
  unsigned __int64 v94; // [rsp+78h] [rbp-11h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+80h] [rbp-9h] BYREF
  unsigned __int8 v96; // [rsp+F0h] [rbp+67h] BYREF
  unsigned int v97; // [rsp+F8h] [rbp+6Fh]
  int v98; // [rsp+100h] [rbp+77h]
  unsigned int v99; // [rsp+108h] [rbp+7Fh]

  v3 = a3 >> 3;
  v4 = *a1;
  v5 = a2 >> 3;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v7 = (a2 >> 3) & 0xFFF;
  v8 = *(_WORD *)(v4 + 60) & 0x3FF;
  v99 = (a2 >> 3) & 0xFFF;
  v85 = *(_QWORD *)(qword_140C4E648 + 8 * v8);
  v97 = ((a2 >> 3) + v3) & 0xFFF;
  v92 = ((a2 >> 3) + v3 - 1) >> 12;
  v9 = MiLocatePagefileSubsection(a1, &v92);
  v91 = v9;
  v94 = v92;
  v10 = *(_QWORD *)(v9 + 8);
  v90 = v5 >> 12;
  v11 = v10 + 8 * v92;
  v12 = MiLocatePagefileSubsection(a1, &v90);
  v13 = 0LL;
  v14 = v12;
  if ( *(_QWORD *)(v12 + 8) )
  {
    v15 = v90;
  }
  else
  {
    do
    {
      if ( v14 == v9 )
        return;
      v14 = *(_QWORD *)(v14 + 16);
      v15 = 0LL;
      v90 = 0LL;
    }
    while ( !*(_QWORD *)(v14 + 8) );
  }
  v16 = *(_QWORD *)(v14 + 8);
  v17 = v16 + 8 * v15;
  if ( v14 == v9 )
    v18 = v11;
  else
    v18 = v16 + 8LL * *(unsigned int *)(v14 + 44);
  v19 = v97;
  v83 = v18;
  v96 = 17;
  v84 = 0LL;
  v20 = v17 & -(__int64)((_DWORD)v7 != 0);
  v21 = 0LL;
  v86 = 0LL;
  v22 = 0LL;
  v87 = v20;
  v23 = v11 & -(__int64)(v97 != 0);
  v89 = v23;
  while ( v17 < v18 )
  {
LABEL_7:
    if ( (v22 & 0xFFFFFFFFFFFFF000uLL) != (v17 & 0xFFFFFFFFFFFFF000uLL) && v22 )
    {
      MiUnlockProtoPoolPage(v21, v96);
      v21 = 0LL;
      v84 = 0LL;
      v86 = 0LL;
    }
    if ( v21 )
    {
LABEL_9:
      v24 = MiLockLeafPage(v17, 0LL);
      v25 = MI_READ_PTE_LOCK_FREE(v17);
      v93 = v25;
      v28 = v25;
      if ( (v25 & 1) != 0 )
      {
        if ( (unsigned int)MiPteInShadowRange(&v93, v26)
          && (MiFlags & 0xC00000) != 0
          && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
          && ((v28 & 0x20) == 0 || (v28 & 0x42) == 0) )
        {
          Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
          if ( Flink )
          {
            if ( ((__int64)*(&Flink->Flink + (((unsigned __int64)&v93 >> 3) & 0x1FF)) & 0x20) != 0 )
              v28 |= 0x20uLL;
          }
        }
        v57 = MiMapPageInHyperSpaceWorker((v28 >> 12) & 0xFFFFFFFFFLL, 0LL, 0x80000000LL, v56);
        v58 = v57;
        if ( v17 == v20 )
        {
          v70 = 4096 - v99;
          v59 = (void *)(v57 + v99);
        }
        else
        {
          v59 = (void *)v57;
          if ( v17 != v23 )
          {
            KeZeroSinglePage(v57);
LABEL_52:
            LOBYTE(v60) = 17;
            MiUnmapPageInHyperSpaceWorker(v58, v60, 0x80000000LL);
            v61 = MiCaptureDirtyBitToPfn(v24);
            _InterlockedAnd64((volatile signed __int64 *)(v24 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            if ( !v61 )
              goto LABEL_29;
            v74 = v61;
            v75 = *(_QWORD *)(qword_140C4E648 + 8 * ((*(_QWORD *)(v24 + 40) >> 39) & 0x3FFLL));
            goto LABEL_100;
          }
          v70 = v97;
        }
        memset(v59, 0, v70);
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
            v46 = *(_QWORD *)(v85 + 8LL * ((unsigned __int16)v25 >> 12) + 6944);
            if ( qword_140C4DF40 && (v25 & 0x10) == 0 )
              v25 &= ~qword_140C4DF40;
            v44 = 2LL;
            v45 = HIDWORD(v25);
          }
          else
          {
            v44 = 0LL;
            v45 = 0LL;
            v46 = 0LL;
          }
          v47 = MiTransferSoftwarePte(v28, v46, v45, v44);
          MiReleasePageFileSpace(v85, v28, 0LL);
          v48 = 0;
          v50 = MiPteInShadowRange(v17, v49);
          v13 = 0LL;
          if ( v50 )
          {
            if ( (unsigned int)MiPteHasShadow(v52, v51, v53, v54) )
            {
              v48 = 1;
              if ( HIBYTE(word_140C4E008) != (_BYTE)v13 )
                goto LABEL_42;
              v82 = (v47 & 1) == 0;
            }
            else
            {
              if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
                goto LABEL_42;
              v82 = (v47 & 1) == 0;
            }
            if ( !v82 )
              v47 |= 0x8000000000000000uLL;
          }
LABEL_42:
          *(_QWORD *)v17 = v47;
          if ( v48 )
          {
            MiWritePteShadow(v17, v47);
            goto LABEL_29;
          }
        }
LABEL_30:
        v21 = v86;
        v17 += 8LL;
        v9 = v91;
        v20 = v87;
        goto LABEL_31;
      }
      if ( qword_140C4DF40 )
      {
        if ( (v25 & 0x10) != 0 )
          v28 = v25 & 0xFFFFFFFFFFFFFFEFuLL;
        else
          v28 = ~qword_140C4DF40 & v25;
      }
      v29 = (v28 >> 12) & 0xFFFFFFFFFLL;
      v30 = 0LL;
      if ( *(_WORD *)(v24 + 32) )
        goto LABEL_28;
      if ( v17 == v87 || v17 == v23 )
      {
        v82 = (*(_BYTE *)(v24 + 34) & 0x10) == 0;
        v98 = 0;
        if ( !v82 )
        {
          v63 = *(_QWORD *)(v85 + 4240);
          LockHandle.LockQueue.Next = 0LL;
          LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(v63 + 32);
          KxAcquireQueuedSpinLock(&LockHandle, v63 + 32, v27);
          goto LABEL_60;
        }
        v98 = 1;
        if ( (unsigned int)MiUnlinkPageFromList(v24, 0) )
        {
          v30 = MiCaptureDirtyBitToPfn(v24);
          v63 = 0LL;
LABEL_60:
          v65 = MiMapPageInHyperSpaceWorker(v29, 0LL, 0x80000000LL, v64);
          v66 = v65;
          if ( v17 == v87 )
          {
            v67 = 4096 - v99;
            v68 = (void *)(v65 + v99);
          }
          else
          {
            v67 = v97;
            v68 = (void *)v65;
          }
          memset(v68, 0, v67);
          LOBYTE(v69) = 17;
          MiUnmapPageInHyperSpaceWorker(v66, v69, 0x80000000LL);
          if ( dword_140C4E6CC == 1 )
          {
            v76 = v29 & 0x1F;
            LOBYTE(v77) = 1;
            v78 = (volatile signed __int32 *)(qword_140C4E728 + 4 * (v29 >> 5));
            if ( v76 + 1 > 0x20 )
            {
              if ( (v29 & 0x1F) != 0 )
              {
                v80 = v29 & 0x1F;
                _InterlockedOr(v78++, ((1 << (32 - v80)) - 1) << v76);
                v77 = 1LL - (unsigned int)(32 - v80);
                if ( v77 >= 0x20 )
                {
                  v81 = v77 >> 5;
                  v77 += -32LL * (v77 >> 5);
                  do
                  {
                    *v78++ = -1;
                    --v81;
                  }
                  while ( v81 );
                }
                if ( !v77 )
                  goto LABEL_63;
              }
              v79 = (1 << v77) - 1;
            }
            else
            {
              v79 = 1 << v76;
            }
            _InterlockedOr(v78, v79);
          }
LABEL_63:
          if ( v63 )
            KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
          if ( v98 == 1 )
            MiInsertPageInList(v24, 8LL);
LABEL_27:
          v23 = v89;
LABEL_28:
          _InterlockedAnd64((volatile signed __int64 *)(v24 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( !v30 )
          {
LABEL_29:
            v13 = 0LL;
            goto LABEL_30;
          }
          v75 = v85;
          v74 = v30;
LABEL_100:
          MiReleasePageFileInfo(v75, v74, 1);
          goto LABEL_29;
        }
      }
      else if ( (unsigned int)MiUnlinkPageFromList(v24, 0) )
      {
        v31 = (_QWORD *)(v24 + 16);
        v32 = MiCapturePageFileInfoInline(v24 + 16, 0LL, 0LL);
        v33 = *(_QWORD *)(v24 + 16);
        v30 = v32;
        if ( (v33 & 2) != 0 )
        {
          v62 = *(_QWORD *)(v85 + 8LL * ((unsigned __int16)v33 >> 12) + 6944);
          if ( qword_140C4DF40 && (v33 & 0x10) == 0 )
            v33 &= ~qword_140C4DF40;
          v35 = MiTransferSoftwarePte(*v31, v62, HIDWORD(v33), 2LL);
        }
        else
        {
          v88 = *v31;
          MiSetNonResidentPteHeat(&v88, 0);
          v35 = v88;
          if ( (v36 & 0x400) == 0 )
          {
            v35 = v88 & 0xFFFFFFFFFFFFFFF9uLL;
            v88 &= 0xFFFFFFFFFFFFFFF9uLL;
          }
        }
        v37 = 48 * (*(_QWORD *)(v24 + 40) & 0xFFFFFFFFFLL) - 0x58000000000LL;
        v98 = 0;
        v38 = MiPteInShadowRange(v17, v34);
        v42 = 0;
        if ( v38 )
        {
          if ( !(unsigned int)MiPteHasShadow(v39, 0LL, v40, v41) )
          {
            if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
              && (v35 & 1) != 0 )
            {
              v35 |= 0x8000000000000000uLL;
            }
            goto LABEL_23;
          }
          v43 = 1;
          if ( HIBYTE(word_140C4E008) == (_BYTE)v42 && (v35 & 1) != 0 )
            v35 |= 0x8000000000000000uLL;
        }
        else
        {
LABEL_23:
          v43 = v42;
        }
        *(_QWORD *)v17 = v35;
        if ( v43 )
          MiWritePteShadow(v17, v35);
        MiLockNestedPageAtDpcInline(v37);
        MiDecrementShareCount(v37);
        _InterlockedAnd64((volatile signed __int64 *)(v37 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        MiInsertPageInFreeOrZeroedList(v29, 2);
        goto LABEL_27;
      }
      MiDiscardTransitionPteEx(v24, 0LL);
      _InterlockedAnd64((volatile signed __int64 *)(v24 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      v21 = v86;
      v17 += 8LL;
      v9 = v91;
      v13 = 0LL;
      v18 = v83;
      v20 = v87;
      v22 = v84;
      v19 = v97;
    }
    else
    {
      v55 = MiLockProtoPoolPage(v17, &v96);
      v13 = 0LL;
      v86 = v55;
      v21 = v55;
      if ( v55 )
      {
        v84 = v17;
        goto LABEL_9;
      }
      v17 = (v17 & 0xFFFFFFFFFFFFF000uLL) + 4096;
LABEL_31:
      v18 = v83;
      v22 = v84;
      v19 = v97;
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
        v71 = *(_QWORD *)(v9 + 8) + 8 * v94;
        v72 = v71;
        if ( !v19 )
          v72 = v23;
        v23 = v72;
        v89 = v72;
      }
      else
      {
        v71 = v17 + 8LL * *(unsigned int *)(v14 + 44);
      }
      v83 = v71;
      goto LABEL_7;
    }
  }
  if ( v21 )
    MiUnlockProtoPoolPage(v21, v96);
}
