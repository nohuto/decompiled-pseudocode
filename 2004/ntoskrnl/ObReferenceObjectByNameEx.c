/*
 * XREFs of ObReferenceObjectByNameEx @ 0x14062DD40
 * Callers:
 *     NtNotifyChangeMultipleKeys @ 0x1405E2200 (NtNotifyChangeMultipleKeys.c)
 *     AlpcpCreateClientPort @ 0x14062B308 (AlpcpCreateClientPort.c)
 *     CmUnloadKey @ 0x14064FEBC (CmUnloadKey.c)
 *     ObInitServerSilo @ 0x1407B65F0 (ObInitServerSilo.c)
 *     NtQueryOpenSubKeys @ 0x140865090 (NtQueryOpenSubKeys.c)
 *     NtQueryOpenSubKeysEx @ 0x1408652B0 (NtQueryOpenSubKeysEx.c)
 *     CmpResolveHiveLoadConflict @ 0x14086B4C8 (CmpResolveHiveLoadConflict.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x140208270 (HalPutDmaAdapter.c)
 *     ObpReleaseLookupContext @ 0x140297B18 (ObpReleaseLookupContext.c)
 *     SeClearLearningModeObjectInformation @ 0x140298FF0 (SeClearLearningModeObjectInformation.c)
 *     SepDeleteAccessState @ 0x1402990A0 (SepDeleteAccessState.c)
 *     PsGetCurrentSilo @ 0x140299370 (PsGetCurrentSilo.c)
 *     SeSetLearningModeObjectInformation @ 0x1402993C0 (SeSetLearningModeObjectInformation.c)
 *     RtlpInterlockedPopEntrySList @ 0x1403FEFF0 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x1403FF030 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 *     ObpLookupObjectName @ 0x1405F1FF0 (ObpLookupObjectName.c)
 *     SeReleaseSecurityDescriptor @ 0x140628670 (SeReleaseSecurityDescriptor.c)
 *     ObpAdjustAccessMask @ 0x14062E034 (ObpAdjustAccessMask.c)
 *     ObpFreeObjectNameBuffer @ 0x1406689A8 (ObpFreeObjectNameBuffer.c)
 *     SeCreateAccessState @ 0x140668A20 (SeCreateAccessState.c)
 *     ObpCheckObjectReference @ 0x140668AD0 (ObpCheckObjectReference.c)
 *     ObpCaptureObjectCreateInformation @ 0x140694DC0 (ObpCaptureObjectCreateInformation.c)
 *     SeReleaseSubjectContext @ 0x140695270 (SeReleaseSubjectContext.c)
 */

__int64 __fastcall ObReferenceObjectByNameEx(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        char a5,
        __int64 a6,
        PADAPTER_OBJECT *a7)
{
  struct _SECURITY_SUBJECT_CONTEXT *v7; // rsi
  int v10; // r12d
  struct _KPRCB *CurrentPrcb; // r14
  _GENERAL_LOOKASIDE *P; // rdi
  int v13; // edx
  int v14; // ecx
  PSLIST_ENTRY v15; // rbx
  unsigned int Number; // eax
  char v17; // di
  int *v18; // r14
  struct _LIST_ENTRY *CurrentSilo; // rax
  __int64 v20; // rdx
  _SLIST_ENTRY *Next; // rcx
  struct _KPRCB *v22; // rdx
  _GENERAL_LOOKASIDE *v23; // rcx
  _GENERAL_LOOKASIDE *L; // rdi
  __int64 Size; // rdx
  void *(__fastcall *AllocateEx)(_POOL_TYPE, unsigned __int64, unsigned int, _LOOKASIDE_LIST_EX *); // rax
  __int64 Tag; // r8
  __int64 Type; // rcx
  int v30[4]; // [rsp+70h] [rbp-41h] BYREF
  __int128 v31; // [rsp+80h] [rbp-31h] BYREF
  __int128 v32; // [rsp+90h] [rbp-21h]
  __int128 v33; // [rsp+A0h] [rbp-11h]
  __int64 v34; // [rsp+B0h] [rbp-1h]
  PADAPTER_OBJECT DmaAdapter; // [rsp+100h] [rbp+4Fh] BYREF
  __int64 v36; // [rsp+108h] [rbp+57h] BYREF

  v36 = a2;
  v7 = 0LL;
  DmaAdapter = 0LL;
  v34 = 0LL;
  v10 = a1;
  *(_OWORD *)v30 = 0LL;
  v31 = 0LL;
  v32 = 0LL;
  v33 = 0LL;
  if ( !a1 || !a4 )
    return 3221225485LL;
  CurrentPrcb = KeGetCurrentPrcb();
  P = CurrentPrcb->PPLookasideList[8].P;
  ++P->TotalAllocates;
  v15 = RtlpInterlockedPopEntrySList(&P->ListHead);
  if ( !v15 )
  {
    ++P->AllocateMisses;
    L = CurrentPrcb->PPLookasideList[8].L;
    ++L->TotalAllocates;
    v15 = RtlpInterlockedPopEntrySList(&L->ListHead);
    if ( !v15 )
    {
      Size = L->Size;
      AllocateEx = L->AllocateEx;
      Tag = L->Tag;
      Type = (unsigned int)L->Type;
      ++L->AllocateMisses;
      v15 = (PSLIST_ENTRY)((__int64 (__fastcall *)(__int64, __int64, __int64))AllocateEx)(Type, Size, Tag);
      if ( !v15 )
        return 3221225626LL;
    }
  }
  Number = CurrentPrcb->Number;
  v17 = a5;
  v18 = (int *)&v15[10];
  LOBYTE(v13) = a5;
  LOBYTE(v14) = a5;
  LODWORD(v15->Next) = Number;
  LODWORD(v36) = ObpCaptureObjectCreateInformation(v14, v13, v10, (unsigned int)v30, (__int64)&v15[10], 1);
  if ( (int)v36 >= 0 )
  {
    LODWORD(v36) = SeCreateAccessState(v15, &v15[14], a3, a4 + 76);
    if ( (int)v36 >= 0 )
    {
      v7 = (struct _SECURITY_SUBJECT_CONTEXT *)v15;
      LODWORD(v36) = ObpAdjustAccessMask(v15);
      if ( (int)v36 < 0 )
        goto LABEL_13;
      CurrentSilo = PsGetCurrentSilo();
      LODWORD(v36) = ObpLookupObjectName(
                       *((_QWORD *)&v15[10].Next + 1),
                       (__m128i *)v30,
                       *v18,
                       a4,
                       v17,
                       a6,
                       0LL,
                       0LL,
                       (__int64)CurrentSilo,
                       (__int64)v15,
                       (__int64)&v15[28],
                       0LL,
                       &DmaAdapter);
      if ( (int)v36 < 0 )
        goto LABEL_13;
      ObpReleaseLookupContext((__int64)&v15[28]);
      v20 = ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ LOBYTE(DmaAdapter[-2].DmaOperations) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)DmaAdapter - 48) >> 8)];
      if ( (*(_DWORD *)(v20 + 72) & *v18) != 0 )
      {
        HalPutDmaAdapter(DmaAdapter);
        LODWORD(v36) = -1073741811;
        goto LABEL_13;
      }
      *(_QWORD *)&v32 = v20 + 16;
      *((_QWORD *)&v32 + 1) = v30;
      *(_QWORD *)&v33 = *((_QWORD *)&v15[10].Next + 1);
      SeSetLearningModeObjectInformation((__int64)&v31);
      if ( (unsigned __int8)ObpCheckObjectReference((_DWORD)DmaAdapter, (PNTSTATUS)&v36) )
        *a7 = DmaAdapter;
      else
        HalPutDmaAdapter(DmaAdapter);
      SeClearLearningModeObjectInformation();
    }
    if ( v7 != (struct _SECURITY_SUBJECT_CONTEXT *)v15 )
    {
LABEL_14:
      Next = v15[12].Next;
      if ( Next )
      {
        SeReleaseSecurityDescriptor(Next, (char)v15[11].Next, 1);
        v15[12].Next = 0LL;
      }
      if ( *(_QWORD *)&v30[2] )
        ObpFreeObjectNameBuffer(v30);
      goto LABEL_18;
    }
LABEL_13:
    SepDeleteAccessState((__int64)v7);
    SeReleaseSubjectContext(v7 + 1);
    goto LABEL_14;
  }
LABEL_18:
  v22 = KeGetCurrentPrcb();
  v23 = v22->PPLookasideList[8].P;
  ++v23->TotalFrees;
  if ( LOWORD(v23->ListHead.Alignment) < v23->Depth
    || (++v23->FreeMisses,
        v23 = v22->PPLookasideList[8].L,
        ++v23->TotalFrees,
        LOWORD(v23->ListHead.Alignment) < v23->Depth) )
  {
    RtlpInterlockedPushEntrySList(&v23->ListHead, v15);
  }
  else
  {
    ++v23->FreeMisses;
    ((void (__fastcall *)(PSLIST_ENTRY))v23->FreeEx)(v15);
  }
  return (unsigned int)v36;
}
