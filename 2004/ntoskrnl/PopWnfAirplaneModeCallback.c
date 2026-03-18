/*
 * XREFs of PopWnfAirplaneModeCallback @ 0x1403CB930
 * Callers:
 *     <none>
 * Callees:
 *     KxReleaseSpinLock @ 0x14021E3C0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402D79F0 (KeAcquireSpinLockRaiseToDpc.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     ExQueryWnfStateData @ 0x1407090A0 (ExQueryWnfStateData.c)
 */

__int64 __fastcall PopWnfAirplaneModeCallback(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  int v4; // edi
  unsigned __int64 v5; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v10; // eax
  bool v11; // zf
  unsigned int v12; // [rsp+20h] [rbp-38h] BYREF
  int v13; // [rsp+28h] [rbp-30h] BYREF
  __int64 v14; // [rsp+30h] [rbp-28h] BYREF
  int v15; // [rsp+38h] [rbp-20h]

  v13 = a4;
  v12 = 12;
  v14 = 0LL;
  v15 = 0;
  v4 = ExQueryWnfStateData(a1, &v13, &v14, &v12);
  if ( v4 >= 0 )
  {
    if ( v12 < 0xC )
    {
      return 0;
    }
    else
    {
      v5 = KeAcquireSpinLockRaiseToDpc(&PopCsResiliencyStatsLock);
      byte_140C23904 = (_DWORD)v14 == 0;
      KxReleaseSpinLock(&PopCsResiliencyStatsLock);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql <= 0xFu && (unsigned __int8)v5 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v10 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v5 + 1));
            v11 = (v10 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v10;
            if ( v11 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
      }
      __writecr8(v5);
    }
  }
  return (unsigned int)v4;
}
