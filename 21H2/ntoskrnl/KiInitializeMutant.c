/*
 * XREFs of KiInitializeMutant @ 0x14029E52C
 * Callers:
 *     LdrpInitMuiCrits @ 0x140227A24 (LdrpInitMuiCrits.c)
 *     KeInitializeMutex @ 0x14029E4F0 (KeInitializeMutex.c)
 *     KeInitializeMutantEx @ 0x14029E510 (KeInitializeMutantEx.c)
 *     KeInitializeMutant @ 0x140395690 (KeInitializeMutant.c)
 *     PnpInitializeDeviceEvents @ 0x140A5475C (PnpInitializeDeviceEvents.c)
 *     sub_140A5C300 @ 0x140A5C300 (sub_140A5C300.c)
 *     ViInitSystemPhase0 @ 0x140A70AB8 (ViInitSystemPhase0.c)
 *     EtwpInitializeRegistration @ 0x140A73644 (EtwpInitializeRegistration.c)
 *     ExpProfileInitialization @ 0x140A73CB4 (ExpProfileInitialization.c)
 * Callees:
 *     KiReleaseThreadLockSafe @ 0x1402121F0 (KiReleaseThreadLockSafe.c)
 *     KeYieldProcessorEx @ 0x1402EFAD0 (KeYieldProcessorEx.c)
 *     KeAbPreAcquire @ 0x140354F80 (KeAbPreAcquire.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall KiInitializeMutant(ULONG_PTR BugCheckParameter2, char a2, char a3, char a4)
{
  char v7; // cl
  __int64 result; // rax
  struct _KTHREAD *CurrentThread; // rbp
  unsigned __int8 CurrentIrql; // r14
  struct _KPRCB *CurrentPrcb; // rsi
  _DWORD *v12; // rcx
  struct _LIST_ENTRY *Blink; // rdx
  struct _LIST_ENTRY *v14; // rcx
  _DWORD *SchedulerAssist; // r9
  int v16; // eax
  _DWORD *v17; // rcx
  int v18; // eax
  unsigned __int8 v19; // al
  struct _KPRCB *v20; // r9
  _DWORD *v21; // r8
  int v22; // eax
  bool v23; // zf
  int v24; // [rsp+58h] [rbp+10h] BYREF
  char v25; // [rsp+60h] [rbp+18h]

  v25 = a3;
  *(_OWORD *)BugCheckParameter2 = 0LL;
  *(_OWORD *)(BugCheckParameter2 + 16) = 0LL;
  *(_OWORD *)(BugCheckParameter2 + 32) = 0LL;
  *(_QWORD *)(BugCheckParameter2 + 48) = 0LL;
  *(_BYTE *)BugCheckParameter2 = 2;
  if ( a2 )
  {
    CurrentThread = KeGetCurrentThread();
    *(_QWORD *)(BugCheckParameter2 + 40) = CurrentThread;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
    }
    CurrentPrcb = KeGetCurrentPrcb();
    v24 = 0;
    while ( 1 )
    {
      v12 = CurrentPrcb->SchedulerAssist;
      if ( v12 )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v16 = v12[6];
          v12[6] = v16 + 1;
          if ( v16 == -1 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      if ( !_interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
        break;
      v17 = CurrentPrcb->SchedulerAssist;
      if ( v17 )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v18 = v17[6] - 1;
          v17[6] = v18;
          if ( !v18 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      do
        KeYieldProcessorEx(&v24);
      while ( CurrentThread->ThreadLock );
    }
    Blink = CurrentThread->MutantListHead.Blink;
    v14 = (struct _LIST_ENTRY *)(BugCheckParameter2 + 24);
    if ( Blink->Flink != &CurrentThread->MutantListHead )
      __fastfail(3u);
    v14->Flink = &CurrentThread->MutantListHead;
    *(_QWORD *)(BugCheckParameter2 + 32) = Blink;
    Blink->Flink = v14;
    CurrentThread->MutantListHead.Blink = v14;
    KiReleaseThreadLockSafe((__int64)CurrentThread);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v19 = KeGetCurrentIrql();
        if ( v19 <= 0xFu && CurrentIrql <= 0xFu && v19 >= 2u )
        {
          v20 = KeGetCurrentPrcb();
          v21 = v20->SchedulerAssist;
          v22 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v23 = (v22 & v21[5]) == 0;
          v21[5] &= v22;
          if ( v23 )
            KiRemoveSystemWorkPriorityKick(v20);
        }
      }
    }
    __writecr8(CurrentIrql);
  }
  else
  {
    *(_DWORD *)(BugCheckParameter2 + 4) = 1;
  }
  v7 = v25;
  result = BugCheckParameter2 + 8;
  *(_QWORD *)(BugCheckParameter2 + 16) = BugCheckParameter2 + 8;
  *(_QWORD *)(BugCheckParameter2 + 8) = BugCheckParameter2 + 8;
  *(_BYTE *)(BugCheckParameter2 + 48) &= ~1u;
  *(_BYTE *)(BugCheckParameter2 + 49) = v7;
  if ( (a4 & 1) != 0 )
  {
    *(_BYTE *)(BugCheckParameter2 + 48) |= 2u;
    if ( a2 )
    {
      result = KeAbPreAcquire(BugCheckParameter2, 0LL);
      if ( result )
        *(_BYTE *)(result + 26) |= 1u;
    }
  }
  return result;
}
