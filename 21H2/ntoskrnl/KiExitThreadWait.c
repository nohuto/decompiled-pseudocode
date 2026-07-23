/*
 * XREFs of KiExitThreadWait @ 0x1402662D0
 * Callers:
 *     KiFastExitThreadWait @ 0x1402661E8 (KiFastExitThreadWait.c)
 *     KiCommitThreadWait @ 0x140350D00 (KiCommitThreadWait.c)
 *     KiSatisfyThreadWait @ 0x140522D34 (KiSatisfyThreadWait.c)
 * Callees:
 *     KiCheckForThreadDispatch @ 0x140266354 (KiCheckForThreadDispatch.c)
 *     KiSelectNextThread @ 0x1402785FC (KiSelectNextThread.c)
 *     KiProcessDeferredReadyList @ 0x1402D5420 (KiProcessDeferredReadyList.c)
 *     KiDeliverApc @ 0x1402EEFA0 (KiDeliverApc.c)
 *     KeYieldProcessorEx @ 0x1402EFAD0 (KeYieldProcessorEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

char __fastcall KiExitThreadWait(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rbp
  char v5; // al
  unsigned int v6; // eax
  struct _KPRCB *CurrentPrcb; // rsi
  _DWORD *SchedulerAssist; // rcx
  int v9; // eax
  _DWORD *v10; // rcx
  int v11; // eax
  struct _KPRCB *v12; // rcx
  _DWORD *v13; // rdx
  int v14; // eax
  struct _KPRCB *v15; // rcx
  _DWORD *v16; // rdx
  bool v17; // zf
  struct _KPRCB *v18; // r10
  _DWORD *v19; // r9
  int v21; // [rsp+48h] [rbp+10h] BYREF
  __int64 v22; // [rsp+58h] [rbp+20h] BYREF

  v3 = *(unsigned __int8 *)(a2 + 390);
  v5 = *(_BYTE *)(a2 + 112);
  if ( (v5 & 0x38) != 0 )
  {
    if ( (v5 & 0x18) != 0 )
    {
      if ( (v5 & 8) != 0 )
        _interlockedbittestandset((volatile signed __int32 *)(a2 + 120), 0xCu);
      v22 = 0LL;
      CurrentPrcb = KeGetCurrentPrcb();
      v21 = 0;
      while ( 1 )
      {
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        if ( SchedulerAssist )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v9 = SchedulerAssist[6];
            SchedulerAssist[6] = v9 + 1;
            if ( v9 == -1 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        if ( !_interlockedbittestandset64((volatile signed __int32 *)(a1 + 48), 0LL) )
          break;
        v10 = CurrentPrcb->SchedulerAssist;
        if ( v10 )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v11 = v10[6] - 1;
            v10[6] = v11;
            if ( !v11 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        do
          KeYieldProcessorEx(&v21);
        while ( *(_QWORD *)(a1 + 48) );
      }
      if ( !*(_QWORD *)(a1 + 16) )
        KiSelectNextThread(a1, &v22);
      _InterlockedAnd64((volatile signed __int64 *)(a1 + 48), 0LL);
      v12 = KeGetCurrentPrcb();
      v13 = v12->SchedulerAssist;
      if ( v13 )
      {
        if ( v12->NestingLevel <= 1u )
        {
          v14 = v13[6] - 1;
          v13[6] = v14;
          if ( !v14 )
            KiRemoveSystemWorkPriorityKick(v12);
        }
      }
      LOBYTE(a3) = v3;
      LOBYTE(v6) = KiProcessDeferredReadyList(a1, &v22, a3);
    }
    else
    {
      LOBYTE(a2) = 1;
      KiCheckForThreadDispatch(a1, a2);
      KiDeliverApc(0LL, 0LL, 0LL);
      LOBYTE(v6) = KiIrqlFlags;
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          LOBYTE(v6) = KeGetCurrentIrql() - 2;
          if ( (unsigned __int8)v6 <= 0xDu )
          {
            v15 = KeGetCurrentPrcb();
            v16 = v15->SchedulerAssist;
            v17 = (v16[5] & 0xFFFF0001) == 0;
            v6 = v16[5] & 0xFFFF0001;
            v16[5] = v6;
            if ( v17 )
              LOBYTE(v6) = KiRemoveSystemWorkPriorityKick(v15);
          }
        }
      }
      __writecr8(0LL);
    }
  }
  else if ( (_BYTE)a3 )
  {
    LOBYTE(a2) = *(_BYTE *)(a2 + 390);
    LOBYTE(v6) = KiCheckForThreadDispatch(a1, a2);
  }
  else
  {
    LOBYTE(v6) = KiIrqlFlags;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        LOBYTE(v6) = KeGetCurrentIrql();
        if ( (unsigned __int8)v6 <= 0xFu && (unsigned __int8)v3 <= 0xFu && (unsigned __int8)v6 >= 2u )
        {
          v18 = KeGetCurrentPrcb();
          v19 = v18->SchedulerAssist;
          v6 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v3 + 1));
          v17 = (v6 & v19[5]) == 0;
          v19[5] &= v6;
          if ( v17 )
            LOBYTE(v6) = KiRemoveSystemWorkPriorityKick(v18);
        }
      }
    }
    __writecr8(v3);
  }
  return v6;
}
