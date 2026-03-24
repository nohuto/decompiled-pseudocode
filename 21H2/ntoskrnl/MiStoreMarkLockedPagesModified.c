/*
 * XREFs of MiStoreMarkLockedPagesModified @ 0x1402B7890
 * Callers:
 *     MmStoreProbeAndLockPages @ 0x1402B7720 (MmStoreProbeAndLockPages.c)
 * Callees:
 *     MiReleasePageFileInfo @ 0x140267CB0 (MiReleasePageFileInfo.c)
 *     MiCapturePageFileInfoInline @ 0x1402A2CF0 (MiCapturePageFileInfoInline.c)
 *     MiLockPageInline @ 0x1402FFE30 (MiLockPageInline.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

void __fastcall MiStoreMarkLockedPagesModified(_DWORD *a1, __int64 a2, __int64 a3)
{
  _QWORD *v3; // rdi
  unsigned __int64 v4; // rdx
  unsigned __int64 v5; // r14
  __int64 v6; // rsi
  unsigned __int64 v7; // rbp
  __int64 v8; // rax
  char v9; // cl
  unsigned __int64 v10; // rbx
  __int64 v11; // r15
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v15; // eax
  bool v16; // zf

  v3 = a1 + 12;
  v4 = ((unsigned int)a1[10] + 4095LL + (unsigned __int64)((a1[8] + a1[11]) & 0xFFF)) >> 12;
  v5 = (unsigned __int64)&a1[2 * v4 + 12];
  while ( (unsigned __int64)v3 < v5 )
  {
    v6 = 48LL * *v3 - 0x58000000000LL;
    v7 = (unsigned __int8)MiLockPageInline(v6, v4, a3);
    v8 = MiCapturePageFileInfoInline((unsigned __int64 *)(v6 + 16), 1, 0);
    v9 = *(_BYTE *)(v6 + 34);
    v10 = v8;
    if ( (v9 & 0x10) == 0 )
      *(_BYTE *)(v6 + 34) = v9 | 0x10;
    v11 = *(_QWORD *)(qword_140C4E648 + 8 * ((*(_QWORD *)(v6 + 40) >> 39) & 0x3FFLL));
    _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v7 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v4 = -1LL << ((unsigned __int8)v7 + 1);
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v15 = ~(unsigned __int16)v4;
          v16 = (v15 & SchedulerAssist[5]) == 0;
          a3 = (unsigned int)v15 & SchedulerAssist[5];
          SchedulerAssist[5] = a3;
          if ( v16 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(v7);
    if ( v10 )
      MiReleasePageFileInfo(v11, v10, 0);
    ++v3;
  }
}
