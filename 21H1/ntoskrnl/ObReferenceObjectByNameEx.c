/*
 * XREFs of ObReferenceObjectByNameEx @ 0x14064B8F0
 * Callers:
 *     NtNotifyChangeMultipleKeys @ 0x1405F4060 (NtNotifyChangeMultipleKeys.c)
 *     AlpcpCreateClientPort @ 0x140648EB8 (AlpcpCreateClientPort.c)
 *     CmUnloadKey @ 0x140659A98 (CmUnloadKey.c)
 *     ObInitServerSilo @ 0x1407B3480 (ObInitServerSilo.c)
 *     NtQueryOpenSubKeys @ 0x140863D70 (NtQueryOpenSubKeys.c)
 *     NtQueryOpenSubKeysEx @ 0x140863F90 (NtQueryOpenSubKeysEx.c)
 *     CmpResolveHiveLoadConflict @ 0x14086A178 (CmpResolveHiveLoadConflict.c)
 * Callees:
 *     SeClearLearningModeObjectInformation @ 0x1402064E0 (SeClearLearningModeObjectInformation.c)
 *     SepDeleteAccessState @ 0x140206590 (SepDeleteAccessState.c)
 *     PsGetCurrentSilo @ 0x140206860 (PsGetCurrentSilo.c)
 *     SeSetLearningModeObjectInformation @ 0x1402068B0 (SeSetLearningModeObjectInformation.c)
 *     ObpReleaseLookupContext @ 0x14025B298 (ObpReleaseLookupContext.c)
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
 *     RtlpInterlockedPopEntrySList @ 0x1403FDD60 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x1403FDDA0 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 *     SeReleaseSecurityDescriptor @ 0x1405E2F00 (SeReleaseSecurityDescriptor.c)
 *     ObpCaptureObjectCreateInformation @ 0x1405EB880 (ObpCaptureObjectCreateInformation.c)
 *     SeReleaseSubjectContext @ 0x1405EBD30 (SeReleaseSubjectContext.c)
 *     ObpFreeObjectNameBuffer @ 0x1406136C8 (ObpFreeObjectNameBuffer.c)
 *     SeCreateAccessState @ 0x140613740 (SeCreateAccessState.c)
 *     ObpCheckObjectReference @ 0x1406137F0 (ObpCheckObjectReference.c)
 *     ObpLookupObjectName @ 0x140627610 (ObpLookupObjectName.c)
 *     ObpAdjustAccessMask @ 0x14064BBE4 (ObpAdjustAccessMask.c)
 */

__int64 __fastcall ObReferenceObjectByNameEx(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4,
        char a5,
        __int64 a6,
        PADAPTER_OBJECT *a7)
{
  struct _SECURITY_SUBJECT_CONTEXT *v7; // rsi
  struct _KPRCB *CurrentPrcb; // r14
  _GENERAL_LOOKASIDE *P; // rdi
  PSLIST_ENTRY v13; // rbx
  unsigned int Number; // eax
  char v15; // di
  int *v16; // r14
  char v17; // dl
  char v18; // cl
  struct _LIST_ENTRY *CurrentSilo; // rax
  __int64 v20; // rdx
  BOOLEAN v21; // r8
  _SLIST_ENTRY *Next; // rcx
  struct _KPRCB *v23; // rdx
  _GENERAL_LOOKASIDE *v24; // rcx
  _GENERAL_LOOKASIDE *L; // rdi
  __int64 Size; // rdx
  void *(__fastcall *AllocateEx)(_POOL_TYPE, unsigned __int64, unsigned int, _LOOKASIDE_LIST_EX *); // rax
  __int64 Tag; // r8
  __int64 Type; // rcx
  int v31[4]; // [rsp+70h] [rbp-41h] BYREF
  __int128 v32; // [rsp+80h] [rbp-31h] BYREF
  __int128 v33; // [rsp+90h] [rbp-21h]
  __int128 v34; // [rsp+A0h] [rbp-11h]
  __int64 v35; // [rsp+B0h] [rbp-1h]
  PADAPTER_OBJECT DmaAdapter; // [rsp+100h] [rbp+4Fh] BYREF
  __int64 v37; // [rsp+108h] [rbp+57h] BYREF

  v37 = a2;
  v7 = 0LL;
  DmaAdapter = 0LL;
  v35 = 0LL;
  *(_OWORD *)v31 = 0LL;
  v32 = 0LL;
  v33 = 0LL;
  v34 = 0LL;
  if ( !a1 || !a4 )
    return 3221225485LL;
  CurrentPrcb = KeGetCurrentPrcb();
  P = CurrentPrcb->PPLookasideList[8].P;
  ++P->TotalAllocates;
  v13 = RtlpInterlockedPopEntrySList(&P->ListHead);
  if ( !v13 )
  {
    ++P->AllocateMisses;
    L = CurrentPrcb->PPLookasideList[8].L;
    ++L->TotalAllocates;
    v13 = RtlpInterlockedPopEntrySList(&L->ListHead);
    if ( !v13 )
    {
      Size = L->Size;
      AllocateEx = L->AllocateEx;
      Tag = L->Tag;
      Type = (unsigned int)L->Type;
      ++L->AllocateMisses;
      v13 = (PSLIST_ENTRY)((__int64 (__fastcall *)(__int64, __int64, __int64))AllocateEx)(Type, Size, Tag);
      if ( !v13 )
        return 3221225626LL;
    }
  }
  Number = CurrentPrcb->Number;
  v15 = a5;
  v16 = (int *)&v13[10];
  v17 = a5;
  v18 = a5;
  LODWORD(v13->Next) = Number;
  LODWORD(v37) = ObpCaptureObjectCreateInformation(v18, v17, a1, v31, (__int64)&v13[10], 1u);
  if ( (int)v37 >= 0 )
  {
    LODWORD(v37) = SeCreateAccessState((int)v13, (int)v13 + 224, a3, a4 + 76);
    if ( (int)v37 >= 0 )
    {
      v7 = (struct _SECURITY_SUBJECT_CONTEXT *)v13;
      LODWORD(v37) = ObpAdjustAccessMask(v13);
      if ( (int)v37 < 0 )
        goto LABEL_13;
      CurrentSilo = PsGetCurrentSilo();
      LODWORD(v37) = ObpLookupObjectName(
                       *((_QWORD *)&v13[10].Next + 1),
                       (__m128i *)v31,
                       *v16,
                       a4,
                       v15,
                       a6,
                       0LL,
                       0LL,
                       (__int64)CurrentSilo,
                       (struct _ACCESS_STATE *)v13,
                       (__int64)&v13[28],
                       0LL,
                       &DmaAdapter);
      if ( (int)v37 < 0 )
        goto LABEL_13;
      ObpReleaseLookupContext((__int64)&v13[28]);
      v20 = ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ LOBYTE(DmaAdapter[-2].DmaOperations) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)DmaAdapter - 48) >> 8)];
      if ( (*(_DWORD *)(v20 + 72) & *v16) != 0 )
      {
        HalPutDmaAdapter(DmaAdapter);
        LODWORD(v37) = -1073741811;
        goto LABEL_13;
      }
      *(_QWORD *)&v33 = v20 + 16;
      *((_QWORD *)&v33 + 1) = v31;
      *(_QWORD *)&v34 = *((_QWORD *)&v13[10].Next + 1);
      SeSetLearningModeObjectInformation((__int64)&v32);
      if ( ObpCheckObjectReference((__int64)DmaAdapter, (__int64)v13, v21, v15, (PNTSTATUS)&v37) )
        *a7 = DmaAdapter;
      else
        HalPutDmaAdapter(DmaAdapter);
      SeClearLearningModeObjectInformation();
    }
    if ( v7 != (struct _SECURITY_SUBJECT_CONTEXT *)v13 )
    {
LABEL_14:
      Next = v13[12].Next;
      if ( Next )
      {
        SeReleaseSecurityDescriptor(Next, (char)v13[11].Next, 1);
        v13[12].Next = 0LL;
      }
      if ( *(_QWORD *)&v31[2] )
        ObpFreeObjectNameBuffer((__int64)v31);
      goto LABEL_18;
    }
LABEL_13:
    SepDeleteAccessState((__int64)v7);
    SeReleaseSubjectContext(v7 + 1);
    goto LABEL_14;
  }
LABEL_18:
  v23 = KeGetCurrentPrcb();
  v24 = v23->PPLookasideList[8].P;
  ++v24->TotalFrees;
  if ( LOWORD(v24->ListHead.Alignment) < v24->Depth
    || (++v24->FreeMisses,
        v24 = v23->PPLookasideList[8].L,
        ++v24->TotalFrees,
        LOWORD(v24->ListHead.Alignment) < v24->Depth) )
  {
    RtlpInterlockedPushEntrySList(&v24->ListHead, v13);
  }
  else
  {
    ++v24->FreeMisses;
    ((void (__fastcall *)(PSLIST_ENTRY))v24->FreeEx)(v13);
  }
  return (unsigned int)v37;
}
