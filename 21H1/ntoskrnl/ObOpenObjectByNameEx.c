/*
 * XREFs of ObOpenObjectByNameEx @ 0x1405EB110
 * Callers:
 *     IoRevokeHandlesForProcess @ 0x140501730 (IoRevokeHandlesForProcess.c)
 *     IoQueryInformationByName @ 0x1405CE2F0 (IoQueryInformationByName.c)
 *     ObOpenObjectByName @ 0x1405EB090 (ObOpenObjectByName.c)
 *     IopCreateFile @ 0x14066D230 (IopCreateFile.c)
 *     NtQueryFullAttributesFile @ 0x14066DD30 (NtQueryFullAttributesFile.c)
 *     NtQueryAttributesFile @ 0x14066DFC0 (NtQueryAttributesFile.c)
 *     NtOpenSymbolicLinkObject @ 0x1406B8DC0 (NtOpenSymbolicLinkObject.c)
 *     NtDeleteFile @ 0x1407682B0 (NtDeleteFile.c)
 *     IopFastQueryNetworkAttributes @ 0x14088FD68 (IopFastQueryNetworkAttributes.c)
 * Callees:
 *     SeClearLearningModeObjectInformation @ 0x1402064E0 (SeClearLearningModeObjectInformation.c)
 *     ObFastDereferenceObject @ 0x140206540 (ObFastDereferenceObject.c)
 *     SepDeleteAccessState @ 0x140206590 (SepDeleteAccessState.c)
 *     ObFastReferenceObject @ 0x140206610 (ObFastReferenceObject.c)
 *     SepCreateAccessStateFromSubjectContext @ 0x140206730 (SepCreateAccessStateFromSubjectContext.c)
 *     SeSetLearningModeObjectInformation @ 0x1402068B0 (SeSetLearningModeObjectInformation.c)
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     ObFastReferenceObjectLocked @ 0x14025B058 (ObFastReferenceObjectLocked.c)
 *     ExAcquirePushLockSharedEx @ 0x140260BA0 (ExAcquirePushLockSharedEx.c)
 *     ExReleasePushLockEx @ 0x140260EE0 (ExReleasePushLockEx.c)
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
 *     ObfReferenceObject @ 0x1402612A0 (ObfReferenceObject.c)
 *     KeLeaveCriticalRegion @ 0x140261420 (KeLeaveCriticalRegion.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x14035A580 (ExfReleasePushLockShared.c)
 *     RtlpInterlockedPopEntrySList @ 0x1403FDD60 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x1403FDDA0 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 *     SeReleaseSecurityDescriptor @ 0x1405E2F00 (SeReleaseSecurityDescriptor.c)
 *     ObpCaptureObjectCreateInformation @ 0x1405EB880 (ObpCaptureObjectCreateInformation.c)
 *     ObpLookupObjectName @ 0x140627610 (ObpLookupObjectName.c)
 *     ObpCreateHandle @ 0x14062B8A0 (ObpCreateHandle.c)
 *     ObpDeleteNameCheck @ 0x14068AC10 (ObpDeleteNameCheck.c)
 *     RtlValidSecurityDescriptor @ 0x1406BB6D0 (RtlValidSecurityDescriptor.c)
 *     SeObjectCreateSaclAccessBits @ 0x1406D3F84 (SeObjectCreateSaclAccessBits.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
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
  __int64 v41; // rdx
  __int64 v42; // r8
  __int64 v43; // r9
  struct _DMA_ADAPTER *v44; // rcx
  __int64 v45; // r15
  _GENERAL_LOOKASIDE *L; // rsi
  __int64 Size; // rdx
  void *(__fastcall *AllocateEx)(_POOL_TYPE, unsigned __int64, unsigned int, _LOOKASIDE_LIST_EX *); // rax
  __int64 Tag; // r8
  __int64 Type; // rcx
  signed __int64 *v51; // r14
  __int64 v52; // rdx
  __int64 v53; // r8
  __int64 v54; // r9
  __int64 v55; // rax
  struct _KPRCB *v56; // rax
  _GENERAL_LOOKASIDE *v57; // r8
  __int64 v58; // rax
  int v59; // [rsp+38h] [rbp-B9h]
  PADAPTER_OBJECT DmaAdapter; // [rsp+78h] [rbp-79h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+80h] [rbp-71h]
  struct _KTHREAD *v62; // [rsp+88h] [rbp-69h]
  __int64 v63; // [rsp+90h] [rbp-61h] BYREF
  __int64 v64; // [rsp+98h] [rbp-59h]
  PSLIST_ENTRY ListEntry[2]; // [rsp+A0h] [rbp-51h] BYREF
  __int128 v66; // [rsp+B0h] [rbp-41h] BYREF
  ULONG_PTR v67; // [rsp+C0h] [rbp-31h]
  signed __int64 v68; // [rsp+C8h] [rbp-29h]
  __int128 v69; // [rsp+D0h] [rbp-21h] BYREF
  __int128 v70; // [rsp+E0h] [rbp-11h]
  __int128 v71; // [rsp+F0h] [rbp-1h]
  __int64 v72; // [rsp+100h] [rbp+Fh]
  __int64 v73; // [rsp+138h] [rbp+47h] BYREF

  v8 = a1;
  v72 = 0LL;
  DmaAdapter = 0LL;
  LODWORD(v73) = 0;
  v63 = 0LL;
  *a8 = 0LL;
  v64 = 0LL;
  *(_OWORD *)ListEntry = 0LL;
  v69 = 0LL;
  v70 = 0LL;
  v71 = 0LL;
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
      v56 = KeGetCurrentPrcb();
      v57 = v56->PPLookasideList[8].P;
      ++v57->TotalFrees;
      if ( LOWORD(v57->ListHead.Alignment) < v57->Depth
        || (++v57->FreeMisses,
            v57 = v56->PPLookasideList[8].L,
            ++v57->TotalFrees,
            LOWORD(v57->ListHead.Alignment) < v57->Depth) )
      {
        RtlpInterlockedPushEntrySList(&v57->ListHead, v14);
      }
      else
      {
        ++v57->FreeMisses;
        ((void (__fastcall *)(PSLIST_ENTRY))v57->FreeEx)(v14);
      }
      return (unsigned int)Information;
    }
    if ( !a4 )
    {
      v16 = 0LL;
      CurrentThread = KeGetCurrentThread();
      *((_QWORD *)&v66 + 1) = 0LL;
      p_Lock = (signed __int64 *)&CurrentThread->ApcState.Process->Header.Lock;
      v68 = p_Lock[136];
      if ( CurrentThread && (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 8) != 0 )
      {
        v62 = KeGetCurrentThread();
        --v62->KernelApcDisable;
        BugCheckParameter2 = (ULONG_PTR)&CurrentThread[1].WaitBlockList;
        ExAcquirePushLockSharedEx((ULONG_PTR)&CurrentThread[1].WaitBlockList, 0LL);
        if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 8) != 0 )
        {
          v16 = (void *)(*(_QWORD *)((char *)&CurrentThread[1].116 + 4) & 0xFFFFFFFFFFFFFFF8uLL);
          ObfReferenceObject(v16);
          DWORD2(v66) = *((_DWORD *)&CurrentThread[1].0 + 1) & 3;
        }
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared((signed __int64 *)BugCheckParameter2);
        KeAbPostRelease(BugCheckParameter2);
        KeLeaveCriticalRegionThread((__int64)v62, v41, v42, v43);
      }
      *(_QWORD *)&v66 = v16;
      v19 = p_Lock + 151;
      v20 = ObFastReferenceObject(p_Lock + 151);
      if ( !v20 )
      {
        v62 = KeGetCurrentThread();
        --v62->KernelApcDisable;
        v51 = p_Lock + 135;
        ExAcquirePushLockSharedEx((ULONG_PTR)v51, 0LL);
        v20 = ObFastReferenceObjectLocked(v19);
        if ( _InterlockedCompareExchange64(v51, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared(v51);
        KeAbPostRelease((ULONG_PTR)v51);
        KeLeaveCriticalRegionThread((__int64)v62, v52, v53, v54);
      }
      v67 = v20;
      if ( SeTokenLeakTracking )
      {
        if ( v20 )
        {
          _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v20 + 1144) + 284LL));
          if ( v20 == SepTokenLeakToken )
            __debugbreak();
        }
        if ( (_QWORD)v66 )
        {
          _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v66 + 1144) + 284LL));
          if ( (_QWORD)v66 == SepTokenLeakToken )
            __debugbreak();
        }
      }
      Information = SepCreateAccessStateFromSubjectContext(&v66, v14, &v14[14].Next, a5, (PGENERIC_MAPPING)(a2 + 76));
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
            v58 = *(_QWORD *)(a4 + 48);
            if ( v58 )
            {
              _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(v58 + 1144) + 284LL));
              if ( *(_QWORD *)(a4 + 48) == SepTokenLeakToken )
                __debugbreak();
            }
            v55 = *(_QWORD *)(a4 + 32);
            if ( v55 )
            {
              _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(v55 + 1144) + 284LL));
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
                    (int)ListEntry,
                    (int)v14[10].Next,
                    a2,
                    a3,
                    a6,
                    *((_QWORD *)&v14[12].Next + 1),
                    0LL,
                    a7,
                    a4,
                    (__int64)&v14[28],
                    (__int64)&v73,
                    (__int64)&DmaAdapter);
    if ( Information >= 0 )
    {
      if ( *((_BYTE *)&v14[29].Next + 14) )
      {
        v45 = *((_QWORD *)&v14[28].Next + 1) - 48LL;
        v64 = v45;
        ObfReferenceObject((PVOID)(v45 + 48));
        _InterlockedIncrement((volatile signed __int32 *)(v45 - ObpInfoMaskToOffset[*(_BYTE *)(v45 + 26) & 3] + 24));
        v23 = 0;
      }
      if ( *((_BYTE *)&v14[29].Next + 14) )
      {
        ExReleasePushLockEx((ULONG_PTR)(&v22->Next[18].Next + 1), 0LL);
        v44 = (struct _DMA_ADAPTER *)v22->Next;
        LODWORD(v14[30].Next) = -286387660;
        HalPutDmaAdapter(v44);
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
        *((_QWORD *)&v70 + 1) = ListEntry;
        *(_QWORD *)&v70 = a2 + 16;
        *(_QWORD *)&v71 = *((_QWORD *)&v14[10].Next + 1);
        SeSetLearningModeObjectInformation((__int64)&v69);
        LOBYTE(v59) = a3;
        v31 = ObpCreateHandle(v23, DmaAdapter, 0LL, a4, 0, v14[10].Next, v59, 0LL, v73, 0LL, &v63);
        if ( v31 < 0 )
        {
          HalPutDmaAdapter(DmaAdapter);
          Information = v31;
        }
        else
        {
          *a8 = v63;
        }
      }
      v32 = (struct _DMA_ADAPTER *)v64;
      if ( v64 )
      {
        if ( _InterlockedExchangeAdd(
               (volatile signed __int32 *)(v64 - ObpInfoMaskToOffset[*(_BYTE *)(v64 + 26) & 3] + 24),
               0xFFFFFFFF) == 1 )
          ObpDeleteNameCheck(v32);
        HalPutDmaAdapter(v32 + 3);
      }
    }
    goto LABEL_33;
  }
  return 3221225485LL;
}
