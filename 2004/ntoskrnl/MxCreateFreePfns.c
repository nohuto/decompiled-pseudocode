/*
 * XREFs of MxCreateFreePfns @ 0x140A3E10C
 * Callers:
 *     MxReleaseFreeDescriptor @ 0x140A3DC54 (MxReleaseFreeDescriptor.c)
 *     MiSwitchToPfns @ 0x140A3DD18 (MiSwitchToPfns.c)
 *     MiCreateFreePfns @ 0x140A3DF90 (MiCreateFreePfns.c)
 * Callees:
 *     MiPteInShadowRange @ 0x1402386B0 (MiPteInShadowRange.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x14023E080 (MiInsertPageInFreeOrZeroedList.c)
 *     KeYieldProcessorEx @ 0x140280C50 (KeYieldProcessorEx.c)
 *     MiInsertLargePageInNodeList @ 0x140316B80 (MiInsertLargePageInNodeList.c)
 *     MiLockPageInline @ 0x140317C20 (MiLockPageInline.c)
 *     MiWritePteShadow @ 0x14032ECC0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14032ED20 (MiPteHasShadow.c)
 *     MiCreateInitialPfns @ 0x14033AD7C (MiCreateInitialPfns.c)
 *     MiCreatePfnTemplate @ 0x1403A8B34 (MiCreatePfnTemplate.c)
 *     MiRestrictRangeToNode @ 0x1403A8BD0 (MiRestrictRangeToNode.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     MiCreateInitialLargeLeafPfns @ 0x1403F0724 (MiCreateInitialLargeLeafPfns.c)
 *     MiInitializeAllResidentPageBasePfns @ 0x1403F0F18 (MiInitializeAllResidentPageBasePfns.c)
 *     MiDetermineNewPfnHeatState @ 0x1403F20D0 (MiDetermineNewPfnHeatState.c)
 *     MiFreeEmptyBootPageTable @ 0x140A903B4 (MiFreeEmptyBootPageTable.c)
 */

void __fastcall MxCreateFreePfns(__int64 a1)
{
  ULONG_PTR v1; // rsi
  ULONG_PTR v2; // r14
  int v3; // r11d
  int v4; // eax
  __int64 v5; // rcx
  __int64 v6; // rdi
  __m128i *v7; // r15
  __int16 v8; // ax
  _QWORD *v9; // r12
  unsigned __int64 v10; // rbx
  __int64 v11; // r13
  BOOL v12; // eax
  __int64 v13; // r8
  int v14; // eax
  bool v15; // zf
  __int64 v16; // r8
  ULONG_PTR v17; // r8
  unsigned int v18; // ebx
  unsigned int i; // r15d
  unsigned __int64 v20; // r12
  ULONG_PTR v21; // r13
  __int64 v22; // rdx
  ULONG_PTR v23; // rdx
  ULONG_PTR v24; // rax
  __int64 v25; // r13
  int v26; // eax
  __int64 v27; // rdx
  __int64 v28; // r8
  _DWORD *v29; // r9
  ULONG_PTR v30; // rbx
  unsigned __int8 v31; // al
  __int64 v32; // rdx
  __int64 v33; // r8
  __int64 v34; // r9
  int v35; // eax
  __int64 v36; // r8
  __int16 v37; // r9
  __int16 v38; // r12
  unsigned __int64 v39; // r10
  unsigned __int8 CurrentIrql; // di
  _DWORD *SchedulerAssist; // r9
  __m128i *v42; // rbx
  __int64 v43; // rdx
  __int64 v44; // r8
  __int64 v45; // r9
  unsigned __int8 v46; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v48; // r8
  int v49; // eax
  __m128i *v50; // [rsp+40h] [rbp-49h]
  __int64 v51; // [rsp+48h] [rbp-41h]
  unsigned int v52; // [rsp+50h] [rbp-39h]
  _QWORD v53[3]; // [rsp+58h] [rbp-31h] BYREF
  __m128i v54[7]; // [rsp+70h] [rbp-19h] BYREF
  int v55; // [rsp+F0h] [rbp+67h]
  ULONG_PTR v56; // [rsp+F0h] [rbp+67h]
  BOOL v57; // [rsp+F8h] [rbp+6Fh]
  int v58; // [rsp+108h] [rbp+7Fh] BYREF

  v1 = *(_QWORD *)(a1 + 24);
  v2 = *(_QWORD *)(a1 + 32);
  v3 = 0;
  memset(v54, 0, 48);
  if ( !v1 )
  {
    if ( !--v2 )
      return;
    v1 = 1LL;
  }
  v4 = *(_DWORD *)(a1 + 16);
  if ( v4 == 2 || (v5 = 1LL, v4 == 24) )
    v5 = 0LL;
  v51 = v5;
  v57 = v4 != 24;
  v6 = 48 * v1 - 0x58000000000LL;
  v50 = 0LL;
  v7 = 0LL;
  if ( !v2 )
    goto LABEL_50;
  do
  {
    if ( v5 )
    {
      v8 = *(_WORD *)(v6 + 32);
      if ( v8 != 1 )
      {
        if ( v8 )
          goto LABEL_48;
        goto LABEL_25;
      }
      v9 = (_QWORD *)(*(_QWORD *)(v6 + 8) | 0x8000000000000000uLL);
      v10 = ZeroPte;
      v11 = 48 * (*(_QWORD *)(v6 + 40) & 0xFFFFFFFFFLL) - 0x58000000000LL;
      v55 = v3;
      v12 = MiPteInShadowRange((unsigned __int64)v9);
      v3 = 0;
      if ( v12 )
      {
        if ( (unsigned int)MiPteHasShadow() )
        {
          v14 = v3 + 1;
          if ( HIBYTE(word_140C4DE08) == (_BYTE)v3 )
          {
            v15 = ((unsigned __int8)ZeroPte & (unsigned __int8)v14) == 0;
            goto LABEL_14;
          }
LABEL_19:
          *v9 = v10;
          if ( v14 )
            MiWritePteShadow((__int64)v9, v10, v13);
          v16 = *(_QWORD *)(v11 + 24) ^ ((*(_QWORD *)(v11 + 24) - 1LL) ^ *(_QWORD *)(v11 + 24)) & 0x3FFFFFFFFFFFFFFFLL;
          *(_QWORD *)(v11 + 24) = v16;
          if ( (v16 & 0x3FFFFFFFFFFFFFFFLL) == 1 )
          {
            MiFreeEmptyBootPageTable(v11);
            v3 = 0;
          }
          v5 = v51;
          *(_WORD *)(v6 + 32) = v3;
          *(_QWORD *)(v6 + 24) &= 0xC000000000000000uLL;
          goto LABEL_25;
        }
        if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
        {
          v14 = v55;
          v15 = (ZeroPte & 1) == 0;
LABEL_14:
          if ( !v15 )
            v10 = ZeroPte | 0x8000000000000000uLL;
          goto LABEL_19;
        }
      }
      v14 = v55;
      goto LABEL_19;
    }
LABEL_25:
    if ( (v1 & 0x1FF) != 0 || v5 || v2 < 0x200 )
    {
      *(_QWORD *)v6 = v7;
      v7 = (__m128i *)v6;
      v50 = (__m128i *)v6;
LABEL_48:
      ++v1;
      v6 += 48LL;
      --v2;
      goto LABEL_49;
    }
    v56 = MiRestrictRangeToNode(v1, v2);
    v17 = v56;
    if ( v56 < 0x200 )
    {
      *(_QWORD *)v6 = v7;
      ++v1;
      v7 = (__m128i *)v6;
      v50 = (__m128i *)v6;
      v6 += 48LL;
      --v2;
      goto LABEL_46;
    }
    v18 = ((KeFeatureBits >> 37) & 1) == 0;
    v52 = v18;
    for ( i = v18; i <= 1; ++i )
    {
      v20 = MiLargePageSizes[i];
      if ( v1 != (v1 & ~(v20 - 1)) || v17 < v20 )
        continue;
      v21 = v17;
      if ( i == v18 )
      {
        v24 = v17;
      }
      else
      {
        v22 = MiLargePageSizes[i - 1];
        v23 = v22 - (v1 & (v22 - 1));
        if ( v23 <= v17 )
          v21 = v23;
        v24 = v21;
      }
      v25 = v21 - v24 % v20;
      v26 = MiDetermineNewPfnHeatState(0, i);
      MiInitializeAllResidentPageBasePfns((unsigned __int16 *)&MiSystemPartition, v1, v25, i, 1, v26 == 0, 0);
      MiCreateInitialLargeLeafPfns(v1, v25, i, 1, 0, 0);
      if ( v25 )
      {
        v30 = v56;
        do
        {
          v31 = MiLockPageInline(v6, v27, v28, v29);
          v53[1] = v57;
          v53[0] = v1;
          v53[2] = v31;
          MiInsertLargePageInNodeList((__int64)v53, v32, v33, v34);
          v30 -= v20;
          v2 -= v20;
          v1 += v20;
          v6 += 48 * v20;
          v25 -= v20;
        }
        while ( v25 );
        v56 = v30;
        v18 = v52;
      }
      v17 = v56;
      if ( v56 < 0x200 )
        break;
      i = v18 - 1;
    }
    v7 = v50;
LABEL_46:
    v3 = 0;
LABEL_49:
    v5 = v51;
  }
  while ( v2 );
LABEL_50:
  v35 = MiDetermineNewPfnHeatState(0, 3u);
  v38 = v37 | 0x400;
  if ( !v35 )
    v38 = v37;
  MiCreatePfnTemplate(v57, (__int64)v54, v36);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(v39);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
  }
  if ( v7 )
  {
    do
    {
      v42 = v7;
      v7 = (__m128i *)v7->m128i_i64[0];
      MiCreateInitialPfns(v42, 1LL, v54);
      v58 = 0;
      while ( _interlockedbittestandset64(&v42[1].m128i_i32[2], 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v58, v43, v44, v45);
        while ( v42[1].m128i_i64[1] < 0 );
      }
      MiInsertPageInFreeOrZeroedList((__int64)v42[0x5800000000LL].m128i_i64 / 48, v38);
      _InterlockedAnd64(&v42[1].m128i_i64[1], 0x7FFFFFFFFFFFFFFFuLL);
    }
    while ( v7 );
    LOBYTE(v39) = 2;
  }
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v46 = KeGetCurrentIrql();
      if ( v46 <= 0xFu && CurrentIrql <= 0xFu && v46 >= (unsigned __int8)v39 )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v48 = CurrentPrcb->SchedulerAssist;
        v49 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v15 = (v49 & v48[5]) == 0;
        v48[5] &= v49;
        if ( v15 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(CurrentIrql);
}
