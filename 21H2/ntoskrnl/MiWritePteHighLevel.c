/*
 * XREFs of MiWritePteHighLevel @ 0x1405AE144
 * Callers:
 *     MiTransformValidPteInPlace @ 0x1402270B8 (MiTransformValidPteInPlace.c)
 * Callees:
 *     MiInsertLargeTbFlushEntry @ 0x1402285E8 (MiInsertLargeTbFlushEntry.c)
 *     MiInsertRecursiveTbFlushEntries @ 0x140228BCC (MiInsertRecursiveTbFlushEntries.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140317A10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetContainingPageTable @ 0x14033AC10 (MiGetContainingPageTable.c)
 *     KeIpiGenericCall @ 0x1403B4600 (KeIpiGenericCall.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall MiWritePteHighLevel(unsigned __int64 a1, __int64 a2, ULONG_PTR a3)
{
  char v6; // r9
  unsigned int v7; // edx
  unsigned __int64 v8; // rcx
  unsigned __int8 CurrentIrql; // bl
  _DWORD *SchedulerAssist; // r9
  unsigned __int8 v11; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v13; // r8
  int v14; // eax
  bool v15; // zf
  __int64 result; // rax
  ULONG_PTR Context[28]; // [rsp+20h] [rbp-E0h] BYREF

  memset(Context, 0, sizeof(Context));
  LODWORD(Context[5]) = 0;
  Context[7] = 0LL;
  Context[8] = 0LL;
  Context[0] = a1;
  Context[2] = a3;
  BYTE5(Context[5]) = 0;
  Context[6] = 20LL;
  v6 = MI_READ_PTE_LOCK_FREE(a1);
  v7 = 0;
  BYTE4(Context[5]) = 1;
  v8 = a2;
  while ( 1 )
  {
    v8 = (__int64)(v8 << 25) >> 16;
    if ( v8 < 0xFFFFF68000000000uLL || v8 > 0xFFFFF6FFFFFFFFFFuLL )
      break;
    ++v7;
  }
  if ( v6 >= 0 )
    MiInsertRecursiveTbFlushEntries((__int64)&Context[5], v7, a2);
  else
    MiInsertLargeTbFlushEntry((__int64)&Context[5], v7, a2);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xCuLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 0x1FFC;
  }
  Context[3] = MiGetContainingPageTable(a1);
  HIDWORD(Context[4]) = KeNumberProcessors_0;
  LODWORD(Context[4]) = KeNumberProcessors_0;
  KeIpiGenericCall(MiWritePteHighLevelIsr, (ULONG_PTR)Context);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v11 = KeGetCurrentIrql();
      if ( v11 <= 0xFu && CurrentIrql <= 0xFu && v11 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v13 = CurrentPrcb->SchedulerAssist;
        v14 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v15 = (v14 & v13[5]) == 0;
        v13[5] &= v14;
        if ( v15 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
