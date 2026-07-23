/*
 * XREFs of MiMirrorNodeLargePages @ 0x140385A5C
 * Callers:
 *     MiMirrorGatherBrownPages @ 0x1403844C8 (MiMirrorGatherBrownPages.c)
 *     MiMirrorReduceBlackWrites @ 0x140385DC0 (MiMirrorReduceBlackWrites.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402042B0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KxAcquireQueuedSpinLock @ 0x14035B6C0 (KxAcquireQueuedSpinLock.c)
 *     MiMirrorAddPagesToBrownList @ 0x140384748 (MiMirrorAddPagesToBrownList.c)
 *     MiMirrorOmitPagesFromCopy @ 0x140385FAC (MiMirrorOmitPagesFromCopy.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

unsigned __int64 __fastcall MiMirrorNodeLargePages(__int64 a1, __int64 a2, int a3)
{
  unsigned __int64 v3; // rdi
  int v4; // ebx
  __int64 v5; // r9
  unsigned __int64 result; // rax
  unsigned __int64 *v7; // r10
  unsigned __int8 CurrentIrql; // bp
  _DWORD *SchedulerAssist; // r9
  unsigned __int64 v10; // rdx
  int *v11; // rax
  unsigned __int64 *v12; // rcx
  unsigned __int64 v13; // rbp
  __int64 v14; // r13
  unsigned int v15; // ecx
  __int64 i; // r15
  unsigned int v17; // r12d
  __int64 v18; // rax
  __int64 v19; // rbx
  _QWORD **v20; // r14
  __int64 v21; // rax
  _QWORD *v22; // rsi
  bool v23; // zf
  unsigned __int8 v24; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *v26; // r9
  int v27; // eax
  __int64 v28; // [rsp+20h] [rbp-B8h]
  __int64 v29; // [rsp+28h] [rbp-B0h]
  __int64 *v30; // [rsp+30h] [rbp-A8h]
  int *v31; // [rsp+38h] [rbp-A0h]
  unsigned __int64 v32; // [rsp+40h] [rbp-98h]
  __int64 v33; // [rsp+48h] [rbp-90h]
  unsigned __int8 v34; // [rsp+50h] [rbp-88h]
  unsigned __int64 v35; // [rsp+58h] [rbp-80h]
  unsigned __int64 v36; // [rsp+60h] [rbp-78h]
  unsigned __int64 v37; // [rsp+68h] [rbp-70h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+70h] [rbp-68h] BYREF
  int v40; // [rsp+E8h] [rbp+10h]
  __int64 v42; // [rsp+F8h] [rbp+20h]

  v35 = *(_QWORD *)(a2 + 16);
  v3 = v35;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v4 = a3;
  v5 = a1;
  v34 = 17;
  result = v35 + 4544LL * (unsigned __int16)KeNumberNodes;
  v37 = result;
  if ( v35 < result )
  {
    v7 = (unsigned __int64 *)(v35 + 4328);
    v36 = v35 + 4328;
    do
    {
      if ( !v4 )
      {
        CurrentIrql = KeGetCurrentIrql();
        v34 = CurrentIrql;
        __writecr8(2uLL);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
        {
          SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
          SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
        }
        LockHandle.LockQueue.Next = 0LL;
        LockHandle.LockQueue.Lock = v7;
        KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)v7);
        v5 = a1;
      }
      v10 = v3;
      v33 = 3LL;
      v11 = dword_140C4DFC0;
      v32 = v3;
      v12 = (unsigned __int64 *)MiLargePageSizes;
      v31 = dword_140C4DFC0;
      v30 = MiLargePageSizes;
      do
      {
        v13 = *v12;
        v14 = 0LL;
        v15 = *v11;
        v40 = *v11;
        v29 = 0LL;
        do
        {
          for ( i = 0LL; i <= 1; ++i )
          {
            v17 = 0;
            if ( MmNumberOfChannels )
            {
              do
              {
                v18 = 4LL;
                v28 = 4LL;
                v19 = 32 * (4 * (i + v14) + v17) + 560;
                do
                {
                  v20 = *(_QWORD ***)(v10 + v19);
                  if ( v15 )
                  {
                    v21 = v15;
                    v42 = v15;
                    do
                    {
                      v22 = *v20;
                      if ( *v20 != v20 )
                      {
                        do
                        {
                          if ( a3 )
                            MiMirrorOmitPagesFromCopy(v5, (__int64)(v22 + 0xB000000000LL) / 48, v13);
                          else
                            MiMirrorAddPagesToBrownList((__int64)(v22 + 0xB000000000LL) / 48, v13);
                          v22 = (_QWORD *)*v22;
                          v5 = a1;
                        }
                        while ( v22 != v20 );
                        v21 = v42;
                      }
                      v5 = a1;
                      v20 += 3;
                      v42 = --v21;
                    }
                    while ( v21 );
                    v18 = v28;
                    v10 = v32;
                    v15 = v40;
                  }
                  v5 = a1;
                  v19 += 8LL;
                  v28 = --v18;
                }
                while ( v18 );
                ++v17;
              }
              while ( v17 < MmNumberOfChannels );
              v14 = v29;
            }
            v5 = a1;
          }
          v14 += 2LL;
          v29 = v14;
        }
        while ( v14 <= 2 );
        v10 += 1072LL;
        v12 = (unsigned __int64 *)(v30 + 1);
        v11 = v31 + 1;
        ++v30;
        v23 = v33-- == 1;
        ++v31;
        v32 = v10;
      }
      while ( !v23 );
      v4 = a3;
      if ( !a3 )
      {
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v24 = KeGetCurrentIrql();
            if ( v24 <= 0xFu && v34 <= 0xFu && v24 >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              v26 = CurrentPrcb->SchedulerAssist;
              v27 = ~(unsigned __int16)(-1LL << (v34 + 1));
              v23 = (v27 & v26[5]) == 0;
              v26[5] &= v27;
              if ( v23 )
                KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            }
          }
        }
        __writecr8(v34);
      }
      result = 4544LL;
      v5 = a1;
      v3 = v35 + 4544;
      v7 = (unsigned __int64 *)(v36 + 4544);
      v35 = v3;
      v36 += 4544LL;
    }
    while ( v3 < v37 );
  }
  return result;
}
