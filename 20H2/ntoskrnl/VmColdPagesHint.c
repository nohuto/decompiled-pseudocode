/*
 * XREFs of VmColdPagesHint @ 0x1405A0DA0
 * Callers:
 *     <none>
 * Callees:
 *     _tlgKeywordOn @ 0x140244C78 (_tlgKeywordOn.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1402970F0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     ZwUnlockVirtualMemory @ 0x1403FBAF0 (ZwUnlockVirtualMemory.c)
 *     VmpLogColdHint @ 0x1405A251C (VmpLogColdHint.c)
 *     VmpProcessContextLockShared @ 0x1405A2FA4 (VmpProcessContextLockShared.c)
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
  ULONG_PTR v19; // r9
  __int64 v20; // rcx
  ULONG_PTR RegionSize; // [rsp+20h] [rbp-10h] BYREF
  unsigned __int64 v23; // [rsp+28h] [rbp-8h]
  PVOID BaseAddress; // [rsp+78h] [rbp+48h] BYREF

  RegionSize = 0LL;
  BaseAddress = 0LL;
  v4 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[5];
  if ( !v4 )
    NT_ASSERT("ProcessContext != ((void *)0)");
  if ( *(_QWORD *)(v4 + 72) != a3 )
    NT_ASSERT("ProcessContext->PartitionId == PartitionId");
  v5 = a1 >> 12;
  v6 = (unsigned __int64 *)(v4 + 8);
  v7 = 0LL;
  v23 = (a1 >> 12) + a2 - 1;
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
    BaseAddress = *(PVOID *)(v12[2] + 24LL);
    BaseAddress = (char *)BaseAddress + v5 - v12[6];
    v13 = v12[7];
    if ( v13 >= v23 )
      v13 = v23;
    RegionSize = v13 - v5 + 1;
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
    v19 = RegionSize;
    v20 = VmpTraceLoggingProvider;
    v7 += RegionSize;
    v5 += RegionSize;
    if ( VmpTraceLoggingProvider )
    {
      if ( *(_DWORD *)VmpTraceLoggingProvider && tlgKeywordOn(VmpTraceLoggingProvider, 4LL) )
      {
        VmpLogColdHint(v20, v5, BaseAddress);
        v19 = RegionSize;
      }
    }
    BaseAddress = (PVOID)((_QWORD)BaseAddress << 12);
    RegionSize = v19 << 12;
    ZwUnlockVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 1u);
  }
  while ( v7 < a2 );
  return 0LL;
}
