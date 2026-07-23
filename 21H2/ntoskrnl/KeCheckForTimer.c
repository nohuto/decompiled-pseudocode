/*
 * XREFs of KeCheckForTimer @ 0x140515D3C
 * Callers:
 *     ExpFreePoolChecks @ 0x14021898C (ExpFreePoolChecks.c)
 *     ExFreeHeapPool @ 0x14034C810 (ExFreeHeapPool.c)
 *     VerifierKeInitializeTimerEx @ 0x1409DBD10 (VerifierKeInitializeTimerEx.c)
 * Callees:
 *     KeQueryActiveProcessorCountEx @ 0x1402695B0 (KeQueryActiveProcessorCountEx.c)
 *     KeYieldProcessorEx @ 0x1402EFAD0 (KeYieldProcessorEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 */

int __fastcall KeCheckForTimer(ULONG_PTR BugCheckParameter3, __int64 a2)
{
  __int64 *v2; // rax
  ULONG_PTR BugCheckParameter4; // rsi
  __int64 v5; // r8
  void **SchedulerAssist; // r9
  unsigned int v7; // r13d
  unsigned int v8; // ebp
  __int64 v9; // rdx
  void **v10; // r15
  volatile signed __int32 *v11; // r14
  unsigned __int8 CurrentIrql; // r12
  struct _KPRCB *CurrentPrcb; // rbx
  _DWORD *v14; // rcx
  int v15; // eax
  _DWORD *v16; // rcx
  int v17; // eax
  ULONG_PTR v18; // r10
  ULONG_PTR v19; // rdx
  ULONG_PTR v20; // r8
  ULONG_PTR v21; // r8
  struct _KPRCB *v22; // rcx
  int v23; // eax
  unsigned __int8 v24; // al
  struct _KPRCB *v25; // r10
  int v26; // eax
  bool v27; // zf
  unsigned int v29; // [rsp+30h] [rbp-58h]
  __int64 *v30; // [rsp+38h] [rbp-50h]
  __int64 v31; // [rsp+40h] [rbp-48h]
  int v32; // [rsp+A0h] [rbp+18h]
  int v33; // [rsp+A8h] [rbp+20h] BYREF

  LODWORD(v2) = KeTimerCheckFlags;
  if ( (KeTimerCheckFlags & 1) != 0 )
  {
    BugCheckParameter4 = BugCheckParameter3 + a2;
    LODWORD(v2) = KeQueryActiveProcessorCountEx(0xFFFFu);
    v7 = 0;
    v29 = (unsigned int)v2;
    if ( (_DWORD)v2 )
    {
      v2 = KiProcessorBlock;
      v30 = KiProcessorBlock;
      do
      {
        v8 = 0;
        v9 = 0LL;
        v31 = 0LL;
        do
        {
          v32 = 0;
          v10 = (void **)(((unsigned __int64)v8 << 13) + *v2 + 15176);
          v11 = (volatile signed __int32 *)(v9 + *v2 + 15168);
          do
          {
            CurrentIrql = KeGetCurrentIrql();
            __writecr8(2uLL);
            if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
            {
              SchedulerAssist = (void **)KeGetCurrentPrcb()->SchedulerAssist;
              v9 = (-1LL << (CurrentIrql + 1)) & 4;
              v5 = (unsigned int)v9 | *((_DWORD *)SchedulerAssist + 5);
              *((_DWORD *)SchedulerAssist + 5) = v5;
            }
            CurrentPrcb = KeGetCurrentPrcb();
            v33 = 0;
            while ( 1 )
            {
              v14 = CurrentPrcb->SchedulerAssist;
              if ( v14 )
              {
                if ( CurrentPrcb->NestingLevel <= 1u )
                {
                  v15 = v14[6];
                  v14[6] = v15 + 1;
                  if ( v15 == -1 )
                    KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
                }
              }
              if ( !_interlockedbittestandset64(v11, 0LL) )
                break;
              v16 = CurrentPrcb->SchedulerAssist;
              if ( v16 )
              {
                if ( CurrentPrcb->NestingLevel <= 1u )
                {
                  v17 = v16[6] - 1;
                  v16[6] = v17;
                  if ( !v17 )
                    KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
                }
              }
              do
                KeYieldProcessorEx(&v33, v9, v5, (__int64)SchedulerAssist);
              while ( *(_QWORD *)v11 );
            }
            SchedulerAssist = (void **)*v10;
            if ( *v10 != v10 )
            {
              v18 = BugCheckParameter3 - 64;
              do
              {
                v19 = (ULONG_PTR)(SchedulerAssist - 4);
                SchedulerAssist = (void **)*SchedulerAssist;
                if ( v19 > v18 && v19 < BugCheckParameter4 )
                  KeBugCheckEx(0xC7u, 0LL, v19, BugCheckParameter3, BugCheckParameter4);
                v20 = KiWaitAlways ^ _byteswap_uint64(v19 ^ __ROL8__(*(_QWORD *)(v19 + 48) ^ KiWaitNever, KiWaitNever));
                if ( v20 )
                {
                  if ( v20 > v18 && v20 < BugCheckParameter4 )
                    KeBugCheckEx(0xC7u, 1uLL, v20, BugCheckParameter3, BugCheckParameter4);
                  v21 = *(_QWORD *)(v20 + 24);
                  if ( v21 >= BugCheckParameter3 && v21 < BugCheckParameter4 )
                    KeBugCheckEx(0xC7u, 2uLL, v21, BugCheckParameter3, BugCheckParameter4);
                }
              }
              while ( SchedulerAssist != v10 );
            }
            _InterlockedAnd64((volatile signed __int64 *)v11, 0LL);
            v22 = KeGetCurrentPrcb();
            v9 = (__int64)v22->SchedulerAssist;
            if ( v9 )
            {
              if ( v22->NestingLevel <= 1u )
              {
                v23 = *(_DWORD *)(v9 + 24) - 1;
                *(_DWORD *)(v9 + 24) = v23;
                if ( !v23 )
                  KiRemoveSystemWorkPriorityKick((__int64)v22);
              }
            }
            if ( KiIrqlFlags )
            {
              if ( (KiIrqlFlags & 1) != 0 )
              {
                v24 = KeGetCurrentIrql();
                if ( v24 <= 0xFu && CurrentIrql <= 0xFu && v24 >= 2u )
                {
                  v25 = KeGetCurrentPrcb();
                  v9 = -1LL << (CurrentIrql + 1);
                  SchedulerAssist = (void **)v25->SchedulerAssist;
                  v26 = ~(unsigned __int16)v9;
                  v27 = (v26 & *((_DWORD *)SchedulerAssist + 5)) == 0;
                  *((_DWORD *)SchedulerAssist + 5) &= v26;
                  if ( v27 )
                    KiRemoveSystemWorkPriorityKick((__int64)v25);
                }
              }
            }
            __writecr8(CurrentIrql);
            v10 += 4;
            v5 = (unsigned int)(v32 + 1);
            v11 += 8;
            v32 = v5;
          }
          while ( (unsigned int)v5 < 0x100 );
          ++v8;
          v2 = v30;
          v9 = v31 + 0x2000;
          v31 += 0x2000LL;
        }
        while ( v8 < 2 );
        v2 = v30 + 1;
        ++v7;
        ++v30;
      }
      while ( v7 < v29 );
    }
  }
  return (int)v2;
}
