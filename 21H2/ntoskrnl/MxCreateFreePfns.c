/*
 * XREFs of MxCreateFreePfns @ 0x140AF5478
 * Callers:
 *     MxReleaseFreeDescriptor @ 0x140AF5164 (MxReleaseFreeDescriptor.c)
 *     MiCreateFreePfns @ 0x140AF5384 (MiCreateFreePfns.c)
 *     MiCreateDescriptorPfns @ 0x140AF5940 (MiCreateDescriptorPfns.c)
 * Callees:
 *     MiWritePteShadow @ 0x1402294F0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140229550 (MiPteHasShadow.c)
 *     MiCreateInitialLargeLeafPfns @ 0x140236C98 (MiCreateInitialLargeLeafPfns.c)
 *     MiInitializeAllResidentPageBasePfns @ 0x140246160 (MiInitializeAllResidentPageBasePfns.c)
 *     MiInsertLargePageInNodeList @ 0x1402BEEA0 (MiInsertLargePageInNodeList.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1402C6EB0 (MiInsertPageInFreeOrZeroedList.c)
 *     MiLockPageInline @ 0x1402F2700 (MiLockPageInline.c)
 *     KeYieldProcessorEx @ 0x1402F32E0 (KeYieldProcessorEx.c)
 *     MiPteInShadowRange @ 0x140317A80 (MiPteInShadowRange.c)
 *     MiCreatePfnTemplate @ 0x1403B770C (MiCreatePfnTemplate.c)
 *     MiDetermineNewPfnHeatState @ 0x1403B78C4 (MiDetermineNewPfnHeatState.c)
 *     MiRestrictRangeToNode @ 0x1403B7A10 (MiRestrictRangeToNode.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     MiFreeEmptyBootPageTable @ 0x140B51A8C (MiFreeEmptyBootPageTable.c)
 */

void __fastcall MxCreateFreePfns(__int64 a1)
{
  ULONG_PTR v1; // rsi
  ULONG_PTR v2; // r14
  int v3; // ecx
  __int64 v4; // rdx
  __int64 v5; // rdi
  __m128i *v6; // r13
  int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 SchedulerAssist; // r9
  __int16 v11; // r15
  unsigned __int8 CurrentIrql; // di
  __m128i *v13; // rbx
  __m128i v14; // xmm0
  __m128i v15; // xmm1
  __m128i v16; // xmm2
  __m128i *v17; // rax
  __int16 v18; // ax
  _QWORD *v19; // r12
  unsigned __int64 v20; // rbx
  __int64 v21; // r15
  BOOL v22; // eax
  int v23; // edx
  int v24; // eax
  __int64 v25; // r8
  ULONG_PTR v26; // r12
  unsigned int v27; // ecx
  unsigned int i; // r15d
  unsigned __int64 v29; // rbx
  __int64 v30; // rax
  ULONG_PTR v31; // rax
  __int64 v32; // r13
  int v33; // eax
  int v34; // r9d
  int v35; // ecx
  char v36; // al
  bool v37; // zf
  unsigned __int8 v38; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v40; // r8
  int v41; // eax
  __int64 v42; // [rsp+40h] [rbp-79h]
  _QWORD v43[2]; // [rsp+48h] [rbp-71h] BYREF
  __int128 v44; // [rsp+58h] [rbp-61h]
  __m128i v45; // [rsp+68h] [rbp-51h] BYREF
  __m128i v46; // [rsp+78h] [rbp-41h] BYREF
  __m128i v47[8]; // [rsp+88h] [rbp-31h] BYREF
  unsigned int v48; // [rsp+120h] [rbp+67h]
  BOOL v49; // [rsp+128h] [rbp+6Fh] BYREF
  int v50; // [rsp+130h] [rbp+77h]
  __m128i *v51; // [rsp+138h] [rbp+7Fh]

  v1 = *(_QWORD *)(a1 + 32);
  v2 = *(_QWORD *)(a1 + 40);
  v45 = 0LL;
  v46 = 0LL;
  v47[0] = 0LL;
  if ( !v1 )
  {
    if ( !--v2 )
      return;
    v1 = 1LL;
  }
  v3 = *(_DWORD *)(a1 + 24);
  v50 = v3;
  if ( (v3 & 0x20000000) == 0 || (v3 & 0x1FFFFFFF) == 2 || (v4 = 1LL, (v3 & 0x1FFFFFFF) == 0x18) )
    v4 = 0LL;
  v42 = v4;
  v49 = v3 != 24;
  v5 = 48 * v1 - 0x220000000000LL;
  v51 = 0LL;
  v6 = 0LL;
  if ( v2 )
  {
    while ( !v4 )
    {
LABEL_6:
      if ( (v1 & 0x1FF) == 0 && !v4 && v2 >= 0x200 )
      {
        v26 = MiRestrictRangeToNode(v1, v2);
        if ( v26 < 0x200 )
        {
          *(_QWORD *)v5 = v6;
          ++v1;
          v6 = (__m128i *)v5;
          v51 = (__m128i *)v5;
          v5 += 48LL;
          --v2;
        }
        else
        {
          v27 = (KeFeatureBits & 0x2000000000LL) == 0;
          v48 = v27;
          for ( i = v27; i <= 1; ++i )
          {
            v29 = MiLargePageSizes[i];
            if ( v1 == (v1 & ~(v29 - 1)) && v26 >= v29 )
            {
              if ( i == v27 )
              {
                v31 = v26;
              }
              else
              {
                v30 = MiLargePageSizes[i - 1];
                v31 = v30 - (v1 & (v30 - 1));
                if ( v31 > v26 )
                  v31 = v26;
              }
              v32 = v29 * (v31 / v29);
              v33 = MiDetermineNewPfnHeatState(0, i);
              v35 = v34;
              LOBYTE(v35) = v33 == 0;
              MiInitializeAllResidentPageBasePfns((unsigned __int16 *)&MiSystemPartition, v1, v32, i, 1, v35, v34);
              MiCreateInitialLargeLeafPfns(v1, v32, i, 1, 0, 0);
              for ( ; v32; v32 -= v29 )
              {
                v36 = MiLockPageInline(v5);
                v43[1] = v49;
                v44 = 0LL;
                v43[0] = v1;
                LOBYTE(v44) = v36;
                MiInsertLargePageInNodeList((__int64)v43);
                v26 -= v29;
                v2 -= v29;
                v1 += v29;
                v5 += 48 * v29;
              }
              if ( v26 < 0x200 )
              {
                v6 = v51;
                goto LABEL_9;
              }
              v27 = v48;
              i = v48 - 1;
            }
          }
          v6 = v51;
        }
        goto LABEL_9;
      }
      *(_QWORD *)v5 = v6;
      v6 = (__m128i *)v5;
      v51 = (__m128i *)v5;
LABEL_8:
      ++v1;
      v5 += 48LL;
      --v2;
LABEL_9:
      v4 = v42;
      if ( !v2 )
        goto LABEL_10;
    }
    v18 = *(_WORD *)(v5 + 32);
    if ( v18 != 1 )
    {
      if ( v18 )
        goto LABEL_8;
      goto LABEL_6;
    }
    v19 = (_QWORD *)(*(_QWORD *)(v5 + 8) | 0x8000000000000000uLL);
    v20 = ZeroPte;
    v21 = 48 * (*(_QWORD *)(v5 + 40) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
    v22 = MiPteInShadowRange((unsigned __int64)v19);
    v23 = 0;
    if ( !v22 )
      goto LABEL_26;
    if ( (unsigned int)MiPteHasShadow() )
    {
      v24 = 1;
      if ( HIBYTE(word_140C51864) != (_BYTE)v23 )
        goto LABEL_27;
      v37 = (ZeroPte & 1) == 0;
    }
    else
    {
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
      {
LABEL_26:
        v24 = v23;
LABEL_27:
        *v19 = v20;
        if ( v24 )
          MiWritePteShadow((__int64)v19, v20);
        v25 = *(_QWORD *)(v21 + 24) ^ ((*(_QWORD *)(v21 + 24) - 1LL) ^ *(_QWORD *)(v21 + 24)) & 0x3FFFFFFFFFFFFFFFLL;
        *(_QWORD *)(v21 + 24) = v25;
        if ( (v25 & 0x3FFFFFFFFFFFFFFFLL) == 1 )
          MiFreeEmptyBootPageTable(v21);
        v4 = v42;
        *(_QWORD *)(v5 + 24) &= 0xC000000000000000uLL;
        *(_WORD *)(v5 + 32) = 0;
        goto LABEL_6;
      }
      v24 = v23;
      v37 = (ZeroPte & 1) == 0;
    }
    if ( !v37 )
      v20 = ZeroPte | 0x8000000000000000uLL;
    goto LABEL_27;
  }
LABEL_10:
  MiCreatePfnTemplate((__int64)&v45, 0, 0);
  if ( v50 == 24 )
    v47[0].m128i_i8[2] &= 0xF8u;
  v7 = MiDetermineNewPfnHeatState(0, 3u);
  v11 = SchedulerAssist | 0x400;
  if ( !v7 )
    v11 = SchedulerAssist;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = (__int64)KeGetCurrentPrcb()->SchedulerAssist;
    v8 = (-1LL << (CurrentIrql + 1)) & 4;
    v9 = (unsigned int)v8 | *(_DWORD *)(SchedulerAssist + 20);
    *(_DWORD *)(SchedulerAssist + 20) = v9;
  }
  while ( v6 )
  {
    v13 = v6;
    v6 = (__m128i *)v6->m128i_i64[0];
    v14 = _mm_loadu_si128(&v45);
    v15 = _mm_loadu_si128(&v46);
    v16 = _mm_loadu_si128(v47);
    v47[1] = v14;
    v47[2] = v15;
    v17 = v13;
    v47[3] = v16;
    do
    {
      *v17 = v14;
      v17[1] = v15;
      v17[2] = v16;
      v17 += 3;
    }
    while ( v17 != &v13[3] );
    v49 = 0;
    while ( _interlockedbittestandset64(&v13[1].m128i_i32[2], 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v49, v8, v9, SchedulerAssist);
      while ( v13[1].m128i_i64[1] < 0 );
    }
    MiInsertPageInFreeOrZeroedList(0xAAAAAAAAAAAAAAABuLL * ((__int64)v13[0x22000000000LL].m128i_i64 >> 4), v11);
    _InterlockedAnd64(&v13[1].m128i_i64[1], 0x7FFFFFFFFFFFFFFFuLL);
  }
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v38 = KeGetCurrentIrql();
      if ( v38 <= 0xFu && CurrentIrql <= 0xFu && v38 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v40 = CurrentPrcb->SchedulerAssist;
        v41 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v37 = (v41 & v40[5]) == 0;
        v40[5] &= v41;
        if ( v37 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(CurrentIrql);
}
