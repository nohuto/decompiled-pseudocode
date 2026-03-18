/*
 * XREFs of HalpDmaFindAdapterByDeviceId @ 0x140503F38
 * Callers:
 *     HalpDmaAllocateChildAdapterV3 @ 0x14084685C (HalpDmaAllocateChildAdapterV3.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14021D070 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     ObReferenceObjectSafeWithTag @ 0x140302BD0 (ObReferenceObjectSafeWithTag.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     IidAreIdsStrictlyEqual @ 0x14064F634 (IidAreIdsStrictlyEqual.c)
 */

__int64 __fastcall HalpDmaFindAdapterByDeviceId(__int64 a1)
{
  __int64 v3; // rbx
  KIRQL v4; // al
  __int64 *v5; // r11
  unsigned __int64 v6; // rdi
  __int64 v7; // rbp
  __int64 v8; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // rax
  _DWORD *SchedulerAssist; // r9
  int v12; // edx
  bool v13; // zf

  if ( !a1 )
    return 0LL;
  v3 = 0LL;
  v4 = KeAcquireSpinLockRaiseToDpc(&HalpDmaAdapterListLock);
  v5 = (__int64 *)qword_140C4E2E8;
  v6 = v4;
  while ( v5 != &HalpDmaAdapterList )
  {
    v7 = (__int64)(v5 - 57);
    v8 = v5[9];
    if ( v8 && (unsigned __int8)IidAreIdsStrictlyEqual(v8, a1) )
    {
      if ( ObReferenceObjectSafeWithTag(v7) )
        v3 = v7;
      break;
    }
    v5 = (__int64 *)v5[1];
  }
  KxReleaseSpinLock(&HalpDmaAdapterListLock);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v6 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v12 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
        v13 = (v12 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v12;
        if ( v13 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v6);
  return v3;
}
