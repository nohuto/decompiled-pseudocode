/*
 * XREFs of MiMarkMdlComplete @ 0x140539E00
 * Callers:
 *     MmRotatePhysicalView @ 0x1405E48E0 (MmRotatePhysicalView.c)
 * Callees:
 *     MiLocateLockedVadEvent @ 0x14030911C (MiLocateLockedVadEvent.c)
 *     MiLockPageInline @ 0x14030AB80 (MiLockPageInline.c)
 *     KeSetEvent @ 0x14034E2F0 (KeSetEvent.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

int __fastcall MiMarkMdlComplete(__int64 a1, __int64 a2)
{
  __int64 **LockedVadEvent; // rax
  __int64 v3; // rdx
  __int64 v4; // r8
  _DWORD *SchedulerAssist; // r9
  _QWORD *v6; // r15
  unsigned __int64 v7; // rsi
  unsigned int v8; // ebp
  __int64 *i; // rdi
  __int64 v10; // rbx
  unsigned __int64 v11; // r14
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  int v14; // eax
  bool v15; // zf
  bool v16; // cc

  LockedVadEvent = MiLocateLockedVadEvent(a2, 8);
  v6 = (_QWORD *)(v4 + 48);
  v7 = (unsigned __int64)*(unsigned int *)(v4 + 40) >> 12;
  v8 = 0;
  for ( i = LockedVadEvent[1]; v8 < v7; LODWORD(LockedVadEvent) = v8 )
  {
    v10 = 48LL * *v6 - 0x58000000000LL;
    v11 = (unsigned __int8)MiLockPageInline(v10, v3, v4, SchedulerAssist);
    *(_BYTE *)(v10 + 34) |= 0x10u;
    *(_BYTE *)(v10 + 34) &= ~0x20u;
    *(_QWORD *)v10 = 0LL;
    _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v11 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v3 = -1LL << ((unsigned __int8)v11 + 1);
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v14 = ~(unsigned __int16)v3;
          v15 = (v14 & SchedulerAssist[5]) == 0;
          v4 = (unsigned int)v14 & SchedulerAssist[5];
          SchedulerAssist[5] = v4;
          if ( v15 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8(v11);
    ++v8;
    ++v6;
  }
  i[11] = 0LL;
  v16 = *((_DWORD *)i + 44) <= 1;
  *((_DWORD *)i + 20) = -1073741670;
  if ( !v16 )
    LODWORD(LockedVadEvent) = KeSetEvent((PRKEVENT)(i + 7), 0, 0);
  return (int)LockedVadEvent;
}
