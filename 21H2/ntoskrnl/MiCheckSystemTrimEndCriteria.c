/*
 * XREFs of MiCheckSystemTrimEndCriteria @ 0x14053AF6C
 * Callers:
 *     MiProcessWorkingSets @ 0x1402AC4A0 (MiProcessWorkingSets.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402042B0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeDelayExecutionThread @ 0x140278A00 (KeDelayExecutionThread.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402D3660 (KeAcquireInStackQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     MiLogContinueTrim @ 0x14053B668 (MiLogContinueTrim.c)
 */

__int64 __fastcall MiCheckSystemTrimEndCriteria(_QWORD *a1, __int64 a2, struct _KLOCK_QUEUE_HANDLE *a3)
{
  __int64 v4; // rsi
  unsigned __int64 v7; // rcx
  __int64 v8; // r8
  _QWORD *v9; // r10
  unsigned int v10; // r9d
  __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v13; // rcx
  unsigned __int64 OldIrql; // r14
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v18; // eax
  bool v19; // zf
  unsigned __int64 v20; // rdx
  unsigned __int64 v21; // rcx
  unsigned __int64 v22; // rcx
  unsigned __int64 v23; // r8
  __int64 v24; // r9
  _QWORD *v25; // rdx
  __int64 v26; // r9
  char v27; // cl
  unsigned __int64 v29; // rdi
  unsigned __int64 v30; // rdi

  v4 = a1[856];
  if ( (unsigned __int8)(*(_BYTE *)(a2 + 2) - 2) <= 1u )
  {
    v29 = *(_QWORD *)(v4 + 2360);
    if ( *(_QWORD *)(a2 + 96) < v29 )
      v30 = v29 - *(_QWORD *)(a2 + 80);
    else
      v30 = 0LL;
    *(_QWORD *)(v4 + 2360) = v30;
    return 1LL;
  }
  if ( (*(_BYTE *)a2 & 0x7Fu) >= 4 )
    return 1LL;
  v7 = a1[888];
  if ( v7 >= *(_QWORD *)(a2 + 72) )
    return 1LL;
  if ( *(_QWORD *)(a2 + 96) >= *(_QWORD *)(a2 + 80) )
  {
    if ( v7 < 0x420 )
    {
      *(_QWORD *)(a2 + 96) = 0LL;
      goto LABEL_7;
    }
    return 1LL;
  }
LABEL_7:
  v8 = 0LL;
  v9 = (_QWORD *)(v4 + 2416);
  v10 = 0;
  v11 = a2 - v4;
  do
  {
    v12 = *(_QWORD *)((char *)v9 + v11 - 2408);
    *v9++ = v12;
    v13 = v12 + v8;
    if ( v10 < 6 )
      v13 = v8;
    ++v10;
    v8 = v13;
  }
  while ( v10 < 8 );
  *(_QWORD *)(v4 + 2408) = v13;
  KeReleaseInStackQueuedSpinLockFromDpcLevel(a3);
  OldIrql = a3->OldIrql;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)OldIrql <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v18 = ~(unsigned __int16)(-1LL << ((unsigned __int8)OldIrql + 1));
        v19 = (v18 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v18;
        if ( v19 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(OldIrql);
  if ( a1[936] < 0x420uLL )
  {
    ++*(_DWORD *)(v4 + 2564);
  }
  else
  {
    ++*(_DWORD *)(v4 + 2560);
    KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&MiShortTime);
  }
  v20 = a1[888];
  v21 = *(_QWORD *)(a2 + 72);
  if ( v20 >= v21 )
  {
    KeAcquireInStackQueuedSpinLock(&SpinLock, a3);
    return 1LL;
  }
  v22 = v21 - v20;
  v23 = 0LL;
  v24 = *((unsigned __int8 *)MiTrimPassToAge + (*(_BYTE *)a2 & 0x7F));
  if ( (unsigned int)v24 < 8 )
  {
    v25 = (_QWORD *)(v4 + 2416 + 8 * v24);
    v26 = (unsigned int)(8 - v24);
    do
    {
      v23 += *v25++;
      --v26;
    }
    while ( v26 );
  }
  *(_OWORD *)(a2 + 8) = 0LL;
  *(_OWORD *)(a2 + 24) = 0LL;
  *(_OWORD *)(a2 + 40) = 0LL;
  *(_OWORD *)(a2 + 56) = 0LL;
  if ( v23 < v22 + 256 || *(char *)a2 < 0 )
    v27 = *(_BYTE *)a2 ^ (*(_BYTE *)a2 ^ (*(_BYTE *)a2 + 1)) & 0x7F;
  else
    v27 = *(_BYTE *)a2 | 0x80;
  *(_BYTE *)a2 = v27;
  MiLogContinueTrim(a1, a2);
  KeAcquireInStackQueuedSpinLock(&SpinLock, a3);
  return 0LL;
}
