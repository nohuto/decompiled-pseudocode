/*
 * XREFs of KiSetBasePriorityAndClearDecrement @ 0x1402EC3E4
 * Callers:
 *     KiDirectSwitchThread @ 0x14020F360 (KiDirectSwitchThread.c)
 *     KiUpdateVPBackingThreadPriority @ 0x1402B9FC0 (KiUpdateVPBackingThreadPriority.c)
 *     KiTryUnwaitThreadWithPriority @ 0x1402EB9D0 (KiTryUnwaitThreadWithPriority.c)
 *     KeSetPriorityAndQuantumProcess @ 0x1402EBB58 (KeSetPriorityAndQuantumProcess.c)
 *     KeSetBasePriorityThread @ 0x1402EBF30 (KeSetBasePriorityThread.c)
 *     KeRemovePriQueue @ 0x14033D110 (KeRemovePriQueue.c)
 *     KiDeferredReadySingleThread @ 0x1403405E0 (KiDeferredReadySingleThread.c)
 *     KiUpdateVpBackingThreadPriorityFromTopLevel @ 0x1405779D0 (KiUpdateVpBackingThreadPriorityFromTopLevel.c)
 * Callees:
 *     KiAbQueueAutoBoostDpc @ 0x140229D30 (KiAbQueueAutoBoostDpc.c)
 */

__int64 __fastcall KiSetBasePriorityAndClearDecrement(__int64 a1, char *a2, int a3)
{
  unsigned int v3; // r9d
  char v7; // al
  struct _KDPC *CurrentPrcb; // rcx
  char v9; // al
  PVOID *v11; // rdx
  PVOID *p_SystemArgument2; // r8

  v3 = 0;
  if ( a2 )
  {
    v7 = *a2;
    CurrentPrcb = (struct _KDPC *)KeGetCurrentPrcb();
    if ( *a2 < *(char *)(a1 + 563) )
    {
      if ( *(_BYTE *)(a1 + 871) )
      {
        v11 = (PVOID *)(a1 + 816);
        if ( *(_QWORD *)(a1 + 816) == 1LL )
        {
          p_SystemArgument2 = &CurrentPrcb[557].SystemArgument2;
          if ( CurrentPrcb != (struct _KDPC *)-35696LL )
          {
            *v11 = *p_SystemArgument2;
            *p_SystemArgument2 = v11;
            _InterlockedAdd16((volatile signed __int16 *)(a1 + 868), 1u);
            KiAbQueueAutoBoostDpc(CurrentPrcb);
            v7 = *a2;
          }
        }
      }
    }
    *(_BYTE *)(a1 + 563) = v7;
    v3 = *(_DWORD *)a2;
  }
  v9 = *(_BYTE *)(a1 + 564);
  if ( v9 )
  {
    if ( (v9 & 0xF) != 0 )
      *(_DWORD *)(a1 + 872) = MEMORY[0xFFFFF78000000320];
    if ( a3 )
    {
      v3 = *(char *)(a1 + 195) - (*(_BYTE *)(a1 + 564) & 0xF);
      *(_BYTE *)(a1 + 564) &= 0xF0u;
    }
    else
    {
      *(_BYTE *)(a1 + 564) = 0;
    }
  }
  return v3;
}
