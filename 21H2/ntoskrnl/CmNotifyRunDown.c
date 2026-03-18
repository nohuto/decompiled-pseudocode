/*
 * XREFs of CmNotifyRunDown @ 0x14079FD44
 * Callers:
 *     PspExitThread @ 0x1407A0088 (PspExitThread.c)
 * Callees:
 *     CmCleanupThreadInfo @ 0x14022EA30 (CmCleanupThreadInfo.c)
 *     KeRemoveQueueApc @ 0x14024EC10 (KeRemoveQueueApc.c)
 *     ExReleaseFastMutexUnsafe @ 0x1402A3D80 (ExReleaseFastMutexUnsafe.c)
 *     ExAcquireFastMutexUnsafe @ 0x1402A3DC0 (ExAcquireFastMutexUnsafe.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     CmpInitializeThreadInfo @ 0x140347770 (CmpInitializeThreadInfo.c)
 *     DbgPrint @ 0x140369BD0 (DbgPrint.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     CmpFreePostBlock @ 0x1407190AC (CmpFreePostBlock.c)
 *     CmpFreeSubordinatePost @ 0x14071A400 (CmpFreeSubordinatePost.c)
 *     CmpCancelSubordinatePost @ 0x14071A7F0 (CmpCancelSubordinatePost.c)
 *     CmpUnlockRegistry @ 0x140AB4260 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x140AB4370 (CmpLockRegistry.c)
 */

__int64 __fastcall CmNotifyRunDown(__int64 a1)
{
  _QWORD *v2; // rbx
  __int64 result; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  unsigned __int8 CurrentIrql; // r14
  _QWORD *v8; // rax
  __int64 *v9; // rbx
  __int64 v10; // rcx
  char *v11; // rbx
  int v12; // ecx
  _QWORD *v13; // rdx
  _KPROCESS *Process; // rcx
  _QWORD *v15; // rdx
  __int16 v16; // ax
  char v17; // al
  __int64 v18; // rcx
  _QWORD *v19; // rcx
  void **v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  _QWORD *v25; // rbx
  _QWORD *v26; // rcx
  unsigned __int8 v27; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v30; // eax
  bool v31; // zf
  __int64 v32[7]; // [rsp+30h] [rbp-38h] BYREF

  *(_OWORD *)v32 = 0LL;
  v2 = (_QWORD *)(a1 + 1176);
  result = *(_QWORD *)(a1 + 1176);
  if ( result && (_QWORD *)result != v2 )
  {
    CmpInitializeThreadInfo((__int64)v32);
    CmpLockRegistry(v5, v4, v6);
    ExAcquireFastMutexUnsafe(&CmpPostLock);
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(1uLL);
    if ( *v2 )
    {
      while ( 1 )
      {
        v8 = (_QWORD *)(a1 + 1176);
        v9 = *(__int64 **)(a1 + 1176);
        if ( v9 == (__int64 *)(a1 + 1176) )
          break;
        v10 = *v9;
        if ( (_QWORD *)v9[1] != v8 || *(__int64 **)(v10 + 8) != v9 )
LABEL_35:
          __fastfail(3u);
        *v8 = v10;
        *(_QWORD *)(v10 + 8) = v8;
        v11 = (char *)(v9 - 2);
        v12 = *((_DWORD *)v11 + 14);
        if ( (v12 & 0x10000) != 0 )
        {
          if ( (_WORD)v12 != 2 )
            goto LABEL_29;
          v13 = (_QWORD *)*((_QWORD *)v11 + 8);
          if ( (_QWORD *)v13[13] == v13 + 13 )
          {
            DbgPrint("IoStatusBlock pointing onto itself AsyncUser = %p\n", v13);
            if ( (_BYTE)KdDebuggerEnabled )
            {
              if ( !(_BYTE)KdDebuggerNotPresent )
                __debugbreak();
            }
          }
          Process = KeGetCurrentThread()->ApcState.Process;
          if ( Process[1].Affinity.StaticBitmap[30]
            && ((v16 = WORD2(Process[2].Affinity.StaticBitmap[20]), v16 == 332) || v16 == 452 ? (v17 = 1) : (v17 = 0),
                v17) )
          {
            **(_DWORD **)(*((_QWORD *)v11 + 8) + 104LL) = 267;
            *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v11 + 8) + 104LL) + 4LL) = 0;
          }
          else
          {
            **(_DWORD **)(*((_QWORD *)v11 + 8) + 104LL) = 267;
            *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v11 + 8) + 104LL) + 8LL) = 0LL;
          }
          v15 = (_QWORD *)*((_QWORD *)v11 + 8);
          if ( (_QWORD *)v15[13] == v15 + 13 )
          {
            DbgPrint("IoStatusBlock pointing onto itself AsyncUser = %p\n", v15);
            if ( (_BYTE)KdDebuggerEnabled )
            {
              if ( !(_BYTE)KdDebuggerNotPresent )
                __debugbreak();
            }
          }
          v18 = *((_QWORD *)v11 + 8);
          if ( *(_QWORD *)(v18 + 8) )
          {
            KeSetEvent(*(PRKEVENT *)(v18 + 8), 0, 0);
            ObfDereferenceObject(*(PVOID *)(*((_QWORD *)v11 + 8) + 8LL));
            v18 = *((_QWORD *)v11 + 8);
          }
          if ( !KeRemoveQueueApc(v18 + 16) )
          {
LABEL_29:
            v19 = *(_QWORD **)v11;
            v20 = (void **)*((_QWORD *)v11 + 1);
            if ( *(char **)(*(_QWORD *)v11 + 8LL) != v11 || *v20 != v11 )
              goto LABEL_35;
            *v20 = v19;
            v19[1] = v20;
            CmpCancelSubordinatePost((__int64)v11, 0LL);
          }
          CmpFreeSubordinatePost((__int64)v11);
          CmpFreePostBlock(v11);
        }
        else
        {
          v25 = v11 + 16;
          v26 = *(_QWORD **)(a1 + 1184);
          if ( (_QWORD *)*v26 != v8 )
            goto LABEL_35;
          *v25 = v8;
          v25[1] = v26;
          *v26 = v25;
          *(_QWORD *)(a1 + 1184) = v25;
        }
      }
    }
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v27 = KeGetCurrentIrql();
        if ( v27 <= 0xFu && CurrentIrql <= 0xFu && v27 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v30 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v31 = (v30 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v30;
          if ( v31 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8(CurrentIrql);
    ExReleaseFastMutexUnsafe(&CmpPostLock);
    CmpUnlockRegistry(v22, v21, v23, v24);
    return CmCleanupThreadInfo(v32);
  }
  return result;
}
