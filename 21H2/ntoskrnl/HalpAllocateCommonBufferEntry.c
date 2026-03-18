/*
 * XREFs of HalpAllocateCommonBufferEntry @ 0x1403B27B8
 * Callers:
 *     HalpAllocateCommonBufferDmaThin @ 0x1403B2614 (HalpAllocateCommonBufferDmaThin.c)
 *     HalCreateCommonBufferFromMdl @ 0x140514560 (HalCreateCommonBufferFromMdl.c)
 *     HalpAllocateDomainCommonBufferInternal @ 0x140514A70 (HalpAllocateDomainCommonBufferInternal.c)
 *     HalCreateCommonBufferFromMdlDmaThin @ 0x1405158A0 (HalCreateCommonBufferFromMdlDmaThin.c)
 *     HalCreateCommonBufferFromMdlDmarThin @ 0x1405160A0 (HalCreateCommonBufferFromMdlDmarThin.c)
 *     HalpAllocateCommonBufferDmarThin @ 0x1405164D0 (HalpAllocateCommonBufferDmarThin.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14021D070 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     RtlRbInsertNodeEx @ 0x14034E6B0 (RtlRbInsertNodeEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall HalpAllocateCommonBufferEntry(__int64 a1, unsigned __int64 a2, __int64 a3, char a4)
{
  __int64 Pool2; // rax
  unsigned __int64 v9; // r14
  unsigned __int64 v10; // rdi
  unsigned __int64 v11; // rdx
  bool v12; // r8
  unsigned __int64 v13; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v18; // eax
  bool v19; // zf

  Pool2 = ExAllocatePool2(66LL, 56LL, 1147953480LL);
  v9 = Pool2;
  if ( !Pool2 )
    return 3221225626LL;
  *(_QWORD *)(Pool2 + 32) = a1;
  *(_QWORD *)(Pool2 + 24) = a2;
  *(_QWORD *)(Pool2 + 40) = a3;
  *(_BYTE *)(Pool2 + 48) = a4;
  v10 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a3 + 80));
  v11 = *(_QWORD *)(a3 + 64);
  if ( (*(_BYTE *)(a3 + 72) & 1) != 0 && v11 )
    v11 ^= a3 + 64;
  v12 = 0;
  if ( v11 )
  {
    while ( 1 )
    {
      if ( *(_QWORD *)(v11 + 24) > a2 )
      {
        v13 = *(_QWORD *)v11;
        if ( (*(_BYTE *)(a3 + 72) & 1) != 0 )
        {
          if ( !v13 )
            break;
          v13 ^= v11;
        }
        if ( !v13 )
          break;
      }
      else
      {
        v13 = *(_QWORD *)(v11 + 8);
        if ( (*(_BYTE *)(a3 + 72) & 1) != 0 )
        {
          if ( !v13 )
            goto LABEL_11;
          v13 ^= v11;
        }
        if ( !v13 )
        {
LABEL_11:
          v12 = 1;
          break;
        }
      }
      v11 = v13;
    }
  }
  RtlRbInsertNodeEx((unsigned __int64 *)(a3 + 64), v11, v12, v9);
  KxReleaseSpinLock((PKSPIN_LOCK)(a3 + 80));
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v10 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v18 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v10 + 1));
        v19 = (v18 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v18;
        if ( v19 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(v10);
  return 0LL;
}
