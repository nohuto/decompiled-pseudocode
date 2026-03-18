/*
 * XREFs of MiUnlockStoreLockedPages @ 0x14030FA40
 * Callers:
 *     SmKmUnlockMdl @ 0x14032009C (SmKmUnlockMdl.c)
 *     MmStoreProbeAndLockPages @ 0x1403458AC (MmStoreProbeAndLockPages.c)
 * Callees:
 *     MiWriteCompletePfn @ 0x14028D170 (MiWriteCompletePfn.c)
 *     MiLockPageInline @ 0x140346F60 (MiLockPageInline.c)
 *     MiReleasePageFileInfo @ 0x14034EFC0 (MiReleasePageFileInfo.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiUnlockStoreLockedPages(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 *v3; // r14
  unsigned __int64 v5; // rdx
  unsigned int v6; // ebx
  unsigned __int64 v7; // r13
  __int64 result; // rax
  ULONG_PTR v9; // rbp
  unsigned __int8 v10; // al
  unsigned int v11; // ecx
  unsigned __int64 v12; // r15
  __int64 v13; // rdi
  __int64 v14; // r12
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v17; // zf

  v3 = (__int64 *)(a1 + 48);
  v5 = (*(unsigned int *)(a1 + 40) + 4095LL + (unsigned __int64)((*(_DWORD *)(a1 + 32) + *(_DWORD *)(a1 + 44)) & 0xFFF)) >> 12;
  v6 = 0;
  v7 = a1 + 48 + 8 * v5;
  do
  {
    result = *v3;
    if ( *v3 == -1 )
      break;
    v9 = 48 * result - 0x58000000000LL;
    v10 = MiLockPageInline(v9, v5, a3);
    v11 = v6 & 0xFFFFFFFD;
    v12 = v10;
    v6 |= 2u;
    if ( (*(_BYTE *)(v9 + 34) & 0x10) == 0 )
      v6 = v11;
    v13 = MiWriteCompletePfn(v9, v6);
    if ( v13 )
      v14 = *(_QWORD *)(qword_140C4E588 + 8 * ((*(_QWORD *)(v9 + 40) >> 39) & 0x3FFLL));
    else
      v14 = 0LL;
    _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    result = (unsigned int)KiIrqlFlags;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        result = KeGetCurrentIrql();
        if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v12 <= 0xFu && (unsigned __int8)result >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v5 = -1LL << ((unsigned __int8)v12 + 1);
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          result = ~(unsigned __int16)v5;
          v17 = ((unsigned int)result & SchedulerAssist[5]) == 0;
          a3 = (unsigned int)result & SchedulerAssist[5];
          SchedulerAssist[5] = a3;
          if ( v17 )
            result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(v12);
    if ( v13 )
      result = MiReleasePageFileInfo(v14, v13, 0LL);
    ++v3;
  }
  while ( (unsigned __int64)v3 < v7 );
  *(_WORD *)(a1 + 10) &= ~2u;
  return result;
}
