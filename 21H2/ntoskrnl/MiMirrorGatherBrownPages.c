/*
 * XREFs of MiMirrorGatherBrownPages @ 0x1403844C8
 * Callers:
 *     MiMirrorBrownPhase @ 0x14099668C (MiMirrorBrownPhase.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402042B0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiIsDecayPfn @ 0x140236E3C (MiIsDecayPfn.c)
 *     MiIsPfnFileOnly @ 0x1402BD660 (MiIsPfnFileOnly.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402D3660 (KeAcquireInStackQueuedSpinLock.c)
 *     MiMirrorAddPagesToBrownList @ 0x140384748 (MiMirrorAddPagesToBrownList.c)
 *     MiMirrorNodeLargePages @ 0x140385A5C (MiMirrorNodeLargePages.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiMirrorGatherBrownPages(__int64 *a1, _QWORD *a2, int a3, unsigned int a4)
{
  __int64 v4; // rdi
  unsigned int v5; // r15d
  __int64 v6; // r13
  _QWORD *v7; // rbp
  unsigned int v8; // r12d
  _QWORD *v9; // rsi
  unsigned int v10; // r14d
  ULONG_PTR v11; // rsi
  _QWORD *v12; // r14
  unsigned __int64 OldIrql; // rbx
  __int64 *v14; // rdi
  __int64 i; // rcx
  __int64 j; // rcx
  _QWORD *v17; // rbx
  __int64 result; // rax
  unsigned __int64 v19; // rbx
  unsigned __int64 v20; // rcx
  __int64 v21; // rcx
  _QWORD *v22; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v26; // eax
  bool v27; // zf
  _QWORD *v28; // rbx
  struct _KPRCB *v29; // r9
  _DWORD *v30; // r8
  __int64 v31; // [rsp+20h] [rbp-68h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+28h] [rbp-60h] BYREF
  unsigned int v33; // [rsp+90h] [rbp+8h]
  unsigned int v35; // [rsp+A0h] [rbp+18h]
  int v36; // [rsp+A8h] [rbp+20h]

  v36 = a4;
  v4 = a3;
  v35 = 0;
  v31 = *a1;
  v5 = a4;
  v6 = 16LL;
  v7 = a2;
  v8 = 0;
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( a3 <= 4LL )
  {
    while ( 1 )
    {
      v9 = (_QWORD *)v7[v4 + 527];
      v10 = v5;
      v33 = v5;
      if ( v4 <= 1 )
        v9 = (_QWORD *)(v7[v4 + 272] + 40LL * v8);
      if ( v4 == 2 )
        v9 = &v7[5 * v5 + 304];
      if ( v4 != 3 )
        goto LABEL_7;
      if ( *v9 != v7[950] )
        break;
LABEL_22:
      if ( ++v4 > 4 )
        goto LABEL_23;
    }
    v9 = &v7[5 * v5 + 432];
LABEL_7:
    KeAcquireInStackQueuedSpinLock(v9 + 4, &LockHandle);
    if ( *v9 )
    {
      v11 = v9[2];
      do
      {
        v12 = (_QWORD *)(48 * v11 - 0x58000000000LL);
        if ( !MiIsPfnFileOnly((__int64)v12) )
        {
          if ( v4 == 2 && MiIsDecayPfn(v11) )
          {
            v20 = v12[2];
            if ( qword_140C4DF80 && (v20 & 0x10) == 0 )
              v20 &= ~qword_140C4DF80;
            v21 = (v20 >> 12) & 0xFFFFFFFFFLL;
            if ( v21 != v11 )
            {
              do
              {
                v22 = (_QWORD *)(48 * v21 - 0x58000000000LL);
                MiMirrorAddPagesToBrownList(v21, 1LL);
                v21 = *v22 & 0xFFFFFFFFFLL;
              }
              while ( v21 != v11 );
              v6 = 16LL;
            }
          }
          else
          {
            MiMirrorAddPagesToBrownList(v11, 1LL);
          }
        }
        v11 = *v12 & 0xFFFFFFFFFLL;
      }
      while ( v11 != 0xFFFFFFFFFLL );
      v7 = a2;
      v5 = v36;
      v8 = v35;
      v10 = v33;
    }
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
          v26 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v27 = (v26 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v26;
          if ( v27 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(OldIrql);
    if ( v4 <= 1 )
    {
      v35 = ++v8;
      if ( v8 >= dword_140C4DF3C )
      {
        v35 = 0;
        v8 = 0;
        if ( v4 == 1 )
          MiMirrorNodeLargePages(v31, v7, 0LL);
      }
      else
      {
        --v4;
      }
    }
    else if ( v4 == 2 )
    {
      ++v5;
      if ( v10 == 7 )
        v5 = 0;
      else
        v4 = 1LL;
      v36 = v5;
    }
    else if ( v4 == 3 )
    {
      v36 = ++v5;
      if ( v5 != 16 )
        v4 = 2LL;
    }
    goto LABEL_22;
  }
LABEL_23:
  KeAcquireInStackQueuedSpinLock(v7 + 940, &LockHandle);
  v14 = v7 + 354;
  do
  {
    for ( i = *v14; i != 0xFFFFFFFFFLL; i = *v28 & 0xFFFFFFFFFLL )
    {
      v28 = (_QWORD *)(48 * i - 0x58000000000LL);
      MiMirrorAddPagesToBrownList(i, 1LL);
    }
    v14 += 5;
    --v6;
  }
  while ( v6 );
  for ( j = v7[346]; j != 0xFFFFFFFFFLL; j = *v17 & 0xFFFFFFFFFLL )
  {
    v17 = (_QWORD *)(48 * j - 0x58000000000LL);
    MiMirrorAddPagesToBrownList(j, 1LL);
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  result = (unsigned int)KiIrqlFlags;
  v19 = LockHandle.OldIrql;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && LockHandle.OldIrql <= 0xFu && (unsigned __int8)result >= 2u )
      {
        v29 = KeGetCurrentPrcb();
        v30 = v29->SchedulerAssist;
        result = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v27 = ((unsigned int)result & v30[5]) == 0;
        v30[5] &= result;
        if ( v27 )
          result = KiRemoveSystemWorkPriorityKick(v29);
      }
    }
  }
  __writecr8(v19);
  return result;
}
