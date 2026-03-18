/*
 * XREFs of MiFlushDataSection @ 0x14029E64C
 * Callers:
 *     MiCreateImageFileMap @ 0x140707E70 (MiCreateImageFileMap.c)
 * Callees:
 *     CcFlushCachePriv @ 0x140283030 (CcFlushCachePriv.c)
 *     MmFlushSection @ 0x140283C50 (MmFlushSection.c)
 *     MiLockSectionControlArea @ 0x14028494C (MiLockSectionControlArea.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiFlushDataSection(__int64 a1, _DWORD *a2)
{
  _QWORD *v4; // rcx
  __int64 result; // rax
  int v6; // edi
  __int64 SchedulerAssist; // r9
  KIRQL v8; // bl
  __int64 v9; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  int v12; // eax
  bool v13; // zf
  int v14[6]; // [rsp+30h] [rbp-18h] BYREF
  KIRQL v15; // [rsp+50h] [rbp+8h] BYREF

  *a2 = 0;
  v15 = 0;
  v4 = *(_QWORD **)(a1 + 40);
  *(_OWORD *)v14 = 0LL;
  result = MiLockSectionControlArea(v4, 1, &v15);
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
        SchedulerAssist = (__int64)CurrentPrcb->SchedulerAssist;
        v8 = v15;
        v12 = ~(unsigned __int16)(-1LL << (v15 + 1));
        v13 = (v12 & *(_DWORD *)(SchedulerAssist + 20)) == 0;
        *(_DWORD *)(SchedulerAssist + 20) &= v12;
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
      CcFlushCachePriv(v9, &CcFlushForImageSection, 0, 0LL, 0, v14);
      return (unsigned int)v14[0];
    }
    else
    {
      return MmFlushSection(v9, 0LL, 0LL, SchedulerAssist, v14, 1);
    }
  }
  return result;
}
