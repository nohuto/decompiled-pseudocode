/*
 * XREFs of CiSchedulerSleep @ 0x1C0001DB0
 * Callers:
 *     CiSchedulerWait @ 0x1C00021A0 (CiSchedulerWait.c)
 * Callees:
 *     CiSchedulerProcessDeadlines @ 0x1C0001F40 (CiSchedulerProcessDeadlines.c)
 *     CiSchedulerQueryCurrentTime @ 0x1C0002150 (CiSchedulerQueryCurrentTime.c)
 *     CiSchedulerUpdateTimer @ 0x1C0002990 (CiSchedulerUpdateTimer.c)
 *     CiLogSchedulerSleep @ 0x1C0003D0C (CiLogSchedulerSleep.c)
 *     CiLogSchedulerWakeup @ 0x1C0003D90 (CiLogSchedulerWakeup.c)
 */

__int64 __fastcall CiSchedulerSleep(unsigned int a1, unsigned int a2, unsigned __int32 *a3)
{
  __int64 v4; // rsi
  __int64 CurrentTime; // rax
  unsigned __int64 v7; // rdx
  __int64 v8; // rbx
  unsigned __int64 v9; // r8
  unsigned __int8 v10; // al
  unsigned __int64 v11; // rax
  __int32 i; // eax
  __int64 result; // rax
  unsigned __int32 v14; // [rsp+58h] [rbp+10h] BYREF

  v4 = a2;
  if ( qword_1C00071B8 )
    RtlRbRemoveNode(&WPP_MAIN_CB.SectorSize, &WPP_MAIN_CB.Reserved);
  CurrentTime = CiSchedulerQueryCurrentTime();
  v7 = *(_QWORD *)&WPP_MAIN_CB.SectorSize;
  v8 = CurrentTime;
  byte_1C00071C4 = 0;
  v9 = CurrentTime + v4;
  qword_1C00071B8 = CurrentTime + v4;
  if ( ((__int64)WPP_MAIN_CB.DeviceObjectExtension & 1) != 0 )
  {
    if ( *(_QWORD *)&WPP_MAIN_CB.SectorSize )
      v7 = (unsigned __int64)&WPP_MAIN_CB.SectorSize ^ *(_QWORD *)&WPP_MAIN_CB.SectorSize;
    else
      v7 = 0LL;
  }
  v10 = 0;
  if ( v7 )
  {
    while ( 1 )
    {
      if ( *(_QWORD *)(v7 + 24) > v9 )
      {
        v11 = *(_QWORD *)v7;
        if ( ((__int64)WPP_MAIN_CB.DeviceObjectExtension & 1) != 0 )
        {
          if ( !v11 )
            goto LABEL_18;
          v11 ^= v7;
        }
        if ( !v11 )
        {
LABEL_18:
          v10 = 0;
          break;
        }
      }
      else
      {
        v11 = *(_QWORD *)(v7 + 8);
        if ( ((__int64)WPP_MAIN_CB.DeviceObjectExtension & 1) != 0 )
        {
          if ( !v11 )
            goto LABEL_19;
          v11 ^= v7;
        }
        if ( !v11 )
        {
LABEL_19:
          v10 = 1;
          break;
        }
      }
      v7 = v11;
    }
  }
  RtlRbInsertNodeEx(&WPP_MAIN_CB.SectorSize, v7, v10, &WPP_MAIN_CB.Reserved);
  CiSchedulerUpdateTimer(v8);
  WPP_MAIN_CB.Queue.Wcb.CurrentIrp = 0LL;
  KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.DeviceObject, 0);
  if ( byte_1C0007358 )
    CiLogSchedulerSleep(a1, (unsigned int)v4);
  for ( i = _InterlockedExchange(&CiSchedulerWakeupReason, 0); ; i = 0 )
  {
    v14 = i;
    if ( !i )
      CiSchedulerWaitStatus = KeWaitForSingleObject(
                                *(PVOID *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels,
                                Executive,
                                0,
                                1u,
                                0LL);
    if ( (unsigned __int8)CiSchedulerProcessDeadlines(&v14) )
      break;
    if ( byte_1C0007358 )
      CiLogSchedulerWakeup(v14);
  }
  result = v14;
  *a3 = v14;
  return result;
}
