/*
 * XREFs of MiDeleteEnclavePage @ 0x14054A680
 * Callers:
 *     MiDecommitHardwareEnclavePages @ 0x140549C68 (MiDecommitHardwareEnclavePages.c)
 *     MiDeleteEnclavePages @ 0x1409B1A90 (MiDeleteEnclavePages.c)
 * Callees:
 *     MiWritePteShadow @ 0x140234B9C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140234BFC (MiPteHasShadow.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1402D9760 (MiInsertPageInFreeOrZeroedList.c)
 *     MiLockPageInline @ 0x14030AB80 (MiLockPageInline.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140338C10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140353840 (MiPteInShadowRange.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     MiUpdateAwePageTable @ 0x14054E274 (MiUpdateAwePageTable.c)
 */

__int64 __fastcall MiDeleteEnclavePage(unsigned __int64 a1, int a2)
{
  unsigned __int64 v4; // rdi
  char v5; // bl
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v7; // rax
  unsigned __int64 v8; // rbx
  ULONG_PTR v9; // rdi
  int v10; // ebp
  __int64 v11; // rdx
  __int64 v12; // r8
  _DWORD *v13; // r9
  bool v14; // zf
  __int64 v15; // rbx
  unsigned __int8 v16; // al
  char v17; // dl
  unsigned __int64 v18; // rsi
  __int64 v19; // r9
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *SchedulerAssist; // r8
  __int64 v23; // [rsp+40h] [rbp+8h] BYREF

  v23 = MI_READ_PTE_LOCK_FREE(a1);
  v4 = v23;
  v5 = v23;
  if ( MiPteInShadowRange((unsigned __int64)&v23)
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v5 & 1) != 0
    && ((v5 & 0x20) == 0 || (v5 & 0x42) == 0) )
  {
    Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( Flink )
    {
      v7 = *((_QWORD *)&Flink->Flink + (((unsigned __int64)&v23 >> 3) & 0x1FF));
      if ( (v7 & 0x20) != 0 )
        v4 |= 0x20uLL;
      if ( (v7 & 0x42) != 0 )
        v4 |= 0x42uLL;
    }
    else
    {
      v4 = v23;
    }
  }
  v8 = ZeroPte;
  v9 = (v4 >> 12) & 0xFFFFFFFFFLL;
  v10 = 0;
  if ( MiPteInShadowRange(a1) )
  {
    if ( (unsigned int)MiPteHasShadow() )
    {
      v10 = 1;
      if ( HIBYTE(word_140C4E048) )
        goto LABEL_21;
      v14 = (ZeroPte & 1) == 0;
    }
    else
    {
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
        goto LABEL_21;
      v14 = (ZeroPte & 1) == 0;
    }
    if ( !v14 )
      v8 = ZeroPte | 0x8000000000000000uLL;
  }
LABEL_21:
  *(_QWORD *)a1 = v8;
  if ( v10 )
    MiWritePteShadow(a1, v8);
  if ( a2 )
    MiUpdateAwePageTable(((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, -1LL, 0xFFFFFFFFLL);
  v15 = 48 * v9 - 0x58000000000LL;
  v16 = MiLockPageInline(v15, v11, v12, v13);
  v17 = *(_BYTE *)(v15 + 34) & 0xEF;
  v18 = v16;
  *(_QWORD *)(v15 + 24) |= 0x4000000000000000uLL;
  *(_BYTE *)(v15 + 34) = v17;
  v19 = *(_QWORD *)(v15 + 24);
  *(_WORD *)(v15 + 32) = 0;
  *(_QWORD *)(v15 + 24) = v19 ^ ((v19 - 1) ^ v19) & 0x3FFFFFFFFFFFFFFFLL;
  MiInsertPageInFreeOrZeroedList(v9, 256);
  _InterlockedAnd64((volatile signed __int64 *)(v15 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  result = (unsigned int)KiIrqlFlags;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v18 <= 0xFu && (unsigned __int8)result >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v18 + 1));
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v14 = ((unsigned int)result & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= result;
        if ( v14 )
          result = KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v18);
  return result;
}
