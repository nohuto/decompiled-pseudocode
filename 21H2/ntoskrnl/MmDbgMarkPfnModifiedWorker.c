/*
 * XREFs of MmDbgMarkPfnModifiedWorker @ 0x1403C983C
 * Callers:
 *     ExpDebuggerWorker @ 0x1409B6030 (ExpDebuggerWorker.c)
 * Callees:
 *     MiReleasePageFileInfo @ 0x140255C50 (MiReleasePageFileInfo.c)
 *     MiLockPageInline @ 0x14030AB80 (MiLockPageInline.c)
 *     MiCaptureDirtyBitToPfn @ 0x14031A860 (MiCaptureDirtyBitToPfn.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x140333910 (MiRemoveLockedPageChargeAndDecRef.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

void __fastcall MmDbgMarkPfnModifiedWorker(__int64 a1, __int64 a2, __int64 a3, _DWORD *SchedulerAssist)
{
  __int64 v4; // rdi
  signed __int64 *v5; // r14
  signed __int64 v6; // rsi
  __int64 v7; // rsi
  unsigned __int64 v8; // rbp
  unsigned __int64 v9; // rbx
  __int64 v10; // r15
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  int v13; // eax
  bool v14; // zf

  v4 = 0LL;
  v5 = qword_140C4E8D8;
  do
  {
    v6 = *v5;
    if ( (*v5 & 1) != 0 )
    {
      _InterlockedAnd64(&qword_140C4E8D8[v4], 0LL);
      v7 = v6 - 1;
      v8 = (unsigned __int8)MiLockPageInline(v7, a2, a3, SchedulerAssist);
      v9 = MiCaptureDirtyBitToPfn(v7);
      MiRemoveLockedPageChargeAndDecRef(v7);
      a2 = (*(_QWORD *)(v7 + 40) >> 39) & 0x3FFLL;
      v10 = *(_QWORD *)(qword_140C4E688 + 8 * a2);
      _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql <= 0xFu && (unsigned __int8)v8 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            a2 = -1LL << ((unsigned __int8)v8 + 1);
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v13 = ~(unsigned __int16)a2;
            v14 = (v13 & SchedulerAssist[5]) == 0;
            a3 = (unsigned int)v13 & SchedulerAssist[5];
            SchedulerAssist[5] = a3;
            if ( v14 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
      }
      __writecr8(v8);
      if ( v9 )
        MiReleasePageFileInfo(v10, v9, 0);
    }
    v4 = (unsigned int)(v4 + 1);
    ++v5;
  }
  while ( (unsigned int)v4 < 0x20 );
}
