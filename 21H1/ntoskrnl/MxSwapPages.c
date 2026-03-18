/*
 * XREFs of MxSwapPages @ 0x140A4F77C
 * Callers:
 *     MxRelocatePageTables @ 0x140A4ED90 (MxRelocatePageTables.c)
 *     MxMovePageTables @ 0x140A4F010 (MxMovePageTables.c)
 * Callees:
 *     MiGetPage @ 0x140212FA0 (MiGetPage.c)
 *     MiMakeValidPte @ 0x14028D330 (MiMakeValidPte.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140291580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140291700 (MiPteInShadowRange.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1402970B0 (MiInsertPageInFreeOrZeroedList.c)
 *     MiWriteValidPteNewPage @ 0x1402F19B0 (MiWriteValidPteNewPage.c)
 *     MiWritePteShadow @ 0x1402F2F20 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402F2F80 (MiPteHasShadow.c)
 *     MiLockNestedPageAtDpcInline @ 0x1402FE700 (MiLockNestedPageAtDpcInline.c)
 *     MiLockPageInline @ 0x140346F60 (MiLockPageInline.c)
 *     MiCopyPfnEntryEx @ 0x14034B9B0 (MiCopyPfnEntryEx.c)
 *     MiFinalizePageAttribute @ 0x14034BF54 (MiFinalizePageAttribute.c)
 *     KeFlushSingleTb @ 0x14034C17C (KeFlushSingleTb.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     memmove @ 0x140408CC0 (memmove.c)
 *     MxGetPhase0Mapping @ 0x140A4FA94 (MxGetPhase0Mapping.c)
 */

__int64 __fastcall MxSwapPages(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v3; // rsi
  ULONG_PTR v4; // rsi
  __int64 result; // rax
  unsigned __int64 v6; // r12
  __int64 v7; // rdx
  __int64 v8; // r8
  _DWORD *v9; // r9
  __int64 v10; // rdi
  __int64 v11; // rbx
  __int64 v12; // r13
  unsigned __int64 v13; // rbp
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 SchedulerAssist; // r9
  unsigned __int64 v18; // r14
  unsigned __int64 ValidPte; // rbx
  int v20; // ebp
  size_t v21; // r11
  unsigned __int64 v22; // rbp
  __int64 v23; // rdx
  int v24; // r8d
  __int64 v25; // rdx
  __int64 v26; // r8
  _DWORD *v27; // r9
  unsigned __int8 v28; // al
  char v29; // dl
  unsigned __int64 v30; // rbx
  unsigned __int64 v31; // rbx
  unsigned __int64 *v32; // r14
  int v33; // r12d
  struct _LIST_ENTRY *Flink; // r8
  __int64 v35; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  int v38; // eax
  char v39; // dl
  __int64 v40; // r8
  bool v41; // zf
  char v42; // dl
  bool v43; // zf
  char v44; // r9
  bool v45; // zf
  struct _KPRCB *v46; // r9
  _DWORD *v47; // r8
  unsigned __int64 v48; // [rsp+20h] [rbp-48h]
  BOOL v50; // [rsp+80h] [rbp+18h]
  __int64 v51; // [rsp+88h] [rbp+20h] BYREF

  v51 = MI_READ_PTE_LOCK_FREE(a2);
  v3 = v51;
  if ( MiPteInShadowRange((unsigned __int64)&v51)
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v3 & 1) != 0
    && ((v3 & 0x20) == 0 || (v3 & 0x42) == 0) )
  {
    Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( Flink )
    {
      v35 = *((_QWORD *)&Flink->Flink + (((unsigned __int64)&v51 >> 3) & 0x1FF));
      if ( (v35 & 0x20) != 0 )
        v3 |= 0x20uLL;
      if ( (v35 & 0x42) != 0 )
        v3 |= 0x42uLL;
    }
    else
    {
      v3 = v51;
    }
  }
  v4 = (v3 >> 12) & 0xFFFFFFFFFLL;
  result = MxGetPhase0Mapping();
  v48 = result;
  v6 = result;
  if ( result )
  {
    result = MiGetPage(
               (__int64)&MiSystemPartition,
               *(_DWORD *)(a1 + 8) & (unsigned int)_InterlockedExchangeAdd(*(volatile signed __int32 **)a1, 1u) | *(_DWORD *)(a1 + 12),
               8LL);
    v10 = result;
    if ( result != -1 )
    {
      v11 = 48 * result - 0x58000000000LL;
      v12 = 48 * v4 - 0x58000000000LL;
      v13 = (unsigned __int8)MiLockPageInline(v12, v7, v8, v9);
      MiLockNestedPageAtDpcInline(v11, v14, v15, v16);
      MiFinalizePageAttribute(v11, *(unsigned __int8 *)(v12 + 34) >> 6, 1);
      MiCopyPfnEntryEx(v11, v12);
      _InterlockedAnd64((volatile signed __int64 *)(v11 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql <= 0xFu && (unsigned __int8)v13 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = (__int64)CurrentPrcb->SchedulerAssist;
            v38 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v13 + 1));
            v41 = (v38 & *(_DWORD *)(SchedulerAssist + 20)) == 0;
            *(_DWORD *)(SchedulerAssist + 20) &= v38;
            if ( v41 )
              KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
          }
        }
      }
      __writecr8(v13);
      v18 = ((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      ValidPte = MiMakeValidPte(v18, v10, 2684354564LL, SchedulerAssist);
      v20 = 0;
      v50 = MiPteInShadowRange(v18);
      v21 = 4096LL;
      if ( v50 )
      {
        if ( (unsigned int)MiPteHasShadow() )
        {
          v20 = 1;
          if ( HIBYTE(word_140C4DF48) != v39 )
            goto LABEL_6;
          v41 = (ValidPte & 1) == 0;
        }
        else
        {
          if ( ((unsigned int)v21 & HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink)) == 0 )
            goto LABEL_6;
          v41 = (ValidPte & 1) == 0;
        }
        if ( !v41 )
          ValidPte |= v40;
      }
LABEL_6:
      *(_QWORD *)v18 = ValidPte;
      if ( v20 )
        MiWritePteShadow(v18, ValidPte);
      v22 = (__int64)(a2 << 25) >> 16;
      memmove((void *)v6, (const void *)v22, v21);
      if ( ((v18 ^ v22) & 0xFFFFFFFFFFFFF000uLL) != 0 )
      {
        v23 = ZeroPte;
        v24 = 0;
        if ( !v50 )
          goto LABEL_10;
        if ( (unsigned int)MiPteHasShadow() )
        {
          v24 = 1;
          if ( HIBYTE(word_140C4DF48) == v44 )
          {
            v45 = (v23 & 1) == 0;
            goto LABEL_55;
          }
        }
        else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
        {
          v45 = (v23 & 1) == 0;
LABEL_55:
          if ( !v45 )
            v23 |= 0x8000000000000000uLL;
        }
LABEL_10:
        *(_QWORD *)v18 = v23;
        if ( v24 )
          MiWritePteShadow(v18, v23);
LABEL_12:
        v51 = v51 ^ (v51 ^ (v10 << 12)) & 0xFFFFFFFFF000LL | 0x20;
        MiWriteValidPteNewPage((__int64 *)a2, v51, 0);
        KeFlushSingleTb(v22, 0, 1u);
        KeFlushSingleTb(v6, 0, 1u);
        v28 = MiLockPageInline(48 * v4 - 0x58000000000LL, v25, v26, v27);
        v29 = *(_BYTE *)(v12 + 34) & 0xDF;
        *(_WORD *)(v12 + 32) = 0;
        v30 = v28;
        *(_QWORD *)(v12 + 24) &= 0xC000000000000000uLL;
        *(_BYTE *)(v12 + 34) = v29;
        *(_BYTE *)(v12 + 34) &= ~8u;
        MiInsertPageInFreeOrZeroedList(v4, 2);
        _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        result = (unsigned int)KiIrqlFlags;
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            result = KeGetCurrentIrql();
            if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v30 <= 0xFu && (unsigned __int8)result >= 2u )
            {
              v46 = KeGetCurrentPrcb();
              result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v30 + 1));
              v47 = v46->SchedulerAssist;
              v41 = ((unsigned int)result & v47[5]) == 0;
              v47[5] &= result;
              if ( v41 )
                result = KiRemoveSystemWorkPriorityKick((__int64)v46);
            }
          }
        }
        __writecr8(v30);
        return result;
      }
      v31 = ZeroPte;
      v32 = (unsigned __int64 *)(v6 + 8 * ((v18 >> 3) & 0x1FF));
      v33 = 0;
      if ( !MiPteInShadowRange((unsigned __int64)v32) )
      {
LABEL_16:
        *v32 = v31;
        if ( v33 )
          MiWritePteShadow((__int64)v32, v31);
        v6 = v48;
        goto LABEL_12;
      }
      if ( (unsigned int)MiPteHasShadow() )
      {
        v33 = 1;
        if ( HIBYTE(word_140C4DF48) != v42 )
          goto LABEL_16;
        v43 = (ZeroPte & 1) == 0;
      }
      else
      {
        if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
          goto LABEL_16;
        v43 = (ZeroPte & 1) == 0;
      }
      if ( !v43 )
        v31 = ZeroPte | 0x8000000000000000uLL;
      goto LABEL_16;
    }
  }
  return result;
}
