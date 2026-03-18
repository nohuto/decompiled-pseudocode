/*
 * XREFs of CmNotifyRunDown @ 0x1406B0DF0
 * Callers:
 *     PspExitThread @ 0x1406B05E0 (PspExitThread.c)
 * Callees:
 *     ExAcquireFastMutexUnsafe @ 0x140202D60 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x140202EF0 (ExReleaseFastMutexUnsafe.c)
 *     HalPutDmaAdapter @ 0x140208270 (HalPutDmaAdapter.c)
 *     KeSetEvent @ 0x140286AD0 (KeSetEvent.c)
 *     KeRemoveQueueApc @ 0x14030050C (KeRemoveQueueApc.c)
 *     DbgPrint @ 0x140361340 (DbgPrint.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     CmpFreeSubordinatePost @ 0x1405E2068 (CmpFreeSubordinatePost.c)
 *     CmpCancelSubordinatePost @ 0x1405E20CC (CmpCancelSubordinatePost.c)
 *     CmpUnlockRegistry @ 0x1405F3D20 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x1405F3D60 (CmpLockRegistry.c)
 *     CmpFreePostBlock @ 0x1406ED780 (CmpFreePostBlock.c)
 */

__int64 __fastcall CmNotifyRunDown(__int64 a1)
{
  _QWORD *v2; // rbx
  __int64 result; // rax
  __int64 v4; // r8
  _DWORD *v5; // r9
  unsigned __int8 CurrentIrql; // di
  _QWORD *v7; // rax
  __int64 *v8; // rbx
  __int64 v9; // rcx
  char *v10; // rbx
  int v11; // ecx
  _QWORD *v12; // rdx
  unsigned __int64 v13; // rcx
  _QWORD *v14; // rdx
  __int16 v15; // ax
  __int64 v16; // rcx
  _QWORD *v17; // rcx
  void **v18; // rax
  _QWORD *v19; // rbx
  _QWORD *v20; // rcx
  unsigned __int8 v21; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v24; // eax
  bool v25; // zf

  v2 = (_QWORD *)(a1 + 1096);
  result = *(_QWORD *)(a1 + 1096);
  if ( result && (_QWORD *)result != v2 )
  {
    CmpLockRegistry();
    ExAcquireFastMutexUnsafe(&CmpPostLock);
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(1uLL);
    if ( *v2 )
    {
      while ( 1 )
      {
        v7 = (_QWORD *)(a1 + 1096);
        v8 = *(__int64 **)(a1 + 1096);
        if ( v8 == (__int64 *)(a1 + 1096) )
          break;
        v9 = *v8;
        if ( (_QWORD *)v8[1] != v7 || *(__int64 **)(v9 + 8) != v8 )
LABEL_33:
          __fastfail(3u);
        *v7 = v9;
        *(_QWORD *)(v9 + 8) = v7;
        v10 = (char *)(v8 - 2);
        v11 = *((_DWORD *)v10 + 14);
        if ( (v11 & 0x10000) != 0 )
        {
          if ( (_WORD)v11 != 2 )
            goto LABEL_27;
          v12 = (_QWORD *)*((_QWORD *)v10 + 8);
          if ( (_QWORD *)v12[13] == v12 + 13 )
          {
            DbgPrint("IoStatusBlock pointing onto itself AsyncUser = %p\n", v12);
            if ( (_BYTE)KdDebuggerEnabled )
            {
              if ( !(_BYTE)KdDebuggerNotPresent )
                __debugbreak();
            }
          }
          v13 = KeGetCurrentThread()->ApcState.Process[1].AffinityPadding[10];
          if ( v13 && ((v15 = *(_WORD *)(v13 + 8), v15 == 332) || v15 == 452) )
          {
            **(_DWORD **)(*((_QWORD *)v10 + 8) + 104LL) = 267;
            *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v10 + 8) + 104LL) + 4LL) = 0;
          }
          else
          {
            **(_DWORD **)(*((_QWORD *)v10 + 8) + 104LL) = 267;
            *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v10 + 8) + 104LL) + 8LL) = 0LL;
          }
          v14 = (_QWORD *)*((_QWORD *)v10 + 8);
          if ( (_QWORD *)v14[13] == v14 + 13 )
          {
            DbgPrint("IoStatusBlock pointing onto itself AsyncUser = %p\n", v14);
            if ( (_BYTE)KdDebuggerEnabled )
            {
              if ( !(_BYTE)KdDebuggerNotPresent )
                __debugbreak();
            }
          }
          v16 = *((_QWORD *)v10 + 8);
          if ( *(_QWORD *)(v16 + 8) )
          {
            KeSetEvent(*(PRKEVENT *)(v16 + 8), 0, 0);
            HalPutDmaAdapter(*(PADAPTER_OBJECT *)(*((_QWORD *)v10 + 8) + 8LL));
            v16 = *((_QWORD *)v10 + 8);
          }
          if ( !KeRemoveQueueApc(v16 + 16, (__int64)v14, v4, v5) )
          {
LABEL_27:
            v17 = *(_QWORD **)v10;
            v18 = (void **)*((_QWORD *)v10 + 1);
            if ( *(char **)(*(_QWORD *)v10 + 8LL) != v10 || *v18 != v10 )
              goto LABEL_33;
            *v18 = v17;
            v17[1] = v18;
            CmpCancelSubordinatePost((__int64)v10, 0LL);
          }
          CmpFreeSubordinatePost((__int64)v10);
          CmpFreePostBlock(v10);
        }
        else
        {
          v19 = v10 + 16;
          v20 = *(_QWORD **)(a1 + 1104);
          if ( (_QWORD *)*v20 != v7 )
            goto LABEL_33;
          *v19 = v7;
          v19[1] = v20;
          *v20 = v19;
          *(_QWORD *)(a1 + 1104) = v19;
        }
      }
    }
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v21 = KeGetCurrentIrql();
        if ( v21 <= 0xFu && CurrentIrql <= 0xFu && v21 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v24 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v25 = (v24 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v24;
          if ( v25 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8(CurrentIrql);
    ExReleaseFastMutexUnsafe(&CmpPostLock);
    return CmpUnlockRegistry();
  }
  return result;
}
