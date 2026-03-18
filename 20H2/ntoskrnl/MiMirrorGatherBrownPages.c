/*
 * XREFs of MiMirrorGatherBrownPages @ 0x14038621C
 * Callers:
 *     MiMirrorBrownPhase @ 0x140998F4C (MiMirrorBrownPhase.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402237F0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiIsPfnFileOnly @ 0x14027A540 (MiIsPfnFileOnly.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140295000 (KeAcquireInStackQueuedSpinLock.c)
 *     MiIsDecayPfn @ 0x14031591C (MiIsDecayPfn.c)
 *     MiMirrorNodeLargePages @ 0x140384B2C (MiMirrorNodeLargePages.c)
 *     MiMirrorAddPagesToBrownList @ 0x14038649C (MiMirrorAddPagesToBrownList.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
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
  __int64 v13; // r8
  __int64 v14; // r9
  unsigned __int64 OldIrql; // rbx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 *v18; // rdi
  __int64 i; // rcx
  __int64 j; // rcx
  _QWORD *v21; // rbx
  __int64 result; // rax
  unsigned __int64 v23; // rbx
  unsigned __int64 v24; // rcx
  __int64 v25; // rcx
  _QWORD *v26; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v30; // eax
  bool v31; // zf
  _QWORD *v32; // rbx
  struct _KPRCB *v33; // r9
  _DWORD *v34; // r8
  __int64 v35; // [rsp+20h] [rbp-68h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+28h] [rbp-60h] BYREF
  unsigned int v37; // [rsp+90h] [rbp+8h]
  unsigned int v39; // [rsp+A0h] [rbp+18h]
  int v40; // [rsp+A8h] [rbp+20h]

  v40 = a4;
  v4 = a3;
  v39 = 0;
  v35 = *a1;
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
      v37 = v5;
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
            v24 = v12[2];
            if ( qword_140C4DDC0 && (v24 & 0x10) == 0 )
              v24 &= ~qword_140C4DDC0;
            v25 = (v24 >> 12) & 0xFFFFFFFFFLL;
            if ( v25 != v11 )
            {
              do
              {
                v26 = (_QWORD *)(48 * v25 - 0x58000000000LL);
                MiMirrorAddPagesToBrownList(v25, 1LL, v13, v14);
                v25 = *v26 & 0xFFFFFFFFFLL;
              }
              while ( v25 != v11 );
              v6 = 16LL;
            }
          }
          else
          {
            MiMirrorAddPagesToBrownList(v11, 1LL, v13, v14);
          }
        }
        v11 = *v12 & 0xFFFFFFFFFLL;
      }
      while ( v11 != 0xFFFFFFFFFLL );
      v7 = a2;
      v5 = v40;
      v8 = v39;
      v10 = v37;
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
          v30 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v31 = (v30 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v30;
          if ( v31 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(OldIrql);
    if ( v4 <= 1 )
    {
      v39 = ++v8;
      if ( v8 >= dword_140C4DD7C )
      {
        v39 = 0;
        v8 = 0;
        if ( v4 == 1 )
          MiMirrorNodeLargePages(v35, (__int64)v7, 0LL);
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
      v40 = v5;
    }
    else if ( v4 == 3 )
    {
      v40 = ++v5;
      if ( v5 != 16 )
        v4 = 2LL;
    }
    goto LABEL_22;
  }
LABEL_23:
  KeAcquireInStackQueuedSpinLock(v7 + 940, &LockHandle);
  v18 = v7 + 354;
  do
  {
    for ( i = *v18; i != 0xFFFFFFFFFLL; i = *v32 & 0xFFFFFFFFFLL )
    {
      v32 = (_QWORD *)(48 * i - 0x58000000000LL);
      MiMirrorAddPagesToBrownList(i, 1LL, v16, v17);
    }
    v18 += 5;
    --v6;
  }
  while ( v6 );
  for ( j = v7[346]; j != 0xFFFFFFFFFLL; j = *v21 & 0xFFFFFFFFFLL )
  {
    v21 = (_QWORD *)(48 * j - 0x58000000000LL);
    MiMirrorAddPagesToBrownList(j, 1LL, v16, v17);
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  result = (unsigned int)KiIrqlFlags;
  v23 = LockHandle.OldIrql;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && LockHandle.OldIrql <= 0xFu && (unsigned __int8)result >= 2u )
      {
        v33 = KeGetCurrentPrcb();
        v34 = v33->SchedulerAssist;
        result = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v31 = ((unsigned int)result & v34[5]) == 0;
        v34[5] &= result;
        if ( v31 )
          result = KiRemoveSystemWorkPriorityKick(v33);
      }
    }
  }
  __writecr8(v23);
  return result;
}
