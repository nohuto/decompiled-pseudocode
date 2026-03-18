/*
 * XREFs of KxEnableOptionalXStateFeatures @ 0x140570394
 * Callers:
 *     KeEnableOptionalXStateFeaturesApc @ 0x14056FB90 (KeEnableOptionalXStateFeaturesApc.c)
 *     KiEnableOptionalXStateFeatures @ 0x14056FE5C (KiEnableOptionalXStateFeatures.c)
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x140435E00 (memset.c)
 *     KeCopyXfdMaskToTeb @ 0x14056FA60 (KeCopyXfdMaskToTeb.c)
 */

__int64 __fastcall KxEnableOptionalXStateFeatures(__int64 a1, __int64 a2, __int64 a3, struct _KPRCB *SchedulerAssist)
{
  _BYTE *v4; // r14
  void *v5; // r11
  unsigned __int8 CurrentIrql; // bl
  unsigned __int8 v10; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v12; // r8
  int v13; // eax
  bool v14; // zf
  int v15; // eax
  size_t v16; // r8
  char v17; // al
  __int64 v18; // rbp
  unsigned __int64 v19; // rax
  __int64 v20; // rdx
  unsigned __int8 v21; // al
  int v22; // eax

  v4 = SchedulerAssist;
  v5 = (void *)a3;
  if ( *(_QWORD *)(*(_QWORD *)(a1 + 544) + 1408LL) )
    return 3221225659LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = (struct _KPRCB *)KeGetCurrentPrcb()->SchedulerAssist;
    a3 = (-1 << (CurrentIrql + 1)) & 4u | HIDWORD(SchedulerAssist->NextThread);
    HIDWORD(SchedulerAssist->NextThread) = a3;
  }
  if ( (a2 & *(_QWORD *)(a1 + 1064)) != 0 )
  {
    v15 = *(_DWORD *)(a1 + 116);
    if ( (v15 & 0x800000) != 0 )
    {
      v17 = 0;
    }
    else
    {
      v16 = (unsigned int)KeDecoupledStateSaveAreaLength;
      *(_DWORD *)(a1 + 116) = v15 | 0x800000;
      *(_QWORD *)(a1 + 96) = v5;
      memset(v5, 0, v16);
      v17 = 1;
    }
    *v4 = v17;
    *(_QWORD *)(a1 + 592) |= a2;
    v18 = ~a2;
    *(_QWORD *)(a1 + 1064) &= v18;
    v19 = v18 & __readmsr(0x1C4u);
    v20 = HIDWORD(v19);
    __writemsr(0x1C4u, v19);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v21 = KeGetCurrentIrql();
        if ( v21 <= 0xFu && CurrentIrql <= 0xFu && v21 >= 2u )
        {
          SchedulerAssist = KeGetCurrentPrcb();
          a3 = (__int64)SchedulerAssist->SchedulerAssist;
          v22 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v14 = (v22 & *(_DWORD *)(a3 + 20)) == 0;
          v20 = (unsigned int)v22 & *(_DWORD *)(a3 + 20);
          *(_DWORD *)(a3 + 20) = v20;
          if ( v14 )
            KiRemoveSystemWorkPriorityKick((__int64)SchedulerAssist);
        }
      }
    }
    __writecr8(CurrentIrql);
    KeCopyXfdMaskToTeb((_QWORD *)a1, v20, a3, SchedulerAssist);
  }
  else
  {
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v10 = KeGetCurrentIrql();
        if ( v10 <= 0xFu && CurrentIrql <= 0xFu && v10 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v12 = CurrentPrcb->SchedulerAssist;
          v13 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v14 = (v13 & v12[5]) == 0;
          v12[5] &= v13;
          if ( v14 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8(CurrentIrql);
    *v4 = 0;
  }
  return 0LL;
}
