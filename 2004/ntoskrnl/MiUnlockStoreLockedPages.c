/*
 * XREFs of MiUnlockStoreLockedPages @ 0x14034D0D0
 * Callers:
 *     MmStoreProbeAndLockPages @ 0x14031656C (MmStoreProbeAndLockPages.c)
 *     SmKmUnlockMdl @ 0x14035DBEC (SmKmUnlockMdl.c)
 * Callees:
 *     MiWriteCompletePfn @ 0x140234120 (MiWriteCompletePfn.c)
 *     MiReleasePageFileInfo @ 0x1402D4690 (MiReleasePageFileInfo.c)
 *     MiLockPageInline @ 0x140317C20 (MiLockPageInline.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 */

void __fastcall MiUnlockStoreLockedPages(__int64 a1, __int64 a2, __int64 a3, _DWORD *SchedulerAssist)
{
  _QWORD *v4; // r14
  unsigned __int64 v6; // rdx
  unsigned int v7; // ebx
  unsigned __int64 v8; // r13
  __int64 v9; // rbp
  unsigned __int8 v10; // al
  unsigned int v11; // ecx
  unsigned __int64 v12; // r15
  unsigned __int64 v13; // rdi
  __int64 v14; // r12
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  int v17; // eax
  bool v18; // zf

  v4 = (_QWORD *)(a1 + 48);
  v6 = (*(unsigned int *)(a1 + 40) + 4095LL + (unsigned __int64)((*(_DWORD *)(a1 + 32) + *(_DWORD *)(a1 + 44)) & 0xFFF)) >> 12;
  v7 = 0;
  v8 = a1 + 48 + 8 * v6;
  do
  {
    if ( *v4 == -1LL )
      break;
    v9 = 48LL * *v4 - 0x58000000000LL;
    v10 = MiLockPageInline(v9, v6, a3, SchedulerAssist);
    v11 = v7 & 0xFFFFFFFD;
    v12 = v10;
    v7 |= 2u;
    if ( (*(_BYTE *)(v9 + 34) & 0x10) == 0 )
      v7 = v11;
    v13 = MiWriteCompletePfn(v9, v7);
    if ( v13 )
      v14 = *(_QWORD *)(qword_140C4E448 + 8 * ((*(_QWORD *)(v9 + 40) >> 39) & 0x3FFLL));
    else
      v14 = 0LL;
    _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v12 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v6 = -1LL << ((unsigned __int8)v12 + 1);
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v17 = ~(unsigned __int16)v6;
          v18 = (v17 & SchedulerAssist[5]) == 0;
          a3 = (unsigned int)v17 & SchedulerAssist[5];
          SchedulerAssist[5] = a3;
          if ( v18 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(v12);
    if ( v13 )
      MiReleasePageFileInfo(v14, v13, 0);
    ++v4;
  }
  while ( (unsigned __int64)v4 < v8 );
  *(_WORD *)(a1 + 10) &= ~2u;
}
