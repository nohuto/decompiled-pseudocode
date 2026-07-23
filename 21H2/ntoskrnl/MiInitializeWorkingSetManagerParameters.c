/*
 * XREFs of MiInitializeWorkingSetManagerParameters @ 0x1403CBE74
 * Callers:
 *     MiProcessWorkingSets @ 0x1402AC4A0 (MiProcessWorkingSets.c)
 *     MmCreatePartition @ 0x1403CAB14 (MmCreatePartition.c)
 *     MiInitSystem @ 0x140A54E5C (MiInitSystem.c)
 * Callees:
 *     MiSetTrimWhileAgingState @ 0x140250EBC (MiSetTrimWhileAgingState.c)
 *     MiAllocatePool @ 0x14027C2E0 (MiAllocatePool.c)
 *     KeGenericCallDpc @ 0x14029E250 (KeGenericCallDpc.c)
 *     ExAcquireSpinLockExclusive @ 0x1402C1960 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140346AD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiInitializeWorkingSetManagerParameters(__int64 a1)
{
  __int64 v2; // rsi
  __int64 result; // rax
  int v4; // r15d
  _QWORD *v5; // rax
  KIRQL v6; // al
  unsigned __int64 v7; // rdi
  unsigned __int64 v8; // r14
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rax
  __int64 v13; // rax
  unsigned __int64 v14; // rax
  __int64 v15; // rcx
  unsigned __int64 v16; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v20; // eax
  bool v21; // zf
  _QWORD v22[4]; // [rsp+20h] [rbp-48h] BYREF

  v22[0] = 0LL;
  v2 = *(_QWORD *)(a1 + 6848);
  if ( v2 )
  {
    v4 = 0;
  }
  else
  {
    result = (__int64)MiAllocatePool(64, 0xA58uLL, 0x64576D4Du);
    v2 = result;
    if ( !result )
      return result;
    *(_WORD *)result = 0;
    v4 = 1;
    *(_BYTE *)(result + 2) = 6;
    *(_DWORD *)(result + 4) = 1;
    v5 = (_QWORD *)(result + 8);
    v5[1] = v5;
    *v5 = v5;
    *(_DWORD *)(v2 + 36) = 256;
    *(_DWORD *)(v2 + 136) = 256;
    *(_BYTE *)(a1 + 7416) = *(_BYTE *)(a1 + 7416) & 0xF8 | 2;
  }
  v6 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 200));
  v7 = *(_QWORD *)(a1 + 6928);
  v8 = v6;
  *(_BYTE *)(a1 + 12) = 0;
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 200));
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v8 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v20 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v8 + 1));
        v21 = (v20 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v20;
        if ( v21 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(v8);
  if ( (ULONG_PTR *)a1 == &MiSystemPartition && v7 < 0x21000 )
    v7 = 135168LL;
  if ( v7 > 0x200000 )
    v9 = ((v7 - 0x200000) >> 7) + 0x10000;
  else
    v9 = v7 >> 5;
  if ( v9 < 0x480 )
    v9 = 1152LL;
  if ( v9 > 0x400000 )
    v9 = 0x400000LL;
  *(_QWORD *)(v2 + 2384) = v9;
  if ( v7 <= 0x80000 )
    v10 = v7 >> 5;
  else
    v10 = ((v7 - 0x80000) >> 8) + 0x4000;
  if ( v10 < 0x121 )
    v10 = 289LL;
  if ( v10 > 0x100000 )
    v10 = 0x100000LL;
  v11 = v9 >> 2;
  *(_QWORD *)(v2 + 2392) = v10;
  *(_QWORD *)(v2 + 2400) = v10;
  if ( v11 < 0x121 )
    v11 = 289LL;
  *(_QWORD *)(v2 + 2376) = v11;
  if ( v4 == 1 )
    *(_QWORD *)(a1 + 6848) = v2;
  MiSetTrimWhileAgingState(a1, 3LL);
  if ( v7 < 0x18A88 )
    v12 = 100LL;
  else
    v12 = v7 / 0x3E8;
  if ( v12 > v7 )
  {
    v12 = v7 >> 1;
    if ( !(v7 >> 1) )
      v12 = 1LL;
  }
  *(_QWORD *)(v2 + 56) = v12;
  if ( v4 == 1 )
  {
    *(_DWORD *)(v2 + 100) = 0;
    *(_WORD *)(v2 + 96) = 1;
    *(_BYTE *)(v2 + 98) = 6;
    *(_QWORD *)(v2 + 112) = v2 + 104;
    *(_QWORD *)(v2 + 104) = v2 + 104;
    if ( (ULONG_PTR *)a1 != &MiSystemPartition )
      goto LABEL_32;
    LOWORD(stru_140C4EE90.Header.Lock) = 0;
    stru_140C4EE90.Header.SignalState = 0;
    stru_140C4EE90.Header.WaitListHead.Blink = &stru_140C4EE90.Header.WaitListHead;
    stru_140C4EE90.Header.WaitListHead.Flink = &stru_140C4EE90.Header.WaitListHead;
    stru_140C4EE90.Header.Size = 6;
  }
  if ( (ULONG_PTR *)a1 != &MiSystemPartition || !qword_140CFB1C0 || (v14 = qword_140CFB1C0 << 8) == 0 )
  {
LABEL_32:
    v13 = *(_QWORD *)(v2 + 2384);
    if ( 2 * v13 > v7 )
    {
      if ( v7 && (v7 - v13) >> 1 )
        v14 = ((v7 - v13) >> 1) + v13;
      else
        v14 = 1LL;
    }
    else
    {
      v14 = 2 * v13;
    }
  }
  v22[0] = v14;
  if ( (ULONG_PTR *)a1 != &MiSystemPartition || !qword_140CFB1C8 || (v15 = qword_140CFB1C8 << 8) == 0 )
  {
    v15 = v14;
    if ( v14 <= v7 )
    {
      v16 = 2 * v14;
      if ( v16 > v7 )
        v15 += (v7 - v15) >> 1;
      else
        v15 = v16;
    }
  }
  v22[1] = v15;
  v22[2] = a1;
  KeGenericCallDpc((__int64)MiUpdatePageThresholdsDpc, (__int64)v22);
  return 1LL;
}
