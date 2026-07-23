/*
 * XREFs of ObReferenceObjectByNameEx @ 0x1406CDDFC
 * Callers:
 *     CmObReferenceObjectByName @ 0x1405CD0F0 (CmObReferenceObjectByName.c)
 *     CmUnloadKey @ 0x1405DF54C (CmUnloadKey.c)
 *     AlpcpCreateClientPort @ 0x1406CFCAC (AlpcpCreateClientPort.c)
 *     ObInitServerSilo @ 0x1407C9400 (ObInitServerSilo.c)
 *     NtQueryOpenSubKeys @ 0x140868830 (NtQueryOpenSubKeys.c)
 *     NtQueryOpenSubKeysEx @ 0x140868A50 (NtQueryOpenSubKeysEx.c)
 *     CmpResolveHiveLoadConflict @ 0x14086E884 (CmpResolveHiveLoadConflict.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     SeClearLearningModeObjectInformation @ 0x14026A550 (SeClearLearningModeObjectInformation.c)
 *     SepDeleteAccessState @ 0x14026A600 (SepDeleteAccessState.c)
 *     PsGetCurrentSilo @ 0x14026A8D0 (PsGetCurrentSilo.c)
 *     SeSetLearningModeObjectInformation @ 0x14026A920 (SeSetLearningModeObjectInformation.c)
 *     ObpReleaseLookupContext @ 0x14026CA70 (ObpReleaseLookupContext.c)
 *     RtlpInterlockedPopEntrySList @ 0x140407B10 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x140407B50 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     ObpCaptureObjectCreateInformation @ 0x14064B260 (ObpCaptureObjectCreateInformation.c)
 *     SeReleaseSubjectContext @ 0x14064B710 (SeReleaseSubjectContext.c)
 *     SeReleaseSecurityDescriptor @ 0x140651570 (SeReleaseSecurityDescriptor.c)
 *     ObpCheckObjectReference @ 0x140655D5C (ObpCheckObjectReference.c)
 *     ObpFreeObjectNameBuffer @ 0x140656168 (ObpFreeObjectNameBuffer.c)
 *     SeCreateAccessState @ 0x1406566A0 (SeCreateAccessState.c)
 *     ObpAdjustAccessMask @ 0x1406CE100 (ObpAdjustAccessMask.c)
 *     ObpLookupObjectName @ 0x14070B300 (ObpLookupObjectName.c)
 */

__int64 __fastcall ObReferenceObjectByNameEx(
        __int64 a1,
        struct _SECURITY_SUBJECT_CONTEXT *a2,
        int a3,
        __int64 a4,
        char a5,
        __int64 a6,
        PADAPTER_OBJECT *a7)
{
  struct _KPRCB *CurrentPrcb; // r14
  _GENERAL_LOOKASIDE *P; // rsi
  PSLIST_ENTRY v13; // rbx
  char v14; // si
  char v15; // dl
  unsigned __int8 v16; // cl
  struct _LIST_ENTRY *CurrentSilo; // rax
  __int64 v18; // rdx
  BOOLEAN v19; // r8
  _SLIST_ENTRY *Next; // rcx
  struct _KPRCB *v21; // rdx
  _GENERAL_LOOKASIDE *v22; // rcx
  _GENERAL_LOOKASIDE *L; // rsi
  __int64 Size; // rdx
  void *(__fastcall *AllocateEx)(_POOL_TYPE, unsigned __int64, unsigned int, _LOOKASIDE_LIST_EX *); // rax
  __int64 Tag; // r8
  __int64 Type; // rcx
  PADAPTER_OBJECT DmaAdapter; // [rsp+78h] [rbp-31h] BYREF
  __int128 v30; // [rsp+80h] [rbp-29h] BYREF
  __int128 v31; // [rsp+90h] [rbp-19h] BYREF
  __int128 v32; // [rsp+A0h] [rbp-9h]
  __int128 v33; // [rsp+B0h] [rbp+7h]
  __int64 v34; // [rsp+C0h] [rbp+17h]
  NTSTATUS AccessState; // [rsp+F8h] [rbp+4Fh] BYREF

  DmaAdapter = 0LL;
  v34 = 0LL;
  v30 = 0LL;
  v31 = 0LL;
  v32 = 0LL;
  v33 = 0LL;
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
  v14 = a5;
  v15 = a5;
  v16 = a5;
  LODWORD(v13->Next) = CurrentPrcb->Number;
  AccessState = ObpCaptureObjectCreateInformation(v16, v15, a1, &v30, (__int64)&v13[10], 1u);
  if ( AccessState >= 0 )
  {
    if ( !a2 )
    {
      AccessState = SeCreateAccessState((int)v13, (int)v13 + 224, a3, a4 + 76);
      if ( AccessState < 0 )
      {
LABEL_14:
        if ( a2 == (struct _SECURITY_SUBJECT_CONTEXT *)v13 )
        {
          SepDeleteAccessState((__int64)a2);
          SeReleaseSubjectContext(a2 + 1);
        }
        Next = v13[12].Next;
        if ( Next )
        {
          SeReleaseSecurityDescriptor(Next, (char)v13[11].Next, 1);
          v13[12].Next = 0LL;
        }
        if ( *((_QWORD *)&v30 + 1) )
          ObpFreeObjectNameBuffer((__int64)&v30);
        goto LABEL_20;
      }
      a2 = (struct _SECURITY_SUBJECT_CONTEXT *)v13;
    }
    AccessState = ObpAdjustAccessMask(a2);
    if ( AccessState >= 0 )
    {
      CurrentSilo = PsGetCurrentSilo();
      AccessState = ObpLookupObjectName(
                      *((_QWORD *)&v13[10].Next + 1),
                      v14,
                      a6,
                      0LL,
                      0LL,
                      (__int64)CurrentSilo,
                      (__int64)a2,
                      (__int64)&v13[28],
                      0LL,
                      (__int64)&DmaAdapter);
      if ( AccessState >= 0 )
      {
        ObpReleaseLookupContext((__int64)&v13[28]);
        v18 = ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ LOBYTE(DmaAdapter[-2].DmaOperations) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)DmaAdapter - 48) >> 8)];
        if ( (*(_DWORD *)(v18 + 72) & (__int64)v13[10].Next) != 0 )
        {
          HalPutDmaAdapter(DmaAdapter);
          AccessState = -1073741811;
        }
        else
        {
          *(_QWORD *)&v32 = v18 + 16;
          *((_QWORD *)&v32 + 1) = &v30;
          *(_QWORD *)&v33 = *((_QWORD *)&v13[10].Next + 1);
          SeSetLearningModeObjectInformation((__int64)&v31);
          if ( ObpCheckObjectReference((__int64)DmaAdapter, (__int64)a2, v19, v14, &AccessState) )
            *a7 = DmaAdapter;
          else
            HalPutDmaAdapter(DmaAdapter);
          SeClearLearningModeObjectInformation();
        }
      }
    }
    goto LABEL_14;
  }
LABEL_20:
  v21 = KeGetCurrentPrcb();
  v22 = v21->PPLookasideList[8].P;
  ++v22->TotalFrees;
  if ( LOWORD(v22->ListHead.Alignment) < v22->Depth
    || (++v22->FreeMisses,
        v22 = v21->PPLookasideList[8].L,
        ++v22->TotalFrees,
        LOWORD(v22->ListHead.Alignment) < v22->Depth) )
  {
    RtlpInterlockedPushEntrySList(&v22->ListHead, v13);
  }
  else
  {
    ++v22->FreeMisses;
    ((void (__fastcall *)(PSLIST_ENTRY))v22->FreeEx)(v13);
  }
  return (unsigned int)AccessState;
}
