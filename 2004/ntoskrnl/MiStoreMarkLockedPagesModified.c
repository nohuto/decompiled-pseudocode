/*
 * XREFs of MiStoreMarkLockedPagesModified @ 0x14034D1D0
 * Callers:
 *     MmStoreProbeAndLockPages @ 0x14031656C (MmStoreProbeAndLockPages.c)
 * Callees:
 *     MiReleasePageFileInfo @ 0x1402D4690 (MiReleasePageFileInfo.c)
 *     MiLockPageInline @ 0x140317C20 (MiLockPageInline.c)
 *     MiCapturePageFileInfoInline @ 0x1403334B0 (MiCapturePageFileInfoInline.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 */

void __fastcall MiStoreMarkLockedPagesModified(_DWORD *a1, __int64 a2, __int64 a3, _DWORD *SchedulerAssist)
{
  _QWORD *v4; // rdi
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // r14
  __int64 v7; // rsi
  unsigned __int64 v8; // rbp
  __int64 v9; // rax
  char v10; // cl
  unsigned __int64 v11; // rbx
  __int64 v12; // r15
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  int v15; // eax
  bool v16; // zf

  v4 = a1 + 12;
  v5 = ((unsigned int)a1[10] + 4095LL + (unsigned __int64)((a1[8] + a1[11]) & 0xFFF)) >> 12;
  v6 = (unsigned __int64)&a1[2 * v5 + 12];
  while ( (unsigned __int64)v4 < v6 )
  {
    v7 = 48LL * *v4 - 0x58000000000LL;
    v8 = (unsigned __int8)MiLockPageInline(v7, v5, a3, SchedulerAssist);
    v9 = MiCapturePageFileInfoInline((unsigned __int64 *)(v7 + 16), 1, 0);
    v10 = *(_BYTE *)(v7 + 34);
    v11 = v9;
    if ( (v10 & 0x10) == 0 )
      *(_BYTE *)(v7 + 34) = v10 | 0x10;
    v12 = *(_QWORD *)(qword_140C4E448 + 8 * ((*(_QWORD *)(v7 + 40) >> 39) & 0x3FFLL));
    _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v8 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v5 = -1LL << ((unsigned __int8)v8 + 1);
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v15 = ~(unsigned __int16)v5;
          v16 = (v15 & SchedulerAssist[5]) == 0;
          a3 = (unsigned int)v15 & SchedulerAssist[5];
          SchedulerAssist[5] = a3;
          if ( v16 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(v8);
    if ( v11 )
      MiReleasePageFileInfo(v12, v11, 0);
    ++v4;
  }
}
