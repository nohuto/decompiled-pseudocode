/*
 * XREFs of MxSwapPages @ 0x140A58120
 * Callers:
 *     MxRelocatePageTables @ 0x140A57734 (MxRelocatePageTables.c)
 *     MxMovePageTables @ 0x140A579B4 (MxMovePageTables.c)
 * Callees:
 *     MiWriteValidPteNewPage @ 0x140234AD8 (MiWriteValidPteNewPage.c)
 *     MiWritePteShadow @ 0x140234B9C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140234BFC (MiPteHasShadow.c)
 *     MiLockNestedPageAtDpcInline @ 0x140258F30 (MiLockNestedPageAtDpcInline.c)
 *     KeFlushSingleTb @ 0x1402599A8 (KeFlushSingleTb.c)
 *     MiCopyPfnEntryEx @ 0x14025B9D0 (MiCopyPfnEntryEx.c)
 *     MiFinalizePageAttribute @ 0x14025C3D4 (MiFinalizePageAttribute.c)
 *     MiGetPage @ 0x1402B7F10 (MiGetPage.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1402D9760 (MiInsertPageInFreeOrZeroedList.c)
 *     MiLockPageInline @ 0x14030AB80 (MiLockPageInline.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140338C10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiMakeValidPte @ 0x140339480 (MiMakeValidPte.c)
 *     MiPteInShadowRange @ 0x140353840 (MiPteInShadowRange.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     MxGetPhase0Mapping @ 0x140A58438 (MxGetPhase0Mapping.c)
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
  unsigned __int64 v14; // r14
  unsigned __int64 ValidPte; // rbx
  int v16; // ebp
  size_t v17; // r11
  unsigned __int64 v18; // rbp
  __int64 v19; // rdx
  int v20; // r8d
  __int64 v21; // rdx
  __int64 v22; // r8
  _DWORD *v23; // r9
  unsigned __int8 v24; // al
  char v25; // dl
  unsigned __int64 v26; // rbx
  unsigned __int64 v27; // rbx
  unsigned __int64 *v28; // r14
  int v29; // r12d
  struct _LIST_ENTRY *Flink; // r8
  __int64 v31; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v35; // eax
  char v36; // dl
  __int64 v37; // r8
  bool v38; // zf
  char v39; // dl
  bool v40; // zf
  char v41; // r9
  bool v42; // zf
  struct _KPRCB *v43; // r9
  _DWORD *v44; // r8
  unsigned __int64 v45; // [rsp+20h] [rbp-48h]
  BOOL v47; // [rsp+80h] [rbp+18h]
  __int64 v48; // [rsp+88h] [rbp+20h] BYREF

  v48 = MI_READ_PTE_LOCK_FREE(a2);
  v3 = v48;
  if ( MiPteInShadowRange((unsigned __int64)&v48)
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v3 & 1) != 0
    && ((v3 & 0x20) == 0 || (v3 & 0x42) == 0) )
  {
    Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( Flink )
    {
      v31 = *((_QWORD *)&Flink->Flink + (((unsigned __int64)&v48 >> 3) & 0x1FF));
      if ( (v31 & 0x20) != 0 )
        v3 |= 0x20uLL;
      if ( (v31 & 0x42) != 0 )
        v3 |= 0x42uLL;
    }
    else
    {
      v3 = v48;
    }
  }
  v4 = (v3 >> 12) & 0xFFFFFFFFFLL;
  result = MxGetPhase0Mapping();
  v45 = result;
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
      MiLockNestedPageAtDpcInline(v11);
      MiFinalizePageAttribute(v11, *(unsigned __int8 *)(v12 + 34) >> 6, 1u);
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
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v35 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v13 + 1));
            v38 = (v35 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v35;
            if ( v38 )
              KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
          }
        }
      }
      __writecr8(v13);
      v14 = ((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      ValidPte = MiMakeValidPte(v14, v10, -1610612732);
      v16 = 0;
      v47 = MiPteInShadowRange(v14);
      v17 = 4096LL;
      if ( v47 )
      {
        if ( (unsigned int)MiPteHasShadow() )
        {
          v16 = 1;
          if ( HIBYTE(word_140C4E048) != v36 )
            goto LABEL_6;
          v38 = (ValidPte & 1) == 0;
        }
        else
        {
          if ( ((unsigned int)v17 & HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink)) == 0 )
            goto LABEL_6;
          v38 = (ValidPte & 1) == 0;
        }
        if ( !v38 )
          ValidPte |= v37;
      }
LABEL_6:
      *(_QWORD *)v14 = ValidPte;
      if ( v16 )
        MiWritePteShadow(v14, ValidPte);
      v18 = (__int64)(a2 << 25) >> 16;
      memmove((void *)v6, (const void *)v18, v17);
      if ( ((v14 ^ v18) & 0xFFFFFFFFFFFFF000uLL) != 0 )
      {
        v19 = ZeroPte;
        v20 = 0;
        if ( !v47 )
          goto LABEL_10;
        if ( (unsigned int)MiPteHasShadow() )
        {
          v20 = 1;
          if ( HIBYTE(word_140C4E048) == v41 )
          {
            v42 = (v19 & 1) == 0;
            goto LABEL_55;
          }
        }
        else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
        {
          v42 = (v19 & 1) == 0;
LABEL_55:
          if ( !v42 )
            v19 |= 0x8000000000000000uLL;
        }
LABEL_10:
        *(_QWORD *)v14 = v19;
        if ( v20 )
          MiWritePteShadow(v14, v19);
LABEL_12:
        v48 = v48 ^ (v48 ^ (v10 << 12)) & 0xFFFFFFFFF000LL | 0x20;
        MiWriteValidPteNewPage((__int64 *)a2, v48, 0);
        KeFlushSingleTb(v18, 0, 1u);
        KeFlushSingleTb(v6, 0, 1u);
        v24 = MiLockPageInline(48 * v4 - 0x58000000000LL, v21, v22, v23);
        v25 = *(_BYTE *)(v12 + 34) & 0xDF;
        *(_WORD *)(v12 + 32) = 0;
        v26 = v24;
        *(_QWORD *)(v12 + 24) &= 0xC000000000000000uLL;
        *(_BYTE *)(v12 + 34) = v25;
        *(_BYTE *)(v12 + 34) &= ~8u;
        MiInsertPageInFreeOrZeroedList(v4, 2);
        _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        result = (unsigned int)KiIrqlFlags;
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            result = KeGetCurrentIrql();
            if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v26 <= 0xFu && (unsigned __int8)result >= 2u )
            {
              v43 = KeGetCurrentPrcb();
              result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v26 + 1));
              v44 = v43->SchedulerAssist;
              v38 = ((unsigned int)result & v44[5]) == 0;
              v44[5] &= result;
              if ( v38 )
                result = KiRemoveSystemWorkPriorityKick((__int64)v43);
            }
          }
        }
        __writecr8(v26);
        return result;
      }
      v27 = ZeroPte;
      v28 = (unsigned __int64 *)(v6 + 8 * ((v14 >> 3) & 0x1FF));
      v29 = 0;
      if ( !MiPteInShadowRange((unsigned __int64)v28) )
      {
LABEL_16:
        *v28 = v27;
        if ( v29 )
          MiWritePteShadow((__int64)v28, v27);
        v6 = v45;
        goto LABEL_12;
      }
      if ( (unsigned int)MiPteHasShadow() )
      {
        v29 = 1;
        if ( HIBYTE(word_140C4E048) != v39 )
          goto LABEL_16;
        v40 = (ZeroPte & 1) == 0;
      }
      else
      {
        if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
          goto LABEL_16;
        v40 = (ZeroPte & 1) == 0;
      }
      if ( !v40 )
        v27 = ZeroPte | 0x8000000000000000uLL;
      goto LABEL_16;
    }
  }
  return result;
}
