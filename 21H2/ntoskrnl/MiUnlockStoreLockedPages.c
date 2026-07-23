/*
 * XREFs of MiUnlockStoreLockedPages @ 0x14023DBF0
 * Callers:
 *     MmStoreProbeAndLockPages @ 0x140235900 (MmStoreProbeAndLockPages.c)
 *     SmKmUnlockMdl @ 0x14024E76C (SmKmUnlockMdl.c)
 * Callees:
 *     MiReleasePageFileInfo @ 0x140255C50 (MiReleasePageFileInfo.c)
 *     MiLockPageInline @ 0x14030AB80 (MiLockPageInline.c)
 *     MiWriteCompletePfn @ 0x1403309D0 (MiWriteCompletePfn.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiUnlockStoreLockedPages(__int64 a1)
{
  __int64 *v1; // r14
  unsigned int v3; // ebx
  unsigned __int64 v4; // r13
  __int64 result; // rax
  __int64 v6; // rbp
  unsigned __int8 v7; // al
  unsigned int v8; // ecx
  unsigned __int64 v9; // r15
  __int64 v10; // rdi
  __int64 v11; // r12
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v14; // zf

  v1 = (__int64 *)(a1 + 48);
  v3 = 0;
  v4 = a1
     + 48
     + 8
     * ((*(unsigned int *)(a1 + 40) + 4095LL + (unsigned __int64)((*(_DWORD *)(a1 + 32) + *(_DWORD *)(a1 + 44)) & 0xFFF)) >> 12);
  do
  {
    result = *v1;
    if ( *v1 == -1 )
      break;
    v6 = 48 * result - 0x58000000000LL;
    v7 = MiLockPageInline(v6);
    v8 = v3 & 0xFFFFFFFD;
    v9 = v7;
    v3 |= 2u;
    if ( (*(_BYTE *)(v6 + 34) & 0x10) == 0 )
      v3 = v8;
    v10 = MiWriteCompletePfn(v6, v3);
    if ( v10 )
      v11 = *(_QWORD *)(qword_140C4E688 + 8 * ((*(_QWORD *)(v6 + 40) >> 39) & 0x3FFLL));
    else
      v11 = 0LL;
    _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    result = (unsigned int)KiIrqlFlags;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        result = KeGetCurrentIrql();
        if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v9 <= 0xFu && (unsigned __int8)result >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v9 + 1));
          v14 = ((unsigned int)result & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= result;
          if ( v14 )
            result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(v9);
    if ( v10 )
      result = MiReleasePageFileInfo(v11, v10, 0LL);
    ++v1;
  }
  while ( (unsigned __int64)v1 < v4 );
  *(_WORD *)(a1 + 10) &= ~2u;
  return result;
}
