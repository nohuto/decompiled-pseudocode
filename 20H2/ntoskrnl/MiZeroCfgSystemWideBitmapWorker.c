/*
 * XREFs of MiZeroCfgSystemWideBitmapWorker @ 0x140349C1C
 * Callers:
 *     MiZeroCfgSystemWideBitmap @ 0x1403201F8 (MiZeroCfgSystemWideBitmap.c)
 * Callees:
 *     MiUnmapPageInHyperSpaceWorker @ 0x14021E940 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiPteInShadowRange @ 0x14021EA50 (MiPteInShadowRange.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402237F0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KxAcquireQueuedSpinLock @ 0x140226AC0 (KxAcquireQueuedSpinLock.c)
 *     MiUnlinkPageFromList @ 0x140279090 (MiUnlinkPageFromList.c)
 *     MiDecrementShareCount @ 0x140290770 (MiDecrementShareCount.c)
 *     MiCaptureDirtyBitToPfn @ 0x14029F1B0 (MiCaptureDirtyBitToPfn.c)
 *     MiInsertPageInList @ 0x1402A9F50 (MiInsertPageInList.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1402B12D0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1402C3730 (MiInsertPageInFreeOrZeroedList.c)
 *     MiUnlockProtoPoolPage @ 0x1402C8010 (MiUnlockProtoPoolPage.c)
 *     MiLockProtoPoolPage @ 0x1402CA9B0 (MiLockProtoPoolPage.c)
 *     MiLocatePagefileSubsection @ 0x140303D24 (MiLocatePagefileSubsection.c)
 *     MiCapturePageFileInfoInline @ 0x140306460 (MiCapturePageFileInfoInline.c)
 *     MiLockNestedPageAtDpcInline @ 0x14030DC80 (MiLockNestedPageAtDpcInline.c)
 *     MiWritePteShadow @ 0x140313F2C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140313F8C (MiPteHasShadow.c)
 *     MiReleasePageFileInfo @ 0x140344F70 (MiReleasePageFileInfo.c)
 *     MiTransferSoftwarePte @ 0x140347114 (MiTransferSoftwarePte.c)
 *     MiSetNonResidentPteHeat @ 0x140349540 (MiSetNonResidentPteHeat.c)
 *     MiMapPageInHyperSpaceWorker @ 0x140349980 (MiMapPageInHyperSpaceWorker.c)
 *     MiLockLeafPage @ 0x14034A220 (MiLockLeafPage.c)
 *     MiReleasePageFileSpace @ 0x14034D3F4 (MiReleasePageFileSpace.c)
 *     MiDiscardTransitionPteEx @ 0x140388734 (MiDiscardTransitionPteEx.c)
 *     KeZeroSinglePage @ 0x140400910 (KeZeroSinglePage.c)
 *     memset @ 0x140411300 (memset.c)
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
  unsigned __int64 v27; // rsi
  __int64 v28; // rdi
  unsigned __int64 *v29; // rbx
  __int64 v30; // rax
  __int64 v31; // r10
  unsigned __int64 v32; // rbx
  __int16 v33; // r10
  __int64 v34; // r12
  BOOL v35; // eax
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 v38; // rdx
  int v39; // eax
  unsigned int v40; // r8d
  __int64 v41; // rdx
  unsigned __int64 v42; // rbx
  int v43; // edi
  BOOL v44; // eax
  __int64 v45; // r8
  __int64 v46; // rax
  __int64 v47; // r9
  unsigned __int64 v48; // rax
  unsigned __int64 v49; // rbx
  void *v50; // rcx
  __int64 v51; // rax
  __int64 v52; // rdx
  __int64 v53; // r12
  __int64 v54; // r9
  unsigned __int64 v55; // rax
  unsigned __int64 v56; // rbx
  size_t v57; // r8
  void *v58; // rcx
  size_t v59; // r8
  __int64 v60; // rdx
  __int64 v61; // rax
  struct _LIST_ENTRY *Flink; // rdx
  unsigned __int64 v63; // rdx
  __int64 v64; // rcx
  unsigned __int64 v65; // r10
  unsigned __int64 v66; // r9
  volatile signed __int32 *v67; // r8
  unsigned int v68; // eax
  int v69; // esi
  unsigned __int64 v70; // rdx
  bool v71; // zf
  __int64 v72; // [rsp+20h] [rbp-69h]
  unsigned __int64 v73; // [rsp+28h] [rbp-61h]
  __int64 v74; // [rsp+30h] [rbp-59h]
  __int64 v75; // [rsp+38h] [rbp-51h]
  __int64 v76; // [rsp+40h] [rbp-49h]
  unsigned __int64 v77; // [rsp+48h] [rbp-41h] BYREF
  __int64 v78; // [rsp+50h] [rbp-39h]
  unsigned __int64 v79; // [rsp+58h] [rbp-31h] BYREF
  unsigned int *v80; // [rsp+60h] [rbp-29h]
  unsigned __int64 v81; // [rsp+68h] [rbp-21h] BYREF
  __int64 v82; // [rsp+70h] [rbp-19h] BYREF
  unsigned __int64 v83; // [rsp+78h] [rbp-11h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+80h] [rbp-9h] BYREF
  unsigned __int8 v85; // [rsp+F0h] [rbp+67h] BYREF
  unsigned int v86; // [rsp+F8h] [rbp+6Fh]
  int v87; // [rsp+100h] [rbp+77h]
  unsigned int v88; // [rsp+108h] [rbp+7Fh]

  v3 = a3 >> 3;
  v4 = *(_QWORD *)a1;
  v5 = a2 >> 3;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v7 = (a2 >> 3) & 0xFFF;
  v8 = *(_WORD *)(v4 + 60) & 0x3FF;
  v88 = (a2 >> 3) & 0xFFF;
  v74 = *(_QWORD *)(qword_140C4E4C8 + 8 * v8);
  v86 = ((a2 >> 3) + v3) & 0xFFF;
  v81 = ((a2 >> 3) + v3 - 1) >> 12;
  v9 = MiLocatePagefileSubsection(a1, &v81);
  v80 = v9;
  v83 = v81;
  v10 = *((_QWORD *)v9 + 1);
  v79 = v5 >> 12;
  v11 = v10 + 8 * v81;
  v12 = MiLocatePagefileSubsection(a1, &v79);
  v13 = 0LL;
  v14 = v12;
  if ( *((_QWORD *)v12 + 1) )
  {
    v15 = v79;
  }
  else
  {
    do
    {
      if ( v14 == v9 )
        return;
      v14 = (unsigned int *)*((_QWORD *)v14 + 2);
      v15 = 0LL;
      v79 = 0LL;
    }
    while ( !*((_QWORD *)v14 + 1) );
  }
  v16 = *((_QWORD *)v14 + 1);
  v17 = v16 + 8 * v15;
  if ( v14 == v9 )
    v18 = v11;
  else
    v18 = v16 + 8LL * v14[11];
  v19 = v86;
  v72 = v18;
  v85 = 17;
  v73 = 0LL;
  v20 = v17 & -(__int64)((_DWORD)v7 != 0);
  v21 = 0LL;
  v75 = 0LL;
  v22 = 0LL;
  v76 = v20;
  v23 = v11 & -(__int64)(v86 != 0);
  v78 = v23;
  while ( v17 < v18 )
  {
LABEL_7:
    if ( (v22 & 0xFFFFFFFFFFFFF000uLL) != (v17 & 0xFFFFFFFFFFFFF000uLL) && v22 )
    {
      MiUnlockProtoPoolPage(v21, v85);
      v21 = 0LL;
      v73 = 0LL;
      v75 = 0LL;
    }
    if ( v21 )
    {
LABEL_9:
      v24 = MiLockLeafPage(v17, 0LL);
      v25 = MI_READ_PTE_LOCK_FREE(v17);
      v82 = v25;
      v26 = v25;
      if ( (v25 & 1) != 0 )
      {
        if ( MiPteInShadowRange((unsigned __int64)&v82)
          && (MiFlags & 0xC00000) != 0
          && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
          && ((v26 & 0x20) == 0 || (v26 & 0x42) == 0) )
        {
          Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
          if ( Flink )
          {
            if ( ((__int64)*(&Flink->Flink + (((unsigned __int64)&v82 >> 3) & 0x1FF)) & 0x20) != 0 )
              v26 |= 0x20uLL;
          }
        }
        v48 = MiMapPageInHyperSpaceWorker((v26 >> 12) & 0xFFFFFFFFFLL, 0LL, 0x80000000, v47);
        v49 = v48;
        if ( v17 == v20 )
        {
          v59 = 4096 - v88;
          v50 = (void *)(v48 + v88);
        }
        else
        {
          v50 = (void *)v48;
          if ( v17 != v23 )
          {
            KeZeroSinglePage(v48);
LABEL_52:
            MiUnmapPageInHyperSpaceWorker(v49, 0x11u, 0x80000000);
            v51 = MiCaptureDirtyBitToPfn(v24);
            _InterlockedAnd64((volatile signed __int64 *)(v24 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            if ( !v51 )
              goto LABEL_29;
            v63 = v51;
            v64 = *(_QWORD *)(qword_140C4E4C8 + 8 * ((*(_QWORD *)(v24 + 40) >> 39) & 0x3FFLL));
            goto LABEL_100;
          }
          v59 = v86;
        }
        memset(v50, 0, v59);
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
            v41 = *(_QWORD *)(v74 + 8LL * ((unsigned __int16)v25 >> 12) + 6944);
            if ( qword_140C4DDC0 && (v25 & 0x10) == 0 )
              v25 &= ~qword_140C4DDC0;
            v40 = HIDWORD(v25);
          }
          else
          {
            v40 = 0;
            v41 = 0LL;
          }
          v42 = MiTransferSoftwarePte(v26, v41, v40);
          MiReleasePageFileSpace(v74, v26, 0LL);
          v43 = 0;
          v44 = MiPteInShadowRange(v17);
          v13 = 0LL;
          if ( v44 )
          {
            if ( (unsigned int)MiPteHasShadow() )
            {
              v43 = 1;
              if ( HIBYTE(word_140C4DE88) != (_BYTE)v13 )
                goto LABEL_42;
              v71 = (v42 & 1) == 0;
            }
            else
            {
              if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
                goto LABEL_42;
              v71 = (v42 & 1) == 0;
            }
            if ( !v71 )
              v42 |= 0x8000000000000000uLL;
          }
LABEL_42:
          *(_QWORD *)v17 = v42;
          if ( v43 )
          {
            MiWritePteShadow(v17, v42, v45);
            goto LABEL_29;
          }
        }
LABEL_30:
        v21 = v75;
        v17 += 8LL;
        v9 = v80;
        v20 = v76;
        goto LABEL_31;
      }
      if ( qword_140C4DDC0 )
      {
        if ( (v25 & 0x10) != 0 )
          v26 = v25 & 0xFFFFFFFFFFFFFFEFuLL;
        else
          v26 = ~qword_140C4DDC0 & v25;
      }
      v27 = (v26 >> 12) & 0xFFFFFFFFFLL;
      v28 = 0LL;
      if ( *(_WORD *)(v24 + 32) )
        goto LABEL_28;
      if ( v17 == v76 || v17 == v23 )
      {
        v71 = (*(_BYTE *)(v24 + 34) & 0x10) == 0;
        v87 = 0;
        if ( !v71 )
        {
          v53 = *(_QWORD *)(v74 + 4240);
          LockHandle.LockQueue.Next = 0LL;
          LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(v53 + 32);
          KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)(v53 + 32));
          goto LABEL_60;
        }
        v87 = 1;
        if ( (unsigned int)MiUnlinkPageFromList(v24, 0) )
        {
          v28 = MiCaptureDirtyBitToPfn(v24);
          v53 = 0LL;
LABEL_60:
          v55 = MiMapPageInHyperSpaceWorker(v27, 0LL, 0x80000000, v54);
          v56 = v55;
          if ( v17 == v76 )
          {
            v57 = 4096 - v88;
            v58 = (void *)(v55 + v88);
          }
          else
          {
            v57 = v86;
            v58 = (void *)v55;
          }
          memset(v58, 0, v57);
          MiUnmapPageInHyperSpaceWorker(v56, 0x11u, 0x80000000);
          if ( dword_140C4E54C == 1 )
          {
            v65 = v27 & 0x1F;
            LOBYTE(v66) = 1;
            v67 = (volatile signed __int32 *)(qword_140C4E5A8 + 4 * (v27 >> 5));
            if ( v65 + 1 > 0x20 )
            {
              if ( (v27 & 0x1F) != 0 )
              {
                v69 = v27 & 0x1F;
                _InterlockedOr(v67++, ((1 << (32 - v69)) - 1) << v65);
                v66 = 1LL - (unsigned int)(32 - v69);
                if ( v66 >= 0x20 )
                {
                  v70 = v66 >> 5;
                  v66 += -32LL * (v66 >> 5);
                  do
                  {
                    *v67++ = -1;
                    --v70;
                  }
                  while ( v70 );
                }
                if ( !v66 )
                  goto LABEL_63;
              }
              v68 = (1 << v66) - 1;
            }
            else
            {
              v68 = 1 << v65;
            }
            _InterlockedOr(v67, v68);
          }
LABEL_63:
          if ( v53 )
            KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
          if ( v87 == 1 )
            MiInsertPageInList(v24, 8u);
LABEL_27:
          v23 = v78;
LABEL_28:
          _InterlockedAnd64((volatile signed __int64 *)(v24 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( !v28 )
          {
LABEL_29:
            v13 = 0LL;
            goto LABEL_30;
          }
          v64 = v74;
          v63 = v28;
LABEL_100:
          MiReleasePageFileInfo(v64, v63, 1);
          goto LABEL_29;
        }
      }
      else if ( (unsigned int)MiUnlinkPageFromList(v24, 0) )
      {
        v29 = (unsigned __int64 *)(v24 + 16);
        v30 = MiCapturePageFileInfoInline((unsigned __int64 *)(v24 + 16), 0, 0);
        v31 = *(_QWORD *)(v24 + 16);
        v28 = v30;
        if ( (v31 & 2) != 0 )
        {
          v52 = *(_QWORD *)(v74 + 8LL * ((unsigned __int16)v31 >> 12) + 6944);
          if ( qword_140C4DDC0 && (v31 & 0x10) == 0 )
            v31 &= ~qword_140C4DDC0;
          v32 = MiTransferSoftwarePte(*v29, v52, HIDWORD(v31));
        }
        else
        {
          v77 = *v29;
          MiSetNonResidentPteHeat(&v77, 0);
          v32 = v77;
          if ( (v33 & 0x400) == 0 )
          {
            v32 = v77 & 0xFFFFFFFFFFFFFFF9uLL;
            v77 &= 0xFFFFFFFFFFFFFFF9uLL;
          }
        }
        v34 = 48 * (*(_QWORD *)(v24 + 40) & 0xFFFFFFFFFLL) - 0x58000000000LL;
        v87 = 0;
        v35 = MiPteInShadowRange(v17);
        v38 = 0LL;
        if ( v35 )
        {
          if ( !(unsigned int)MiPteHasShadow() )
          {
            if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
              && (v32 & 1) != 0 )
            {
              v32 |= 0x8000000000000000uLL;
            }
            goto LABEL_23;
          }
          v39 = 1;
          if ( HIBYTE(word_140C4DE88) == (_BYTE)v38 && (v32 & 1) != 0 )
            v32 |= 0x8000000000000000uLL;
        }
        else
        {
LABEL_23:
          v39 = v38;
        }
        *(_QWORD *)v17 = v32;
        if ( v39 )
          MiWritePteShadow(v17, v32, v36);
        MiLockNestedPageAtDpcInline(v34, v38, v36, v37);
        MiDecrementShareCount(v34);
        _InterlockedAnd64((volatile signed __int64 *)(v34 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        MiInsertPageInFreeOrZeroedList(v27, 2);
        goto LABEL_27;
      }
      MiDiscardTransitionPteEx(v24, 0LL);
      _InterlockedAnd64((volatile signed __int64 *)(v24 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      v21 = v75;
      v17 += 8LL;
      v9 = v80;
      v13 = 0LL;
      v18 = v72;
      v20 = v76;
      v22 = v73;
      v19 = v86;
    }
    else
    {
      v46 = MiLockProtoPoolPage(v17, &v85);
      v13 = 0LL;
      v75 = v46;
      v21 = v46;
      if ( v46 )
      {
        v73 = v17;
        goto LABEL_9;
      }
      v17 = (v17 & 0xFFFFFFFFFFFFF000uLL) + 4096;
LABEL_31:
      v18 = v72;
      v22 = v73;
      v19 = v86;
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
        v60 = *((_QWORD *)v9 + 1) + 8 * v83;
        v61 = v60;
        if ( !v19 )
          v61 = v23;
        v23 = v61;
        v78 = v61;
      }
      else
      {
        v60 = v17 + 8LL * v14[11];
      }
      v72 = v60;
      goto LABEL_7;
    }
  }
  if ( v21 )
    MiUnlockProtoPoolPage(v21, v85);
}
