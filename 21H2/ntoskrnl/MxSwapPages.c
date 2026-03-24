/*
 * XREFs of MxSwapPages @ 0x140A57120
 * Callers:
 *     MxRelocatePageTables @ 0x140A56734 (MxRelocatePageTables.c)
 *     MxMovePageTables @ 0x140A569B4 (MxMovePageTables.c)
 * Callees:
 *     MiGetPage @ 0x140213610 (MiGetPage.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x140234F10 (MiInsertPageInFreeOrZeroedList.c)
 *     MiLockNestedPageAtDpcInline @ 0x14026AF90 (MiLockNestedPageAtDpcInline.c)
 *     KeFlushSingleTb @ 0x14026BA08 (KeFlushSingleTb.c)
 *     MiCopyPfnEntryEx @ 0x14026DA30 (MiCopyPfnEntryEx.c)
 *     MiFinalizePageAttribute @ 0x14026E434 (MiFinalizePageAttribute.c)
 *     MiWriteValidPteNewPage @ 0x1402B68F8 (MiWriteValidPteNewPage.c)
 *     MiWritePteShadow @ 0x1402B69BC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402B6A1C (MiPteHasShadow.c)
 *     MiLockPageInline @ 0x1402FFE30 (MiLockPageInline.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14032DEC0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiMakeValidPte @ 0x14032E730 (MiMakeValidPte.c)
 *     MiPteInShadowRange @ 0x140348AF0 (MiPteInShadowRange.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     memmove @ 0x140413F40 (memmove.c)
 *     MxGetPhase0Mapping @ 0x140A57438 (MxGetPhase0Mapping.c)
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
  unsigned __int64 v17; // r14
  unsigned __int64 ValidPte; // rbx
  int v19; // ebp
  __int64 v20; // r8
  size_t v21; // r11
  unsigned __int64 v22; // rbp
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // rdx
  __int64 v26; // r8
  _DWORD *v27; // r9
  unsigned __int8 v28; // al
  char v29; // dl
  unsigned __int64 v30; // rbx
  unsigned __int64 v31; // rbx
  unsigned __int64 *v32; // r14
  int v33; // r12d
  __int64 v34; // r8
  struct _LIST_ENTRY *Flink; // r8
  __int64 v36; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v40; // eax
  char v41; // dl
  bool v42; // zf
  char v43; // dl
  bool v44; // zf
  char v45; // r9
  bool v46; // zf
  struct _KPRCB *v47; // r9
  _DWORD *v48; // r8
  unsigned __int64 v49; // [rsp+20h] [rbp-48h]
  BOOL v51; // [rsp+80h] [rbp+18h]
  __int64 v52; // [rsp+88h] [rbp+20h] BYREF

  v52 = MI_READ_PTE_LOCK_FREE(a2);
  v3 = v52;
  if ( MiPteInShadowRange((unsigned __int64)&v52)
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v3 & 1) != 0
    && ((v3 & 0x20) == 0 || (v3 & 0x42) == 0) )
  {
    Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( Flink )
    {
      v36 = *((_QWORD *)&Flink->Flink + (((unsigned __int64)&v52 >> 3) & 0x1FF));
      if ( (v36 & 0x20) != 0 )
        v3 |= 0x20uLL;
      if ( (v36 & 0x42) != 0 )
        v3 |= 0x42uLL;
    }
    else
    {
      v3 = v52;
    }
  }
  v4 = (v3 >> 12) & 0xFFFFFFFFFLL;
  result = MxGetPhase0Mapping();
  v49 = result;
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
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v40 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v13 + 1));
            v42 = (v40 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v40;
            if ( v42 )
              KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
          }
        }
      }
      __writecr8(v13);
      v17 = ((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      ValidPte = MiMakeValidPte(v17, v10, -1610612732);
      v19 = 0;
      v51 = MiPteInShadowRange(v17);
      v20 = 0x8000000000000000uLL;
      v21 = 4096LL;
      if ( v51 )
      {
        if ( (unsigned int)MiPteHasShadow() )
        {
          v19 = 1;
          if ( HIBYTE(word_140C4E008) != v41 )
            goto LABEL_6;
          v42 = (ValidPte & 1) == 0;
        }
        else
        {
          if ( ((unsigned int)v21 & HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink)) == 0 )
            goto LABEL_6;
          v42 = (ValidPte & 1) == 0;
        }
        if ( !v42 )
          ValidPte |= v20;
      }
LABEL_6:
      *(_QWORD *)v17 = ValidPte;
      if ( v19 )
        MiWritePteShadow(v17, ValidPte, v20);
      v22 = (__int64)(a2 << 25) >> 16;
      memmove((void *)v6, (const void *)v22, v21);
      if ( ((v17 ^ v22) & 0xFFFFFFFFFFFFF000uLL) != 0 )
      {
        v23 = ZeroPte;
        v24 = 0LL;
        if ( !v51 )
          goto LABEL_10;
        if ( (unsigned int)MiPteHasShadow() )
        {
          v24 = 1LL;
          if ( HIBYTE(word_140C4E008) == v45 )
          {
            v46 = (v23 & 1) == 0;
            goto LABEL_55;
          }
        }
        else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
        {
          v46 = (v23 & 1) == 0;
LABEL_55:
          if ( !v46 )
            v23 |= 0x8000000000000000uLL;
        }
LABEL_10:
        *(_QWORD *)v17 = v23;
        if ( (_DWORD)v24 )
          MiWritePteShadow(v17, v23, v24);
LABEL_12:
        v52 = v52 ^ (v52 ^ (v10 << 12)) & 0xFFFFFFFFF000LL | 0x20;
        MiWriteValidPteNewPage((__int64 *)a2, v52, 0);
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
              v47 = KeGetCurrentPrcb();
              result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v30 + 1));
              v48 = v47->SchedulerAssist;
              v42 = ((unsigned int)result & v48[5]) == 0;
              v48[5] &= result;
              if ( v42 )
                result = KiRemoveSystemWorkPriorityKick((__int64)v47);
            }
          }
        }
        __writecr8(v30);
        return result;
      }
      v31 = ZeroPte;
      v32 = (unsigned __int64 *)(v6 + 8 * ((v17 >> 3) & 0x1FF));
      v33 = 0;
      if ( !MiPteInShadowRange((unsigned __int64)v32) )
      {
LABEL_16:
        *v32 = v31;
        if ( v33 )
          MiWritePteShadow((__int64)v32, v31, v34);
        v6 = v49;
        goto LABEL_12;
      }
      if ( (unsigned int)MiPteHasShadow() )
      {
        v33 = 1;
        if ( HIBYTE(word_140C4E008) != v43 )
          goto LABEL_16;
        v44 = (ZeroPte & 1) == 0;
      }
      else
      {
        if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
          goto LABEL_16;
        v44 = (ZeroPte & 1) == 0;
      }
      if ( !v44 )
        v31 = ZeroPte | 0x8000000000000000uLL;
      goto LABEL_16;
    }
  }
  return result;
}
