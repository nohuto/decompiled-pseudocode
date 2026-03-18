/*
 * XREFs of MiRemoveMappedPtes @ 0x1402B38F0
 * Callers:
 *     MiRemoveFromSystemSpace @ 0x1402AA180 (MiRemoveFromSystemSpace.c)
 * Callees:
 *     MiLockPageTableInternal @ 0x14020DFC0 (MiLockPageTableInternal.c)
 *     MiUnlockWorkingSetShared @ 0x14020EC60 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x140219640 (MiLockWorkingSetShared.c)
 *     MiAppendWsleCluster @ 0x14021DFD0 (MiAppendWsleCluster.c)
 *     ExAcquireSpinLockExclusive @ 0x14023C6E0 (ExAcquireSpinLockExclusive.c)
 *     MiReturnCommit @ 0x14027D3E0 (MiReturnCommit.c)
 *     MiOffsetToProtos @ 0x140288040 (MiOffsetToProtos.c)
 *     MiPteInShadowRange @ 0x140291700 (MiPteInShadowRange.c)
 *     MiTerminateWsleCluster @ 0x14029AE10 (MiTerminateWsleCluster.c)
 *     MI_WSLE_LOG_ACCESS @ 0x1402A0190 (MI_WSLE_LOG_ACCESS.c)
 *     MiRemoveViewsFromSection @ 0x1402A31B0 (MiRemoveViewsFromSection.c)
 *     MiLocateSubsectionNode @ 0x1402A3490 (MiLocateSubsectionNode.c)
 *     MiCheckControlArea @ 0x1402A38D0 (MiCheckControlArea.c)
 *     MiReleasePageFileSpace @ 0x1402AB620 (MiReleasePageFileSpace.c)
 *     MiTryDeleteTransitionPte @ 0x1402AC860 (MiTryDeleteTransitionPte.c)
 *     MiWorkingSetIsContended @ 0x1402B19F0 (MiWorkingSetIsContended.c)
 *     MiPageTableLockIsContended @ 0x1402B32C0 (MiPageTableLockIsContended.c)
 *     MiUnlockPageTableInternal @ 0x1402DB860 (MiUnlockPageTableInternal.c)
 *     KeShouldYieldProcessor @ 0x1402EE280 (KeShouldYieldProcessor.c)
 *     MiWritePteShadow @ 0x1402F2F20 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402F2F80 (MiPteHasShadow.c)
 *     MiReturnCrossPartitionControlAreaCharges @ 0x140524E04 (MiReturnCrossPartitionControlAreaCharges.c)
 *     MiDecrementLargeSubsections @ 0x14053A8F0 (MiDecrementLargeSubsections.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x14054F5FC (MiReturnCrossPartitionSectionCharges.c)
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
  unsigned __int64 v17; // rdx
  __int64 v18; // rbx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rbp
  ULONG_PTR v22; // r14
  int v23; // eax
  __int64 v24; // rsi
  BOOL v25; // edi
  KIRQL v26; // bl
  __int64 v27; // rdx
  _QWORD *SubsectionNode; // rax
  struct _LIST_ENTRY *Flink; // r8
  __int64 v30; // rax
  __int64 v31; // r8
  int v32; // eax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rdx
  __int64 v36; // rcx
  ULONG_PTR BugCheckParameter2; // [rsp+20h] [rbp-98h]
  unsigned __int64 v38; // [rsp+28h] [rbp-90h] BYREF
  unsigned __int64 v39; // [rsp+30h] [rbp-88h]
  __int64 v40; // [rsp+38h] [rbp-80h]
  ULONG_PTR *v41; // [rsp+40h] [rbp-78h]
  __int64 v42; // [rsp+48h] [rbp-70h]
  _OWORD v43[6]; // [rsp+50h] [rbp-68h] BYREF
  unsigned __int8 v45; // [rsp+C8h] [rbp+10h]
  unsigned int v46; // [rsp+D0h] [rbp+18h]
  __int64 v47; // [rsp+D8h] [rbp+20h]

  v2 = *(_DWORD *)(a1 + 56);
  v3 = 0LL;
  v4 = 4;
  v38 = 0LL;
  v47 = 0LL;
  if ( (v2 & 4) != 0 )
    v4 = 24;
  v6 = *(_QWORD *)(a1 + 88);
  v7 = **(_QWORD **)(a1 + 48);
  v46 = v4;
  v8 = *(_QWORD *)(a1 + 32) >> 12;
  BugCheckParameter2 = *(_QWORD *)(a1 + 48);
  v40 = *(_QWORD *)(qword_140C4E588 + 8LL * *(unsigned __int16 *)(a2 + 174));
  v42 = v7;
  v9 = ((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  memset(v43, 0, 32);
  v10 = 0LL;
  v11 = *(_DWORD *)(v7 + 56);
  if ( (v11 & 0x400) != 0 )
    v12 = &MiSystemPartition;
  else
    v12 = *(ULONG_PTR **)(qword_140C4E588 + 8LL * (*(_WORD *)(v7 + 60) & 0x3FF));
  v41 = v12;
  if ( (v11 & 0x420) != 0 )
  {
    v13 = 0LL;
    v39 = 0LL;
  }
  else
  {
    v13 = *(_QWORD *)(a1 + 24) << 12;
    BugCheckParameter2 = MiOffsetToProtos(v7, v13, &v38);
    v39 = v8 + v38;
  }
  if ( (v2 & 0x18) != 0x18 )
  {
    SubsectionNode = MiLocateSubsectionNode(v7, v13 + (v8 << 12) - 1, 0);
    v22 = BugCheckParameter2;
    MiDecrementLargeSubsections(BugCheckParameter2, SubsectionNode);
    v21 = 0LL;
    goto LABEL_26;
  }
  v45 = MiLockWorkingSetShared(a2);
  v14 = v45;
  if ( !v8 )
    goto LABEL_23;
  v15 = v40;
  v16 = 0LL;
  do
  {
    if ( !v10 || (v9 & 0xFFF) == 0 )
    {
      v16 += MiTerminateWsleCluster((__int64)v43);
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
        v30 = *((_QWORD *)&Flink->Flink + ((v9 >> 3) & 0x1FF));
        v31 = v17 | 0x20;
        if ( (v30 & 0x20) == 0 )
          v31 = *(_QWORD *)v9;
        v17 = v31;
        if ( (v30 & 0x42) != 0 )
          v17 = v31 | 0x42;
      }
    }
    if ( !v17 )
      goto LABEL_20;
    if ( (v17 & 1) != 0 )
    {
      if ( dword_140C4E768 )
        MI_WSLE_LOG_ACCESS(a2, v9);
      MiAppendWsleCluster((__int64)v43, a2, (unsigned __int64 *)v9);
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
        if ( (unsigned int)MiPteHasShadow(v36, v35) )
        {
LABEL_77:
          if ( HIBYTE(word_140C4DF48) || (v18 & 1) == 0 )
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
      v32 = MiTryDeleteTransitionPte(v9);
      if ( v32 == 1 )
        continue;
      if ( v32 == 3 )
        ++v16;
      v18 = ZeroPte;
      if ( !MiPteInShadowRange(v9) )
        goto LABEL_18;
      if ( (unsigned int)MiPteHasShadow(v34, v33) )
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
      if ( (unsigned int)MiPteHasShadow(v20, v19) )
      {
        if ( HIBYTE(word_140C4DF48) || (ZeroPte & 1) == 0 )
          goto LABEL_67;
        goto LABEL_66;
      }
      goto LABEL_68;
    }
LABEL_18:
    *(_QWORD *)v9 = v18;
LABEL_19:
    v14 = v45;
LABEL_20:
    v9 += 8LL;
    --v8;
    if ( (v9 & 0x78) == 0
      && (MiWorkingSetIsContended(a2) || (unsigned int)MiPageTableLockIsContended(a2, v10) || KeShouldYieldProcessor()) )
    {
      v16 += MiTerminateWsleCluster((__int64)v43);
      MiUnlockPageTableInternal(a2, v10);
      MiUnlockWorkingSetShared(a2, v14);
      v10 = 0LL;
      MiLockWorkingSetShared(a2);
    }
  }
  while ( v8 );
  v7 = v42;
  v47 = v16;
LABEL_23:
  v21 = MiTerminateWsleCluster((__int64)v43) + v47;
  if ( v10 )
    MiUnlockPageTableInternal(a2, v10);
  MiUnlockWorkingSetShared(a2, v14);
  v22 = BugCheckParameter2;
LABEL_26:
  v23 = *(_DWORD *)(v7 + 56);
  if ( (v23 & 0x20) != 0 || (v23 & 0x400) != 0 )
  {
    v24 = a1;
    v22 = 0LL;
    if ( (v23 & 0x20) != 0 && (*(_BYTE *)(a1 + 56) & 4) != 0 )
      MiReturnCrossPartitionControlAreaCharges(v7);
  }
  else
  {
    v24 = a1;
  }
  v25 = *(_QWORD *)(v7 + 64) != 0LL;
  v26 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v7 + 72));
  if ( v22 )
    v3 = MiRemoveViewsFromSection(v22, v39, v46);
  --*(_QWORD *)(v7 + 48);
  --*(_QWORD *)(v7 + 40);
  MiCheckControlArea(v7, v26);
  v27 = *(_QWORD *)(v24 + 40);
  if ( v27 )
  {
    if ( v21 )
      v27 -= v21;
    if ( v27 )
      MiReturnCommit(v40, v27);
  }
  if ( v3 )
    MiReturnCrossPartitionSectionCharges(v41, v25, v3);
}
