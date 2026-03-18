/*
 * XREFs of ObOpenObjectByNameEx @ 0x1407CAF90
 * Callers:
 *     IoRevokeHandlesForProcess @ 0x140558960 (IoRevokeHandlesForProcess.c)
 *     NtQueryFullAttributesFile @ 0x14066E950 (NtQueryFullAttributesFile.c)
 *     NtQueryAttributesFile @ 0x14066EBE0 (NtQueryAttributesFile.c)
 *     ObOpenObjectByName @ 0x14067C970 (ObOpenObjectByName.c)
 *     CmCreateKey @ 0x14067F8D0 (CmCreateKey.c)
 *     NtOpenSymbolicLinkObject @ 0x1406A0F30 (NtOpenSymbolicLinkObject.c)
 *     NtOpenDirectoryObject @ 0x1406A7AB0 (NtOpenDirectoryObject.c)
 *     IopCreateFile @ 0x1407ADB90 (IopCreateFile.c)
 *     CmOpenKey @ 0x1407CABA0 (CmOpenKey.c)
 *     IoQueryInformationByName @ 0x1407F69E0 (IoQueryInformationByName.c)
 *     NtDeleteFile @ 0x1408115E0 (NtDeleteFile.c)
 *     IopFastQueryNetworkAttributes @ 0x140936A54 (IopFastQueryNetworkAttributes.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x140251C40 (HalPutDmaAdapter.c)
 *     ObfReferenceObjectWithTag @ 0x1402A6D50 (ObfReferenceObjectWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     KeLeaveCriticalRegionThread @ 0x1402AC800 (KeLeaveCriticalRegionThread.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ExReleasePushLockEx @ 0x1402AD0A0 (ExReleasePushLockEx.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     SeClearLearningModeObjectInformation @ 0x140347840 (SeClearLearningModeObjectInformation.c)
 *     SepDeleteAccessState @ 0x1403478A0 (SepDeleteAccessState.c)
 *     PsReferencePrimaryTokenWithTag @ 0x140347920 (PsReferencePrimaryTokenWithTag.c)
 *     SepCreateAccessStateFromSubjectContext @ 0x140347A20 (SepCreateAccessStateFromSubjectContext.c)
 *     ObpTraceObjectDereferenceIfActive @ 0x140347B50 (ObpTraceObjectDereferenceIfActive.c)
 *     ObfReferenceObject @ 0x140347CF0 (ObfReferenceObject.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x1403494F0 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     RtlpInterlockedPopEntrySList @ 0x140429880 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x1404298C0 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     ObpPushStackInfo @ 0x1405C5EC8 (ObpPushStackInfo.c)
 *     SeSetLearningModeObjectInformation @ 0x1405F43E0 (SeSetLearningModeObjectInformation.c)
 *     SeObjectCreateSaclAccessBits @ 0x1406C8634 (SeObjectCreateSaclAccessBits.c)
 *     RtlValidSecurityDescriptor @ 0x140726610 (RtlValidSecurityDescriptor.c)
 *     ObpCreateHandle @ 0x140731DA0 (ObpCreateHandle.c)
 *     ObpDeleteNameCheck @ 0x1407A3190 (ObpDeleteNameCheck.c)
 *     SeReleaseSecurityDescriptor @ 0x1407B3DA0 (SeReleaseSecurityDescriptor.c)
 *     ObpLookupObjectName @ 0x1407CB6C0 (ObpLookupObjectName.c)
 *     ObpCaptureObjectCreateInformation @ 0x1407CCD80 (ObpCaptureObjectCreateInformation.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
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
  _GENERAL_LOOKASIDE *P; // rdi
  PSLIST_ENTRY v14; // rsi
  int Information; // edi
  _QWORD *v16; // r15
  struct _KTHREAD *CurrentThread; // rdi
  __int64 Process; // r14
  unsigned __int64 v19; // rax
  int v20; // r14d
  _SLIST_ENTRY *Next; // rdi
  PVOID *p_Next; // rdi
  int v23; // r15d
  struct _DMA_ADAPTER *v24; // rcx
  char *v25; // rdi
  __int64 v26; // rdx
  void *v27; // rcx
  struct _KPRCB *v28; // r8
  _GENERAL_LOOKASIDE *v29; // rcx
  int v30; // edi
  __int64 v31; // rdi
  unsigned __int64 v32; // r8
  _KPROCESS *v33; // rdx
  signed __int64 v34; // rax
  signed __int64 v35; // rtt
  void *v36; // rcx
  _SLIST_ENTRY *v37; // rcx
  struct _SLIST_ENTRY *v38; // r8
  struct _KPRCB *v39; // rdx
  _GENERAL_LOOKASIDE *v40; // rcx
  struct _KPRCB *v41; // rdx
  _GENERAL_LOOKASIDE *v42; // rcx
  char *v44; // r15
  _GENERAL_LOOKASIDE *L; // rdi
  __int64 Size; // rdx
  void *(__fastcall *AllocateEx)(_POOL_TYPE, unsigned __int64, unsigned int, _LOOKASIDE_LIST_EX *); // rax
  __int64 Tag; // r8
  __int64 Type; // rcx
  __int64 v50; // rax
  struct _KPRCB *v51; // rax
  _GENERAL_LOOKASIDE *v52; // r8
  __int64 v53; // rdi
  __int64 v54; // rax
  PVOID Object; // [rsp+78h] [rbp-79h] BYREF
  __int64 v56; // [rsp+80h] [rbp-71h] BYREF
  char *v57; // [rsp+88h] [rbp-69h]
  ULONG_PTR BugCheckParameter2; // [rsp+90h] [rbp-61h]
  PSLIST_ENTRY ListEntry[2]; // [rsp+98h] [rbp-59h] BYREF
  __int128 v60; // [rsp+A8h] [rbp-49h] BYREF
  unsigned __int64 v61; // [rsp+B8h] [rbp-39h]
  __int64 v62; // [rsp+C0h] [rbp-31h]
  struct _KTHREAD *v63; // [rsp+C8h] [rbp-29h]
  __int128 v64; // [rsp+D0h] [rbp-21h] BYREF
  __int128 v65; // [rsp+E0h] [rbp-11h]
  __int128 v66; // [rsp+F0h] [rbp-1h]
  __int64 v67; // [rsp+100h] [rbp+Fh]
  __int64 v68; // [rsp+138h] [rbp+47h] BYREF

  v8 = a1;
  v67 = 0LL;
  Object = 0LL;
  LODWORD(v68) = 0;
  v56 = 0LL;
  *a8 = 0LL;
  v57 = 0LL;
  *(_OWORD *)ListEntry = 0LL;
  v64 = 0LL;
  v65 = 0LL;
  v66 = 0LL;
  if ( !a1 || !a2 )
    return 3221225485LL;
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
    v51 = KeGetCurrentPrcb();
    v52 = v51->PPLookasideList[8].P;
    ++v52->TotalFrees;
    if ( LOWORD(v52->ListHead.Alignment) < v52->Depth
      || (++v52->FreeMisses,
          v52 = v51->PPLookasideList[8].L,
          ++v52->TotalFrees,
          LOWORD(v52->ListHead.Alignment) < v52->Depth) )
    {
      RtlpInterlockedPushEntrySList(&v52->ListHead, v14);
    }
    else
    {
      ++v52->FreeMisses;
      ((void (__fastcall *)(PSLIST_ENTRY))v52->FreeEx)(v14);
    }
    return (unsigned int)Information;
  }
  if ( !a4 )
  {
    v16 = 0LL;
    CurrentThread = KeGetCurrentThread();
    *((_QWORD *)&v60 + 1) = 0LL;
    Process = (__int64)CurrentThread->ApcState.Process;
    v62 = *(_QWORD *)(Process + 1088);
    if ( CurrentThread && (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 8) != 0 )
    {
      v63 = KeGetCurrentThread();
      --v63->KernelApcDisable;
      BugCheckParameter2 = (ULONG_PTR)&CurrentThread[1].WaitBlockList;
      ExAcquirePushLockSharedEx((ULONG_PTR)&CurrentThread[1].WaitBlockList, 0LL);
      if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 8) != 0 )
      {
        v16 = (_QWORD *)(*(_QWORD *)((char *)&CurrentThread[1].116 + 4) & 0xFFFFFFFFFFFFFFF8uLL);
        ObfReferenceObjectWithTag(v16, 0x75536553u);
        DWORD2(v60) = *((_DWORD *)&CurrentThread[1].0 + 1) & 3;
      }
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)BugCheckParameter2);
      KeAbPostRelease(BugCheckParameter2);
      KeLeaveCriticalRegionThread((__int64)v63);
    }
    *(_QWORD *)&v60 = v16;
    v19 = PsReferencePrimaryTokenWithTag(Process, 0x75536553u);
    v61 = v19;
    if ( HIDWORD(NlsMbOemCodePageTag) )
    {
      if ( v19 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v19 + 1144) + 284LL));
        if ( v61 == SepTokenLeakToken )
          __debugbreak();
        v16 = (_QWORD *)v60;
      }
      if ( v16 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v16[143] + 284LL));
        if ( (_QWORD)v60 == SepTokenLeakToken )
          __debugbreak();
      }
    }
    v20 = SepCreateAccessStateFromSubjectContext(&v60, v14, &v14[14].Next, a5, (PGENERIC_MAPPING)(a2 + 76));
    if ( v20 < 0 )
      goto LABEL_33;
    a4 = (__int64)v14;
  }
  Next = v14[12].Next;
  if ( Next )
    *(_QWORD *)(a4 + 64) = Next;
  else
    Next = *(_SLIST_ENTRY **)(a4 + 64);
  if ( !Next )
    goto LABEL_14;
  if ( RtlValidSecurityDescriptor(Next) )
  {
    if ( (BYTE2(Next->Next) & 0x10) != 0 && (*(_DWORD *)(a4 + 20) & 0x1000000) == 0 )
      *(_DWORD *)(a4 + 16) |= SeObjectCreateSaclAccessBits(Next);
LABEL_14:
    p_Next = (PVOID *)&v14[28].Next;
    v23 = 0;
    v20 = ObpLookupObjectName(
            *((_QWORD *)&v14[10].Next + 1),
            a3,
            a6,
            *((_QWORD *)&v14[12].Next + 1),
            0LL,
            a7,
            a4,
            (__int64)&v14[28],
            (__int64)&v68,
            (__int64)&Object);
    if ( v20 >= 0 )
    {
      if ( *p_Next )
      {
        v44 = (char *)Object - 48;
        v57 = (char *)Object - 48;
        ObfReferenceObject(Object);
        _InterlockedIncrement((volatile signed __int32 *)&v44[-ObpInfoMaskToOffset[v44[26] & 3] + 24]);
        v23 = 0;
      }
      if ( *p_Next )
      {
        ExReleasePushLockEx((ULONG_PTR)*p_Next + 296, 0LL);
        if ( BYTE6(v14[29].Next) )
        {
          ObDereferenceObjectDeferDeleteWithTag(*p_Next, 0x554C624Fu);
          BYTE6(v14[29].Next) = 0;
        }
        *p_Next = 0LL;
        BYTE5(v14[29].Next) = 0;
        KeLeaveCriticalRegion();
      }
      v24 = (struct _DMA_ADAPTER *)Object;
      v25 = (char *)Object - 48;
      if ( (*((char *)Object - 21) & 1) != 0 )
      {
        v26 = *((_QWORD *)v25 + 4);
        if ( v26 )
        {
          v27 = *(void **)(v26 + 32);
          if ( v27 )
          {
            SeReleaseSecurityDescriptor(v27, *(_BYTE *)(v26 + 16), 1);
            *(_QWORD *)(*((_QWORD *)v25 + 4) + 32LL) = 0LL;
            v26 = *((_QWORD *)v25 + 4);
          }
          v28 = KeGetCurrentPrcb();
          v29 = v28->PPLookasideList[4].P;
          ++v29->TotalFrees;
          if ( LOWORD(v29->ListHead.Alignment) < v29->Depth
            || (++v29->FreeMisses,
                v29 = v28->PPLookasideList[4].L,
                ++v29->TotalFrees,
                LOWORD(v29->ListHead.Alignment) < v29->Depth) )
          {
            RtlpInterlockedPushEntrySList(&v29->ListHead, (PSLIST_ENTRY)v26);
          }
          else
          {
            ++v29->FreeMisses;
            ((void (__fastcall *)(__int64))v29->FreeEx)(v26);
          }
          *((_QWORD *)v25 + 4) = 0LL;
          v24 = (struct _DMA_ADAPTER *)Object;
        }
      }
      else
      {
        v23 = 1;
      }
      if ( (*(_DWORD *)(ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ (unsigned __int8)v25[24] ^ (unsigned __int64)BYTE1(v25)]
                      + 72) & (__int64)v14[10].Next) != 0 )
      {
        HalPutDmaAdapter(v24);
        v20 = -1073741811;
      }
      else
      {
        if ( SepLearningModeTokenCount )
        {
          *((_QWORD *)&v65 + 1) = ListEntry;
          *(_QWORD *)&v65 = a2 + 16;
          *(_QWORD *)&v66 = *((_QWORD *)&v14[10].Next + 1);
          SeSetLearningModeObjectInformation((__int64)&v64);
          v24 = (struct _DMA_ADAPTER *)Object;
        }
        if ( ObpTraceFlags )
        {
          v53 = (__int64)&v24[-3];
          ObpPushStackInfo((__int64)&v24[-3], 0, 1u, 0x746C6644u);
          ObpPushStackInfo(v53, 1, 1u, 0x6E48624Fu);
          v24 = (struct _DMA_ADAPTER *)Object;
        }
        v30 = ObpCreateHandle(v23, (char *)v24, 0, a4, 0, (unsigned int)v14[10].Next, a3, 0LL, v68, 0LL, &v56);
        if ( v30 < 0 )
        {
          ObfDereferenceObjectWithTag(Object, 0x6E48624Fu);
          v20 = v30;
        }
        else
        {
          *a8 = v56;
        }
      }
      v31 = (__int64)v57;
      if ( v57 )
      {
        if ( _InterlockedExchangeAdd(
               (volatile signed __int32 *)&v57[-ObpInfoMaskToOffset[v57[26] & 3] + 24],
               0xFFFFFFFF) == 1 )
          ObpDeleteNameCheck(v31);
        ObfDereferenceObject((PVOID)(v31 + 48));
      }
    }
    goto LABEL_33;
  }
  v20 = -1073741703;
LABEL_33:
  if ( (PSLIST_ENTRY)a4 == v14 )
  {
    SepDeleteAccessState(a4);
    if ( HIDWORD(NlsMbOemCodePageTag) )
    {
      v54 = *(_QWORD *)(a4 + 48);
      if ( v54 )
      {
        _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(v54 + 1144) + 284LL));
        if ( *(_QWORD *)(a4 + 48) == SepTokenLeakToken )
          __debugbreak();
      }
      v50 = *(_QWORD *)(a4 + 32);
      if ( v50 )
      {
        _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(v50 + 1144) + 284LL));
        if ( *(_QWORD *)(a4 + 32) == SepTokenLeakToken )
          __debugbreak();
      }
    }
    v32 = *(_QWORD *)(a4 + 48);
    v33 = KeGetCurrentThread()->ApcState.Process;
    _m_prefetchw(&v33[1].Affinity.StaticBitmap[5]);
    v34 = v33[1].Affinity.StaticBitmap[5];
    if ( (v32 ^ v34) >= 0xF )
    {
LABEL_76:
      ObfDereferenceObjectWithTag((PVOID)v32, 0x75536553u);
    }
    else
    {
      while ( 1 )
      {
        v35 = v34;
        v34 = _InterlockedCompareExchange64((volatile signed __int64 *)&v33[1].Affinity.StaticBitmap[5], v34 + 1, v34);
        if ( v35 == v34 )
          break;
        if ( (v32 ^ v34) >= 0xF )
          goto LABEL_76;
      }
      ObpTraceObjectDereferenceIfActive(v32 - 48);
    }
    v36 = *(void **)(a4 + 32);
    *(_QWORD *)(a4 + 48) = 0LL;
    if ( v36 )
      ObfDereferenceObjectWithTag(v36, 0x75536553u);
    *(_QWORD *)(a4 + 32) = 0LL;
  }
  v37 = v14[12].Next;
  if ( v37 )
  {
    SeReleaseSecurityDescriptor(v37, (char)v14[11].Next, 1);
    v14[12].Next = 0LL;
  }
  v38 = ListEntry[1];
  if ( ListEntry[1] )
  {
    if ( WORD1(ListEntry[0]) == 248 )
    {
      v39 = KeGetCurrentPrcb();
      v40 = v39->PPLookasideList[5].P;
      ++v40->TotalFrees;
      if ( LOWORD(v40->ListHead.Alignment) < v40->Depth
        || (++v40->FreeMisses,
            v40 = v39->PPLookasideList[5].L,
            ++v40->TotalFrees,
            LOWORD(v40->ListHead.Alignment) < v40->Depth) )
      {
        RtlpInterlockedPushEntrySList(&v40->ListHead, v38);
      }
      else
      {
        ++v40->FreeMisses;
        ((void (__fastcall *)(struct _SLIST_ENTRY *))v40->FreeEx)(v38);
      }
    }
    else
    {
      ExFreePoolWithTag(ListEntry[1], 0);
    }
  }
  SeClearLearningModeObjectInformation();
  v41 = KeGetCurrentPrcb();
  v42 = v41->PPLookasideList[8].P;
  ++v42->TotalFrees;
  if ( LOWORD(v42->ListHead.Alignment) < v42->Depth
    || (++v42->FreeMisses,
        v42 = v41->PPLookasideList[8].L,
        ++v42->TotalFrees,
        LOWORD(v42->ListHead.Alignment) < v42->Depth) )
  {
    RtlpInterlockedPushEntrySList(&v42->ListHead, v14);
  }
  else
  {
    ++v42->FreeMisses;
    ((void (__fastcall *)(PSLIST_ENTRY))v42->FreeEx)(v14);
  }
  return (unsigned int)v20;
}
