/*
 * XREFs of MiUnlockStoreLockedPages @ 0x1402BF7A0
 * Callers:
 *     MmStoreProbeAndLockPages @ 0x1402B7720 (MmStoreProbeAndLockPages.c)
 *     SmKmUnlockMdl @ 0x1402D03EC (SmKmUnlockMdl.c)
 * Callees:
 *     MiReleasePageFileInfo @ 0x140267CB0 (MiReleasePageFileInfo.c)
 *     MiLockPageInline @ 0x1402FFE30 (MiLockPageInline.c)
 *     MiWriteCompletePfn @ 0x140325C80 (MiWriteCompletePfn.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

void __fastcall MiUnlockStoreLockedPages(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v3; // r14
  unsigned __int64 v5; // rdx
  unsigned int v6; // ebx
  unsigned __int64 v7; // r13
  ULONG_PTR v8; // rbp
  unsigned __int8 v9; // al
  unsigned int v10; // ecx
  unsigned __int64 v11; // r15
  unsigned __int64 v12; // rdi
  __int64 v13; // r12
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v17; // eax
  bool v18; // zf

  v3 = (_QWORD *)(a1 + 48);
  v5 = (*(unsigned int *)(a1 + 40) + 4095LL + (unsigned __int64)((*(_DWORD *)(a1 + 32) + *(_DWORD *)(a1 + 44)) & 0xFFF)) >> 12;
  v6 = 0;
  v7 = a1 + 48 + 8 * v5;
  do
  {
    if ( *v3 == -1LL )
      break;
    v8 = 48LL * *v3 - 0x58000000000LL;
    v9 = MiLockPageInline(v8, v5, a3);
    v10 = v6 & 0xFFFFFFFD;
    v11 = v9;
    v6 |= 2u;
    if ( (*(_BYTE *)(v8 + 34) & 0x10) == 0 )
      v6 = v10;
    v12 = MiWriteCompletePfn(v8);
    if ( v12 )
      v13 = *(_QWORD *)(qword_140C4E648 + 8 * ((*(_QWORD *)(v8 + 40) >> 39) & 0x3FFLL));
    else
      v13 = 0LL;
    _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v11 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v5 = -1LL << ((unsigned __int8)v11 + 1);
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v17 = ~(unsigned __int16)v5;
          v18 = (v17 & SchedulerAssist[5]) == 0;
          a3 = (unsigned int)v17 & SchedulerAssist[5];
          SchedulerAssist[5] = a3;
          if ( v18 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(v11);
    if ( v12 )
      MiReleasePageFileInfo(v13, v12, 0);
    ++v3;
  }
  while ( (unsigned __int64)v3 < v7 );
  *(_WORD *)(a1 + 10) &= ~2u;
}
