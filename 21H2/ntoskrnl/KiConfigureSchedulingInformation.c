/*
 * XREFs of KiConfigureSchedulingInformation @ 0x140A59154
 * Callers:
 *     KiInitializeDynamicProcessorDpc @ 0x140A69470 (KiInitializeDynamicProcessorDpc.c)
 *     KiConfigureAllSchedulingInformation @ 0x140B03BA8 (KiConfigureAllSchedulingInformation.c)
 * Callees:
 *     KiQuerySubNodeActiveAffinity @ 0x14026428C (KiQuerySubNodeActiveAffinity.c)
 *     KeEnumerateNextProcessor @ 0x140294050 (KeEnumerateNextProcessor.c)
 *     KiConfigureCpuSetSchedulingInformation @ 0x1403C1214 (KiConfigureCpuSetSchedulingInformation.c)
 *     KiInitializePriorityState @ 0x1403C1398 (KiInitializePriorityState.c)
 *     KeDoesSystemHaveHeterogeneousCoreTypes @ 0x1403DF52C (KeDoesSystemHaveHeterogeneousCoreTypes.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall KiConfigureSchedulingInformation(__int64 a1, char a2)
{
  __int64 v2; // rdi
  __int64 v4; // rbx
  unsigned int v5; // r9d
  __int64 v6; // r13
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // r8
  unsigned int v12; // edx
  __int64 v13; // r11
  __int64 v14; // r10
  __int64 v15; // rcx
  __int64 v16; // rcx
  unsigned __int64 v17; // rcx
  unsigned int v19; // r10d
  struct _KPRCB *v20; // rdx
  unsigned __int64 GroupSetMember; // rax
  int v22; // r14d
  __int64 NextThread; // r8
  _KPRIORITY_STATE *v24; // rcx
  __int64 v25; // rcx
  __int64 v26; // rdx
  char v27; // al
  unsigned __int64 v28; // rcx
  unsigned __int8 CurrentIrql; // si
  _DWORD *SchedulerAssist; // r9
  unsigned int v31; // r8d
  _KSHARED_READY_QUEUE *SharedReadyQueue; // rdi
  unsigned int v33; // ecx
  int v34; // r12d
  int v35; // r13d
  unsigned __int8 v36; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v38; // r8
  int v39; // eax
  bool v40; // zf
  __int128 v41; // [rsp+30h] [rbp-38h] BYREF
  unsigned __int16 *v42; // [rsp+40h] [rbp-28h] BYREF
  __int64 v43; // [rsp+48h] [rbp-20h]
  __int16 v44; // [rsp+50h] [rbp-18h]
  int v45; // [rsp+52h] [rbp-16h]
  __int16 v46; // [rsp+56h] [rbp-12h]
  unsigned __int16 v48; // [rsp+B8h] [rbp+50h] BYREF
  int v49; // [rsp+C0h] [rbp+58h] BYREF
  unsigned int v50; // [rsp+C8h] [rbp+60h]

  v2 = *(_QWORD *)(a1 + 192);
  v4 = a1;
  v45 = 0;
  v46 = 0;
  v48 = 0;
  v49 = 0;
  v41 = 0LL;
  KiQuerySubNodeActiveAffinity(v2, (__int64)&v41, &v48);
  v5 = *(_DWORD *)(v4 + 34452);
  v6 = v41;
  if ( v5 )
  {
    v7 = *(unsigned __int8 *)(v4 + 208);
    v8 = v4 + 264LL * (v5 - 1);
    if ( (unsigned __int16)v7 >= *(_WORD *)(v8 + 40632) )
      v9 = 0LL;
    else
      v9 = *(_QWORD *)(v8 + 8 * v7 + 40640);
    v10 = v41 & v9;
    *(_QWORD *)(v4 + 34928) = v10;
  }
  else
  {
    v10 = *(_QWORD *)(v4 + 34928);
  }
  if ( !v10 )
    *(_QWORD *)(v4 + 34928) = *(_QWORD *)(v4 + 200);
  LODWORD(v11) = *(unsigned __int8 *)(v4 + 209);
  v12 = 0;
  v50 = 0;
  if ( v5 )
  {
    v13 = *(unsigned __int8 *)(v4 + 208);
    v14 = ~*(_QWORD *)(v4 + 34912);
    while ( 1 )
    {
      v15 = v4 + 264LL * v12;
      v16 = (unsigned __int16)v13 >= *(_WORD *)(v15 + 40632) ? 0LL : *(_QWORD *)(v15 + 8 * v13 + 40640);
      v17 = v6 & v16;
      if ( (v14 & v17) != 0 )
        break;
      v50 = ++v12;
      if ( v12 >= v5 )
        goto LABEL_15;
    }
    _BitScanForward64((unsigned __int64 *)&v11, v17);
    *(_QWORD *)(v4 + 34920) = v17;
  }
LABEL_15:
  *(_DWORD *)(v4 + 34900) = v11;
  if ( a2 || *(_DWORD *)(v4 + 36) != *(_DWORD *)(v2 + 176) )
    return KiConfigureCpuSetSchedulingInformation(v4);
  v19 = KiMaximumSharedReadyQueueSize;
  if ( KiMaximumSharedReadyQueueSize )
  {
    if ( (KiMaximumSharedReadyQueueSize & 0x100) != 0 && (unsigned int)KeDoesSystemHaveHeterogeneousCoreTypes() )
      v19 *= 2;
    if ( v19 > 0x40 )
      v19 = 64;
  }
  else
  {
    v19 = 1;
  }
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    v6 = v41;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
  }
  v31 = v48;
  *(_QWORD *)(v2 + 152) = 0LL;
  SharedReadyQueue = *(_KSHARED_READY_QUEUE **)(v4 + 34888);
  v22 = 0;
  v43 = v6;
  v42 = 0LL;
  v33 = (v19 + v31 - 1) / v19;
  v34 = v31 / v33;
  v35 = v31 % v33;
  v44 = WORD4(v41);
  while ( !(unsigned int)KeEnumerateNextProcessor(&v49, &v42) )
  {
    v20 = (struct _KPRCB *)KiProcessorBlock[v49];
    if ( v22 == SharedReadyQueue->ProcCount )
    {
      SharedReadyQueue = v20->SharedReadyQueue;
      v22 = 0;
    }
    else if ( v22 )
    {
      goto LABEL_28;
    }
    SharedReadyQueue->ProcCount = v34;
    if ( v35 )
    {
      --v35;
      SharedReadyQueue->ProcCount = v34 + 1;
    }
LABEL_28:
    GroupSetMember = v20->GroupSetMember;
    ++v22;
    v20->SharedReadyQueue = SharedReadyQueue;
    SharedReadyQueue->Affinity |= GroupSetMember;
    NextThread = (__int64)v20->NextThread;
    v50 = v20->GroupIndex - SharedReadyQueue->LowProcIndex;
    v24 = &SharedReadyQueue->RunningSummary[v50];
    v20->PriorityState = v24;
    if ( !NextThread )
      NextThread = (__int64)v20->CurrentThread;
    KiInitializePriorityState(v24, v20, NextThread);
  }
  v42 = 0LL;
  v44 = WORD4(v41);
  v43 = v41;
  while ( !(unsigned int)KeEnumerateNextProcessor(&v49, &v42) )
  {
    v25 = KiProcessorBlock[v49];
    v26 = *(_QWORD *)(v25 + 34888);
    if ( *(_BYTE *)(v26 + 660) > 1u )
      *(_QWORD *)(v25 + 34880) = *(_QWORD *)(v26 + 664);
    v27 = *(_BYTE *)(v25 + 209);
    if ( v27 == *(_BYTE *)(v26 + 657) && *(_BYTE *)(v26 + 660) > 1u )
    {
      *(_DWORD *)(v25 + 34896) = 1;
      *(_BYTE *)(v26 + 661) = v27;
      _BitScanReverse64(&v28, *(_QWORD *)(v26 + 664));
      v50 = v28;
      *(_BYTE *)(v26 + 656) = v28 - *(_BYTE *)(v26 + 657) + 1;
    }
  }
  v4 = a1;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v36 = KeGetCurrentIrql();
      if ( v36 <= 0xFu && CurrentIrql <= 0xFu && v36 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v38 = CurrentPrcb->SchedulerAssist;
        v39 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v40 = (v39 & v38[5]) == 0;
        v38[5] &= v39;
        if ( v40 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(CurrentIrql);
  return KiConfigureCpuSetSchedulingInformation(v4);
}
