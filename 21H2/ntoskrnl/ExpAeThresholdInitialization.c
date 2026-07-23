/*
 * XREFs of ExpAeThresholdInitialization @ 0x140A67D28
 * Callers:
 *     ExpInitSystemPhase1 @ 0x140A3DEBC (ExpInitSystemPhase1.c)
 * Callees:
 *     KeGenericCallDpc @ 0x14029E250 (KeGenericCallDpc.c)
 *     ExpAeMeasureContention @ 0x1403BD1D4 (ExpAeMeasureContention.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x140414300 (memset.c)
 */

char ExpAeThresholdInitialization()
{
  unsigned __int64 v0; // rbp
  unsigned __int64 v1; // rbx
  unsigned __int8 CurrentIrql; // di
  __int64 v3; // r10
  unsigned __int8 v4; // r11
  __int64 v5; // r9
  unsigned __int64 v6; // rbx
  unsigned int v7; // ecx
  char v8; // cl
  unsigned __int64 v9; // rdx
  int v10; // eax
  unsigned int v12; // ecx
  _DWORD *SchedulerAssist; // r9
  unsigned __int8 v14; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v16; // r8
  int v17; // eax
  bool v18; // zf
  _DWORD v19[16]; // [rsp+60h] [rbp+0h] BYREF

  v0 = (unsigned __int64)v19 & 0xFFFFFFFFFFFFFFC0uLL;
  *(_DWORD *)((unsigned __int64)v19 & 0xFFFFFFFFFFFFFFC0uLL) = 0;
  memset((void *)(((unsigned __int64)v19 & 0xFFFFFFFFFFFFFFC0uLL) + 64), 0, 0xC0uLL);
  v1 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
  }
  do
    v1 += ExpAeMeasureContention((signed __int64 *)(v0 + 64));
  while ( v5 != 1 );
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v14 = KeGetCurrentIrql();
      if ( v14 <= v4 && CurrentIrql <= v4 && v14 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v16 = CurrentPrcb->SchedulerAssist;
        v17 = ~(unsigned __int16)(v3 << (CurrentIrql + 1));
        v18 = (v17 & v16[5]) == 0;
        v16[5] &= v17;
        if ( v18 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(CurrentIrql);
  v6 = v1 >> 10;
  KeGenericCallDpc((__int64)ExpAeThresholdInitWorker, v0 + 64);
  if ( *(_QWORD *)(((unsigned __int64)v19 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC0)
     / 1024LL
     / (unsigned __int64)*(int *)(((unsigned __int64)v19 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC8) < 4 * v6 )
  {
    v10 = -1;
    ExpAeCycleCountScaler = -1;
    ExpAeCycleCountThreshold = -1;
  }
  else
  {
    if ( HIDWORD(v6) )
    {
      _BitScanReverse(&v12, HIDWORD(v6));
      v7 = v12 + 32;
    }
    else
    {
      _BitScanReverse(&v7, v6);
    }
    if ( v7 < 2 )
      v8 = 0;
    else
      v8 = v7 - 2;
    ExpAeCycleCountScaler = v8;
    v9 = (v6 + (v6 >> 2)) << 7 >> v8;
    if ( v9 > 0xFFFFFFFF )
      LODWORD(v9) = -1;
    v10 = 15728640;
    ExpAeCycleCountThreshold = v9;
  }
  ExpAeSamplingPeriodMask = v10;
  return 1;
}
