/*
 * XREFs of ExpCheckForWorker @ 0x14063F394
 * Callers:
 *     ExpFreePoolChecks @ 0x140216974 (ExpFreePoolChecks.c)
 *     ExFreeHeapPool @ 0x140348B40 (ExFreeHeapPool.c)
 * Callees:
 *     PsGetNextPartition @ 0x140236710 (PsGetNextPartition.c)
 *     KiAcquireKobjectLockSafe @ 0x1402F3290 (KiAcquireKobjectLockSafe.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

_QWORD *__fastcall ExpCheckForWorker(ULONG_PTR BugCheckParameter3, __int64 a2)
{
  ULONG_PTR BugCheckParameter4; // r13
  void *i; // rcx
  _QWORD *result; // rax
  volatile signed __int32 *SchedulerAssist; // r9
  _QWORD *v7; // rbx
  __int64 v8; // r8
  unsigned __int16 j; // bp
  unsigned __int16 *v10; // r12
  __int64 v11; // r14
  __int64 v12; // rdx
  volatile signed __int32 *v13; // rdi
  unsigned __int8 CurrentIrql; // si
  volatile signed __int32 **v15; // rdx
  int k; // ecx
  volatile signed __int32 *v17; // r8
  unsigned __int8 v18; // al
  struct _KPRCB *CurrentPrcb; // r10
  int v20; // eax
  bool v21; // zf

  BugCheckParameter4 = BugCheckParameter3 + a2;
  for ( i = 0LL; ; i = v7 )
  {
    result = PsGetNextPartition(i);
    v7 = result;
    if ( !result )
      break;
    v8 = 2LL;
    if ( result != PspSystemPartition || result[2] )
    {
      for ( j = 0; j < (unsigned __int16)KeNumberNodes; ++j )
      {
        v10 = (unsigned __int16 *)KeNodeBlock[j];
        v11 = 0LL;
        if ( v10 == (unsigned __int16 *)((char *)&KiNodeInit + 280 * j) )
          v10 = 0LL;
        do
        {
          v12 = *v10;
          v13 = *(volatile signed __int32 **)(*(_QWORD *)(*(_QWORD *)(v7[2] + 8LL) + 8 * v12) + v11);
          if ( ((unsigned __int8)v13 & 1) == 0 && v13 )
          {
            CurrentIrql = KeGetCurrentIrql();
            __writecr8(2uLL);
            if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
            {
              SchedulerAssist = (volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist;
              v12 = (-1LL << (CurrentIrql + 1)) & 4;
              v8 = (unsigned int)v12 | *((_DWORD *)SchedulerAssist + 5);
              *((_DWORD *)SchedulerAssist + 5) = v8;
            }
            KiAcquireKobjectLockSafe(v13, v12, v8, (__int64)SchedulerAssist);
            v15 = (volatile signed __int32 **)(v13 + 6);
            for ( k = 0; k < 32; ++k )
            {
              v17 = *v15;
              SchedulerAssist = &v13[4 * k + 6];
              while ( v17 != SchedulerAssist )
              {
                if ( (unsigned __int64)v17 >= BugCheckParameter3 && (unsigned __int64)v17 < BugCheckParameter4 )
                  KeBugCheckEx(0xE4u, 0LL, (ULONG_PTR)v17, BugCheckParameter3, BugCheckParameter4);
                v17 = *(volatile signed __int32 **)v17;
              }
              v15 += 2;
            }
            _InterlockedAnd(v13, 0xFFFFFF7F);
            v8 = 2LL;
            if ( KiIrqlFlags )
            {
              if ( (KiIrqlFlags & 1) != 0 )
              {
                v18 = KeGetCurrentIrql();
                if ( v18 <= 0xFu && CurrentIrql <= 0xFu && v18 >= 2u )
                {
                  CurrentPrcb = KeGetCurrentPrcb();
                  SchedulerAssist = (volatile signed __int32 *)CurrentPrcb->SchedulerAssist;
                  v20 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
                  v21 = (v20 & SchedulerAssist[5]) == 0;
                  *((_DWORD *)SchedulerAssist + 5) &= v20;
                  if ( v21 )
                    KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
                  v8 = 2LL;
                }
              }
            }
            __writecr8(CurrentIrql);
          }
          v11 += 8LL;
        }
        while ( v11 < 64 );
      }
    }
  }
  return result;
}
