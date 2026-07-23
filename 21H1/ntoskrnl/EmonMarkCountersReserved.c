/*
 * XREFs of EmonMarkCountersReserved @ 0x1404CE2B4
 * Callers:
 *     EmonAllocateResources @ 0x1404CDD98 (EmonAllocateResources.c)
 * Callees:
 *     KeSetSystemGroupAffinityThread @ 0x140336D80 (KeSetSystemGroupAffinityThread.c)
 *     KeRevertToUserGroupAffinityThread @ 0x1403374F0 (KeRevertToUserGroupAffinityThread.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall EmonMarkCountersReserved(int a1, unsigned __int64 a2)
{
  unsigned int v2; // r15d
  unsigned __int64 v4; // rdi
  unsigned int v5; // eax
  __int64 v6; // r14
  unsigned __int8 CurrentIrql; // si
  _DWORD *SchedulerAssist; // r9
  bool i; // zf
  __int64 v10; // rax
  unsigned int v11; // ecx
  char v12; // r8
  unsigned __int64 v13; // rbx
  char v14; // dl
  __int64 v15; // rax
  unsigned __int8 v16; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *v18; // r9
  int v19; // edx
  _GROUP_AFFINITY Affinity; // [rsp+28h] [rbp-28h] BYREF
  _GROUP_AFFINITY PreviousAffinity; // [rsp+38h] [rbp-18h] BYREF

  v2 = 0;
  v4 = a2;
  Affinity = 0LL;
  v5 = KiProcessorIndexToNumberMappingTable[a1];
  Affinity.Group = v5 >> 6;
  v6 = EmonCounterStatus + 16LL * (unsigned int)(a1 * EmonNumberCounters);
  Affinity.Mask = 1LL << (v5 & 0x3F);
  PreviousAffinity = 0LL;
  KeSetSystemGroupAffinityThread(&Affinity, &PreviousAffinity);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 0xFFFC;
  }
  for ( i = !_BitScanForward64((unsigned __int64 *)&v10, a2); !i; i = !_BitScanForward64((unsigned __int64 *)&v10, v4) )
  {
    v11 = EmonNumberArchCounters;
    v12 = v10;
    if ( (unsigned int)v10 >= EmonNumberArchCounters )
      LODWORD(v10) = v10 + EmonNumberArchCounters - 32;
    if ( *(_DWORD *)(v6 + 16LL * (unsigned int)v10) != 3 )
    {
      v13 = v4 ^ a2;
      v2 = -1073741670;
      if ( v13 )
      {
        while ( 1 )
        {
          i = !_BitScanForward64((unsigned __int64 *)&v15, v13);
          if ( i )
            break;
          v14 = v15;
          if ( (unsigned int)v15 >= v11 )
            v15 = (unsigned int)v15 + v11 - 32;
          v13 ^= 1LL << v14;
          *(_DWORD *)(v6 + 16 * v15) = 3;
        }
      }
      break;
    }
    v4 ^= 1LL << v12;
    *(_DWORD *)(v6 + 16LL * (unsigned int)v10) = 2;
  }
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v16 = KeGetCurrentIrql();
      if ( v16 <= 0xFu && CurrentIrql <= 0xFu && v16 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v18 = CurrentPrcb->SchedulerAssist;
        v19 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        i = (v19 & v18[5]) == 0;
        v18[5] &= v19;
        if ( i )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(CurrentIrql);
  KeRevertToUserGroupAffinityThread(&PreviousAffinity);
  return v2;
}
