/*
 * XREFs of KiSelectCandidateProcessor @ 0x140525DE4
 * Callers:
 *     KiChooseTargetProcessor @ 0x14034FB30 (KiChooseTargetProcessor.c)
 *     KiHeteroChooseTargetProcessor @ 0x14051F740 (KiHeteroChooseTargetProcessor.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x1402EFAD0 (KeYieldProcessorEx.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140327550 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x140327620 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall KiSelectCandidateProcessor(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 v4; // rbp
  __int64 v6; // rdi
  volatile LONG *v7; // r14
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rdi
  __int64 v12; // rax
  char v13; // cl
  struct _KPRCB *CurrentPrcb; // rbx
  _DWORD *SchedulerAssist; // rcx
  int v16; // eax
  _DWORD *v17; // rcx
  int v18; // eax
  int v20; // [rsp+48h] [rbp+10h] BYREF

  v3 = *(_QWORD *)(a1 + 192);
  v4 = a1;
  v6 = *(_QWORD *)(v3 + 136) & *(_QWORD *)(a2 + 576);
  v7 = (volatile LONG *)(v3 + 104);
  ExAcquireSpinLockSharedAtDpcLevel((PEX_SPIN_LOCK)(v3 + 104));
  v11 = *(_QWORD *)(v3 + 80) & v6;
  v12 = a3 & v11;
  if ( (a3 & v11) == 0 )
    v12 = v11;
  if ( v12 )
  {
    v13 = *(_BYTE *)(v4 + 209);
    _BitScanForward64((unsigned __int64 *)&v12, __ROR8__(v12, v13));
    v8 = (((unsigned __int8)v12 + v13) & 0x3F) + (*(unsigned __int8 *)(v4 + 208) << 6);
    v4 = KiProcessorBlock[KiProcessorNumberToIndexMappingTable[v8]];
  }
  CurrentPrcb = KeGetCurrentPrcb();
  v20 = 0;
  while ( 1 )
  {
    SchedulerAssist = CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v16 = SchedulerAssist[6];
        SchedulerAssist[6] = v16 + 1;
        if ( v16 == -1 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
    if ( !_interlockedbittestandset64((volatile signed __int32 *)(v4 + 48), 0LL) )
      break;
    v17 = CurrentPrcb->SchedulerAssist;
    if ( v17 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v18 = v17[6] - 1;
        v17[6] = v18;
        if ( !v18 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
    do
      KeYieldProcessorEx(&v20, v8, v9, v10);
    while ( *(_QWORD *)(v4 + 48) );
  }
  ExReleaseSpinLockSharedFromDpcLevel(v7);
  return v4;
}
