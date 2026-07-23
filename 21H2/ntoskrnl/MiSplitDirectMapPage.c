/*
 * XREFs of MiSplitDirectMapPage @ 0x14054237C
 * Callers:
 *     MiWalkEntireImage @ 0x1402DED00 (MiWalkEntireImage.c)
 * Callees:
 *     MiWritePteShadow @ 0x140234B9C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140234BFC (MiPteHasShadow.c)
 *     MiLockNestedPageAtDpcInline @ 0x140258F30 (MiLockNestedPageAtDpcInline.c)
 *     MiUpdateTransitionPteFrame @ 0x14025B980 (MiUpdateTransitionPteFrame.c)
 *     MiCopyPfnEntryEx @ 0x14025B9D0 (MiCopyPfnEntryEx.c)
 *     MiFinalizePageAttribute @ 0x14025C3D4 (MiFinalizePageAttribute.c)
 *     MiDereferenceControlAreaPfnList @ 0x140284F70 (MiDereferenceControlAreaPfnList.c)
 *     MiGetPage @ 0x1402B7F10 (MiGetPage.c)
 *     MiCopyPage @ 0x1402E4A70 (MiCopyPage.c)
 *     MiLockPageInline @ 0x14030AB80 (MiLockPageInline.c)
 *     MiAddLockedPageCharge @ 0x140325158 (MiAddLockedPageCharge.c)
 *     MiSwizzleInvalidPte @ 0x140334CE0 (MiSwizzleInvalidPte.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140338C10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiMapPageInHyperSpaceWorker @ 0x14033C800 (MiMapPageInHyperSpaceWorker.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x140353660 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiPteInShadowRange @ 0x140353840 (MiPteInShadowRange.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     MiWaitForFreePage @ 0x14055C43C (MiWaitForFreePage.c)
 */

ULONG_PTR __fastcall MiSplitDirectMapPage(unsigned __int16 *a1, __int64 a2, ULONG_PTR a3)
{
  __int64 v5; // rdi
  signed __int32 v6; // r9d
  unsigned int v7; // ebx
  __int64 v8; // r14
  __int64 i; // rax
  __int64 v10; // rdx
  __int64 v11; // r8
  _DWORD *v12; // r9
  ULONG_PTR v13; // rsi
  __int64 v14; // r14
  unsigned __int64 v15; // r12
  __int128 v16; // xmm1
  __m128i v17; // xmm0
  __int64 v18; // rcx
  __int64 v19; // rbx
  __int64 v20; // rdx
  char v21; // r11
  __int16 v22; // r11
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 *v25; // r15
  __int64 v26; // rax
  __int64 updated; // rbx
  int v28; // r13d
  bool v29; // zf
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  int v32; // eax
  _DWORD *SchedulerAssist; // r8
  __int128 v35; // [rsp+20h] [rbp-58h] BYREF
  __int128 v36; // [rsp+30h] [rbp-48h] BYREF
  __m128i v37; // [rsp+40h] [rbp-38h]
  __int64 v38; // [rsp+80h] [rbp+8h]

  v5 = 48 * a3 - 0x58000000000LL;
  v6 = *(_DWORD *)(a2 + 8) & _InterlockedExchangeAdd(*(volatile signed __int32 **)a2, 1u);
  v38 = *(_QWORD *)a1;
  v7 = v6 | *(_DWORD *)(a2 + 12);
  v8 = *(_QWORD *)(qword_140C4E688 + 8LL * (*(_WORD *)(*(_QWORD *)a1 + 60LL) & 0x3FF));
  for ( i = MiGetPage(v8, v7, 0LL); ; i = MiGetPage(v8, v7, 0LL) )
  {
    v13 = i;
    if ( i != -1 )
      break;
    MiWaitForFreePage(v8);
  }
  v14 = 48 * i - 0x58000000000LL;
  v15 = (unsigned __int8)MiLockPageInline(v5, v10, v11, v12);
  MiLockNestedPageAtDpcInline(v14);
  MiFinalizePageAttribute(v14, *(unsigned __int8 *)(v5 + 34) >> 6, 1u);
  v16 = *(_OWORD *)(v5 + 16);
  v35 = *(_OWORD *)v5;
  v17 = *(__m128i *)(v5 + 32);
  v36 = v16;
  v37 = v17;
  v18 = (a1[16] >> 1) & 0x1F;
  v37.m128i_i64[1] = _mm_srli_si128(v17, 8).m128i_u64[0] & 0xFFFDFFFFFFFFFFFFuLL;
  v19 = MiSwizzleInvalidPte(32 * v18);
  if ( !MiPteInShadowRange((unsigned __int64)&v36) )
  {
LABEL_13:
    *(_QWORD *)&v36 = v19;
    goto LABEL_14;
  }
  if ( !(unsigned int)MiPteHasShadow() )
  {
    if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 && (v19 & 1) != 0 )
      v19 |= v20;
    goto LABEL_13;
  }
  if ( HIBYTE(word_140C4E048) == v21 && (v19 & 1) != 0 )
    v19 |= v20;
  *(_QWORD *)&v36 = v19;
  MiWritePteShadow((__int64)&v36, v19);
LABEL_14:
  MiCopyPfnEntryEx(v14, (__int64)&v35);
  *(_BYTE *)(v14 + 34) |= 0x10u;
  *(_WORD *)(v14 + 32) = v22;
  MiAddLockedPageCharge(v23, 1);
  MiDereferenceControlAreaPfnList(v38, 0LL, v24, 2);
  MiCopyPage(v13, a3, 0LL, 6);
  *(_BYTE *)(v5 + 34) = *(_BYTE *)(v5 + 34) & 0xF8 | 5;
  v25 = (__int64 *)(MiMapPageInHyperSpaceWorker(*(_QWORD *)(v5 + 40) & 0xFFFFFFFFFLL, 0LL, 0x80000000)
                  + 8LL * ((*(_DWORD *)(v5 + 8) >> 3) & 0x1FF));
  v26 = MI_READ_PTE_LOCK_FREE((unsigned __int64)v25);
  updated = MiUpdateTransitionPteFrame(v26, v13);
  v28 = 0;
  if ( !MiPteInShadowRange((unsigned __int64)v25) )
    goto LABEL_22;
  if ( (unsigned int)MiPteHasShadow() )
  {
    v28 = 1;
    if ( HIBYTE(word_140C4E048) )
      goto LABEL_22;
    v29 = (updated & 1) == 0;
  }
  else
  {
    if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
      goto LABEL_22;
    v29 = (updated & 1) == 0;
  }
  if ( !v29 )
    updated |= 0x8000000000000000uLL;
LABEL_22:
  *v25 = updated;
  if ( v28 )
    MiWritePteShadow((__int64)v25, updated);
  MiUnmapPageInHyperSpaceWorker((unsigned __int64)v25, 0x11u, 0x80000000);
  _InterlockedAnd64((volatile signed __int64 *)(v14 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  _InterlockedAnd64((volatile signed __int64 *)(v5 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v15 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v32 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v15 + 1));
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v29 = (v32 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v32;
        if ( v29 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v15);
  return v13;
}
