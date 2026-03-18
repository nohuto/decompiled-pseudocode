/*
 * XREFs of MmDbgMarkPfnModifiedWorker @ 0x1403C50FC
 * Callers:
 *     ExpDebuggerWorker @ 0x1409B2030 (ExpDebuggerWorker.c)
 * Callees:
 *     MiCaptureDirtyBitToPfn @ 0x140223BF0 (MiCaptureDirtyBitToPfn.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x140285870 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiLockPageInline @ 0x140346F60 (MiLockPageInline.c)
 *     MiReleasePageFileInfo @ 0x14034EFC0 (MiReleasePageFileInfo.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
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
  v5 = qword_140C4E7D8;
  do
  {
    v6 = *v5;
    if ( (*v5 & 1) != 0 )
    {
      _InterlockedAnd64(&qword_140C4E7D8[v4], 0LL);
      v7 = v6 - 1;
      v8 = (unsigned __int8)MiLockPageInline(v7, a2, a3, SchedulerAssist);
      v9 = MiCaptureDirtyBitToPfn(v7);
      MiRemoveLockedPageChargeAndDecRef(v7);
      a2 = (*(_QWORD *)(v7 + 40) >> 39) & 0x3FFLL;
      v10 = *(_QWORD *)(qword_140C4E588 + 8 * a2);
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
