/*
 * XREFs of VmColdPagesHint @ 0x14059D300
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140224640 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     _tlgKeywordOn @ 0x14026C5B4 (_tlgKeywordOn.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     ZwUnlockVirtualMemory @ 0x1403F6F20 (ZwUnlockVirtualMemory.c)
 *     VmpLogColdHint @ 0x14059EA7C (VmpLogColdHint.c)
 *     VmpProcessContextLockShared @ 0x14059F504 (VmpProcessContextLockShared.c)
 */

__int64 __fastcall VmColdPagesHint(unsigned __int64 a1, unsigned __int64 a2, __int64 a3)
{
  unsigned __int64 v4; // rsi
  unsigned __int64 v5; // rbx
  unsigned __int64 *v6; // r15
  unsigned __int64 v7; // r12
  unsigned __int8 v8; // di
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rcx
  _QWORD *v12; // rdx
  unsigned __int64 v13; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v17; // eax
  bool v18; // zf
  __int64 v19; // rcx
  __int64 v21; // [rsp+20h] [rbp-10h]
  unsigned __int64 v22; // [rsp+28h] [rbp-8h]
  unsigned __int64 v23; // [rsp+78h] [rbp+48h] BYREF

  v23 = 0LL;
  v4 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[5];
  if ( !v4 )
    NT_ASSERT("ProcessContext != ((void *)0)");
  if ( *(_QWORD *)(v4 + 72) != a3 )
    NT_ASSERT("ProcessContext->PartitionId == PartitionId");
  v5 = a1 >> 12;
  v6 = (unsigned __int64 *)(v4 + 8);
  v7 = 0LL;
  v22 = (a1 >> 12) + a2 - 1;
  do
  {
    v8 = VmpProcessContextLockShared((PEX_SPIN_LOCK)v4);
    v9 = *v6;
    if ( (*(_BYTE *)(v4 + 16) & 1) != 0 && v9 )
      v9 ^= (unsigned __int64)v6;
    while ( 1 )
    {
      if ( !v9 )
        goto LABEL_19;
      if ( v5 <= *(_QWORD *)(v9 + 32) )
        break;
      v10 = *(_QWORD *)(v9 + 8);
LABEL_14:
      if ( (*(_BYTE *)(v4 + 16) & 1) != 0 && v10 )
        v9 ^= v10;
      else
        v9 = v10;
    }
    if ( v5 < *(_QWORD *)(v9 + 24) )
    {
      v10 = *(_QWORD *)v9;
      goto LABEL_14;
    }
    v12 = (_QWORD *)(v9 - 24);
    if ( v9 == 24 )
LABEL_19:
      NT_ASSERT("GpaMemoryRange != ((void *)0)");
    v23 = *(_QWORD *)(v12[2] + 24LL);
    v23 = v5 + v23 - v12[6];
    v13 = v12[7];
    if ( v13 >= v22 )
      v13 = v22;
    v21 = v13 - v5 + 1;
    ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)v4);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && v8 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v17 = ~(unsigned __int16)(-1LL << (v8 + 1));
          v18 = (v17 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v17;
          if ( v18 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8(v8);
    v19 = VmpTraceLoggingProvider;
    v7 += v21;
    v5 += v21;
    if ( VmpTraceLoggingProvider )
    {
      if ( *(_DWORD *)VmpTraceLoggingProvider && tlgKeywordOn(VmpTraceLoggingProvider, 4LL) )
        VmpLogColdHint(v19, v5, v23);
    }
    v23 <<= 12;
    ZwUnlockVirtualMemory(-1LL, (__int64)&v23);
  }
  while ( v7 < a2 );
  return 0LL;
}
