/*
 * XREFs of MiComputeAgeDistribution @ 0x140224DFC
 * Callers:
 *     MiComputeSystemTrimCriteria @ 0x14025F3E0 (MiComputeSystemTrimCriteria.c)
 *     MiOrderTrimList @ 0x14053B880 (MiOrderTrimList.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402042B0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiUpdateClaimDistribution @ 0x140224F70 (MiUpdateClaimDistribution.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402D3660 (KeAcquireInStackQueuedSpinLock.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     memset @ 0x140414300 (memset.c)
 */

__int64 __fastcall MiComputeAgeDistribution(__int64 a1, int a2)
{
  _QWORD *v4; // rdi
  _QWORD **v5; // rsi
  _QWORD *i; // rbx
  _QWORD *v7; // rax
  __int64 v8; // rcx
  unsigned __int64 v9; // rbx
  unsigned __int64 OldIrql; // rsi
  unsigned int v11; // edx
  int v12; // ecx
  unsigned __int64 v13; // r8
  unsigned __int64 v14; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v19; // eax
  bool v20; // zf
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-78h] BYREF
  _BYTE Src[64]; // [rsp+40h] [rbp-58h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  memset(Src, 0, sizeof(Src));
  v4 = *(_QWORD **)(a1 + 6848);
  if ( a2 == 1 )
  {
    KeAcquireInStackQueuedSpinLock(&SpinLock, &LockHandle);
    v5 = (_QWORD **)(a1 + 6856);
    for ( i = *v5; i != v5; i = (_QWORD *)*i )
      MiUpdateClaimDistribution(i - 3, Src);
    memmove(v4 + 302, Src, 0x40uLL);
    v7 = v4 + 308;
    v8 = 2LL;
    v9 = 0LL;
    do
    {
      v9 += *v7++;
      --v8;
    }
    while ( v8 );
    v4[301] = v9;
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    OldIrql = LockHandle.OldIrql;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && LockHandle.OldIrql <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v19 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v20 = (v19 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v19;
          if ( v20 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(OldIrql);
  }
  else
  {
    v9 = v4[301];
  }
  v11 = 5;
  v12 = 0;
  while ( v9 < 4LL * v4[298] )
  {
    ++v12;
    v9 += v4[v11 + 302];
    if ( v11 == 1 )
      break;
    --v11;
  }
  v13 = v4[294];
  if ( v13 )
  {
    v14 = (unsigned int)(1000 * v12) / v13;
    if ( (unsigned __int16)v14 > 0x3E8u )
      LOWORD(v14) = 1000;
    return (unsigned __int16)v14;
  }
  else if ( v12 )
  {
    return 1000LL;
  }
  else
  {
    return 0LL;
  }
}
