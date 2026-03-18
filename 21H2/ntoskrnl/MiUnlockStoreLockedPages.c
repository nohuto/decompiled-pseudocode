/*
 * XREFs of MiUnlockStoreLockedPages @ 0x140385FB0
 * Callers:
 *     SmKmUnlockMdl @ 0x140379C24 (SmKmUnlockMdl.c)
 *     MmStoreProbeAndLockPages @ 0x140385584 (MmStoreProbeAndLockPages.c)
 * Callees:
 *     MiWriteCompletePfn @ 0x14028C82C (MiWriteCompletePfn.c)
 *     MiReleasePageFileInfo @ 0x1402E20D0 (MiReleasePageFileInfo.c)
 *     MiLockPageInline @ 0x1402F2700 (MiLockPageInline.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 */

void __fastcall MiUnlockStoreLockedPages(__int64 a1)
{
  _QWORD *v1; // r14
  unsigned int v3; // ebx
  unsigned __int64 v4; // r13
  __int64 v5; // rbp
  unsigned __int8 v6; // al
  unsigned int v7; // ecx
  unsigned __int64 v8; // r15
  unsigned __int64 v9; // rdi
  __int64 v10; // r12
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v14; // eax
  bool v15; // zf

  v1 = (_QWORD *)(a1 + 48);
  v3 = 0;
  v4 = a1
     + 48
     + 8
     * ((*(unsigned int *)(a1 + 40) + 4095LL + (unsigned __int64)((*(_DWORD *)(a1 + 32) + *(_DWORD *)(a1 + 44)) & 0xFFF)) >> 12);
  do
  {
    if ( *v1 == -1LL )
      break;
    v5 = 48LL * *v1 - 0x220000000000LL;
    v6 = MiLockPageInline(v5);
    v7 = v3 & 0xFFFFFFFD;
    v8 = v6;
    v3 |= 2u;
    if ( (*(_BYTE *)(v5 + 34) & 0x10) == 0 )
      v3 = v7;
    v9 = MiWriteCompletePfn(v5, v3);
    if ( v9 )
      v10 = *(_QWORD *)(qword_140C51F48 + 8 * ((*(_QWORD *)(v5 + 40) >> 43) & 0x3FFLL));
    else
      v10 = 0LL;
    _InterlockedAnd64((volatile signed __int64 *)(v5 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v8 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v14 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v8 + 1));
          v15 = (v14 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v14;
          if ( v15 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(v8);
    if ( v9 )
      MiReleasePageFileInfo(v10, v9, 0);
    ++v1;
  }
  while ( (unsigned __int64)v1 < v4 );
  *(_WORD *)(a1 + 10) &= ~2u;
}
