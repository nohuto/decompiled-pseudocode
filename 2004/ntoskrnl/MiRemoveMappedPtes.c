/*
 * XREFs of MiRemoveMappedPtes @ 0x14025A8C0
 * Callers:
 *     MiRemoveFromSystemSpace @ 0x140251150 (MiRemoveFromSystemSpace.c)
 * Callees:
 *     MiReturnCommit @ 0x140224390 (MiReturnCommit.c)
 *     MiOffsetToProtos @ 0x14022EFF0 (MiOffsetToProtos.c)
 *     MiPteInShadowRange @ 0x1402386B0 (MiPteInShadowRange.c)
 *     MiTerminateWsleCluster @ 0x140241DE0 (MiTerminateWsleCluster.c)
 *     MI_WSLE_LOG_ACCESS @ 0x140247160 (MI_WSLE_LOG_ACCESS.c)
 *     MiRemoveViewsFromSection @ 0x14024A180 (MiRemoveViewsFromSection.c)
 *     MiLocateSubsectionNode @ 0x14024A460 (MiLocateSubsectionNode.c)
 *     MiCheckControlArea @ 0x14024A8A0 (MiCheckControlArea.c)
 *     MiReleasePageFileSpace @ 0x1402525F0 (MiReleasePageFileSpace.c)
 *     MiTryDeleteTransitionPte @ 0x140253830 (MiTryDeleteTransitionPte.c)
 *     MiWorkingSetIsContended @ 0x1402589C0 (MiWorkingSetIsContended.c)
 *     MiPageTableLockIsContended @ 0x14025A290 (MiPageTableLockIsContended.c)
 *     MiUnlockPageTableInternal @ 0x140278B10 (MiUnlockPageTableInternal.c)
 *     MiLockPageTableInternal @ 0x1402A0AD0 (MiLockPageTableInternal.c)
 *     MiUnlockWorkingSetShared @ 0x1402A1770 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402AC150 (MiLockWorkingSetShared.c)
 *     MiAppendWsleCluster @ 0x1402B0C50 (MiAppendWsleCluster.c)
 *     ExAcquireSpinLockExclusive @ 0x1402CF510 (ExAcquireSpinLockExclusive.c)
 *     KeShouldYieldProcessor @ 0x140327BB0 (KeShouldYieldProcessor.c)
 *     MiWritePteShadow @ 0x14032ECC0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14032ED20 (MiPteHasShadow.c)
 *     MiReturnCrossPartitionControlAreaCharges @ 0x140525454 (MiReturnCrossPartitionControlAreaCharges.c)
 *     MiDecrementLargeSubsections @ 0x14053AF40 (MiDecrementLargeSubsections.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x14054FC4C (MiReturnCrossPartitionSectionCharges.c)
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
  _DWORD *v29; // r8
  __int64 v30; // rdx
  _QWORD *SubsectionNode; // rax
  struct _LIST_ENTRY *Flink; // r8
  __int64 v33; // rax
  __int64 v34; // r8
  int v35; // eax
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // r9
  ULONG_PTR BugCheckParameter2; // [rsp+20h] [rbp-98h]
  unsigned __int64 v45; // [rsp+28h] [rbp-90h] BYREF
  unsigned __int64 v46; // [rsp+30h] [rbp-88h]
  __int64 v47; // [rsp+38h] [rbp-80h]
  ULONG_PTR *v48; // [rsp+40h] [rbp-78h]
  __int64 v49; // [rsp+48h] [rbp-70h]
  _OWORD v50[6]; // [rsp+50h] [rbp-68h] BYREF
  unsigned __int8 v52; // [rsp+C8h] [rbp+10h]
  unsigned int v53; // [rsp+D0h] [rbp+18h]
  __int64 v54; // [rsp+D8h] [rbp+20h]

  v2 = *(_DWORD *)(a1 + 56);
  v3 = 0LL;
  v4 = 4;
  v45 = 0LL;
  v54 = 0LL;
  if ( (v2 & 4) != 0 )
    v4 = 24;
  v6 = *(_QWORD *)(a1 + 88);
  v7 = **(_QWORD **)(a1 + 48);
  v53 = v4;
  v8 = *(_QWORD *)(a1 + 32) >> 12;
  BugCheckParameter2 = *(_QWORD *)(a1 + 48);
  v47 = *(_QWORD *)(qword_140C4E448 + 8LL * *(unsigned __int16 *)(a2 + 174));
  v49 = v7;
  v9 = ((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  memset(v50, 0, 32);
  v10 = 0LL;
  v11 = *(_DWORD *)(v7 + 56);
  if ( (v11 & 0x400) != 0 )
    v12 = &MiSystemPartition;
  else
    v12 = *(ULONG_PTR **)(qword_140C4E448 + 8LL * (*(_WORD *)(v7 + 60) & 0x3FF));
  v48 = v12;
  if ( (v11 & 0x420) != 0 )
  {
    v13 = 0LL;
    v46 = 0LL;
  }
  else
  {
    v13 = *(_QWORD *)(a1 + 24) << 12;
    BugCheckParameter2 = MiOffsetToProtos(v7, v13, &v45);
    v46 = v8 + v45;
  }
  if ( (v2 & 0x18) != 0x18 )
  {
    SubsectionNode = MiLocateSubsectionNode(v7, v13 + (v8 << 12) - 1, 0);
    v24 = BugCheckParameter2;
    MiDecrementLargeSubsections(BugCheckParameter2, SubsectionNode);
    v23 = 0LL;
    goto LABEL_26;
  }
  v52 = MiLockWorkingSetShared(a2);
  v14 = v52;
  if ( !v8 )
    goto LABEL_23;
  v15 = v47;
  v16 = 0LL;
  do
  {
    if ( !v10 || (v9 & 0xFFF) == 0 )
    {
      v16 += MiTerminateWsleCluster((__int64 *)v50);
      if ( v10 )
        MiUnlockPageTableInternal(a2, v10);
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
        v33 = *((_QWORD *)&Flink->Flink + ((v9 >> 3) & 0x1FF));
        v34 = v17 | 0x20;
        if ( (v33 & 0x20) == 0 )
          v34 = *(_QWORD *)v9;
        v17 = v34;
        if ( (v33 & 0x42) != 0 )
          v17 = v34 | 0x42;
      }
    }
    if ( !v17 )
      goto LABEL_20;
    if ( (v17 & 1) != 0 )
    {
      if ( dword_140C4E628 )
        MI_WSLE_LOG_ACCESS(a2, v9);
      MiAppendWsleCluster(v50, a2, v9);
      goto LABEL_20;
    }
    if ( (v17 & 0x400) == 0 )
    {
      if ( (v17 & 0x800) == 0 )
      {
        MiReleasePageFileSpace(v15, v17);
        v18 = ZeroPte;
        if ( !MiPteInShadowRange(v9) )
          goto LABEL_18;
        if ( (unsigned int)MiPteHasShadow(v41, v40, v42, v43) )
        {
LABEL_77:
          if ( HIBYTE(word_140C4DE08) || (v18 & 1) == 0 )
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
      v35 = MiTryDeleteTransitionPte(v9);
      if ( v35 == 1 )
        continue;
      if ( v35 == 3 )
        ++v16;
      v18 = ZeroPte;
      if ( !MiPteInShadowRange(v9) )
        goto LABEL_18;
      if ( (unsigned int)MiPteHasShadow(v37, v36, v38, v39) )
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
        if ( HIBYTE(word_140C4DE08) || (ZeroPte & 1) == 0 )
          goto LABEL_67;
        goto LABEL_66;
      }
      goto LABEL_68;
    }
LABEL_18:
    *(_QWORD *)v9 = v18;
LABEL_19:
    v14 = v52;
LABEL_20:
    v9 += 8LL;
    --v8;
    if ( (v9 & 0x78) == 0
      && (MiWorkingSetIsContended(a2) || (unsigned int)MiPageTableLockIsContended(a2, v10) || KeShouldYieldProcessor()) )
    {
      v16 += MiTerminateWsleCluster((__int64 *)v50);
      MiUnlockPageTableInternal(a2, v10);
      MiUnlockWorkingSetShared(a2, v14);
      v10 = 0LL;
      MiLockWorkingSetShared(a2);
    }
  }
  while ( v8 );
  v7 = v49;
  v54 = v16;
LABEL_23:
  v23 = MiTerminateWsleCluster((__int64 *)v50) + v54;
  if ( v10 )
    MiUnlockPageTableInternal(a2, v10);
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
    v3 = MiRemoveViewsFromSection(v24, v46, v53);
  --*(_QWORD *)(v7 + 48);
  --*(_QWORD *)(v7 + 40);
  MiCheckControlArea(v7, v28, v29);
  v30 = *(_QWORD *)(v26 + 40);
  if ( v30 )
  {
    if ( v23 )
      v30 -= v23;
    if ( v30 )
      MiReturnCommit(v47, v30);
  }
  if ( v3 )
    MiReturnCrossPartitionSectionCharges(v48, v27, v3);
}
