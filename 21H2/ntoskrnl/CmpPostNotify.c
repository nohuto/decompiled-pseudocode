/*
 * XREFs of CmpPostNotify @ 0x1406DC820
 * Callers:
 *     CmpNotifyChangeKey @ 0x1406588C0 (CmpNotifyChangeKey.c)
 *     CmpFlushNotify @ 0x14065FCAC (CmpFlushNotify.c)
 *     CmpCloseKeyObject @ 0x14065FDA0 (CmpCloseKeyObject.c)
 *     CmpReportNotifyHelper @ 0x1406DCAF0 (CmpReportNotifyHelper.c)
 * Callees:
 *     KeInsertQueueApc @ 0x14027E260 (KeInsertQueueApc.c)
 *     ExAcquireFastMutexUnsafe @ 0x1402AB110 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x1402AB2A0 (ExReleaseFastMutexUnsafe.c)
 *     KeSetEvent @ 0x14034E2F0 (KeSetEvent.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     CmpCancelSubordinatePost @ 0x1405FB23C (CmpCancelSubordinatePost.c)
 *     CmpAddToDelayedDeref @ 0x1405FB288 (CmpAddToDelayedDeref.c)
 *     CmpFreeSubordinatePost @ 0x1405FBDE0 (CmpFreeSubordinatePost.c)
 *     CmpSignalDeferredPosts @ 0x14065C6B0 (CmpSignalDeferredPosts.c)
 *     CmpFreePostBlock @ 0x14065C880 (CmpFreePostBlock.c)
 *     CmpDelayedDerefKeys @ 0x1406DCCDC (CmpDelayedDerefKeys.c)
 */

void __fastcall CmpPostNotify(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, char a5, __int128 *a6, __int128 *a7)
{
  __int128 *v8; // r14
  __int128 *v9; // rsi
  _DWORD **v10; // rdi
  unsigned __int64 v11; // r11
  _DWORD *v12; // rbx
  __int64 v13; // rax
  int v14; // ecx
  __int64 v15; // rdx
  __int128 ***v16; // rax
  __int128 **v17; // rbx
  __int128 *v18; // rcx
  __int128 **v19; // rax
  _DWORD *v20; // rax
  __int64 v21; // rax
  __int64 v22; // rdx
  _QWORD *v23; // rcx
  unsigned __int8 CurrentIrql; // r15
  __int64 v25; // rdx
  _QWORD *v26; // rax
  unsigned __int8 v27; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v30; // eax
  bool v31; // zf
  __int64 v32; // rax
  __int128 v33; // [rsp+20h] [rbp-20h] BYREF
  __int128 v34; // [rsp+30h] [rbp-10h] BYREF
  unsigned int v35; // [rsp+78h] [rbp+38h]

  v35 = a4;
  v33 = 0LL;
  v34 = 0LL;
  if ( !a6 )
  {
    *((_QWORD *)&v33 + 1) = &v33;
    *(_QWORD *)&v33 = &v33;
  }
  v8 = &v33;
  if ( a6 )
    v8 = a6;
  if ( !a7 )
  {
    *((_QWORD *)&v34 + 1) = &v34;
    *(_QWORD *)&v34 = &v34;
  }
  v9 = &v34;
  if ( a7 )
    v9 = a7;
  if ( !a5 )
  {
    ExAcquireFastMutexUnsafe(&CmpPostLock);
    a4 = v35;
  }
  v10 = (_DWORD **)(a1 + 16);
  if ( *v10 == (_DWORD *)v10 )
  {
    *(_DWORD *)(a1 + 48) |= 0x80000000;
    if ( !a5 )
      ExReleaseFastMutexUnsafe(&CmpPostLock);
  }
  else
  {
    *(_DWORD *)(a1 + 48) &= ~0x80000000;
LABEL_16:
    v11 = 1LL;
    while ( 1 )
    {
      v12 = *v10;
      if ( *v10 == (_DWORD *)v10 )
        break;
      v13 = *(_QWORD *)v12;
      if ( *((_DWORD ***)v12 + 1) != v10 || *(_DWORD **)(v13 + 8) != v12 )
        goto LABEL_59;
      *v10 = (_DWORD *)v13;
      *(_QWORD *)(v13 + 8) = v10;
      if ( a4 != 267 || (v12[14] & 0x10000) != 0 )
      {
        v14 = v12[14];
        if ( (v14 & 0x10000) == 0 )
        {
          v20 = v12;
          do
          {
            v21 = *((_QWORD *)v20 + 4);
            *(_DWORD *)(v21 + 24) &= ~0x10000u;
            v20 = (_DWORD *)(v21 - 32);
          }
          while ( v20 != v12 );
          v12[14] |= 0x10000u;
          v14 = v12[14];
        }
        if ( (unsigned __int16)v14 != (_DWORD)v11 )
        {
          CmpCancelSubordinatePost((__int64)v12, (__int64)v8);
          CmpAddToDelayedDeref((__int64)v12, v15);
          v14 = v12[14];
        }
        if ( (unsigned __int16)v14 == (_DWORD)v11 )
        {
          v32 = *((_QWORD *)v12 + 8);
          *(_QWORD *)v12 = 0LL;
          *(_DWORD *)(v32 + 24) = a4;
          KeSetEvent(*((PRKEVENT *)v12 + 8), 0, 0);
          goto LABEL_31;
        }
        if ( (unsigned __int16)v14 == 2 )
        {
          KeInsertQueueApc(*((_QWORD *)v12 + 8) + 16LL, a4, (__int64)v12, 0);
LABEL_31:
          a4 = v35;
          goto LABEL_16;
        }
        if ( (unsigned int)(unsigned __int16)v14 - 3 <= (unsigned int)v11 )
        {
          CmpFreeSubordinatePost((__int64)v12);
          v16 = (__int128 ***)*((_QWORD *)v12 + 3);
          v17 = (__int128 **)(v12 + 4);
          v18 = *v17;
          if ( *((__int128 ***)*v17 + 1) != v17
            || *v16 != v17
            || (*v16 = (__int128 **)v18, *((_QWORD *)v18 + 1) = v16, v19 = (__int128 **)*((_QWORD *)v9 + 1), *v19 != v9) )
          {
LABEL_59:
            __fastfail(3u);
          }
          *v17 = v9;
          v17[1] = (__int128 *)v19;
          *v19 = (__int128 *)v17;
          *((_QWORD *)v9 + 1) = v17;
          goto LABEL_31;
        }
      }
      else
      {
        v22 = *((_QWORD *)v12 + 4);
        v23 = (_QWORD *)*((_QWORD *)v12 + 5);
        if ( *(_DWORD **)(v22 + 8) != v12 + 8 )
          goto LABEL_59;
        if ( (_DWORD *)*v23 != v12 + 8 )
          goto LABEL_59;
        *v23 = v22;
        *(_QWORD *)(v22 + 8) = v23;
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(v11);
        v25 = *((_QWORD *)v12 + 2);
        v26 = (_QWORD *)*((_QWORD *)v12 + 3);
        if ( *(_DWORD **)(v25 + 8) != v12 + 4 || (_DWORD *)*v26 != v12 + 4 )
          goto LABEL_59;
        *v26 = v25;
        *(_QWORD *)(v25 + 8) = v26;
        if ( KiIrqlFlags )
        {
          if ( ((unsigned __int8)KiIrqlFlags & (unsigned __int8)v11) != 0 )
          {
            v27 = KeGetCurrentIrql();
            if ( v27 <= 0xFu && CurrentIrql <= 0xFu && v27 >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              SchedulerAssist = CurrentPrcb->SchedulerAssist;
              v30 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v11 + CurrentIrql));
              v31 = (v30 & SchedulerAssist[5]) == 0;
              SchedulerAssist[5] &= v30;
              if ( v31 )
              {
                KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
                v11 = 1LL;
              }
              a4 = v35;
            }
          }
        }
        __writecr8(CurrentIrql);
        if ( v12[14] != (_DWORD)v11 )
        {
          CmpAddToDelayedDeref((__int64)v12, (__int64)v8);
          CmpFreePostBlock(v12);
          goto LABEL_31;
        }
      }
    }
    if ( !a5 )
      ExReleaseFastMutexUnsafe(&CmpPostLock);
    if ( !a6 )
      CmpDelayedDerefKeys(v8);
    if ( !a7 )
      CmpSignalDeferredPosts((_QWORD **)v9);
  }
}
