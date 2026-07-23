/*
 * XREFs of KiConfigureSchedulingInformation @ 0x14099C45C
 * Callers:
 *     KiInitializeDynamicProcessorDpc @ 0x1409AC520 (KiInitializeDynamicProcessorDpc.c)
 *     KiConfigureAllSchedulingInformation @ 0x140A47224 (KiConfigureAllSchedulingInformation.c)
 * Callees:
 *     KeEnumerateNextProcessor @ 0x14021E1A0 (KeEnumerateNextProcessor.c)
 *     KeQueryNodeActiveAffinity @ 0x1402DE440 (KeQueryNodeActiveAffinity.c)
 *     KiIsThreadRankNonZero @ 0x1402EF550 (KiIsThreadRankNonZero.c)
 *     KiConfigureCpuSetSchedulingInformation @ 0x1403B278C (KiConfigureCpuSetSchedulingInformation.c)
 *     KeDoesSystemHaveHeterogeneousCoreTypes @ 0x1403ED3AC (KeDoesSystemHaveHeterogeneousCoreTypes.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall KiConfigureSchedulingInformation(__int64 a1, char a2)
{
  unsigned int v2; // r9d
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // r8
  unsigned int v7; // edx
  __int64 v8; // r10
  unsigned __int64 v9; // rcx
  __int64 v10; // r10
  unsigned int v11; // edi
  unsigned __int8 CurrentIrql; // r14
  _DWORD *SchedulerAssist; // r9
  USHORT v14; // cx
  _KSHARED_READY_QUEUE *SharedReadyQueue; // rsi
  int v16; // r13d
  unsigned int v17; // ecx
  unsigned int v18; // r12d
  struct _KPRCB *v19; // rdi
  int ProcCount; // eax
  int v21; // ecx
  unsigned __int64 GroupSetMember; // rax
  __int64 NextThread; // r15
  bool IsThreadRankNonZero; // al
  char v25; // cl
  __int64 v26; // rcx
  __int64 v27; // rdx
  char v28; // al
  unsigned __int64 v29; // rcx
  unsigned __int8 v30; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v32; // r8
  int v33; // eax
  bool v34; // zf
  unsigned int v36; // [rsp+24h] [rbp-44h]
  unsigned int v37; // [rsp+28h] [rbp-40h]
  _GROUP_AFFINITY Affinity; // [rsp+38h] [rbp-30h] BYREF
  unsigned __int16 *v39; // [rsp+48h] [rbp-20h] BYREF
  unsigned __int64 Mask; // [rsp+50h] [rbp-18h]
  unsigned __int16 Group; // [rsp+58h] [rbp-10h]
  int v42; // [rsp+5Ah] [rbp-Eh]
  __int16 v43; // [rsp+5Eh] [rbp-Ah]
  USHORT Count; // [rsp+B8h] [rbp+50h] BYREF
  int v46; // [rsp+C0h] [rbp+58h] BYREF
  unsigned int v47; // [rsp+C8h] [rbp+60h]

  v2 = *(_DWORD *)(a1 + 33556);
  v42 = 0;
  v43 = 0;
  Count = 0;
  v4 = a1;
  v46 = 0;
  Affinity = 0LL;
  if ( v2 )
  {
    v5 = *(_QWORD *)(a1 + 8LL * (v2 - 1) + 33904);
    *(_QWORD *)(a1 + 33896) = v5;
  }
  else
  {
    v5 = *(_QWORD *)(a1 + 33896);
  }
  if ( !v5 )
    *(_QWORD *)(a1 + 33896) = *(_QWORD *)(a1 + 200);
  LODWORD(v6) = *(unsigned __int8 *)(a1 + 209);
  v7 = 0;
  v47 = 0;
  if ( v2 )
  {
    v8 = ~*(_QWORD *)(a1 + 33880);
    while ( (v8 & *(_QWORD *)(a1 + 8LL * v7 + 33904)) == 0 )
    {
      v47 = ++v7;
      if ( v7 >= v2 )
        goto LABEL_12;
    }
    v9 = *(_QWORD *)(a1 + 8LL * v7 + 33904);
    _BitScanForward64((unsigned __int64 *)&v6, v9);
    *(_QWORD *)(v4 + 33888) = v9;
  }
LABEL_12:
  v10 = *(_QWORD *)(v4 + 192);
  *(_DWORD *)(v4 + 33876) = v6;
  if ( !a2 && *(_DWORD *)(v4 + 36) == *(_DWORD *)(v10 + 172) )
  {
    v11 = KiMaximumSharedReadyQueueSize;
    if ( !KiMaximumSharedReadyQueueSize )
      v11 = 1;
    if ( (v11 & 0x100) != 0 )
    {
      v11 &= ~0x100u;
      if ( (unsigned int)KeDoesSystemHaveHeterogeneousCoreTypes() )
        v11 *= 2;
    }
    if ( v11 > 0x40 )
      v11 = 64;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
    }
    v14 = *(_WORD *)(v10 + 146);
    *(_QWORD *)(v10 + 152) = 0LL;
    KeQueryNodeActiveAffinity(v14, &Affinity, &Count);
    SharedReadyQueue = *(_KSHARED_READY_QUEUE **)(v4 + 33864);
    v16 = 0;
    v39 = 0LL;
    v17 = (v11 + Count - 1) / v11;
    v37 = Count / v17;
    Group = Affinity.Group;
    v36 = Count % v17;
    Mask = Affinity.Mask;
    if ( !(unsigned int)KeEnumerateNextProcessor(&v46, &v39) )
    {
      v18 = v36;
      do
      {
        v19 = (struct _KPRCB *)KiProcessorBlock[v46];
        ProcCount = SharedReadyQueue->ProcCount;
        if ( v16 == ProcCount )
          SharedReadyQueue = v19->SharedReadyQueue;
        v21 = 0;
        if ( v16 != ProcCount )
          v21 = v16;
        if ( !v21 )
        {
          SharedReadyQueue->ProcCount = v37;
          if ( v18 )
          {
            --v18;
            SharedReadyQueue->ProcCount = v37 + 1;
          }
        }
        GroupSetMember = v19->GroupSetMember;
        v16 = v21 + 1;
        v19->SharedReadyQueue = SharedReadyQueue;
        SharedReadyQueue->Affinity |= GroupSetMember;
        NextThread = (__int64)v19->NextThread;
        v47 = v19->GroupIndex - SharedReadyQueue->LowProcIndex;
        v19->PriorityState = &SharedReadyQueue->RunningSummary[v47];
        if ( !NextThread )
          NextThread = (__int64)v19->CurrentThread;
        IsThreadRankNonZero = KiIsThreadRankNonZero(NextThread, v19);
        v25 = 1;
        if ( !IsThreadRankNonZero )
          v25 = *(_BYTE *)(NextThread + 195);
        *v19->PriorityState = v25;
      }
      while ( !(unsigned int)KeEnumerateNextProcessor(&v46, &v39) );
      v4 = a1;
    }
    Group = Affinity.Group;
    Mask = Affinity.Mask;
    v39 = 0LL;
    while ( !(unsigned int)KeEnumerateNextProcessor(&v46, &v39) )
    {
      v26 = KiProcessorBlock[v46];
      v27 = *(_QWORD *)(v26 + 33864);
      if ( *(_BYTE *)(v27 + 595) > 1u )
        *(_QWORD *)(v26 + 33856) = *(_QWORD *)(v27 + 600);
      v28 = *(_BYTE *)(v26 + 209);
      if ( v28 == *(_BYTE *)(v27 + 593) && *(_BYTE *)(v27 + 595) > 1u )
      {
        *(_DWORD *)(v26 + 33872) = 1;
        *(_BYTE *)(v27 + 596) = v28;
        _BitScanReverse64(&v29, *(_QWORD *)(v27 + 600));
        v47 = v29;
        *(_BYTE *)(v27 + 592) = v29 - *(_BYTE *)(v27 + 593) + 1;
      }
    }
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v30 = KeGetCurrentIrql();
        if ( v30 <= 0xFu && CurrentIrql <= 0xFu && v30 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v32 = CurrentPrcb->SchedulerAssist;
          v33 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v34 = (v33 & v32[5]) == 0;
          v32[5] &= v33;
          if ( v34 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8(CurrentIrql);
  }
  return KiConfigureCpuSetSchedulingInformation(v4);
}
