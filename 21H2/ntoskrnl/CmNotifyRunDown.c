/*
 * XREFs of CmNotifyRunDown @ 0x140641570
 * Callers:
 *     PspExitThread @ 0x14063F658 (PspExitThread.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     KeRemoveQueueApc @ 0x1402432CC (KeRemoveQueueApc.c)
 *     DbgPrint @ 0x140272780 (DbgPrint.c)
 *     ExAcquireFastMutexUnsafe @ 0x1402AB110 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x1402AB2A0 (ExReleaseFastMutexUnsafe.c)
 *     KeSetEvent @ 0x14034E2F0 (KeSetEvent.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     CmpCancelSubordinatePost @ 0x1405FB23C (CmpCancelSubordinatePost.c)
 *     CmpFreeSubordinatePost @ 0x1405FBDE0 (CmpFreeSubordinatePost.c)
 *     CmpFreePostBlock @ 0x14065C880 (CmpFreePostBlock.c)
 *     CmpUnlockRegistry @ 0x14070D2B0 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x14070D2F0 (CmpLockRegistry.c)
 */

__int64 __fastcall CmNotifyRunDown(__int64 a1)
{
  _QWORD *v2; // rbx
  __int64 result; // rax
  unsigned __int8 CurrentIrql; // di
  _QWORD *v5; // rax
  __int64 *v6; // rbx
  __int64 v7; // rcx
  char *v8; // rbx
  int v9; // ecx
  _QWORD *v10; // rdx
  unsigned __int64 v11; // rcx
  _QWORD *v12; // rdx
  __int16 v13; // ax
  __int64 v14; // rcx
  _QWORD *v15; // rcx
  void **v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
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
        v5 = (_QWORD *)(a1 + 1096);
        v6 = *(__int64 **)(a1 + 1096);
        if ( v6 == (__int64 *)(a1 + 1096) )
          break;
        v7 = *v6;
        if ( (_QWORD *)v6[1] != v5 || *(__int64 **)(v7 + 8) != v6 )
LABEL_33:
          __fastfail(3u);
        *v5 = v7;
        *(_QWORD *)(v7 + 8) = v5;
        v8 = (char *)(v6 - 2);
        v9 = *((_DWORD *)v8 + 14);
        if ( (v9 & 0x10000) != 0 )
        {
          if ( (_WORD)v9 != 2 )
            goto LABEL_27;
          v10 = (_QWORD *)*((_QWORD *)v8 + 8);
          if ( (_QWORD *)v10[13] == v10 + 13 )
          {
            DbgPrint("IoStatusBlock pointing onto itself AsyncUser = %p\n", v10);
            if ( (_BYTE)KdDebuggerEnabled )
            {
              if ( !(_BYTE)KdDebuggerNotPresent )
                __debugbreak();
            }
          }
          v11 = KeGetCurrentThread()->ApcState.Process[1].AffinityPadding[10];
          if ( v11 && ((v13 = *(_WORD *)(v11 + 8), v13 == 332) || v13 == 452) )
          {
            **(_DWORD **)(*((_QWORD *)v8 + 8) + 104LL) = 267;
            *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v8 + 8) + 104LL) + 4LL) = 0;
          }
          else
          {
            **(_DWORD **)(*((_QWORD *)v8 + 8) + 104LL) = 267;
            *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v8 + 8) + 104LL) + 8LL) = 0LL;
          }
          v12 = (_QWORD *)*((_QWORD *)v8 + 8);
          if ( (_QWORD *)v12[13] == v12 + 13 )
          {
            DbgPrint("IoStatusBlock pointing onto itself AsyncUser = %p\n", v12);
            if ( (_BYTE)KdDebuggerEnabled )
            {
              if ( !(_BYTE)KdDebuggerNotPresent )
                __debugbreak();
            }
          }
          v14 = *((_QWORD *)v8 + 8);
          if ( *(_QWORD *)(v14 + 8) )
          {
            KeSetEvent(*(PRKEVENT *)(v14 + 8), 0, 0);
            HalPutDmaAdapter(*(PADAPTER_OBJECT *)(*((_QWORD *)v8 + 8) + 8LL));
            v14 = *((_QWORD *)v8 + 8);
          }
          if ( !KeRemoveQueueApc(v14 + 16) )
          {
LABEL_27:
            v15 = *(_QWORD **)v8;
            v16 = (void **)*((_QWORD *)v8 + 1);
            if ( *(char **)(*(_QWORD *)v8 + 8LL) != v8 || *v16 != v8 )
              goto LABEL_33;
            *v16 = v15;
            v15[1] = v16;
            CmpCancelSubordinatePost((__int64)v8, 0LL);
          }
          CmpFreeSubordinatePost((__int64)v8);
          CmpFreePostBlock(v8);
        }
        else
        {
          v19 = v8 + 16;
          v20 = *(_QWORD **)(a1 + 1104);
          if ( (_QWORD *)*v20 != v5 )
            goto LABEL_33;
          *v19 = v5;
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
    return CmpUnlockRegistry(v18, v17);
  }
  return result;
}
