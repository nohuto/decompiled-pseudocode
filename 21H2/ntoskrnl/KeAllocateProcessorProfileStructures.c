/*
 * XREFs of KeAllocateProcessorProfileStructures @ 0x1403B6640
 * Callers:
 *     EmonCompleteInitializeProfiling @ 0x1409A0BA0 (EmonCompleteInitializeProfiling.c)
 * Callees:
 *     KiIsIntelPebsSupported @ 0x1403B67F8 (KiIsIntelPebsSupported.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x140414300 (memset.c)
 *     MmAllocateIndependentPages @ 0x140762BB0 (MmAllocateIndependentPages.c)
 *     MmFreeIndependentPages @ 0x140764790 (MmFreeIndependentPages.c)
 *     MmCreateShadowMapping @ 0x1407A02AC (MmCreateShadowMapping.c)
 *     MmDeleteShadowMapping @ 0x1408D1AC4 (MmDeleteShadowMapping.c)
 */

__int64 __fastcall KeAllocateProcessorProfileStructures(
        unsigned int a1,
        __int64 a2,
        _PROCESSOR_PROFILE_CONTROL_AREA **a3,
        char a4)
{
  unsigned __int8 CurrentIrql; // di
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 v8; // r12
  size_t v9; // rsi
  char *IndependentPages; // rbx
  __int64 v11; // r8
  _PROCESSOR_PROFILE_CONTROL_AREA *v12; // r10
  _PROCESSOR_PROFILE_CONTROL_AREA *v13; // rax
  unsigned __int64 *PebsGpCounterReset; // rax
  unsigned int v15; // r14d
  _DWORD *SchedulerAssist; // r9
  unsigned __int8 v17; // al
  struct _KPRCB *v18; // r9
  _DWORD *v19; // r8
  int v20; // eax
  bool v21; // zf
  _DWORD *v22; // r9
  unsigned __int8 v23; // cl
  struct _KPRCB *v24; // r9
  _DWORD *v25; // r8
  int v26; // eax
  char v29; // [rsp+78h] [rbp+20h]

  CurrentIrql = KeGetCurrentIrql();
  if ( !a4 )
  {
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      SchedulerAssist[5] |= (-1LL << (CurrentIrql + 1)) & 4;
    }
    CurrentPrcb = KeGetCurrentPrcb();
    CurrentPrcb->ProcessorProfileControlArea = *a3;
    CurrentPrcb->ProfileEventIndexAddress = &(*a3)->PebsDsSaveArea.As64Bit.PebsIndex;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v17 = KeGetCurrentIrql();
        if ( v17 <= 0xFu && CurrentIrql <= 0xFu && v17 >= 2u )
        {
          v18 = KeGetCurrentPrcb();
          v19 = v18->SchedulerAssist;
          v20 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v21 = (v20 & v19[5]) == 0;
          v19[5] &= v20;
          if ( v21 )
            KiRemoveSystemWorkPriorityKick(v18);
        }
      }
    }
    __writecr8(CurrentIrql);
    return 0LL;
  }
  *a3 = 0LL;
  v29 = 0;
  v8 = a1;
  v9 = a2 * a1 + 160LL * a1;
  if ( KiKvaShadow )
    v9 = (v9 + 4095) & 0xFFFFFFFFFFFFF000uLL;
  IndependentPages = (char *)MmAllocateIndependentPages(v9, 0LL);
  if ( IndependentPages )
  {
    memset(IndependentPages, 0, v9);
    if ( !KiKvaShadow )
      goto LABEL_11;
    if ( (unsigned int)MmCreateShadowMapping(IndependentPages, v9) )
    {
      v29 = 1;
LABEL_11:
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
      {
        v22 = KeGetCurrentPrcb()->SchedulerAssist;
        v22[5] |= (-1 << (CurrentIrql + 1)) & 4;
      }
      if ( (unsigned __int8)KiIsIntelPebsSupported(KeGetCurrentPrcb()) )
      {
        v13 = *(_PROCESSOR_PROFILE_CONTROL_AREA **)(v11 + 33944);
        if ( v13 )
        {
          *a3 = v13;
          v15 = -1073741302;
        }
        else
        {
          if ( a1 )
          {
            PebsGpCounterReset = v12->PebsDsSaveArea.As32Bit.PebsGpCounterReset;
            do
            {
              *PebsGpCounterReset = (unsigned __int64)IndependentPages;
              IndependentPages += a2;
              PebsGpCounterReset += 20;
              --v8;
            }
            while ( v8 );
          }
          IndependentPages = 0LL;
          *a3 = v12;
          v15 = 0;
        }
      }
      else
      {
        v15 = -1073741637;
      }
      goto LABEL_18;
    }
    v15 = -1073741670;
  }
  else
  {
    v15 = -1073741801;
  }
LABEL_18:
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v23 = KeGetCurrentIrql();
      if ( v23 <= 0xFu && CurrentIrql <= 0xFu && v23 >= 2u )
      {
        v24 = KeGetCurrentPrcb();
        v25 = v24->SchedulerAssist;
        v26 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v21 = (v26 & v25[5]) == 0;
        v25[5] &= v26;
        if ( v21 )
          KiRemoveSystemWorkPriorityKick(v24);
      }
    }
  }
  __writecr8(CurrentIrql);
  if ( IndependentPages )
  {
    if ( v29 )
      MmDeleteShadowMapping(IndependentPages, v9);
    MmFreeIndependentPages(IndependentPages, v9);
  }
  return v15;
}
