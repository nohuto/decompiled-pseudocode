/*
 * XREFs of KiInitializeMutant @ 0x1402DEBE8
 * Callers:
 *     KeInitializeMutex @ 0x1402DEBB0 (KeInitializeMutex.c)
 *     KeInitializeMutant @ 0x1402DEBD0 (KeInitializeMutant.c)
 *     LdrpInitMuiCrits @ 0x14033A660 (LdrpInitMuiCrits.c)
 *     EtwpInitializeRegistration @ 0x140A465E8 (EtwpInitializeRegistration.c)
 *     PnpInitializeDeviceEvents @ 0x140A4BE68 (PnpInitializeDeviceEvents.c)
 *     sub_140A538E8 @ 0x140A538E8 (sub_140A538E8.c)
 *     ViInitSystemPhase0 @ 0x140A6BFC8 (ViInitSystemPhase0.c)
 *     ExpProfileInitialization @ 0x140A6EE14 (ExpProfileInitialization.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140244550 (KeYieldProcessorEx.c)
 *     KiReleaseThreadLockSafe @ 0x1402EE520 (KiReleaseThreadLockSafe.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall KiInitializeMutant(__int64 a1, __int64 a2, __int64 a3, _DWORD *SchedulerAssist)
{
  char v4; // r12
  __int64 result; // rax
  struct _KTHREAD *CurrentThread; // rbp
  unsigned __int8 CurrentIrql; // r14
  struct _KPRCB *CurrentPrcb; // rsi
  _DWORD *v10; // rcx
  struct _LIST_ENTRY *Blink; // rdx
  struct _LIST_ENTRY *v12; // rcx
  int v13; // eax
  _DWORD *v14; // rcx
  int v15; // eax
  unsigned __int8 v16; // al
  struct _KPRCB *v17; // r9
  _DWORD *v18; // r8
  int v19; // eax
  bool v20; // zf
  int v21; // [rsp+48h] [rbp+10h] BYREF

  v4 = a3;
  *(_OWORD *)a1 = 0LL;
  *(_OWORD *)(a1 + 16) = 0LL;
  *(_OWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_BYTE *)a1 = 2;
  if ( (_BYTE)a2 )
  {
    CurrentThread = KeGetCurrentThread();
    *(_QWORD *)(a1 + 40) = CurrentThread;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      a2 = (-1LL << (CurrentIrql + 1)) & 4;
      a3 = (unsigned int)a2 | SchedulerAssist[5];
      SchedulerAssist[5] = a3;
    }
    CurrentPrcb = KeGetCurrentPrcb();
    v21 = 0;
    while ( 1 )
    {
      v10 = CurrentPrcb->SchedulerAssist;
      if ( v10 )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v13 = v10[6];
          v10[6] = v13 + 1;
          if ( v13 == -1 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      if ( !_interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
        break;
      v14 = CurrentPrcb->SchedulerAssist;
      if ( v14 )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v15 = v14[6] - 1;
          v14[6] = v15;
          if ( !v15 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      do
        KeYieldProcessorEx(&v21, a2, a3, (__int64)SchedulerAssist);
      while ( CurrentThread->ThreadLock );
    }
    Blink = CurrentThread->MutantListHead.Blink;
    v12 = (struct _LIST_ENTRY *)(a1 + 24);
    if ( Blink->Flink != &CurrentThread->MutantListHead )
      __fastfail(3u);
    v12->Flink = &CurrentThread->MutantListHead;
    *(_QWORD *)(a1 + 32) = Blink;
    Blink->Flink = v12;
    CurrentThread->MutantListHead.Blink = v12;
    KiReleaseThreadLockSafe(CurrentThread);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v16 = KeGetCurrentIrql();
        if ( v16 <= 0xFu && CurrentIrql <= 0xFu && v16 >= 2u )
        {
          v17 = KeGetCurrentPrcb();
          v18 = v17->SchedulerAssist;
          v19 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v20 = (v19 & v18[5]) == 0;
          v18[5] &= v19;
          if ( v20 )
            KiRemoveSystemWorkPriorityKick(v17);
        }
      }
    }
    __writecr8(CurrentIrql);
  }
  else
  {
    *(_DWORD *)(a1 + 4) = 1;
  }
  result = a1 + 8;
  *(_QWORD *)(a1 + 16) = a1 + 8;
  *(_QWORD *)(a1 + 8) = a1 + 8;
  *(_BYTE *)(a1 + 48) &= ~1u;
  *(_BYTE *)(a1 + 49) = v4;
  return result;
}
