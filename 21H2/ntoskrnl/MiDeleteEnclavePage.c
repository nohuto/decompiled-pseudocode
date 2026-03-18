/*
 * XREFs of MiDeleteEnclavePage @ 0x1405A931C
 * Callers:
 *     MiDecommitHardwareEnclavePages @ 0x1405A89EC (MiDecommitHardwareEnclavePages.c)
 *     MiDeleteEnclavePages @ 0x140A6A73C (MiDeleteEnclavePages.c)
 * Callees:
 *     MiWritePteShadow @ 0x1402294F0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140229550 (MiPteHasShadow.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1402C6EB0 (MiInsertPageInFreeOrZeroedList.c)
 *     MiLockPageInline @ 0x1402F2700 (MiLockPageInline.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140317A10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140317A80 (MiPteInShadowRange.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     MiUpdateAwePageTable @ 0x1405AC9A0 (MiUpdateAwePageTable.c)
 */

__int64 __fastcall MiDeleteEnclavePage(unsigned __int64 a1, int a2)
{
  unsigned __int64 v4; // rbx
  ULONG_PTR v5; // r14
  int v6; // esi
  bool v7; // zf
  __int64 v8; // rbx
  unsigned __int8 v9; // al
  char v10; // dl
  unsigned __int64 v11; // rdi
  __int64 v12; // r9
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *SchedulerAssist; // r8
  __int64 v16; // [rsp+40h] [rbp+8h] BYREF

  v16 = MI_READ_PTE_LOCK_FREE(a1);
  v4 = ZeroPte;
  v5 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v16) >> 12) & 0xFFFFFFFFFFLL;
  v6 = 0;
  if ( MiPteInShadowRange(a1) )
  {
    if ( (unsigned int)MiPteHasShadow() )
    {
      v6 = 1;
      if ( HIBYTE(word_140C51864) )
        goto LABEL_9;
      v7 = (ZeroPte & 1) == 0;
    }
    else
    {
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
        goto LABEL_9;
      v7 = (ZeroPte & 1) == 0;
    }
    if ( !v7 )
      v4 = ZeroPte | 0x8000000000000000uLL;
  }
LABEL_9:
  *(_QWORD *)a1 = v4;
  if ( v6 )
    MiWritePteShadow(a1, v4);
  if ( a2 )
    MiUpdateAwePageTable(((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, -1LL, 0xFFFFFFFFLL);
  v8 = 48 * v5 - 0x220000000000LL;
  v9 = MiLockPageInline(v8);
  v10 = *(_BYTE *)(v8 + 34) & 0xEF;
  v11 = v9;
  *(_QWORD *)(v8 + 24) |= 0x4000000000000000uLL;
  *(_BYTE *)(v8 + 34) = v10;
  v12 = *(_QWORD *)(v8 + 24);
  *(_WORD *)(v8 + 32) = 0;
  *(_QWORD *)(v8 + 24) = v12 ^ ((v12 - 1) ^ v12) & 0x3FFFFFFFFFFFFFFFLL;
  MiInsertPageInFreeOrZeroedList(v5, 256);
  _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  result = (unsigned int)KiIrqlFlags;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v11 <= 0xFu && (unsigned __int8)result >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v11 + 1));
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v7 = ((unsigned int)result & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= result;
        if ( v7 )
          result = KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v11);
  return result;
}
