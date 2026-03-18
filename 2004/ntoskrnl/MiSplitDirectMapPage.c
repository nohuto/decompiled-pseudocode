/*
 * XREFs of MiSplitDirectMapPage @ 0x14053CC6C
 * Callers:
 *     MiWalkEntireImage @ 0x14022B620 (MiWalkEntireImage.c)
 * Callees:
 *     MiAddLockedPageCharge @ 0x1402296A0 (MiAddLockedPageCharge.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140238530 (MI_READ_PTE_LOCK_FREE.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x1402385A0 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiPteInShadowRange @ 0x1402386B0 (MiPteInShadowRange.c)
 *     MiGetPage @ 0x1402A5AB0 (MiGetPage.c)
 *     MiCopyPage @ 0x1402B4680 (MiCopyPage.c)
 *     MiSwizzleInvalidPte @ 0x1402B6040 (MiSwizzleInvalidPte.c)
 *     MiMapPageInHyperSpaceWorker @ 0x1402F7480 (MiMapPageInHyperSpaceWorker.c)
 *     MiLockPageInline @ 0x140317C20 (MiLockPageInline.c)
 *     MiUpdateTransitionPteFrame @ 0x14031C51C (MiUpdateTransitionPteFrame.c)
 *     MiCopyPfnEntryEx @ 0x14031C670 (MiCopyPfnEntryEx.c)
 *     MiFinalizePageAttribute @ 0x14031CC14 (MiFinalizePageAttribute.c)
 *     MiDereferenceControlAreaPfnList @ 0x14032D0C0 (MiDereferenceControlAreaPfnList.c)
 *     MiWritePteShadow @ 0x14032ECC0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14032ED20 (MiPteHasShadow.c)
 *     MiLockNestedPageAtDpcInline @ 0x14033B220 (MiLockNestedPageAtDpcInline.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     MiWaitForFreePage @ 0x140556D5C (MiWaitForFreePage.c)
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
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  __int128 v19; // xmm1
  __m128i v20; // xmm0
  __int64 v21; // rcx
  __int64 v22; // rbx
  __int64 v23; // rdx
  __int64 v24; // r8
  char v25; // r11
  __int16 v26; // r11
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 *v31; // r15
  __int64 v32; // rax
  __int64 updated; // rbx
  int v34; // r13d
  __int64 v35; // r8
  bool v36; // zf
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  int v39; // eax
  _DWORD *SchedulerAssist; // r8
  __int128 v42; // [rsp+20h] [rbp-58h] BYREF
  __int128 v43; // [rsp+30h] [rbp-48h] BYREF
  __m128i v44; // [rsp+40h] [rbp-38h]
  __int64 v45; // [rsp+80h] [rbp+8h]

  v5 = 48 * a3 - 0x58000000000LL;
  v6 = *(_DWORD *)(a2 + 8) & _InterlockedExchangeAdd(*(volatile signed __int32 **)a2, 1u);
  v45 = *(_QWORD *)a1;
  v7 = v6 | *(_DWORD *)(a2 + 12);
  v8 = *(_QWORD *)(qword_140C4E448 + 8LL * (*(_WORD *)(*(_QWORD *)a1 + 60LL) & 0x3FF));
  for ( i = MiGetPage(v8, v7, 0LL); ; i = MiGetPage(v8, v7, 0LL) )
  {
    v13 = i;
    if ( i != -1 )
      break;
    MiWaitForFreePage(v8);
  }
  v14 = 48 * i - 0x58000000000LL;
  v15 = (unsigned __int8)MiLockPageInline(v5, v10, v11, v12);
  MiLockNestedPageAtDpcInline(v14, v16, v17, v18);
  MiFinalizePageAttribute(v14, *(unsigned __int8 *)(v5 + 34) >> 6, 1);
  v19 = *(_OWORD *)(v5 + 16);
  v42 = *(_OWORD *)v5;
  v20 = *(__m128i *)(v5 + 32);
  v43 = v19;
  v44 = v20;
  v21 = (a1[16] >> 1) & 0x1F;
  v44.m128i_i64[1] = _mm_srli_si128(v20, 8).m128i_u64[0] & 0xFFFDFFFFFFFFFFFFuLL;
  v22 = MiSwizzleInvalidPte(32 * v21);
  if ( !MiPteInShadowRange((unsigned __int64)&v43) )
  {
LABEL_13:
    *(_QWORD *)&v43 = v22;
    goto LABEL_14;
  }
  if ( !(unsigned int)MiPteHasShadow() )
  {
    if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 && (v22 & 1) != 0 )
      v22 |= v23;
    goto LABEL_13;
  }
  if ( HIBYTE(word_140C4DE08) == v25 && (v22 & 1) != 0 )
    v22 |= v23;
  *(_QWORD *)&v43 = v22;
  MiWritePteShadow((__int64)&v43, v22, v24);
LABEL_14:
  MiCopyPfnEntryEx(v14, (__int64)&v42);
  *(_BYTE *)(v14 + 34) |= 0x10u;
  *(_WORD *)(v14 + 32) = v26;
  MiAddLockedPageCharge(v27, 1LL, v28);
  MiDereferenceControlAreaPfnList(v45, 0LL, v29, 2LL);
  MiCopyPage(v13, a3, 0LL, 6);
  *(_BYTE *)(v5 + 34) = *(_BYTE *)(v5 + 34) & 0xF8 | 5;
  v31 = (__int64 *)(MiMapPageInHyperSpaceWorker(*(_QWORD *)(v5 + 40) & 0xFFFFFFFFFLL, 0LL, 0x80000000, v30)
                  + 8LL * ((*(_DWORD *)(v5 + 8) >> 3) & 0x1FF));
  v32 = MI_READ_PTE_LOCK_FREE((unsigned __int64)v31);
  updated = MiUpdateTransitionPteFrame(v32, v13);
  v34 = 0;
  if ( !MiPteInShadowRange((unsigned __int64)v31) )
    goto LABEL_22;
  if ( (unsigned int)MiPteHasShadow() )
  {
    v34 = 1;
    if ( HIBYTE(word_140C4DE08) )
      goto LABEL_22;
    v36 = (updated & 1) == 0;
  }
  else
  {
    if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
      goto LABEL_22;
    v36 = (updated & 1) == 0;
  }
  if ( !v36 )
    updated |= 0x8000000000000000uLL;
LABEL_22:
  *v31 = updated;
  if ( v34 )
    MiWritePteShadow((__int64)v31, updated, v35);
  MiUnmapPageInHyperSpaceWorker((unsigned __int64)v31, 0x11u, 0x80000000);
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
        v39 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v15 + 1));
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v36 = (v39 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v39;
        if ( v36 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v15);
  return v13;
}
