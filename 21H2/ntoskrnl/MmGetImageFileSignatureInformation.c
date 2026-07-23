/*
 * XREFs of MmGetImageFileSignatureInformation @ 0x1402622E0
 * Callers:
 *     <none>
 * Callees:
 *     MiLockSectionControlArea @ 0x1402628E4 (MiLockSectionControlArea.c)
 *     MiDereferenceControlAreaBySection @ 0x14031F7BC (MiDereferenceControlAreaBySection.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140346AD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiRemoveUnusedSegment @ 0x1403620F8 (MiRemoveUnusedSegment.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

char __fastcall MmGetImageFileSignatureInformation(__int64 a1)
{
  __int64 v1; // rcx
  char v2; // bl
  __int64 v3; // rax
  __int64 v4; // rdi
  unsigned __int8 v6; // bl
  unsigned __int8 v7; // al
  struct _KPRCB *v8; // r10
  _DWORD *v9; // r8
  int v10; // eax
  bool v11; // zf
  unsigned __int8 CurrentIrql; // al
  unsigned __int8 v13; // di
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r8
  int v16; // eax
  unsigned __int8 v17; // [rsp+30h] [rbp+8h] BYREF

  v1 = *(_QWORD *)(a1 + 40);
  v2 = 0;
  v17 = 0;
  if ( !v1 )
    return 0;
  v3 = MiLockSectionControlArea(v1, 0LL, &v17);
  v4 = v3;
  if ( !v3 )
    return 0;
  if ( (*(_DWORD *)(v3 + 56) & 3) != 0 )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v3 + 72));
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (CurrentIrql = KeGetCurrentIrql(), CurrentIrql <= 0xFu) )
    {
      v13 = v17;
      if ( v17 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v13 = v17;
        v16 = ~(unsigned __int16)(-1LL << (v17 + 1));
        v11 = (v16 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v16;
        if ( v11 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    else
    {
      v13 = v17;
    }
    __writecr8(v13);
  }
  else
  {
    ++*(_QWORD *)(v3 + 24);
    MiRemoveUnusedSegment(v3);
    ++*(_QWORD *)(v4 + 48);
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v4 + 72));
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (v7 = KeGetCurrentIrql(), v7 <= 0xFu) )
    {
      v6 = v17;
      if ( v17 <= 0xFu && v7 >= 2u )
      {
        v8 = KeGetCurrentPrcb();
        v9 = v8->SchedulerAssist;
        v6 = v17;
        v10 = ~(unsigned __int16)(-1LL << (v17 + 1));
        v11 = (v10 & v9[5]) == 0;
        v9[5] &= v10;
        if ( v11 )
          KiRemoveSystemWorkPriorityKick(v8);
      }
    }
    else
    {
      v6 = v17;
    }
    __writecr8(v6);
    v2 = *(_BYTE *)(*(_QWORD *)v4 + 15LL) >> 4;
    MiDereferenceControlAreaBySection(v4, 1LL);
  }
  return v2;
}
