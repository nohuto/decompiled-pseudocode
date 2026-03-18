/*
 * XREFs of MiSplitDirectMapPage @ 0x1405A0B10
 * Callers:
 *     MiWalkEntireImage @ 0x140336B30 (MiWalkEntireImage.c)
 * Callees:
 *     MiDereferenceControlAreaPfnList @ 0x1402206C0 (MiDereferenceControlAreaPfnList.c)
 *     MiWritePteShadow @ 0x1402294F0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140229550 (MiPteHasShadow.c)
 *     MiColdPageSizeSupported @ 0x14023073C (MiColdPageSizeSupported.c)
 *     MiLockNestedPageAtDpcInline @ 0x140239060 (MiLockNestedPageAtDpcInline.c)
 *     MiReleaseFreshPage @ 0x140268408 (MiReleaseFreshPage.c)
 *     MiAddLockedPageCharge @ 0x140274508 (MiAddLockedPageCharge.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x1402BEDD0 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1402C6EB0 (MiInsertPageInFreeOrZeroedList.c)
 *     MiMapPageInHyperSpaceWorker @ 0x1402CC7C0 (MiMapPageInHyperSpaceWorker.c)
 *     MiSwizzleInvalidPte @ 0x1402CCC50 (MiSwizzleInvalidPte.c)
 *     MiFinalizePageAttribute @ 0x1402E5708 (MiFinalizePageAttribute.c)
 *     MiUpdateTransitionPteFrame @ 0x1402E7D14 (MiUpdateTransitionPteFrame.c)
 *     MiCopyPage @ 0x1402E7D60 (MiCopyPage.c)
 *     MiCopyPfnEntryEx @ 0x1402E8154 (MiCopyPfnEntryEx.c)
 *     MiLockPageInline @ 0x1402F2700 (MiLockPageInline.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140317A10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140317A80 (MiPteInShadowRange.c)
 *     MiGetPage @ 0x1403250B0 (MiGetPage.c)
 *     MiRemoveLockedPageCharge @ 0x1403377E0 (MiRemoveLockedPageCharge.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     MiAddPageToHeatRanges @ 0x1405B7574 (MiAddPageToHeatRanges.c)
 *     MiNotifyPageHeat @ 0x1405B7E7C (MiNotifyPageHeat.c)
 *     MiWaitForFreePage @ 0x1405B8348 (MiWaitForFreePage.c)
 */

__int64 __fastcall MiSplitDirectMapPage(unsigned __int16 *a1, __int64 a2, ULONG_PTR a3, __int64 a4)
{
  __int64 v5; // rdi
  signed __int32 v6; // r9d
  unsigned int v7; // ebx
  __int64 v8; // rsi
  __int64 i; // rax
  ULONG_PTR v10; // r12
  __m128i *v11; // r14
  unsigned __int64 v12; // rbp
  char v13; // al
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v17; // eax
  bool v18; // zf
  int v19; // r8d
  unsigned __int8 v20; // al
  int v21; // edx
  __int128 v23; // xmm1
  __m128i v24; // xmm0
  __int64 v25; // rbx
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // r8
  __int64 v29; // rax
  __int64 updated; // rbx
  int v31; // eax
  bool v32; // zf
  unsigned __int64 v33; // r11
  __int64 v34; // rdx
  __int64 v35; // r8
  __int64 v36; // r9
  unsigned __int8 v37; // al
  struct _KPRCB *v38; // r9
  int v39; // eax
  _DWORD *v40; // r8
  __m128i v41; // [rsp+20h] [rbp-68h] BYREF
  __int128 v42; // [rsp+30h] [rbp-58h] BYREF
  __int64 v43; // [rsp+40h] [rbp-48h]
  unsigned __int64 v44; // [rsp+48h] [rbp-40h]
  __int64 *v46; // [rsp+90h] [rbp+8h]
  __int64 v47; // [rsp+98h] [rbp+10h]

  v5 = 48 * a3 - 0x220000000000LL;
  v6 = *(_DWORD *)(a2 + 8) & _InterlockedExchangeAdd(*(volatile signed __int32 **)a2, 1u);
  v47 = *(_QWORD *)a1;
  v7 = v6 | *(_DWORD *)(a2 + 12);
  v8 = *(_QWORD *)(qword_140C51F48 + 8LL * (*(_WORD *)(*(_QWORD *)a1 + 60LL) & 0x3FF));
  for ( i = MiGetPage(v8, v7, 0); ; i = MiGetPage(v8, v7, 0) )
  {
    v10 = i;
    if ( i != -1 )
      break;
    MiWaitForFreePage(v8);
  }
  v11 = (__m128i *)(48 * i - 0x220000000000LL);
  v12 = (unsigned __int8)MiLockPageInline(v5);
  v13 = *(_BYTE *)(v5 + 35);
  if ( (v13 & 0x40) != 0 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v5 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( !KiIrqlFlags )
      goto LABEL_20;
    if ( (KiIrqlFlags & 1) == 0 )
      goto LABEL_20;
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql > 0xFu || (unsigned __int8)v12 > 0xFu || CurrentIrql < 2u )
      goto LABEL_20;
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = CurrentPrcb->SchedulerAssist;
    v17 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v12 + 1));
    v18 = (v17 & SchedulerAssist[5]) == 0;
    v19 = v17 & SchedulerAssist[5];
LABEL_18:
    SchedulerAssist[5] = v19;
    if ( v18 )
      KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
LABEL_20:
    __writecr8(v12);
    MiReleaseFreshPage((__int64)v11);
    return -1LL;
  }
  if ( (v13 & 0x10) != 0 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v5 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( !KiIrqlFlags )
      goto LABEL_20;
    if ( (KiIrqlFlags & 1) == 0 )
      goto LABEL_20;
    v20 = KeGetCurrentIrql();
    if ( v20 > 0xFu || (unsigned __int8)v12 > 0xFu || v20 < 2u )
      goto LABEL_20;
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = CurrentPrcb->SchedulerAssist;
    v21 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v12 + 1));
    v18 = (v21 & SchedulerAssist[5]) == 0;
    v19 = v21 & SchedulerAssist[5];
    goto LABEL_18;
  }
  MiLockNestedPageAtDpcInline((__int64)v11);
  MiFinalizePageAttribute((__int64)v11, *(unsigned __int8 *)(v5 + 34) >> 6, 1u);
  v23 = *(_OWORD *)(v5 + 16);
  v41 = *(__m128i *)v5;
  v24 = *(__m128i *)(v5 + 32);
  v42 = v23;
  v43 = v24.m128i_i64[0];
  v44 = _mm_srli_si128(v24, 8).m128i_u64[0] & 0xFFDFFFFFFFFFFFFFuLL;
  v25 = MiSwizzleInvalidPte(32LL * ((a1[16] >> 1) & 0x1F));
  if ( !MiPteInShadowRange((unsigned __int64)&v42) )
    goto LABEL_30;
  if ( !(unsigned int)MiPteHasShadow() )
  {
    if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 && (v25 & 1) != 0 )
      v25 |= v26;
LABEL_30:
    *(_QWORD *)&v42 = v25;
    goto LABEL_31;
  }
  if ( !HIBYTE(word_140C51864) && (v25 & 1) != 0 )
    v25 |= v26;
  *(_QWORD *)&v42 = v25;
  MiWritePteShadow((__int64)&v42, v25);
LABEL_31:
  MiCopyPfnEntryEx(v11, &v41);
  v11[2].m128i_i8[2] |= 0x10u;
  v11[2].m128i_i16[0] = 0;
  MiAddLockedPageCharge((__int64)v11, 1LL, v27);
  MiDereferenceControlAreaPfnList(v47, 0LL, v28, 2);
  MiCopyPage(v10, a3, 0LL, 6);
  *(_BYTE *)(v5 + 34) = *(_BYTE *)(v5 + 34) & 0xF8 | 5;
  v46 = (__int64 *)(MiMapPageInHyperSpaceWorker(*(_QWORD *)(v5 + 40) & 0xFFFFFFFFFFLL, 0LL, 0x80000000)
                  + 8LL * ((*(_DWORD *)(v5 + 8) >> 3) & 0x1FF));
  v29 = MI_READ_PTE_LOCK_FREE((unsigned __int64)v46);
  updated = MiUpdateTransitionPteFrame(v29, v10);
  if ( MiPteInShadowRange((unsigned __int64)v46) )
  {
    if ( (unsigned int)MiPteHasShadow() )
    {
      v31 = 1;
      if ( !HIBYTE(word_140C51864) )
      {
        v32 = (updated & 1) == 0;
        goto LABEL_35;
      }
    }
    else
    {
      v31 = 0;
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
      {
        v32 = (updated & 1) == 0;
LABEL_35:
        if ( !v32 )
          updated |= 0x8000000000000000uLL;
      }
    }
  }
  else
  {
    v31 = 0;
  }
  v33 = (unsigned __int64)v46;
  *v46 = updated;
  if ( v31 )
    MiWritePteShadow((__int64)v46, updated);
  MiUnmapPageInHyperSpaceWorker(v33, 0x11u);
  _InterlockedAnd64(&v11[1].m128i_i64[1], 0x7FFFFFFFFFFFFFFFuLL);
  if ( *(_WORD *)(v5 + 32) == 1
    && (unsigned int)MiColdPageSizeSupported(1u)
    && (unsigned int)MiAddPageToHeatRanges(a4, a3, 3LL) )
  {
    MiNotifyPageHeat(a4, v34, v35, v36);
  }
  *(_QWORD *)(v5 + 24) |= 0x4000000000000000uLL;
  *(_BYTE *)(v5 + 34) = *(_BYTE *)(v5 + 34) & 0xF8 | 6;
  if ( (unsigned int)MiRemoveLockedPageCharge(v5) )
  {
    *(_BYTE *)(v5 + 35) |= 0x10u;
    MiInsertPageInFreeOrZeroedList(a3, 2);
  }
  _InterlockedAnd64((volatile signed __int64 *)(v5 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v37 = KeGetCurrentIrql();
      if ( v37 <= 0xFu && (unsigned __int8)v12 <= 0xFu && v37 >= 2u )
      {
        v38 = KeGetCurrentPrcb();
        v39 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v12 + 1));
        v40 = v38->SchedulerAssist;
        v18 = (v39 & v40[5]) == 0;
        v40[5] &= v39;
        if ( v18 )
          KiRemoveSystemWorkPriorityKick((__int64)v38);
      }
    }
  }
  __writecr8(v12);
  return v10;
}
