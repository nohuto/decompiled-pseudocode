/*
 * XREFs of ExpCheckForWorker @ 0x1405B71F4
 * Callers:
 *     ExpFreePoolChecks @ 0x14021898C (ExpFreePoolChecks.c)
 *     ExFreeHeapPool @ 0x14034C810 (ExFreeHeapPool.c)
 * Callees:
 *     PsGetNextPartition @ 0x140250E68 (PsGetNextPartition.c)
 *     KiAcquireKobjectLockSafe @ 0x1402F0CF0 (KiAcquireKobjectLockSafe.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 */

_QWORD *__fastcall ExpCheckForWorker(ULONG_PTR BugCheckParameter3, __int64 a2)
{
  ULONG_PTR BugCheckParameter4; // r12
  void *i; // rcx
  _QWORD *result; // rax
  volatile signed __int32 *SchedulerAssist; // r9
  _QWORD *v7; // rbx
  __int64 v8; // r8
  unsigned __int16 j; // bp
  __int64 v10; // r14
  __int64 v11; // r13
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
        v10 = 0LL;
        v11 = KeNodeBlock[j];
        if ( (_UNKNOWN *)v11 == (_UNKNOWN *)((char *)&KiNodeInit + 384 * j) )
          v11 = 0LL;
        do
        {
          v12 = *(unsigned __int16 *)(v11 + 146);
          v13 = *(volatile signed __int32 **)(*(_QWORD *)(*(_QWORD *)(v7[2] + 8LL) + 8 * v12) + v10);
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
          v10 += 8LL;
        }
        while ( v10 < 64 );
      }
    }
  }
  return result;
}
