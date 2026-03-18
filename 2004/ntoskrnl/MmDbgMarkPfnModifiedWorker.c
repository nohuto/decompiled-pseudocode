/*
 * XREFs of MmDbgMarkPfnModifiedWorker @ 0x1403C606C
 * Callers:
 *     ExpDebuggerWorker @ 0x1409B2030 (ExpDebuggerWorker.c)
 * Callees:
 *     MiRemoveLockedPageChargeAndDecRef @ 0x14022C820 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiCaptureDirtyBitToPfn @ 0x1402B6870 (MiCaptureDirtyBitToPfn.c)
 *     MiReleasePageFileInfo @ 0x1402D4690 (MiReleasePageFileInfo.c)
 *     MiLockPageInline @ 0x140317C20 (MiLockPageInline.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 */

void __fastcall MmDbgMarkPfnModifiedWorker(__int64 a1, __int64 a2, __int64 a3, _DWORD *SchedulerAssist)
{
  __int64 v4; // rdi
  signed __int64 *v5; // r14
  signed __int64 v6; // rsi
  __int64 v7; // rsi
  unsigned __int64 v8; // rbp
  unsigned __int64 v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // r15
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  int v16; // eax
  bool v17; // zf

  v4 = 0LL;
  v5 = qword_140C4E698;
  do
  {
    v6 = *v5;
    if ( (*v5 & 1) != 0 )
    {
      _InterlockedAnd64(&qword_140C4E698[v4], 0LL);
      v7 = v6 - 1;
      v8 = (unsigned __int8)MiLockPageInline(v7, a2, a3, SchedulerAssist);
      v9 = MiCaptureDirtyBitToPfn(v7);
      MiRemoveLockedPageChargeAndDecRef(v7, v10, v11, v12);
      a2 = (*(_QWORD *)(v7 + 40) >> 39) & 0x3FFLL;
      v13 = *(_QWORD *)(qword_140C4E448 + 8 * a2);
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
            v16 = ~(unsigned __int16)a2;
            v17 = (v16 & SchedulerAssist[5]) == 0;
            a3 = (unsigned int)v16 & SchedulerAssist[5];
            SchedulerAssist[5] = a3;
            if ( v17 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
      }
      __writecr8(v8);
      if ( v9 )
        MiReleasePageFileInfo(v13, v9, 0);
    }
    v4 = (unsigned int)(v4 + 1);
    ++v5;
  }
  while ( (unsigned int)v4 < 0x20 );
}
