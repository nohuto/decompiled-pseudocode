/*
 * XREFs of EmonReleaseReservedCounters @ 0x1405214A8
 * Callers:
 *     EmonReleaseProfileResourcesInternal @ 0x1405213F0 (EmonReleaseProfileResourcesInternal.c)
 * Callees:
 *     KeRevertToUserGroupAffinityThread @ 0x14035BE00 (KeRevertToUserGroupAffinityThread.c)
 *     KeSetSystemGroupAffinityThread @ 0x14035BFE0 (KeSetSystemGroupAffinityThread.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 */

void __fastcall EmonReleaseReservedCounters(unsigned int a1, unsigned __int64 a2)
{
  __int64 v3; // rdx
  __int64 v4; // rsi
  int v5; // ecx
  unsigned __int8 CurrentIrql; // di
  _DWORD *SchedulerAssist; // r9
  char v8; // dl
  __int64 v9; // rax
  bool v10; // zf
  unsigned __int8 v11; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v13; // r8
  int v14; // eax
  struct _GROUP_AFFINITY Affinity; // [rsp+28h] [rbp-28h] BYREF
  struct _GROUP_AFFINITY PreviousAffinity; // [rsp+38h] [rbp-18h] BYREF

  v3 = a1;
  Affinity = 0LL;
  PreviousAffinity = 0LL;
  if ( HalpProfileInterface == &DefaultProfileInterface )
    v4 = HalpCounterStatus;
  else
    v4 = HalpCounterStatus + 8LL * a1 * HalpNumberOfCounters;
  v5 = KiProcessorIndexToNumberMappingTable[a1];
  Affinity.Group = KiProcessorIndexToNumberMappingTable[v3] >> 6;
  *(_DWORD *)Affinity.Reserved = 0;
  Affinity.Reserved[2] = 0;
  Affinity.Mask = 1LL << (v5 & 0x3F);
  KeSetSystemGroupAffinityThread(&Affinity, &PreviousAffinity);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 0xFFFC;
  }
  __writemsr(0x390u, a2);
  while ( 1 )
  {
    v10 = !_BitScanForward64((unsigned __int64 *)&v9, a2);
    if ( v10 )
      break;
    v8 = v9;
    if ( (unsigned int)v9 >= 0x20 )
      v9 = (unsigned int)(v9 + EmonNumberArchCounters - 32);
    a2 ^= 1LL << v8;
    *(_DWORD *)(*(_QWORD *)(v4 + 8 * v9) + 24LL) = 3;
  }
  _InterlockedExchangeAdd((volatile signed __int32 *)&KeGetCurrentPrcb()->HalReserved[2], 0xFFFFFFFE);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v11 = KeGetCurrentIrql();
      if ( v11 <= 0xFu && CurrentIrql <= 0xFu && v11 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v13 = CurrentPrcb->SchedulerAssist;
        v14 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v10 = (v14 & v13[5]) == 0;
        v13[5] &= v14;
        if ( v10 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(CurrentIrql);
  KeRevertToUserGroupAffinityThread(&PreviousAffinity);
}
