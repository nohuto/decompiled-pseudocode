/*
 * XREFs of MiRemoveMappedPtes @ 0x1402CF020
 * Callers:
 *     MiRemoveFromSystemSpace @ 0x14024EF4C (MiRemoveFromSystemSpace.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14021EA50 (MiPteInShadowRange.c)
 *     MiRemoveViewsFromSection @ 0x14022BD2C (MiRemoveViewsFromSection.c)
 *     MiLocateSubsectionNode @ 0x14022E700 (MiLocateSubsectionNode.c)
 *     MiReturnCommit @ 0x140230300 (MiReturnCommit.c)
 *     MiTryDeleteTransitionPte @ 0x140236A7C (MiTryDeleteTransitionPte.c)
 *     MiLockPageTableInternal @ 0x14026FE10 (MiLockPageTableInternal.c)
 *     MiUnlockWorkingSetShared @ 0x140270AB0 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x14027B490 (MiLockWorkingSetShared.c)
 *     MiCheckControlArea @ 0x14029BE20 (MiCheckControlArea.c)
 *     MiOffsetToProtos @ 0x1402A42A0 (MiOffsetToProtos.c)
 *     MiAppendWsleCluster @ 0x1402B8D20 (MiAppendWsleCluster.c)
 *     MiTerminateWsleCluster @ 0x1402BF020 (MiTerminateWsleCluster.c)
 *     MiWorkingSetIsContended @ 0x1402CB2C0 (MiWorkingSetIsContended.c)
 *     MI_WSLE_LOG_ACCESS @ 0x1402CFBA0 (MI_WSLE_LOG_ACCESS.c)
 *     MiPageTableLockIsContended @ 0x1402CFD90 (MiPageTableLockIsContended.c)
 *     ExAcquireSpinLockExclusive @ 0x1402D4460 (ExAcquireSpinLockExclusive.c)
 *     KeShouldYieldProcessor @ 0x1402F80C0 (KeShouldYieldProcessor.c)
 *     MiWritePteShadow @ 0x140313F2C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140313F8C (MiPteHasShadow.c)
 *     MiReleasePageFileSpace @ 0x14034D3F4 (MiReleasePageFileSpace.c)
 *     MiUnlockPageTableInternal @ 0x14035B910 (MiUnlockPageTableInternal.c)
 *     MiReturnCrossPartitionControlAreaCharges @ 0x140528E24 (MiReturnCrossPartitionControlAreaCharges.c)
 *     MiDecrementLargeSubsections @ 0x14053E910 (MiDecrementLargeSubsections.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x14055361C (MiReturnCrossPartitionSectionCharges.c)
 */

void __fastcall MiRemoveMappedPtes(__int64 a1, __int64 a2)
{
  int v2; // ebp
  __int64 v3; // r12
  int v4; // eax
  unsigned __int64 v6; // rdi
  __int64 v7; // r13
  __int64 v8; // rsi
  unsigned __int64 v9; // rdi
  unsigned __int64 v10; // r14
  int v11; // edx
  ULONG_PTR *v12; // rax
  unsigned __int64 v13; // rbx
  unsigned __int8 v14; // bl
  __int64 v15; // r13
  __int64 v16; // rbp
  __int64 v17; // rdx
  __int64 v18; // rbx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rbp
  ULONG_PTR v24; // r14
  int v25; // eax
  __int64 v26; // rsi
  BOOL v27; // edi
  KIRQL v28; // bl
  __int64 v29; // rdx
  _QWORD *SubsectionNode; // rax
  struct _LIST_ENTRY *Flink; // r8
  __int64 v32; // rax
  __int64 v33; // r8
  int v34; // eax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // r9
  ULONG_PTR BugCheckParameter2; // [rsp+20h] [rbp-98h]
  unsigned __int64 v44; // [rsp+28h] [rbp-90h] BYREF
  unsigned __int64 v45; // [rsp+30h] [rbp-88h]
  __int64 v46; // [rsp+38h] [rbp-80h]
  ULONG_PTR *v47; // [rsp+40h] [rbp-78h]
  __int64 v48; // [rsp+48h] [rbp-70h]
  _OWORD v49[6]; // [rsp+50h] [rbp-68h] BYREF
  unsigned __int8 v51; // [rsp+C8h] [rbp+10h]
  unsigned int v52; // [rsp+D0h] [rbp+18h]
  __int64 v53; // [rsp+D8h] [rbp+20h]

  v2 = *(_DWORD *)(a1 + 56);
  v3 = 0LL;
  v4 = 4;
  v44 = 0LL;
  v53 = 0LL;
  if ( (v2 & 4) != 0 )
    v4 = 24;
  v6 = *(_QWORD *)(a1 + 88);
  v7 = **(_QWORD **)(a1 + 48);
  v52 = v4;
  v8 = *(_QWORD *)(a1 + 32) >> 12;
  BugCheckParameter2 = *(_QWORD *)(a1 + 48);
  v46 = *(_QWORD *)(qword_140C4E4C8 + 8LL * *(unsigned __int16 *)(a2 + 174));
  v48 = v7;
  v9 = ((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  memset(v49, 0, 32);
  v10 = 0LL;
  v11 = *(_DWORD *)(v7 + 56);
  if ( (v11 & 0x400) != 0 )
    v12 = &MiSystemPartition;
  else
    v12 = *(ULONG_PTR **)(qword_140C4E4C8 + 8LL * (*(_WORD *)(v7 + 60) & 0x3FF));
  v47 = v12;
  if ( (v11 & 0x420) != 0 )
  {
    v13 = 0LL;
    v45 = 0LL;
  }
  else
  {
    v13 = *(_QWORD *)(a1 + 24) << 12;
    BugCheckParameter2 = MiOffsetToProtos(v7, v13, &v44);
    v45 = v8 + v44;
  }
  if ( (v2 & 0x18) != 0x18 )
  {
    SubsectionNode = MiLocateSubsectionNode(v7, v13 + (v8 << 12) - 1, 0);
    v24 = BugCheckParameter2;
    MiDecrementLargeSubsections(BugCheckParameter2, SubsectionNode);
    v23 = 0LL;
    goto LABEL_26;
  }
  v51 = MiLockWorkingSetShared(a2);
  v14 = v51;
  if ( !v8 )
    goto LABEL_23;
  v15 = v46;
  v16 = 0LL;
  do
  {
    if ( !v10 || (v9 & 0xFFF) == 0 )
    {
      v16 += MiTerminateWsleCluster((__int64)v49);
      if ( v10 )
        MiUnlockPageTableInternal(a2);
      v10 = ((v9 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      MiLockPageTableInternal(a2, v10, 0LL);
    }
    v17 = *(_QWORD *)v9;
    if ( v9 >= 0xFFFFF6FB7DBED000uLL
      && v9 <= 0xFFFFF6FB7DBED7F8uLL
      && (MiFlags & 0xC00000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && (v17 & 1) != 0
      && ((v17 & 0x20) == 0 || (v17 & 0x42) == 0) )
    {
      Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( Flink )
      {
        v32 = *((_QWORD *)&Flink->Flink + ((v9 >> 3) & 0x1FF));
        v33 = v17 | 0x20;
        if ( (v32 & 0x20) == 0 )
          v33 = *(_QWORD *)v9;
        v17 = v33;
        if ( (v32 & 0x42) != 0 )
          v17 = v33 | 0x42;
      }
    }
    if ( !v17 )
      goto LABEL_20;
    if ( (v17 & 1) != 0 )
    {
      if ( dword_140C4E6A8 )
        MI_WSLE_LOG_ACCESS(a2, v9);
      MiAppendWsleCluster((__int64)v49, a2, (unsigned __int64 *)v9);
      goto LABEL_20;
    }
    if ( (v17 & 0x400) == 0 )
    {
      if ( (v17 & 0x800) == 0 )
      {
        MiReleasePageFileSpace(v15, v17, 1LL);
        v18 = ZeroPte;
        if ( !MiPteInShadowRange(v9) )
          goto LABEL_18;
        if ( (unsigned int)MiPteHasShadow(v40, v39, v41, v42) )
        {
LABEL_77:
          if ( HIBYTE(word_140C4DE88) || (v18 & 1) == 0 )
            goto LABEL_67;
LABEL_66:
          v18 |= 0x8000000000000000uLL;
LABEL_67:
          *(_QWORD *)v9 = v18;
          MiWritePteShadow(v9, v18);
          goto LABEL_19;
        }
        if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0
          || (ZeroPte & 1) == 0 )
        {
          goto LABEL_18;
        }
LABEL_84:
        v18 |= 0x8000000000000000uLL;
        goto LABEL_18;
      }
      v34 = MiTryDeleteTransitionPte(v9);
      if ( v34 == 1 )
        continue;
      if ( v34 == 3 )
        ++v16;
      v18 = ZeroPte;
      if ( !MiPteInShadowRange(v9) )
        goto LABEL_18;
      if ( (unsigned int)MiPteHasShadow(v36, v35, v37, v38) )
        goto LABEL_77;
LABEL_68:
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0
        || (v18 & 1) == 0 )
      {
        goto LABEL_18;
      }
      goto LABEL_84;
    }
    v18 = ZeroPte;
    if ( MiPteInShadowRange(v9) )
    {
      if ( (unsigned int)MiPteHasShadow(v20, v19, v21, v22) )
      {
        if ( HIBYTE(word_140C4DE88) || (ZeroPte & 1) == 0 )
          goto LABEL_67;
        goto LABEL_66;
      }
      goto LABEL_68;
    }
LABEL_18:
    *(_QWORD *)v9 = v18;
LABEL_19:
    v14 = v51;
LABEL_20:
    v9 += 8LL;
    --v8;
    if ( (v9 & 0x78) == 0
      && (MiWorkingSetIsContended(a2) || (unsigned int)MiPageTableLockIsContended(a2, v10) || KeShouldYieldProcessor()) )
    {
      v16 += MiTerminateWsleCluster((__int64)v49);
      MiUnlockPageTableInternal(a2);
      MiUnlockWorkingSetShared(a2, v14);
      v10 = 0LL;
      MiLockWorkingSetShared(a2);
    }
  }
  while ( v8 );
  v7 = v48;
  v53 = v16;
LABEL_23:
  v23 = MiTerminateWsleCluster((__int64)v49) + v53;
  if ( v10 )
    MiUnlockPageTableInternal(a2);
  MiUnlockWorkingSetShared(a2, v14);
  v24 = BugCheckParameter2;
LABEL_26:
  v25 = *(_DWORD *)(v7 + 56);
  if ( (v25 & 0x20) != 0 || (v25 & 0x400) != 0 )
  {
    v26 = a1;
    v24 = 0LL;
    if ( (v25 & 0x20) != 0 && (*(_BYTE *)(a1 + 56) & 4) != 0 )
      MiReturnCrossPartitionControlAreaCharges(v7);
  }
  else
  {
    v26 = a1;
  }
  v27 = *(_QWORD *)(v7 + 64) != 0LL;
  v28 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v7 + 72));
  if ( v24 )
    v3 = MiRemoveViewsFromSection(v24, v45, v52);
  --*(_QWORD *)(v7 + 48);
  --*(_QWORD *)(v7 + 40);
  MiCheckControlArea(v7, v28);
  v29 = *(_QWORD *)(v26 + 40);
  if ( v29 )
  {
    if ( v23 )
      v29 -= v23;
    if ( v29 )
      MiReturnCommit(v46, v29);
  }
  if ( v3 )
    MiReturnCrossPartitionSectionCharges(v47, v27, v3);
}
