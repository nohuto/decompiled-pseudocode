/*
 * XREFs of KeApplyWobBamQos @ 0x14030F970
 * Callers:
 *     PsImpersonateContainerOfThread @ 0x14030F330 (PsImpersonateContainerOfThread.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x1402F32E0 (KeYieldProcessorEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     KeCheckAndApplyBamQos @ 0x14045AAC0 (KeCheckAndApplyBamQos.c)
 *     KeSetThreadBamQosLevel @ 0x14045AB80 (KeSetThreadBamQosLevel.c)
 */

__int64 __fastcall KeApplyWobBamQos(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _KPRCB *CurrentPrcb; // rdi
  __int64 SchedulerAssist; // rdx
  unsigned int v9; // edi
  unsigned int v10; // ecx
  struct _KPRCB *v11; // rcx
  _DWORD *v12; // rdx
  unsigned int v13; // ecx
  __int64 result; // rax
  _DWORD *v15; // rcx
  _DWORD *v16; // rcx
  int v17; // eax
  int v18; // eax
  int v19; // eax
  struct _KPRCB *v20; // rbp
  _DWORD *v21; // rcx
  int v22; // eax
  _DWORD *v23; // rcx
  int v24; // eax
  _DWORD *v25; // rcx
  int v26; // eax
  struct _KPRCB *v27; // rcx
  _DWORD *v28; // rdx
  int v29; // eax
  int v30; // eax
  int v31; // [rsp+48h] [rbp+10h] BYREF
  int v32; // [rsp+50h] [rbp+18h] BYREF

  CurrentPrcb = KeGetCurrentPrcb();
  v31 = 0;
  SchedulerAssist = (__int64)CurrentPrcb->SchedulerAssist;
  if ( SchedulerAssist )
  {
    if ( CurrentPrcb->NestingLevel <= 1u )
    {
      v17 = *(_DWORD *)(SchedulerAssist + 24);
      *(_DWORD *)(SchedulerAssist + 24) = v17 + 1;
      if ( v17 == -1 )
LABEL_13:
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a2 + 64), 0LL) )
  {
    v15 = CurrentPrcb->SchedulerAssist;
    if ( v15 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v18 = v15[6] - 1;
        v15[6] = v18;
        if ( !v18 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    do
      KeYieldProcessorEx(&v31, SchedulerAssist, a3, a4);
    while ( *(_QWORD *)(a2 + 64) );
    v16 = CurrentPrcb->SchedulerAssist;
    if ( v16 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v19 = v16[6];
        v16[6] = v19 + 1;
        if ( v19 == -1 )
          goto LABEL_13;
      }
    }
  }
  v9 = (unsigned __int8)*(_DWORD *)(a3 + 512);
  v10 = (unsigned __int8)*(_DWORD *)(a2 + 512);
  if ( v9 != v10 && (v9 == 3 || v10 == 3 || v9 < v10) )
  {
    v20 = KeGetCurrentPrcb();
    v32 = 0;
    v21 = v20->SchedulerAssist;
    if ( v21 )
    {
      if ( v20->NestingLevel <= 1u )
      {
        v22 = v21[6];
        v21[6] = v22 + 1;
        if ( v22 == -1 )
LABEL_26:
          KiRemoveSystemWorkPriorityKick(v20);
      }
    }
    while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 48), 0LL) )
    {
      v23 = v20->SchedulerAssist;
      if ( v23 )
      {
        if ( v20->NestingLevel <= 1u )
        {
          v24 = v23[6] - 1;
          v23[6] = v24;
          if ( !v24 )
            KiRemoveSystemWorkPriorityKick(v20);
        }
      }
      do
        KeYieldProcessorEx(&v32, SchedulerAssist, a3, a4);
      while ( *(_QWORD *)(a1 + 48) );
      v25 = v20->SchedulerAssist;
      if ( v25 )
      {
        if ( v20->NestingLevel <= 1u )
        {
          v26 = v25[6];
          v25[6] = v26 + 1;
          if ( v26 == -1 )
            goto LABEL_26;
        }
      }
    }
    KeSetThreadBamQosLevel(a2, v9);
    if ( !*(_QWORD *)(a1 + 16) && KeHeteroSystem )
      *(_BYTE *)(*(_QWORD *)(a1 + 56) + 64LL) ^= (*(_BYTE *)(*(_QWORD *)(a1 + 56) + 64LL) ^ *(_BYTE *)(a2 + 512)) & 7;
    _InterlockedAnd64((volatile signed __int64 *)(a1 + 48), 0LL);
    v27 = KeGetCurrentPrcb();
    v28 = v27->SchedulerAssist;
    if ( v28 )
    {
      if ( v27->NestingLevel <= 1u )
      {
        v29 = v28[6] - 1;
        v28[6] = v29;
        if ( !v29 )
          KiRemoveSystemWorkPriorityKick(v27);
      }
    }
  }
  *(_QWORD *)(a2 + 64) = 0LL;
  v11 = KeGetCurrentPrcb();
  v12 = v11->SchedulerAssist;
  if ( v12 )
  {
    if ( v11->NestingLevel <= 1u )
    {
      v30 = v12[6] - 1;
      v12[6] = v30;
      if ( !v30 )
        KiRemoveSystemWorkPriorityKick(v11);
    }
  }
  _disable();
  v13 = (unsigned __int8)*(_DWORD *)(a1 + 236);
  result = *(unsigned int *)(a2 + 512);
  if ( (unsigned __int8)result != v13 && ((unsigned __int8)result == 3 || v13 == 3 || (unsigned __int8)result < v13) )
    result = KeCheckAndApplyBamQos(a1, a2);
  _enable();
  return result;
}
