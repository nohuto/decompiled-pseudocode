/*
 * XREFs of KiExitThreadWait @ 0x140329B50
 * Callers:
 *     KiCommitThreadWait @ 0x140264C30 (KiCommitThreadWait.c)
 *     KiFastExitThreadWait @ 0x140329A64 (KiFastExitThreadWait.c)
 *     KiSatisfyThreadWait @ 0x14051CFF4 (KiSatisfyThreadWait.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140244550 (KeYieldProcessorEx.c)
 *     KiDeliverApc @ 0x140267B30 (KiDeliverApc.c)
 *     KiProcessDeferredReadyList @ 0x14026D000 (KiProcessDeferredReadyList.c)
 *     KiCheckForThreadDispatch @ 0x140329BD4 (KiCheckForThreadDispatch.c)
 *     KiSelectNextThread @ 0x140330AC8 (KiSelectNextThread.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 */

char __fastcall KiExitThreadWait(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v4; // rbp
  char v6; // al
  unsigned int v7; // eax
  _DWORD *v8; // r9
  struct _KPRCB *CurrentPrcb; // rsi
  _DWORD *SchedulerAssist; // rcx
  int v11; // eax
  _DWORD *v12; // rcx
  int v13; // eax
  struct _KPRCB *v14; // rcx
  _DWORD *v15; // rdx
  int v16; // eax
  struct _KPRCB *v17; // rcx
  _DWORD *v18; // rdx
  bool v19; // zf
  struct _KPRCB *v20; // r10
  _DWORD *v21; // r9
  int v23; // [rsp+48h] [rbp+10h] BYREF
  __int64 v24; // [rsp+58h] [rbp+20h] BYREF

  v4 = *(unsigned __int8 *)(a2 + 390);
  v6 = *(_BYTE *)(a2 + 112);
  if ( (v6 & 0x38) != 0 )
  {
    if ( (v6 & 0x18) != 0 )
    {
      if ( (v6 & 8) != 0 )
        _interlockedbittestandset((volatile signed __int32 *)(a2 + 120), 0xCu);
      v24 = 0LL;
      CurrentPrcb = KeGetCurrentPrcb();
      v23 = 0;
      while ( 1 )
      {
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        if ( SchedulerAssist )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v11 = SchedulerAssist[6];
            SchedulerAssist[6] = v11 + 1;
            if ( v11 == -1 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        if ( !_interlockedbittestandset64((volatile signed __int32 *)(a1 + 48), 0LL) )
          break;
        v12 = CurrentPrcb->SchedulerAssist;
        if ( v12 )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v13 = v12[6] - 1;
            v12[6] = v13;
            if ( !v13 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        do
          KeYieldProcessorEx(&v23, a2, a3, a4);
        while ( *(_QWORD *)(a1 + 48) );
      }
      if ( !*(_QWORD *)(a1 + 16) )
        KiSelectNextThread(a1, &v24);
      _InterlockedAnd64((volatile signed __int64 *)(a1 + 48), 0LL);
      v14 = KeGetCurrentPrcb();
      v15 = v14->SchedulerAssist;
      if ( v15 )
      {
        if ( v14->NestingLevel <= 1u )
        {
          v16 = v15[6] - 1;
          v15[6] = v16;
          if ( !v16 )
            KiRemoveSystemWorkPriorityKick(v14);
        }
      }
      LOBYTE(v7) = KiProcessDeferredReadyList(a1, (__int64)&v24, v4);
    }
    else
    {
      LOBYTE(a2) = 1;
      KiCheckForThreadDispatch(a1, a2);
      KiDeliverApc(0, 0LL, 0LL, v8);
      LOBYTE(v7) = KiIrqlFlags;
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          LOBYTE(v7) = KeGetCurrentIrql() - 2;
          if ( (unsigned __int8)v7 <= 0xDu )
          {
            v17 = KeGetCurrentPrcb();
            v18 = v17->SchedulerAssist;
            v19 = (v18[5] & 0xFFFF0001) == 0;
            v7 = v18[5] & 0xFFFF0001;
            v18[5] = v7;
            if ( v19 )
              LOBYTE(v7) = KiRemoveSystemWorkPriorityKick(v17);
          }
        }
      }
      __writecr8(0LL);
    }
  }
  else if ( (_BYTE)a3 )
  {
    LOBYTE(a2) = *(_BYTE *)(a2 + 390);
    LOBYTE(v7) = KiCheckForThreadDispatch(a1, a2);
  }
  else
  {
    LOBYTE(v7) = KiIrqlFlags;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        LOBYTE(v7) = KeGetCurrentIrql();
        if ( (unsigned __int8)v7 <= 0xFu && (unsigned __int8)v4 <= 0xFu && (unsigned __int8)v7 >= 2u )
        {
          v20 = KeGetCurrentPrcb();
          v21 = v20->SchedulerAssist;
          v7 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v4 + 1));
          v19 = (v7 & v21[5]) == 0;
          v21[5] &= v7;
          if ( v19 )
            LOBYTE(v7) = KiRemoveSystemWorkPriorityKick(v20);
        }
      }
    }
    __writecr8(v4);
  }
  return v7;
}
