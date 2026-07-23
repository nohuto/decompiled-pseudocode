/*
 * XREFs of MiReferenceExistingControlArea @ 0x140262384
 * Callers:
 *     MiCreateImageOrDataSection @ 0x14071E2F0 (MiCreateImageOrDataSection.c)
 * Callees:
 *     MiLockSectionControlArea @ 0x1402628E4 (MiLockSectionControlArea.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140346AD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiValidateControlAreaPartition @ 0x140361F84 (MiValidateControlAreaPartition.c)
 *     MiReleaseControlAreaWaiters @ 0x140361FD4 (MiReleaseControlAreaWaiters.c)
 *     MiReferenceActiveControlArea @ 0x140362098 (MiReferenceActiveControlArea.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiReferenceExistingControlArea(__int64 a1)
{
  __int64 v1; // rax
  __int64 v3; // rax
  volatile LONG *v4; // rbx
  int v5; // esi
  __int64 v6; // r11
  __int64 active; // rdi
  unsigned __int8 v8; // bl
  unsigned __int8 v10; // al
  unsigned __int8 v11; // bl
  struct _KPRCB *v12; // r10
  _DWORD *v13; // r8
  int v14; // eax
  bool v15; // zf
  unsigned __int8 v16; // cl
  struct _KPRCB *v17; // r10
  _DWORD *v18; // r8
  int v19; // eax
  unsigned __int8 CurrentIrql; // al
  unsigned __int8 v21; // bl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r8
  int v24; // eax
  unsigned __int8 v25; // [rsp+30h] [rbp+8h] BYREF

  v1 = *(_QWORD *)(a1 + 48);
  v25 = 0;
  v3 = MiLockSectionControlArea(*(_QWORD *)(v1 + 40), (*(_BYTE *)(a1 + 19) & 1) == 0, &v25);
  if ( !v3 )
    return 3221225473LL;
  v4 = (volatile LONG *)(v3 + 72);
  if ( (*(_DWORD *)(v3 + 56) & 3) != 0 )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel(v4);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (CurrentIrql = KeGetCurrentIrql(), CurrentIrql <= 0xFu) )
    {
      v21 = v25;
      if ( v25 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v21 = v25;
        v24 = ~(unsigned __int16)(-1LL << (v25 + 1));
        v15 = (v24 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v24;
        if ( v15 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    else
    {
      v21 = v25;
    }
    __writecr8(v21);
    return 3221225473LL;
  }
  v5 = MiValidateControlAreaPartition(a1, v3);
  if ( v5 < 0 )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel(v4);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (v10 = KeGetCurrentIrql(), v10 <= 0xFu) )
    {
      v11 = v25;
      if ( v25 <= 0xFu && v10 >= 2u )
      {
        v12 = KeGetCurrentPrcb();
        v13 = v12->SchedulerAssist;
        v11 = v25;
        v14 = ~(unsigned __int16)(-1LL << (v25 + 1));
        v15 = (v14 & v13[5]) == 0;
        v13[5] &= v14;
        if ( v15 )
          KiRemoveSystemWorkPriorityKick(v12);
      }
    }
    else
    {
      v11 = v25;
    }
    __writecr8(v11);
    return (unsigned int)v5;
  }
  else
  {
    active = MiReferenceActiveControlArea(a1, v6);
    ExReleaseSpinLockExclusiveFromDpcLevel(v4);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (v16 = KeGetCurrentIrql(), v16 <= 0xFu) )
    {
      v8 = v25;
      if ( v25 <= 0xFu && v16 >= 2u )
      {
        v17 = KeGetCurrentPrcb();
        v18 = v17->SchedulerAssist;
        v8 = v25;
        v19 = ~(unsigned __int16)(-1LL << (v25 + 1));
        v15 = (v19 & v18[5]) == 0;
        v18[5] &= v19;
        if ( v15 )
          KiRemoveSystemWorkPriorityKick(v17);
      }
    }
    else
    {
      v8 = v25;
    }
    __writecr8(v8);
    MiReleaseControlAreaWaiters(active);
    return 0LL;
  }
}
