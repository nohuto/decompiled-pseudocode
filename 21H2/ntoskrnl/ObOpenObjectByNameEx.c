/*
 * XREFs of ObOpenObjectByNameEx @ 0x14064AAF0
 * Callers:
 *     IoRevokeHandlesForProcess @ 0x140507150 (IoRevokeHandlesForProcess.c)
 *     IoQueryInformationByName @ 0x1405D8B10 (IoQueryInformationByName.c)
 *     NtOpenSymbolicLinkObject @ 0x1405E54C0 (NtOpenSymbolicLinkObject.c)
 *     ObOpenObjectByName @ 0x14064AA70 (ObOpenObjectByName.c)
 *     IopCreateFile @ 0x14069AF70 (IopCreateFile.c)
 *     NtQueryFullAttributesFile @ 0x14069BEB0 (NtQueryFullAttributesFile.c)
 *     NtQueryAttributesFile @ 0x14069C140 (NtQueryAttributesFile.c)
 *     NtDeleteFile @ 0x14077CE10 (NtDeleteFile.c)
 *     IopFastQueryNetworkAttributes @ 0x1408942A8 (IopFastQueryNetworkAttributes.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     SeClearLearningModeObjectInformation @ 0x14026A550 (SeClearLearningModeObjectInformation.c)
 *     ObFastDereferenceObject @ 0x14026A5B0 (ObFastDereferenceObject.c)
 *     SepDeleteAccessState @ 0x14026A600 (SepDeleteAccessState.c)
 *     ObFastReferenceObject @ 0x14026A680 (ObFastReferenceObject.c)
 *     SepCreateAccessStateFromSubjectContext @ 0x14026A7A0 (SepCreateAccessStateFromSubjectContext.c)
 *     SeSetLearningModeObjectInformation @ 0x14026A920 (SeSetLearningModeObjectInformation.c)
 *     ObFastReferenceObjectLocked @ 0x1402AAC68 (ObFastReferenceObjectLocked.c)
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     ExfReleasePushLockShared @ 0x1402FC1C0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x1403558A0 (ExAcquirePushLockSharedEx.c)
 *     ExReleasePushLockEx @ 0x140355BE0 (ExReleasePushLockEx.c)
 *     ObfReferenceObject @ 0x140355F80 (ObfReferenceObject.c)
 *     KeLeaveCriticalRegion @ 0x140356100 (KeLeaveCriticalRegion.c)
 *     RtlpInterlockedPopEntrySList @ 0x140407B10 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x140407B50 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     SeObjectCreateSaclAccessBits @ 0x140604914 (SeObjectCreateSaclAccessBits.c)
 *     ObpCaptureObjectCreateInformation @ 0x14064B260 (ObpCaptureObjectCreateInformation.c)
 *     SeReleaseSecurityDescriptor @ 0x140651570 (SeReleaseSecurityDescriptor.c)
 *     RtlValidSecurityDescriptor @ 0x140653D20 (RtlValidSecurityDescriptor.c)
 *     ObpDeleteNameCheck @ 0x140663D60 (ObpDeleteNameCheck.c)
 *     ObpLookupObjectName @ 0x14070B300 (ObpLookupObjectName.c)
 *     ObpCreateHandle @ 0x14070D930 (ObpCreateHandle.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ObOpenObjectByNameEx(
        __int64 a1,
        __int64 a2,
        unsigned __int8 a3,
        __int64 a4,
        ACCESS_MASK a5,
        __int64 a6,
        __int64 a7,
        _QWORD *a8)
{
  int v8; // r15d
  struct _KPRCB *CurrentPrcb; // r14
  _GENERAL_LOOKASIDE *P; // rsi
  PSLIST_ENTRY v14; // rbx
  int Information; // esi
  void *v16; // r15
  struct _KTHREAD *CurrentThread; // rsi
  signed __int64 *p_Lock; // r14
  _QWORD *v19; // r15
  ULONG_PTR v20; // rsi
  __int64 v21; // r8
  __int64 v22; // r9
  _SLIST_ENTRY *Next; // rsi
  _SLIST_ENTRY *v24; // r14
  unsigned int v25; // r15d
  struct _DMA_ADAPTER *v26; // rcx
  struct _DMA_ADAPTER *v27; // rcx
  PADAPTER_OBJECT v28; // r14
  __int64 v29; // rdx
  __int64 v30; // rcx
  struct _KPRCB *v31; // r8
  _GENERAL_LOOKASIDE *v32; // rcx
  int v33; // r14d
  struct _DMA_ADAPTER *v34; // r14
  struct _DMA_ADAPTER *v35; // rcx
  _SLIST_ENTRY *v36; // rcx
  _SLIST_ENTRY *v37; // r8
  struct _KPRCB *v38; // rdx
  _GENERAL_LOOKASIDE *v39; // rcx
  struct _KPRCB *v40; // rdx
  _GENERAL_LOOKASIDE *v41; // rcx
  __int64 v43; // rdx
  __int64 v44; // r8
  __int64 v45; // r9
  struct _DMA_ADAPTER *v46; // rcx
  __int64 v47; // r15
  _GENERAL_LOOKASIDE *L; // rsi
  __int64 Size; // rdx
  void *(__fastcall *AllocateEx)(_POOL_TYPE, unsigned __int64, unsigned int, _LOOKASIDE_LIST_EX *); // rax
  __int64 Tag; // r8
  __int64 Type; // rcx
  signed __int64 *v53; // r14
  __int64 v54; // rdx
  __int64 v55; // r8
  __int64 v56; // r9
  __int64 v57; // rax
  struct _KPRCB *v58; // rax
  _GENERAL_LOOKASIDE *v59; // r8
  __int64 v60; // rax
  int v61; // [rsp+38h] [rbp-B9h]
  PADAPTER_OBJECT DmaAdapter; // [rsp+78h] [rbp-79h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+80h] [rbp-71h]
  struct _KTHREAD *v64; // [rsp+88h] [rbp-69h]
  __int64 v65; // [rsp+90h] [rbp-61h] BYREF
  __int64 v66; // [rsp+98h] [rbp-59h]
  PSLIST_ENTRY ListEntry[2]; // [rsp+A0h] [rbp-51h] BYREF
  __int128 v68; // [rsp+B0h] [rbp-41h] BYREF
  ULONG_PTR v69; // [rsp+C0h] [rbp-31h]
  signed __int64 v70; // [rsp+C8h] [rbp-29h]
  __int128 v71; // [rsp+D0h] [rbp-21h] BYREF
  __int128 v72; // [rsp+E0h] [rbp-11h]
  __int128 v73; // [rsp+F0h] [rbp-1h]
  __int64 v74; // [rsp+100h] [rbp+Fh]
  __int64 v75; // [rsp+138h] [rbp+47h] BYREF

  v8 = a1;
  v74 = 0LL;
  DmaAdapter = 0LL;
  LODWORD(v75) = 0;
  v65 = 0LL;
  *a8 = 0LL;
  v66 = 0LL;
  *(_OWORD *)ListEntry = 0LL;
  v71 = 0LL;
  v72 = 0LL;
  v73 = 0LL;
  if ( a1 && a2 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    P = CurrentPrcb->PPLookasideList[8].P;
    ++P->TotalAllocates;
    v14 = RtlpInterlockedPopEntrySList(&P->ListHead);
    if ( !v14 )
    {
      ++P->AllocateMisses;
      L = CurrentPrcb->PPLookasideList[8].L;
      ++L->TotalAllocates;
      v14 = RtlpInterlockedPopEntrySList(&L->ListHead);
      if ( !v14 )
      {
        Size = L->Size;
        AllocateEx = L->AllocateEx;
        Tag = L->Tag;
        Type = (unsigned int)L->Type;
        ++L->AllocateMisses;
        v14 = (PSLIST_ENTRY)((__int64 (__fastcall *)(__int64, __int64, __int64))AllocateEx)(Type, Size, Tag);
        if ( !v14 )
          return 3221225626LL;
      }
    }
    LODWORD(v14->Next) = CurrentPrcb->Number;
    Information = ObpCaptureObjectCreateInformation(a3, a3, v8, (unsigned int)ListEntry, (__int64)&v14[10], 1);
    if ( Information < 0 )
    {
      v58 = KeGetCurrentPrcb();
      v59 = v58->PPLookasideList[8].P;
      ++v59->TotalFrees;
      if ( LOWORD(v59->ListHead.Alignment) < v59->Depth
        || (++v59->FreeMisses,
            v59 = v58->PPLookasideList[8].L,
            ++v59->TotalFrees,
            LOWORD(v59->ListHead.Alignment) < v59->Depth) )
      {
        RtlpInterlockedPushEntrySList(&v59->ListHead, v14);
      }
      else
      {
        ++v59->FreeMisses;
        ((void (__fastcall *)(PSLIST_ENTRY))v59->FreeEx)(v14);
      }
      return (unsigned int)Information;
    }
    if ( !a4 )
    {
      v16 = 0LL;
      CurrentThread = KeGetCurrentThread();
      *((_QWORD *)&v68 + 1) = 0LL;
      p_Lock = (signed __int64 *)&CurrentThread->ApcState.Process->Header.Lock;
      v70 = p_Lock[136];
      if ( CurrentThread && (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 8) != 0 )
      {
        v64 = KeGetCurrentThread();
        --v64->KernelApcDisable;
        BugCheckParameter2 = (ULONG_PTR)&CurrentThread[1].WaitBlockList;
        ExAcquirePushLockSharedEx((ULONG_PTR)&CurrentThread[1].WaitBlockList, 0LL);
        if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 8) != 0 )
        {
          v16 = (void *)(*(_QWORD *)((char *)&CurrentThread[1].116 + 4) & 0xFFFFFFFFFFFFFFF8uLL);
          ObfReferenceObject(v16);
          DWORD2(v68) = *((_DWORD *)&CurrentThread[1].0 + 1) & 3;
        }
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared((signed __int64 *)BugCheckParameter2);
        KeAbPostRelease(BugCheckParameter2);
        KeLeaveCriticalRegionThread((__int64)v64, v43, v44, v45);
      }
      *(_QWORD *)&v68 = v16;
      v19 = p_Lock + 151;
      v20 = ObFastReferenceObject(p_Lock + 151);
      if ( !v20 )
      {
        v64 = KeGetCurrentThread();
        --v64->KernelApcDisable;
        v53 = p_Lock + 135;
        ExAcquirePushLockSharedEx((ULONG_PTR)v53, 0LL);
        v20 = ObFastReferenceObjectLocked(v19);
        if ( _InterlockedCompareExchange64(v53, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared(v53);
        KeAbPostRelease((ULONG_PTR)v53);
        KeLeaveCriticalRegionThread((__int64)v64, v54, v55, v56);
      }
      v69 = v20;
      if ( SeTokenLeakTracking )
      {
        if ( v20 )
        {
          _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v20 + 1144) + 284LL));
          if ( v20 == SepTokenLeakToken )
            __debugbreak();
        }
        if ( (_QWORD)v68 )
        {
          _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v68 + 1144) + 284LL));
          if ( (_QWORD)v68 == SepTokenLeakToken )
            __debugbreak();
        }
      }
      Information = SepCreateAccessStateFromSubjectContext(&v68, v14, &v14[14].Next, a5, (PGENERIC_MAPPING)(a2 + 76));
      if ( Information < 0 )
        goto LABEL_33;
      a4 = (__int64)v14;
    }
    Next = v14[12].Next;
    if ( Next )
      *(_QWORD *)(a4 + 64) = Next;
    else
      Next = *(_SLIST_ENTRY **)(a4 + 64);
    if ( Next )
    {
      if ( !RtlValidSecurityDescriptor(Next) )
      {
        Information = -1073741703;
LABEL_33:
        if ( (PSLIST_ENTRY)a4 == v14 )
        {
          SepDeleteAccessState(a4);
          if ( SeTokenLeakTracking )
          {
            v60 = *(_QWORD *)(a4 + 48);
            if ( v60 )
            {
              _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(v60 + 1144) + 284LL));
              if ( *(_QWORD *)(a4 + 48) == SepTokenLeakToken )
                __debugbreak();
            }
            v57 = *(_QWORD *)(a4 + 32);
            if ( v57 )
            {
              _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(v57 + 1144) + 284LL));
              if ( *(_QWORD *)(a4 + 32) == SepTokenLeakToken )
                __debugbreak();
            }
          }
          ObFastDereferenceObject(
            (signed __int64 *)&KeGetCurrentThread()->ApcState.Process[1].Affinity.Bitmap[5],
            *(struct _DMA_ADAPTER **)(a4 + 48));
          v35 = *(struct _DMA_ADAPTER **)(a4 + 32);
          *(_QWORD *)(a4 + 48) = 0LL;
          if ( v35 )
            HalPutDmaAdapter(v35);
          *(_QWORD *)(a4 + 32) = 0LL;
        }
        v36 = v14[12].Next;
        if ( v36 )
        {
          LOBYTE(v21) = 1;
          SeReleaseSecurityDescriptor(v36, LOBYTE(v14[11].Next), v21, v22);
          v14[12].Next = 0LL;
        }
        v37 = ListEntry[1];
        if ( ListEntry[1] )
        {
          if ( WORD1(ListEntry[0]) == 248 )
          {
            v38 = KeGetCurrentPrcb();
            v39 = v38->PPLookasideList[5].P;
            ++v39->TotalFrees;
            if ( LOWORD(v39->ListHead.Alignment) < v39->Depth
              || (++v39->FreeMisses,
                  v39 = v38->PPLookasideList[5].L,
                  ++v39->TotalFrees,
                  LOWORD(v39->ListHead.Alignment) < v39->Depth) )
            {
              RtlpInterlockedPushEntrySList(&v39->ListHead, v37);
            }
            else
            {
              ++v39->FreeMisses;
              ((void (__fastcall *)(_SLIST_ENTRY *))v39->FreeEx)(v37);
            }
          }
          else
          {
            ExFreePoolWithTag(ListEntry[1], 0);
          }
        }
        SeClearLearningModeObjectInformation();
        v40 = KeGetCurrentPrcb();
        v41 = v40->PPLookasideList[8].P;
        ++v41->TotalFrees;
        if ( LOWORD(v41->ListHead.Alignment) < v41->Depth
          || (++v41->FreeMisses,
              v41 = v40->PPLookasideList[8].L,
              ++v41->TotalFrees,
              LOWORD(v41->ListHead.Alignment) < v41->Depth) )
        {
          RtlpInterlockedPushEntrySList(&v41->ListHead, v14);
        }
        else
        {
          ++v41->FreeMisses;
          ((void (__fastcall *)(PSLIST_ENTRY))v41->FreeEx)(v14);
        }
        return (unsigned int)Information;
      }
      if ( (BYTE2(Next->Next) & 0x10) != 0 && (*(_DWORD *)(a4 + 20) & 0x1000000) == 0 )
        *(_DWORD *)(a4 + 16) |= SeObjectCreateSaclAccessBits(Next);
    }
    v24 = v14 + 28;
    v25 = 0;
    Information = ObpLookupObjectName(
                    *((_QWORD *)&v14[10].Next + 1),
                    a3,
                    a6,
                    *((_QWORD *)&v14[12].Next + 1),
                    0LL,
                    a7,
                    a4,
                    (__int64)&v14[28],
                    (__int64)&v75,
                    (__int64)&DmaAdapter);
    if ( Information >= 0 )
    {
      if ( *((_BYTE *)&v14[29].Next + 14) )
      {
        v47 = *((_QWORD *)&v14[28].Next + 1) - 48LL;
        v66 = v47;
        ObfReferenceObject((PVOID)(v47 + 48));
        _InterlockedIncrement((volatile signed __int32 *)(v47 - ObpInfoMaskToOffset[*(_BYTE *)(v47 + 26) & 3] + 24));
        v25 = 0;
      }
      if ( *((_BYTE *)&v14[29].Next + 14) )
      {
        ExReleasePushLockEx((ULONG_PTR)(&v24->Next[18].Next + 1), 0LL);
        v46 = (struct _DMA_ADAPTER *)v24->Next;
        LODWORD(v14[30].Next) = -286387660;
        HalPutDmaAdapter(v46);
        v24->Next = 0LL;
        *((_WORD *)&v14[29].Next + 7) = 0;
        KeLeaveCriticalRegion();
      }
      v26 = (struct _DMA_ADAPTER *)*((_QWORD *)&v14[28].Next + 1);
      if ( v26 )
      {
        HalPutDmaAdapter(v26);
        *((_QWORD *)&v14[28].Next + 1) = 0LL;
      }
      v27 = DmaAdapter;
      v28 = DmaAdapter - 3;
      if ( (BYTE3(DmaAdapter[-2].DmaOperations) & 1) != 0 )
      {
        v29 = *(_QWORD *)&v28[2].Version;
        if ( v29 )
        {
          v30 = *(_QWORD *)(v29 + 32);
          if ( v30 )
          {
            LOBYTE(v21) = 1;
            SeReleaseSecurityDescriptor(v30, *(unsigned __int8 *)(v29 + 16), v21, v22);
            *(_QWORD *)(*(_QWORD *)&v28[2].Version + 32LL) = 0LL;
            v29 = *(_QWORD *)&v28[2].Version;
          }
          v31 = KeGetCurrentPrcb();
          v32 = v31->PPLookasideList[4].P;
          ++v32->TotalFrees;
          if ( LOWORD(v32->ListHead.Alignment) < v32->Depth
            || (++v32->FreeMisses,
                v32 = v31->PPLookasideList[4].L,
                ++v32->TotalFrees,
                LOWORD(v32->ListHead.Alignment) < v32->Depth) )
          {
            RtlpInterlockedPushEntrySList(&v32->ListHead, (PSLIST_ENTRY)v29);
          }
          else
          {
            ++v32->FreeMisses;
            ((void (__fastcall *)(__int64))v32->FreeEx)(v29);
          }
          *(_QWORD *)&v28[2].Version = 0LL;
          v27 = DmaAdapter;
        }
      }
      else
      {
        v25 = 1;
      }
      if ( (*(_DWORD *)(ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ LOBYTE(v28[1].DmaOperations) ^ (unsigned __int64)BYTE1(v28)]
                      + 72) & (__int64)v14[10].Next) != 0 )
      {
        HalPutDmaAdapter(v27);
        Information = -1073741811;
      }
      else
      {
        *((_QWORD *)&v72 + 1) = ListEntry;
        *(_QWORD *)&v72 = a2 + 16;
        *(_QWORD *)&v73 = *((_QWORD *)&v14[10].Next + 1);
        SeSetLearningModeObjectInformation((__int64)&v71);
        LOBYTE(v61) = a3;
        v33 = ObpCreateHandle(v25, DmaAdapter, 0LL, a4, 0, v14[10].Next, v61, 0LL, v75, 0LL, &v65);
        if ( v33 < 0 )
        {
          HalPutDmaAdapter(DmaAdapter);
          Information = v33;
        }
        else
        {
          *a8 = v65;
        }
      }
      v34 = (struct _DMA_ADAPTER *)v66;
      if ( v66 )
      {
        if ( _InterlockedExchangeAdd(
               (volatile signed __int32 *)(v66 - ObpInfoMaskToOffset[*(_BYTE *)(v66 + 26) & 3] + 24),
               0xFFFFFFFF) == 1 )
          ObpDeleteNameCheck(v34);
        HalPutDmaAdapter(v34 + 3);
      }
    }
    goto LABEL_33;
  }
  return 3221225485LL;
}
