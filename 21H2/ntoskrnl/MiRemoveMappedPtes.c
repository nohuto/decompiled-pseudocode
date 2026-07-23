/*
 * XREFs of MiRemoveMappedPtes @ 0x140313250
 * Callers:
 *     MiRemoveFromSystemSpace @ 0x14030FB9C (MiRemoveFromSystemSpace.c)
 * Callees:
 *     MiUnlockPageTableInternal @ 0x140202790 (MiUnlockPageTableInternal.c)
 *     KeShouldYieldProcessor @ 0x140211F40 (KeShouldYieldProcessor.c)
 *     MiTryDeleteTransitionPte @ 0x140224A38 (MiTryDeleteTransitionPte.c)
 *     MiWritePteShadow @ 0x140234B9C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140234BFC (MiPteHasShadow.c)
 *     MiLockPageTableInternal @ 0x1402B33F0 (MiLockPageTableInternal.c)
 *     MiUnlockWorkingSetShared @ 0x1402B4090 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402BE5B0 (MiLockWorkingSetShared.c)
 *     ExAcquireSpinLockExclusive @ 0x1402C1960 (ExAcquireSpinLockExclusive.c)
 *     MiReleasePageFileSpace @ 0x14030DEA4 (MiReleasePageFileSpace.c)
 *     MiPageTableLockIsContended @ 0x1403131B0 (MiPageTableLockIsContended.c)
 *     MI_WSLE_LOG_ACCESS @ 0x140313DD0 (MI_WSLE_LOG_ACCESS.c)
 *     MiWorkingSetIsContended @ 0x140316520 (MiWorkingSetIsContended.c)
 *     MiCheckControlArea @ 0x14031F800 (MiCheckControlArea.c)
 *     MiRemoveViewsFromSection @ 0x14031FCC8 (MiRemoveViewsFromSection.c)
 *     MiLocateSubsectionNode @ 0x140321830 (MiLocateSubsectionNode.c)
 *     MiReturnCommit @ 0x140322FF0 (MiReturnCommit.c)
 *     MiOffsetToProtos @ 0x14032B8A0 (MiOffsetToProtos.c)
 *     MiAppendWsleCluster @ 0x140340820 (MiAppendWsleCluster.c)
 *     MiTerminateWsleCluster @ 0x140345A70 (MiTerminateWsleCluster.c)
 *     MiPteInShadowRange @ 0x140353840 (MiPteInShadowRange.c)
 *     MiReturnCrossPartitionControlAreaCharges @ 0x14052AB64 (MiReturnCrossPartitionControlAreaCharges.c)
 *     MiDecrementLargeSubsections @ 0x140540650 (MiDecrementLargeSubsections.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x14055532C (MiReturnCrossPartitionSectionCharges.c)
 */

__int64 __fastcall MiRemoveMappedPtes(__int64 a1, __int64 a2)
{
  int v2; // ebp
  __int64 v3; // r8
  __int64 v4; // r12
  _DWORD *v5; // r9
  unsigned __int64 v7; // rdi
  __int64 v8; // r13
  __int64 v9; // rsi
  __int64 v10; // rdx
  unsigned __int64 v11; // rdi
  unsigned __int64 v12; // r14
  ULONG_PTR *v13; // rax
  __int64 v14; // rbx
  unsigned __int8 v15; // bl
  __int64 v16; // r13
  __int64 v17; // rbp
  unsigned __int64 v18; // rdx
  __int64 v19; // rbx
  __int64 v20; // rbp
  ULONG_PTR v21; // r14
  int v22; // eax
  __int64 v23; // rsi
  BOOL v24; // edi
  KIRQL v25; // bl
  __int64 result; // rax
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rdx
  __int64 v30; // rdx
  __int64 v31; // r8
  _DWORD *v32; // r9
  __int64 SubsectionNode; // rax
  struct _LIST_ENTRY *Flink; // r8
  __int64 v35; // rax
  __int64 v36; // r8
  int v37; // eax
  ULONG_PTR BugCheckParameter2; // [rsp+20h] [rbp-98h]
  __int64 v39; // [rsp+28h] [rbp-90h] BYREF
  __int64 v40; // [rsp+30h] [rbp-88h]
  __int64 v41; // [rsp+38h] [rbp-80h]
  ULONG_PTR *v42; // [rsp+40h] [rbp-78h]
  __int64 v43; // [rsp+48h] [rbp-70h]
  _OWORD v44[6]; // [rsp+50h] [rbp-68h] BYREF
  unsigned __int8 v46; // [rsp+C8h] [rbp+10h]
  __int64 v47; // [rsp+D8h] [rbp+20h]

  v2 = *(_DWORD *)(a1 + 56);
  v3 = a1;
  v4 = 0LL;
  v39 = 0LL;
  v47 = 0LL;
  v5 = *(_DWORD **)(a1 + 48);
  v7 = *(_QWORD *)(a1 + 88);
  v8 = *(_QWORD *)v5;
  v9 = *(_QWORD *)(a1 + 32) >> 12;
  BugCheckParameter2 = (ULONG_PTR)v5;
  v41 = *(_QWORD *)(qword_140C4E688 + 8LL * *(unsigned __int16 *)(a2 + 174));
  v43 = v8;
  v10 = *(unsigned int *)(v8 + 56);
  v11 = ((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v12 = 0LL;
  memset(v44, 0, 32);
  if ( (v10 & 0x400) != 0 )
    v13 = &MiSystemPartition;
  else
    v13 = *(ULONG_PTR **)(qword_140C4E688 + 8LL * (*(_WORD *)(v8 + 60) & 0x3FF));
  v42 = v13;
  if ( (v10 & 0x420) != 0 )
  {
    v14 = 0LL;
    v40 = 0LL;
  }
  else
  {
    v14 = *(_QWORD *)(a1 + 24) << 12;
    BugCheckParameter2 = MiOffsetToProtos(v8, v14, &v39);
    v40 = v9 + v39;
  }
  if ( (v2 & 0x18) != 0x18 )
  {
    SubsectionNode = MiLocateSubsectionNode(v8, v14 + (v9 << 12) - 1, 0LL);
    v21 = BugCheckParameter2;
    MiDecrementLargeSubsections(BugCheckParameter2, SubsectionNode);
    v20 = 0LL;
    goto LABEL_24;
  }
  v46 = MiLockWorkingSetShared(a2, v10, v3, v5);
  v15 = v46;
  if ( !v9 )
    goto LABEL_21;
  v16 = v41;
  v17 = 0LL;
  do
  {
    if ( !v12 || (v11 & 0xFFF) == 0 )
    {
      v17 += MiTerminateWsleCluster(v44);
      if ( v12 )
        MiUnlockPageTableInternal(a2, v12);
      v12 = ((v11 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      MiLockPageTableInternal(a2, v12, 0);
    }
    v18 = *(_QWORD *)v11;
    if ( v11 >= 0xFFFFF6FB7DBED000uLL
      && v11 <= 0xFFFFF6FB7DBED7F8uLL
      && (MiFlags & 0xC00000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && (v18 & 1) != 0
      && ((v18 & 0x20) == 0 || (v18 & 0x42) == 0) )
    {
      Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( Flink )
      {
        v35 = *((_QWORD *)&Flink->Flink + ((v11 >> 3) & 0x1FF));
        v36 = v18 | 0x20;
        if ( (v35 & 0x20) == 0 )
          v36 = *(_QWORD *)v11;
        v18 = v36;
        if ( (v35 & 0x42) != 0 )
          v18 = v36 | 0x42;
      }
    }
    if ( !v18 )
      goto LABEL_18;
    if ( (v18 & 1) != 0 )
    {
      if ( dword_140C4E868 )
        MI_WSLE_LOG_ACCESS(a2, v11);
      MiAppendWsleCluster(v44, a2, v11);
      goto LABEL_18;
    }
    if ( (v18 & 0x400) == 0 )
    {
      if ( (v18 & 0x800) == 0 )
      {
        MiReleasePageFileSpace(v16, v18, 1);
        v19 = ZeroPte;
        if ( !(unsigned int)MiPteInShadowRange(v11) )
          goto LABEL_16;
        if ( (unsigned int)MiPteHasShadow() )
        {
LABEL_75:
          if ( HIBYTE(word_140C4E048) || (v19 & 1) == 0 )
            goto LABEL_65;
LABEL_64:
          v19 |= 0x8000000000000000uLL;
LABEL_65:
          *(_QWORD *)v11 = v19;
          MiWritePteShadow(v11, v19);
          goto LABEL_17;
        }
        if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0
          || (ZeroPte & 1) == 0 )
        {
          goto LABEL_16;
        }
LABEL_82:
        v19 |= 0x8000000000000000uLL;
        goto LABEL_16;
      }
      v37 = MiTryDeleteTransitionPte(v11);
      if ( v37 == 1 )
        continue;
      if ( v37 == 3 )
        ++v17;
      v19 = ZeroPte;
      if ( !(unsigned int)MiPteInShadowRange(v11) )
        goto LABEL_16;
      if ( (unsigned int)MiPteHasShadow() )
        goto LABEL_75;
LABEL_66:
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0
        || (v19 & 1) == 0 )
      {
        goto LABEL_16;
      }
      goto LABEL_82;
    }
    v19 = ZeroPte;
    if ( (unsigned int)MiPteInShadowRange(v11) )
    {
      if ( (unsigned int)MiPteHasShadow() )
      {
        if ( HIBYTE(word_140C4E048) || (ZeroPte & 1) == 0 )
          goto LABEL_65;
        goto LABEL_64;
      }
      goto LABEL_66;
    }
LABEL_16:
    *(_QWORD *)v11 = v19;
LABEL_17:
    v15 = v46;
LABEL_18:
    v11 += 8LL;
    --v9;
    if ( (v11 & 0x78) == 0
      && ((unsigned int)MiWorkingSetIsContended(a2)
       || (unsigned int)MiPageTableLockIsContended(a2, v12)
       || KeShouldYieldProcessor()) )
    {
      v17 += MiTerminateWsleCluster(v44);
      MiUnlockPageTableInternal(a2, v12);
      MiUnlockWorkingSetShared(a2, v15);
      v12 = 0LL;
      MiLockWorkingSetShared(a2, v30, v31, v32);
    }
  }
  while ( v9 );
  v8 = v43;
  v47 = v17;
LABEL_21:
  v20 = MiTerminateWsleCluster(v44) + v47;
  if ( v12 )
    MiUnlockPageTableInternal(a2, v12);
  MiUnlockWorkingSetShared(a2, v15);
  v21 = BugCheckParameter2;
LABEL_24:
  v22 = *(_DWORD *)(v8 + 56);
  if ( (v22 & 0x20) != 0 || (v22 & 0x400) != 0 )
  {
    v23 = a1;
    v21 = 0LL;
    if ( (v22 & 0x20) != 0 && (*(_BYTE *)(a1 + 56) & 4) != 0 )
      MiReturnCrossPartitionControlAreaCharges(v8);
  }
  else
  {
    v23 = a1;
  }
  v24 = *(_QWORD *)(v8 + 64) != 0LL;
  v25 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v8 + 72));
  if ( v21 )
    v4 = MiRemoveViewsFromSection(v21);
  --*(_QWORD *)(v8 + 48);
  --*(_QWORD *)(v8 + 40);
  result = MiCheckControlArea(v8, v25);
  v29 = *(_QWORD *)(v23 + 40);
  if ( v29 )
  {
    if ( v20 )
      v29 -= v20;
    if ( v29 )
      result = MiReturnCommit(v41, v29, v27, v28);
  }
  if ( v4 )
    return MiReturnCrossPartitionSectionCharges(v42, v24, v4);
  return result;
}
