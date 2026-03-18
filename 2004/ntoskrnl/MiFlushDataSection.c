/*
 * XREFs of MiFlushDataSection @ 0x140265D50
 * Callers:
 *     MiCreateImageFileMap @ 0x14060C454 (MiCreateImageFileMap.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140212700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     CcFlushCachePriv @ 0x1402BEDA0 (CcFlushCachePriv.c)
 *     MmFlushSection @ 0x1402C25C4 (MmFlushSection.c)
 *     MiLockSectionControlArea @ 0x1402C280C (MiLockSectionControlArea.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiFlushDataSection(__int64 a1, _DWORD *a2)
{
  __int64 v4; // rcx
  __int64 result; // rax
  int v6; // edi
  _DWORD *SchedulerAssist; // r9
  unsigned __int8 v8; // bl
  __int64 v9; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  int v12; // eax
  bool v13; // zf
  __int128 v14; // [rsp+30h] [rbp-18h] BYREF
  unsigned __int8 v15; // [rsp+50h] [rbp+8h] BYREF

  *a2 = 0;
  v15 = 0;
  v4 = *(_QWORD *)(a1 + 40);
  v14 = 0LL;
  result = MiLockSectionControlArea(v4, 1LL, &v15);
  if ( result )
  {
    if ( *(_DWORD *)(result + 92) || *(_QWORD *)(result + 112) > 1uLL )
      *a2 = 1;
    v6 = *(_DWORD *)(result + 88);
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(result + 72));
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (CurrentIrql = KeGetCurrentIrql(), CurrentIrql <= 0xFu) )
    {
      v8 = v15;
      if ( v15 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v8 = v15;
        v12 = ~(unsigned __int16)(-1LL << (v15 + 1));
        v13 = (v12 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v12;
        if ( v13 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    else
    {
      v8 = v15;
    }
    __writecr8(v8);
    v9 = *(_QWORD *)(a1 + 40);
    if ( v6 )
    {
      CcFlushCachePriv(v9, (unsigned int)&CcFlushForImageSection, 0, 0, 0, (__int64)&v14);
      return (unsigned int)v14;
    }
    else
    {
      return MmFlushSection(v9, 0, 0, (_DWORD)SchedulerAssist, (__int64)&v14, 1);
    }
  }
  return result;
}
