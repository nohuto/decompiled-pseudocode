/*
 * XREFs of MxSwapPages @ 0x140AF3FFC
 * Callers:
 *     MxRelocatePageTables @ 0x140AF35B8 (MxRelocatePageTables.c)
 *     MxMovePageTables @ 0x140AF3770 (MxMovePageTables.c)
 * Callees:
 *     MiWritePteShadow @ 0x1402294F0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140229550 (MiPteHasShadow.c)
 *     MiLockNestedPageAtDpcInline @ 0x140239060 (MiLockNestedPageAtDpcInline.c)
 *     MiWriteValidPteNewPage @ 0x14026EDE4 (MiWriteValidPteNewPage.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1402C6EB0 (MiInsertPageInFreeOrZeroedList.c)
 *     MiMakeValidPte @ 0x1402CBD10 (MiMakeValidPte.c)
 *     MiFinalizePageAttribute @ 0x1402E5708 (MiFinalizePageAttribute.c)
 *     MiCopyPfnEntryEx @ 0x1402E8154 (MiCopyPfnEntryEx.c)
 *     KeFlushSingleTb @ 0x1402EA644 (KeFlushSingleTb.c)
 *     MiLockPageInline @ 0x1402F2700 (MiLockPageInline.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140317A10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140317A80 (MiPteInShadowRange.c)
 *     MiGetPage @ 0x1403250B0 (MiGetPage.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     MxGetPhase0Mapping @ 0x140AF4308 (MxGetPhase0Mapping.c)
 */

__int64 __fastcall MxSwapPages(__int64 a1, unsigned __int64 a2)
{
  ULONG_PTR v3; // r14
  __int64 result; // rax
  unsigned __int64 v5; // r12
  __int64 v6; // rdi
  __m128i *v7; // rbx
  __m128i *v8; // r13
  unsigned __int64 v9; // rsi
  unsigned __int64 v10; // rsi
  unsigned __int64 ValidPte; // rbx
  int v12; // ebp
  size_t v13; // r11
  unsigned __int64 v14; // rbp
  __int64 v15; // rdx
  int v16; // r8d
  unsigned __int8 v17; // al
  __int8 v18; // dl
  unsigned __int64 v19; // rbx
  unsigned __int64 v20; // rbx
  unsigned __int64 *v21; // rsi
  int v22; // r12d
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v26; // eax
  char v27; // dl
  __int64 v28; // r8
  bool v29; // zf
  char v30; // dl
  bool v31; // zf
  char v32; // r9
  bool v33; // zf
  struct _KPRCB *v34; // r9
  _DWORD *v35; // r8
  unsigned __int64 v36; // [rsp+20h] [rbp-48h]
  BOOL v38; // [rsp+80h] [rbp+18h]
  __int64 v39; // [rsp+88h] [rbp+20h] BYREF

  v39 = MI_READ_PTE_LOCK_FREE(a2);
  v3 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v39) >> 12) & 0xFFFFFFFFFFLL;
  result = MxGetPhase0Mapping();
  v36 = result;
  v5 = result;
  if ( !result )
    return result;
  result = MiGetPage(
             (__int64)&MiSystemPartition,
             *(_DWORD *)(a1 + 8) & (unsigned int)_InterlockedExchangeAdd(*(volatile signed __int32 **)a1, 1u) | *(_DWORD *)(a1 + 12),
             8u);
  v6 = result;
  if ( result == -1 )
    return result;
  v7 = (__m128i *)(48 * result - 0x220000000000LL);
  v8 = (__m128i *)(48 * v3 - 0x220000000000LL);
  v9 = (unsigned __int8)MiLockPageInline((__int64)v8);
  MiLockNestedPageAtDpcInline((__int64)v7);
  MiFinalizePageAttribute((__int64)v7, v8[2].m128i_u8[2] >> 6, 1u);
  MiCopyPfnEntryEx(v7, v8);
  _InterlockedAnd64(&v7[1].m128i_i64[1], 0x7FFFFFFFFFFFFFFFuLL);
  _InterlockedAnd64(&v8[1].m128i_i64[1], 0x7FFFFFFFFFFFFFFFuLL);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v9 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v26 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v9 + 1));
        v29 = (v26 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v26;
        if ( v29 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v9);
  v10 = ((v5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  ValidPte = MiMakeValidPte(v10, v6, -1610612732);
  v12 = 0;
  v38 = MiPteInShadowRange(v10);
  v13 = 4096LL;
  if ( v38 )
  {
    if ( (unsigned int)MiPteHasShadow() )
    {
      v12 = 1;
      if ( HIBYTE(word_140C51864) != v27 )
        goto LABEL_5;
      v29 = (ValidPte & 1) == 0;
    }
    else
    {
      if ( ((unsigned int)v13 & HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink)) == 0 )
        goto LABEL_5;
      v29 = (ValidPte & 1) == 0;
    }
    if ( !v29 )
      ValidPte |= v28;
  }
LABEL_5:
  *(_QWORD *)v10 = ValidPte;
  if ( v12 )
    MiWritePteShadow(v10, ValidPte);
  v14 = (__int64)(a2 << 25) >> 16;
  memmove((void *)v5, (const void *)v14, v13);
  if ( ((v10 ^ v14) & 0xFFFFFFFFFFFFF000uLL) == 0 )
  {
    v20 = ZeroPte;
    v21 = (unsigned __int64 *)(v5 + 8 * ((v10 >> 3) & 0x1FF));
    v22 = 0;
    if ( !MiPteInShadowRange((unsigned __int64)v21) )
    {
LABEL_15:
      *v21 = v20;
      if ( v22 )
        MiWritePteShadow((__int64)v21, v20);
      v5 = v36;
      goto LABEL_11;
    }
    if ( (unsigned int)MiPteHasShadow() )
    {
      v22 = 1;
      if ( HIBYTE(word_140C51864) != v30 )
        goto LABEL_15;
      v31 = (ZeroPte & 1) == 0;
    }
    else
    {
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
        goto LABEL_15;
      v31 = (ZeroPte & 1) == 0;
    }
    if ( !v31 )
      v20 = ZeroPte | 0x8000000000000000uLL;
    goto LABEL_15;
  }
  v15 = ZeroPte;
  v16 = 0;
  if ( !v38 )
    goto LABEL_9;
  if ( (unsigned int)MiPteHasShadow() )
  {
    v16 = 1;
    if ( HIBYTE(word_140C51864) == v32 )
    {
      v33 = (v15 & 1) == 0;
      goto LABEL_43;
    }
  }
  else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
  {
    v33 = (v15 & 1) == 0;
LABEL_43:
    if ( !v33 )
      v15 |= 0x8000000000000000uLL;
  }
LABEL_9:
  *(_QWORD *)v10 = v15;
  if ( v16 )
    MiWritePteShadow(v10, v15);
LABEL_11:
  v39 = v39 ^ (v39 ^ (v6 << 12)) & 0xFFFFFFFFFF000LL | 0x20;
  MiWriteValidPteNewPage((__int64 *)a2, v39, 0);
  KeFlushSingleTb(v14, 0, 1u);
  KeFlushSingleTb(v5, 0, 1u);
  v17 = MiLockPageInline(48 * v3 - 0x220000000000LL);
  v18 = v8[2].m128i_i8[2] & 0xDF;
  v8[2].m128i_i16[0] = 0;
  v19 = v17;
  v8[1].m128i_i64[1] &= 0xC000000000000000uLL;
  v8[2].m128i_i8[2] = v18;
  v8[2].m128i_i8[2] &= ~8u;
  MiInsertPageInFreeOrZeroedList(v3, 2);
  _InterlockedAnd64(&v8[1].m128i_i64[1], 0x7FFFFFFFFFFFFFFFuLL);
  result = (unsigned int)KiIrqlFlags;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v19 <= 0xFu && (unsigned __int8)result >= 2u )
      {
        v34 = KeGetCurrentPrcb();
        result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v19 + 1));
        v35 = v34->SchedulerAssist;
        v29 = ((unsigned int)result & v35[5]) == 0;
        v35[5] &= result;
        if ( v29 )
          result = KiRemoveSystemWorkPriorityKick((__int64)v34);
      }
    }
  }
  __writecr8(v19);
  return result;
}
