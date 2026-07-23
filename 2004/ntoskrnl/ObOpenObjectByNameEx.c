/*
 * XREFs of ObOpenObjectByNameEx @ 0x140694650
 * Callers:
 *     IoRevokeHandlesForProcess @ 0x140501D80 (IoRevokeHandlesForProcess.c)
 *     IoQueryInformationByName @ 0x1405CF6C0 (IoQueryInformationByName.c)
 *     IopCreateFile @ 0x140615C80 (IopCreateFile.c)
 *     NtQueryFullAttributesFile @ 0x140616780 (NtQueryFullAttributesFile.c)
 *     NtQueryAttributesFile @ 0x140616A10 (NtQueryAttributesFile.c)
 *     ObOpenObjectByName @ 0x1406945D0 (ObOpenObjectByName.c)
 *     NtOpenSymbolicLinkObject @ 0x1406D8670 (NtOpenSymbolicLinkObject.c)
 *     NtDeleteFile @ 0x14076A690 (NtDeleteFile.c)
 *     IopFastQueryNetworkAttributes @ 0x140891088 (IopFastQueryNetworkAttributes.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x140207C80 (ExAcquirePushLockSharedEx.c)
 *     ExReleasePushLockEx @ 0x140207FC0 (ExReleasePushLockEx.c)
 *     HalPutDmaAdapter @ 0x140208270 (HalPutDmaAdapter.c)
 *     ObfReferenceObject @ 0x140208380 (ObfReferenceObject.c)
 *     KeLeaveCriticalRegion @ 0x140208500 (KeLeaveCriticalRegion.c)
 *     KeAbPostRelease @ 0x14020ACF0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x14020B010 (KeLeaveCriticalRegionThread.c)
 *     ExfReleasePushLockShared @ 0x1402748E0 (ExfReleasePushLockShared.c)
 *     ObFastReferenceObjectLocked @ 0x1402978D8 (ObFastReferenceObjectLocked.c)
 *     SeClearLearningModeObjectInformation @ 0x140298FF0 (SeClearLearningModeObjectInformation.c)
 *     ObFastDereferenceObject @ 0x140299050 (ObFastDereferenceObject.c)
 *     SepDeleteAccessState @ 0x1402990A0 (SepDeleteAccessState.c)
 *     ObFastReferenceObject @ 0x140299120 (ObFastReferenceObject.c)
 *     SepCreateAccessStateFromSubjectContext @ 0x140299240 (SepCreateAccessStateFromSubjectContext.c)
 *     SeSetLearningModeObjectInformation @ 0x1402993C0 (SeSetLearningModeObjectInformation.c)
 *     RtlpInterlockedPopEntrySList @ 0x1403FEFF0 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x1403FF030 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 *     ObpLookupObjectName @ 0x1405F1FF0 (ObpLookupObjectName.c)
 *     ObpCreateHandle @ 0x1405F6330 (ObpCreateHandle.c)
 *     SeReleaseSecurityDescriptor @ 0x140628670 (SeReleaseSecurityDescriptor.c)
 *     ObpDeleteNameCheck @ 0x14063D600 (ObpDeleteNameCheck.c)
 *     ObpCaptureObjectCreateInformation @ 0x140694DC0 (ObpCaptureObjectCreateInformation.c)
 *     RtlValidSecurityDescriptor @ 0x1406DC910 (RtlValidSecurityDescriptor.c)
 *     SeObjectCreateSaclAccessBits @ 0x1406F6D74 (SeObjectCreateSaclAccessBits.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
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
  _SLIST_ENTRY *Next; // rsi
  _SLIST_ENTRY *v22; // r14
  unsigned int v23; // r15d
  struct _DMA_ADAPTER *v24; // rcx
  struct _DMA_ADAPTER *v25; // rcx
  PADAPTER_OBJECT v26; // r14
  __int64 v27; // rdx
  void *v28; // rcx
  struct _KPRCB *v29; // r8
  _GENERAL_LOOKASIDE *v30; // rcx
  int v31; // r14d
  struct _DMA_ADAPTER *v32; // r14
  struct _DMA_ADAPTER *v33; // rcx
  _SLIST_ENTRY *v34; // rcx
  _SLIST_ENTRY *v35; // r8
  struct _KPRCB *v36; // rdx
  _GENERAL_LOOKASIDE *v37; // rcx
  struct _KPRCB *v38; // rdx
  _GENERAL_LOOKASIDE *v39; // rcx
  struct _DMA_ADAPTER *v41; // rcx
  __int64 v42; // r15
  _GENERAL_LOOKASIDE *L; // rsi
  __int64 Size; // rdx
  void *(__fastcall *AllocateEx)(_POOL_TYPE, unsigned __int64, unsigned int, _LOOKASIDE_LIST_EX *); // rax
  __int64 Tag; // r8
  __int64 Type; // rcx
  signed __int64 *v48; // r14
  __int64 v49; // rax
  struct _KPRCB *v50; // rax
  _GENERAL_LOOKASIDE *v51; // r8
  __int64 v52; // rax
  PADAPTER_OBJECT DmaAdapter; // [rsp+78h] [rbp-79h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+80h] [rbp-71h]
  struct _KTHREAD *v55; // [rsp+88h] [rbp-69h]
  unsigned __int64 v56; // [rsp+90h] [rbp-61h] BYREF
  __int64 v57; // [rsp+98h] [rbp-59h]
  PSLIST_ENTRY ListEntry[2]; // [rsp+A0h] [rbp-51h] BYREF
  __int128 v59; // [rsp+B0h] [rbp-41h] BYREF
  ULONG_PTR v60; // [rsp+C0h] [rbp-31h]
  signed __int64 v61; // [rsp+C8h] [rbp-29h]
  __int128 v62; // [rsp+D0h] [rbp-21h] BYREF
  __int128 v63; // [rsp+E0h] [rbp-11h]
  __int128 v64; // [rsp+F0h] [rbp-1h]
  __int64 v65; // [rsp+100h] [rbp+Fh]
  __int64 v66; // [rsp+138h] [rbp+47h] BYREF

  v8 = a1;
  v65 = 0LL;
  DmaAdapter = 0LL;
  LODWORD(v66) = 0;
  v56 = 0LL;
  *a8 = 0LL;
  v57 = 0LL;
  *(_OWORD *)ListEntry = 0LL;
  v62 = 0LL;
  v63 = 0LL;
  v64 = 0LL;
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
      v50 = KeGetCurrentPrcb();
      v51 = v50->PPLookasideList[8].P;
      ++v51->TotalFrees;
      if ( LOWORD(v51->ListHead.Alignment) < v51->Depth
        || (++v51->FreeMisses,
            v51 = v50->PPLookasideList[8].L,
            ++v51->TotalFrees,
            LOWORD(v51->ListHead.Alignment) < v51->Depth) )
      {
        RtlpInterlockedPushEntrySList(&v51->ListHead, v14);
      }
      else
      {
        ++v51->FreeMisses;
        ((void (__fastcall *)(PSLIST_ENTRY))v51->FreeEx)(v14);
      }
      return (unsigned int)Information;
    }
    if ( !a4 )
    {
      v16 = 0LL;
      CurrentThread = KeGetCurrentThread();
      *((_QWORD *)&v59 + 1) = 0LL;
      p_Lock = (signed __int64 *)&CurrentThread->ApcState.Process->Header.Lock;
      v61 = p_Lock[136];
      if ( CurrentThread && (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 8) != 0 )
      {
        v55 = KeGetCurrentThread();
        --v55->KernelApcDisable;
        BugCheckParameter2 = (ULONG_PTR)&CurrentThread[1].WaitBlockList;
        ExAcquirePushLockSharedEx((ULONG_PTR)&CurrentThread[1].WaitBlockList, 0LL);
        if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 8) != 0 )
        {
          v16 = (void *)(*(_QWORD *)((char *)&CurrentThread[1].116 + 4) & 0xFFFFFFFFFFFFFFF8uLL);
          ObfReferenceObject(v16);
          DWORD2(v59) = *((_DWORD *)&CurrentThread[1].0 + 1) & 3;
        }
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared((signed __int64 *)BugCheckParameter2);
        KeAbPostRelease(BugCheckParameter2);
        KeLeaveCriticalRegionThread((__int64)v55);
      }
      *(_QWORD *)&v59 = v16;
      v19 = p_Lock + 151;
      v20 = ObFastReferenceObject(p_Lock + 151);
      if ( !v20 )
      {
        v55 = KeGetCurrentThread();
        --v55->KernelApcDisable;
        v48 = p_Lock + 135;
        ExAcquirePushLockSharedEx((ULONG_PTR)v48, 0LL);
        v20 = ObFastReferenceObjectLocked(v19);
        if ( _InterlockedCompareExchange64(v48, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared(v48);
        KeAbPostRelease((ULONG_PTR)v48);
        KeLeaveCriticalRegionThread((__int64)v55);
      }
      v60 = v20;
      if ( SeTokenLeakTracking )
      {
        if ( v20 )
        {
          _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v20 + 1144) + 284LL));
          if ( v20 == SepTokenLeakToken )
            __debugbreak();
        }
        if ( (_QWORD)v59 )
        {
          _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v59 + 1144) + 284LL));
          if ( (_QWORD)v59 == SepTokenLeakToken )
            __debugbreak();
        }
      }
      Information = SepCreateAccessStateFromSubjectContext(&v59, v14, &v14[14].Next, a5, (PGENERIC_MAPPING)(a2 + 76));
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
            v52 = *(_QWORD *)(a4 + 48);
            if ( v52 )
            {
              _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(v52 + 1144) + 284LL));
              if ( *(_QWORD *)(a4 + 48) == SepTokenLeakToken )
                __debugbreak();
            }
            v49 = *(_QWORD *)(a4 + 32);
            if ( v49 )
            {
              _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(v49 + 1144) + 284LL));
              if ( *(_QWORD *)(a4 + 32) == SepTokenLeakToken )
                __debugbreak();
            }
          }
          ObFastDereferenceObject(
            (signed __int64 *)&KeGetCurrentThread()->ApcState.Process[1].Affinity.Bitmap[5],
            *(struct _DMA_ADAPTER **)(a4 + 48));
          v33 = *(struct _DMA_ADAPTER **)(a4 + 32);
          *(_QWORD *)(a4 + 48) = 0LL;
          if ( v33 )
            HalPutDmaAdapter(v33);
          *(_QWORD *)(a4 + 32) = 0LL;
        }
        v34 = v14[12].Next;
        if ( v34 )
        {
          SeReleaseSecurityDescriptor(v34, (char)v14[11].Next, 1);
          v14[12].Next = 0LL;
        }
        v35 = ListEntry[1];
        if ( ListEntry[1] )
        {
          if ( WORD1(ListEntry[0]) == 248 )
          {
            v36 = KeGetCurrentPrcb();
            v37 = v36->PPLookasideList[5].P;
            ++v37->TotalFrees;
            if ( LOWORD(v37->ListHead.Alignment) < v37->Depth
              || (++v37->FreeMisses,
                  v37 = v36->PPLookasideList[5].L,
                  ++v37->TotalFrees,
                  LOWORD(v37->ListHead.Alignment) < v37->Depth) )
            {
              RtlpInterlockedPushEntrySList(&v37->ListHead, v35);
            }
            else
            {
              ++v37->FreeMisses;
              ((void (__fastcall *)(_SLIST_ENTRY *))v37->FreeEx)(v35);
            }
          }
          else
          {
            ExFreePoolWithTag(ListEntry[1], 0);
          }
        }
        SeClearLearningModeObjectInformation();
        v38 = KeGetCurrentPrcb();
        v39 = v38->PPLookasideList[8].P;
        ++v39->TotalFrees;
        if ( LOWORD(v39->ListHead.Alignment) < v39->Depth
          || (++v39->FreeMisses,
              v39 = v38->PPLookasideList[8].L,
              ++v39->TotalFrees,
              LOWORD(v39->ListHead.Alignment) < v39->Depth) )
        {
          RtlpInterlockedPushEntrySList(&v39->ListHead, v14);
        }
        else
        {
          ++v39->FreeMisses;
          ((void (__fastcall *)(PSLIST_ENTRY))v39->FreeEx)(v14);
        }
        return (unsigned int)Information;
      }
      if ( (BYTE2(Next->Next) & 0x10) != 0 && (*(_DWORD *)(a4 + 20) & 0x1000000) == 0 )
        *(_DWORD *)(a4 + 16) |= SeObjectCreateSaclAccessBits(Next);
    }
    v22 = v14 + 28;
    v23 = 0;
    Information = ObpLookupObjectName(
                    *((_QWORD *)&v14[10].Next + 1),
                    (__m128i *)ListEntry,
                    (int)v14[10].Next,
                    a2,
                    a3,
                    a6,
                    *((_QWORD *)&v14[12].Next + 1),
                    0LL,
                    a7,
                    a4,
                    (__int64)&v14[28],
                    (int *)&v66,
                    &DmaAdapter);
    if ( Information >= 0 )
    {
      if ( *((_BYTE *)&v14[29].Next + 14) )
      {
        v42 = *((_QWORD *)&v14[28].Next + 1) - 48LL;
        v57 = v42;
        ObfReferenceObject((PVOID)(v42 + 48));
        _InterlockedIncrement((volatile signed __int32 *)(v42 - ObpInfoMaskToOffset[*(_BYTE *)(v42 + 26) & 3] + 24));
        v23 = 0;
      }
      if ( *((_BYTE *)&v14[29].Next + 14) )
      {
        ExReleasePushLockEx((ULONG_PTR)(&v22->Next[18].Next + 1), 0LL);
        v41 = (struct _DMA_ADAPTER *)v22->Next;
        LODWORD(v14[30].Next) = -286387660;
        HalPutDmaAdapter(v41);
        v22->Next = 0LL;
        *((_WORD *)&v14[29].Next + 7) = 0;
        KeLeaveCriticalRegion();
      }
      v24 = (struct _DMA_ADAPTER *)*((_QWORD *)&v14[28].Next + 1);
      if ( v24 )
      {
        HalPutDmaAdapter(v24);
        *((_QWORD *)&v14[28].Next + 1) = 0LL;
      }
      v25 = DmaAdapter;
      v26 = DmaAdapter - 3;
      if ( (BYTE3(DmaAdapter[-2].DmaOperations) & 1) != 0 )
      {
        v27 = *(_QWORD *)&v26[2].Version;
        if ( v27 )
        {
          v28 = *(void **)(v27 + 32);
          if ( v28 )
          {
            SeReleaseSecurityDescriptor(v28, *(_BYTE *)(v27 + 16), 1);
            *(_QWORD *)(*(_QWORD *)&v26[2].Version + 32LL) = 0LL;
            v27 = *(_QWORD *)&v26[2].Version;
          }
          v29 = KeGetCurrentPrcb();
          v30 = v29->PPLookasideList[4].P;
          ++v30->TotalFrees;
          if ( LOWORD(v30->ListHead.Alignment) < v30->Depth
            || (++v30->FreeMisses,
                v30 = v29->PPLookasideList[4].L,
                ++v30->TotalFrees,
                LOWORD(v30->ListHead.Alignment) < v30->Depth) )
          {
            RtlpInterlockedPushEntrySList(&v30->ListHead, (PSLIST_ENTRY)v27);
          }
          else
          {
            ++v30->FreeMisses;
            ((void (__fastcall *)(__int64))v30->FreeEx)(v27);
          }
          *(_QWORD *)&v26[2].Version = 0LL;
          v25 = DmaAdapter;
        }
      }
      else
      {
        v23 = 1;
      }
      if ( (*(_DWORD *)(ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ LOBYTE(v26[1].DmaOperations) ^ (unsigned __int64)BYTE1(v26)]
                      + 72) & (__int64)v14[10].Next) != 0 )
      {
        HalPutDmaAdapter(v25);
        Information = -1073741811;
      }
      else
      {
        *((_QWORD *)&v63 + 1) = ListEntry;
        *(_QWORD *)&v63 = a2 + 16;
        *(_QWORD *)&v64 = *((_QWORD *)&v14[10].Next + 1);
        SeSetLearningModeObjectInformation((__int64)&v62);
        v31 = ObpCreateHandle(
                v23,
                DmaAdapter,
                0,
                (struct _ACCESS_STATE *)a4,
                0,
                (unsigned int)v14[10].Next,
                a3,
                0LL,
                v66,
                0LL,
                &v56);
        if ( v31 < 0 )
        {
          HalPutDmaAdapter(DmaAdapter);
          Information = v31;
        }
        else
        {
          *a8 = v56;
        }
      }
      v32 = (struct _DMA_ADAPTER *)v57;
      if ( v57 )
      {
        if ( _InterlockedExchangeAdd(
               (volatile signed __int32 *)(v57 - ObpInfoMaskToOffset[*(_BYTE *)(v57 + 26) & 3] + 24),
               0xFFFFFFFF) == 1 )
          ObpDeleteNameCheck((__int64)v32);
        HalPutDmaAdapter(v32 + 3);
      }
    }
    goto LABEL_33;
  }
  return 3221225485LL;
}
