/*
 * XREFs of MxCreateFreePfns @ 0x140A44ED4
 * Callers:
 *     MxReleaseFreeDescriptor @ 0x140A44A1C (MxReleaseFreeDescriptor.c)
 *     MiSwitchToPfns @ 0x140A44AE0 (MiSwitchToPfns.c)
 *     MiCreateFreePfns @ 0x140A44D58 (MiCreateFreePfns.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140244550 (KeYieldProcessorEx.c)
 *     MiPteInShadowRange @ 0x140291700 (MiPteInShadowRange.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1402970B0 (MiInsertPageInFreeOrZeroedList.c)
 *     MiWritePteShadow @ 0x1402F2F20 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402F2F80 (MiPteHasShadow.c)
 *     MiCreateInitialPfns @ 0x1402FDA3C (MiCreateInitialPfns.c)
 *     MiInsertLargePageInNodeList @ 0x140345EC0 (MiInsertLargePageInNodeList.c)
 *     MiLockPageInline @ 0x140346F60 (MiLockPageInline.c)
 *     MiCreatePfnTemplate @ 0x1403AEF54 (MiCreatePfnTemplate.c)
 *     MiRestrictRangeToNode @ 0x1403AEFF0 (MiRestrictRangeToNode.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     MiCreateInitialLargeLeafPfns @ 0x1403EF3C4 (MiCreateInitialLargeLeafPfns.c)
 *     MiInitializeAllResidentPageBasePfns @ 0x1403EFBB8 (MiInitializeAllResidentPageBasePfns.c)
 *     MiDetermineNewPfnHeatState @ 0x1403F0D70 (MiDetermineNewPfnHeatState.c)
 *     MiFreeEmptyBootPageTable @ 0x140A90DC4 (MiFreeEmptyBootPageTable.c)
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
  int v13; // eax
  bool v14; // zf
  __int64 v15; // r8
  ULONG_PTR v16; // r8
  unsigned int v17; // ebx
  unsigned int i; // r15d
  unsigned __int64 v19; // r12
  ULONG_PTR v20; // r13
  __int64 v21; // rdx
  ULONG_PTR v22; // rdx
  ULONG_PTR v23; // rax
  __int64 v24; // r13
  int v25; // eax
  __int64 v26; // rdx
  __int64 v27; // r8
  _DWORD *v28; // r9
  ULONG_PTR v29; // rbx
  unsigned __int8 v30; // al
  __int64 v31; // rdx
  __int64 v32; // r8
  __int64 v33; // r9
  int v34; // eax
  __int64 v35; // r8
  __int16 v36; // r9
  __int16 v37; // r12
  unsigned __int64 v38; // r10
  unsigned __int8 CurrentIrql; // di
  _DWORD *SchedulerAssist; // r9
  __m128i *v41; // rbx
  __int64 v42; // rdx
  __int64 v43; // r8
  __int64 v44; // r9
  unsigned __int8 v45; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v47; // r8
  int v48; // eax
  __m128i *v49; // [rsp+40h] [rbp-49h]
  __int64 v50; // [rsp+48h] [rbp-41h]
  unsigned int v51; // [rsp+50h] [rbp-39h]
  _QWORD v52[3]; // [rsp+58h] [rbp-31h] BYREF
  __m128i v53[7]; // [rsp+70h] [rbp-19h] BYREF
  int v54; // [rsp+F0h] [rbp+67h]
  ULONG_PTR v55; // [rsp+F0h] [rbp+67h]
  BOOL v56; // [rsp+F8h] [rbp+6Fh]
  int v57; // [rsp+108h] [rbp+7Fh] BYREF

  v1 = *(_QWORD *)(a1 + 24);
  v2 = *(_QWORD *)(a1 + 32);
  v3 = 0;
  memset(v53, 0, 48);
  if ( !v1 )
  {
    if ( !--v2 )
      return;
    v1 = 1LL;
  }
  v4 = *(_DWORD *)(a1 + 16);
  if ( v4 == 2 || (v5 = 1LL, v4 == 24) )
    v5 = 0LL;
  v50 = v5;
  v56 = v4 != 24;
  v6 = 48 * v1 - 0x58000000000LL;
  v49 = 0LL;
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
      v54 = v3;
      v12 = MiPteInShadowRange((unsigned __int64)v9);
      v3 = 0;
      if ( v12 )
      {
        if ( (unsigned int)MiPteHasShadow() )
        {
          v13 = v3 + 1;
          if ( HIBYTE(word_140C4DF48) == (_BYTE)v3 )
          {
            v14 = ((unsigned __int8)ZeroPte & (unsigned __int8)v13) == 0;
            goto LABEL_14;
          }
LABEL_19:
          *v9 = v10;
          if ( v13 )
            MiWritePteShadow((__int64)v9, v10);
          v15 = *(_QWORD *)(v11 + 24) ^ ((*(_QWORD *)(v11 + 24) - 1LL) ^ *(_QWORD *)(v11 + 24)) & 0x3FFFFFFFFFFFFFFFLL;
          *(_QWORD *)(v11 + 24) = v15;
          if ( (v15 & 0x3FFFFFFFFFFFFFFFLL) == 1 )
          {
            MiFreeEmptyBootPageTable(v11);
            v3 = 0;
          }
          v5 = v50;
          *(_WORD *)(v6 + 32) = v3;
          *(_QWORD *)(v6 + 24) &= 0xC000000000000000uLL;
          goto LABEL_25;
        }
        if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
        {
          v13 = v54;
          v14 = (ZeroPte & 1) == 0;
LABEL_14:
          if ( !v14 )
            v10 = ZeroPte | 0x8000000000000000uLL;
          goto LABEL_19;
        }
      }
      v13 = v54;
      goto LABEL_19;
    }
LABEL_25:
    if ( (v1 & 0x1FF) != 0 || v5 || v2 < 0x200 )
    {
      *(_QWORD *)v6 = v7;
      v7 = (__m128i *)v6;
      v49 = (__m128i *)v6;
LABEL_48:
      ++v1;
      v6 += 48LL;
      --v2;
      goto LABEL_49;
    }
    v55 = MiRestrictRangeToNode(v1, v2);
    v16 = v55;
    if ( v55 < 0x200 )
    {
      *(_QWORD *)v6 = v7;
      ++v1;
      v7 = (__m128i *)v6;
      v49 = (__m128i *)v6;
      v6 += 48LL;
      --v2;
      goto LABEL_46;
    }
    v17 = ((KeFeatureBits >> 37) & 1) == 0;
    v51 = v17;
    for ( i = v17; i <= 1; ++i )
    {
      v19 = MiLargePageSizes[i];
      if ( v1 != (v1 & ~(v19 - 1)) || v16 < v19 )
        continue;
      v20 = v16;
      if ( i == v17 )
      {
        v23 = v16;
      }
      else
      {
        v21 = MiLargePageSizes[i - 1];
        v22 = v21 - (v1 & (v21 - 1));
        if ( v22 <= v16 )
          v20 = v22;
        v23 = v20;
      }
      v24 = v20 - v23 % v19;
      v25 = MiDetermineNewPfnHeatState(0, i);
      MiInitializeAllResidentPageBasePfns((unsigned __int16 *)&MiSystemPartition, v1, v24, i, 1, v25 == 0, 0);
      MiCreateInitialLargeLeafPfns(v1, v24, i, 1, 0, 0);
      if ( v24 )
      {
        v29 = v55;
        do
        {
          v30 = MiLockPageInline(v6, v26, v27, v28);
          v52[1] = v56;
          v52[0] = v1;
          v52[2] = v30;
          MiInsertLargePageInNodeList((__int64)v52, v31, v32, v33);
          v29 -= v19;
          v2 -= v19;
          v1 += v19;
          v6 += 48 * v19;
          v24 -= v19;
        }
        while ( v24 );
        v55 = v29;
        v17 = v51;
      }
      v16 = v55;
      if ( v55 < 0x200 )
        break;
      i = v17 - 1;
    }
    v7 = v49;
LABEL_46:
    v3 = 0;
LABEL_49:
    v5 = v50;
  }
  while ( v2 );
LABEL_50:
  v34 = MiDetermineNewPfnHeatState(0, 3u);
  v37 = v36 | 0x400;
  if ( !v34 )
    v37 = v36;
  MiCreatePfnTemplate(v56, (__int64)v53, v35);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(v38);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
  }
  if ( v7 )
  {
    do
    {
      v41 = v7;
      v7 = (__m128i *)v7->m128i_i64[0];
      MiCreateInitialPfns(v41, 1LL, v53);
      v57 = 0;
      while ( _interlockedbittestandset64(&v41[1].m128i_i32[2], 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v57, v42, v43, v44);
        while ( v41[1].m128i_i64[1] < 0 );
      }
      MiInsertPageInFreeOrZeroedList((__int64)v41[0x5800000000LL].m128i_i64 / 48, v37);
      _InterlockedAnd64(&v41[1].m128i_i64[1], 0x7FFFFFFFFFFFFFFFuLL);
    }
    while ( v7 );
    LOBYTE(v38) = 2;
  }
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v45 = KeGetCurrentIrql();
      if ( v45 <= 0xFu && CurrentIrql <= 0xFu && v45 >= (unsigned __int8)v38 )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v47 = CurrentPrcb->SchedulerAssist;
        v48 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v14 = (v48 & v47[5]) == 0;
        v47[5] &= v48;
        if ( v14 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(CurrentIrql);
}
