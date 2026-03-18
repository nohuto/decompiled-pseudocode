/*
 * XREFs of KeIntSteerSnapPerf @ 0x1402FEEE0
 * Callers:
 *     PpmParkSteerInterrupts @ 0x1402FF620 (PpmParkSteerInterrupts.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14021D070 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     RtlGetInterruptTimePrecise @ 0x140303490 (RtlGetInterruptTimePrecise.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall KeIntSteerSnapPerf(_DWORD *a1, __int64 *a2)
{
  __int64 InterruptTimePrecise; // rax
  __int64 v5; // rsi
  __int64 v6; // rbx
  __int64 result; // rax
  __int64 v8; // r13
  KIRQL v9; // al
  ULONG_PTR *v10; // r11
  KIRQL v11; // di
  ULONG_PTR *v12; // r10
  ULONG_PTR v13; // rdi
  ULONG_PTR *v14; // rbp
  unsigned int v15; // ecx
  ULONG_PTR v16; // rdx
  ULONG_PTR v17; // r8
  __int64 *v18; // rax
  __int64 v19; // r9
  __int64 v20; // rcx
  __int64 v21; // rax
  bool v22; // zf
  ULONG_PTR v23; // rcx
  __int64 v24; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v28; // eax
  KIRQL v29; // [rsp+70h] [rbp+18h]
  __int64 v30; // [rsp+78h] [rbp+20h] BYREF

  v30 = 0LL;
  InterruptTimePrecise = RtlGetInterruptTimePrecise(&v30);
  v5 = InterruptTimePrecise;
  v6 = InterruptTimePrecise - KiIntSteerPreviousPerfSnap;
  if ( (unsigned __int64)(InterruptTimePrecise - KiIntSteerPreviousPerfSnap) >= 0x16E360 )
  {
    KiIntSteerPreviousPerfSnap = InterruptTimePrecise;
    KiIntSteerPreviousPerfSnapDelta = v6;
    v8 = 0LL;
    v9 = KeAcquireSpinLockRaiseToDpc(&KiIntTrackSpinlock);
    v10 = (ULONG_PTR *)KiIntTrackRootList;
    v29 = v9;
    v11 = v9;
    if ( (ULONG_PTR *)KiIntTrackRootList != &KiIntTrackRootList )
    {
      do
      {
        v12 = (ULONG_PTR *)v10[2];
        v13 = 0LL;
        if ( v12 != v10 + 2 )
        {
          do
          {
            v14 = (ULONG_PTR *)*v12;
            if ( *(ULONG_PTR **)(*v12 + 8) != v12 || *(ULONG_PTR **)v12[1] != v12 )
              __fastfail(3u);
            v15 = *((_DWORD *)v12 + 6);
            v16 = 0LL;
            v17 = 0LL;
            if ( v15 )
            {
              v18 = (__int64 *)v12[4];
              v19 = v15;
              do
              {
                v20 = *v18++;
                v17 += *(_QWORD *)(v20 + 176);
                v16 += *(_QWORD *)(v20 + 200);
                --v19;
              }
              while ( v19 );
            }
            v21 = v17 - v12[5];
            v22 = v17 == v12[5];
            v12[5] = v17;
            v23 = v13 + v21;
            if ( v21 < 0 || v22 )
              v23 = v13;
            v24 = v16 - v12[6];
            v12[6] = v16;
            v12 = v14;
            v13 = v23 + v24;
            if ( v24 <= 0 )
              v13 = v23;
          }
          while ( v14 != v10 + 2 );
        }
        v10[24] = v13;
        v8 += v13;
        v10 = (ULONG_PTR *)*v10;
      }
      while ( v10 != &KiIntTrackRootList );
      v11 = v29;
    }
    KxReleaseSpinLock(&KiIntTrackSpinlock);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && v11 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v28 = ~(unsigned __int16)(-1LL << (v11 + 1));
          v22 = (v28 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v28;
          if ( v22 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(v11);
    KiIntSteerLoadPercent = 10000 * v8 / (unsigned __int64)(v6 * KiIntSteerSlowestCyclesPerSec);
  }
  *a1 = KiIntSteerLoadPercent;
  result = 0LL;
  *a2 = v5;
  return result;
}
