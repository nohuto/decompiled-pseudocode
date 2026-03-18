/*
 * XREFs of KiSetBasePriorityAndClearDecrement @ 0x1402F1220
 * Callers:
 *     KiDeferredReadySingleThread @ 0x1402873F0 (KiDeferredReadySingleThread.c)
 *     KeRemovePriQueue @ 0x1402B8840 (KeRemovePriQueue.c)
 *     KiUpdateVPBackingThreadPriority @ 0x1402ED2C0 (KiUpdateVPBackingThreadPriority.c)
 *     KiDirectSwitchThread @ 0x1402EE940 (KiDirectSwitchThread.c)
 *     KeSetPriorityAndQuantumProcess @ 0x1402F049C (KeSetPriorityAndQuantumProcess.c)
 *     KiUpdateVpBackingThreadPriorityFromTopLevel @ 0x14051B810 (KiUpdateVpBackingThreadPriorityFromTopLevel.c)
 * Callees:
 *     KiAbQueueAutoBoostDpc @ 0x14032A93C (KiAbQueueAutoBoostDpc.c)
 */

__int64 __fastcall KiSetBasePriorityAndClearDecrement(__int64 a1, char *a2, int a3)
{
  unsigned int v3; // r9d
  char v7; // al
  struct _KPRCB *CurrentPrcb; // rcx
  char v9; // al
  struct _SINGLE_LIST_ENTRY *v11; // rdx
  _SINGLE_LIST_ENTRY *p_AbSelfIoBoostsList; // r8

  v3 = 0;
  if ( a2 )
  {
    v7 = *a2;
    CurrentPrcb = KeGetCurrentPrcb();
    if ( *a2 < *(char *)(a1 + 563) )
    {
      if ( *(_BYTE *)(a1 + 871) )
      {
        v11 = (struct _SINGLE_LIST_ENTRY *)(a1 + 816);
        if ( *(_QWORD *)(a1 + 816) == 1LL )
        {
          p_AbSelfIoBoostsList = &CurrentPrcb->AbSelfIoBoostsList;
          if ( CurrentPrcb != (struct _KPRCB *)-34672LL )
          {
            v11->Next = p_AbSelfIoBoostsList->Next;
            p_AbSelfIoBoostsList->Next = v11;
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
