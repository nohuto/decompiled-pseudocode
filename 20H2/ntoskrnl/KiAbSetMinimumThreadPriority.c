/*
 * XREFs of KiAbSetMinimumThreadPriority @ 0x140243354
 * Callers:
 *     KiAbProcessContextSwitch @ 0x14021DA40 (KiAbProcessContextSwitch.c)
 *     KiAbIoBoostOwners @ 0x14024232C (KiAbIoBoostOwners.c)
 *     KiAbCpuBoostOwners @ 0x140242430 (KiAbCpuBoostOwners.c)
 *     KiAbProcessThreadLocks @ 0x140242694 (KiAbProcessThreadLocks.c)
 * Callees:
 *     PsGetBaseIoPriorityThread @ 0x14020AC30 (PsGetBaseIoPriorityThread.c)
 *     KiAbEntryGetCpuPriorityKey @ 0x140243CC0 (KiAbEntryGetCpuPriorityKey.c)
 *     PsGetIoPriorityThread @ 0x14028EE50 (PsGetIoPriorityThread.c)
 *     KiSetPriorityThread @ 0x140291A00 (KiSetPriorityThread.c)
 *     KeYieldProcessorEx @ 0x1402DE380 (KeYieldProcessorEx.c)
 *     KiReleaseThreadLockSafe @ 0x1402F9ED0 (KiReleaseThreadLockSafe.c)
 *     KiAbThreadInsertList @ 0x140326E40 (KiAbThreadInsertList.c)
 *     KiAbThreadBoostIoPriority @ 0x14035F5D4 (KiAbThreadBoostIoPriority.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FBCA0 (KeBugCheckEx.c)
 *     EtwTraceAutoBoostSetFloor @ 0x1405A5ABC (EtwTraceAutoBoostSetFloor.c)
 */

__int64 __fastcall KiAbSetMinimumThreadPriority(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, _DWORD *a6)
{
  ULONG_PTR v7; // rdi
  int IoPriorityThread; // eax
  unsigned int v9; // ebx
  char v10; // r12
  char v11; // r13
  char v12; // si
  int v13; // r14d
  char CpuPriorityKey; // al
  _BYTE *v15; // r10
  ULONG_PTR v16; // r15
  int BaseIoPriorityThread; // eax
  int v18; // r8d
  int v19; // r9d
  __int64 v20; // r10
  struct _KPRCB *CurrentPrcb; // r14
  _DWORD *SchedulerAssist; // rcx
  _DWORD *v24; // rcx
  char v25; // cl
  int v26; // eax
  int v27; // eax
  char v28; // [rsp+50h] [rbp-58h]
  int v29; // [rsp+54h] [rbp-54h]
  int v30[20]; // [rsp+58h] [rbp-50h] BYREF
  char v31; // [rsp+B0h] [rbp+8h]

  v7 = a1 - 16LL * *(unsigned __int8 *)(a1 + 24);
  v28 = *(_BYTE *)(v7 + 195);
  IoPriorityThread = PsGetIoPriorityThread(v7);
  v9 = 0;
  v10 = IoPriorityThread;
  v11 = 2;
  if ( IoPriorityThread < 2 && *(_DWORD *)(v7 + 1360) )
    v10 = 2;
  v12 = 1;
  if ( !*(_DWORD *)(v7 + 1368) || (v31 = 0, *(_DWORD *)(v7 + 1364)) )
    v31 = 1;
  v29 = 0;
  v13 = 0;
  *a6 = 0;
  CpuPriorityKey = KiAbEntryGetCpuPriorityKey(a1);
  v16 = (char)*v15;
  if ( CpuPriorityKey < (char)v16 )
  {
    LOBYTE(v29) = *v15;
    *(_WORD *)(a1 + 88) ^= (*(_WORD *)(a1 + 88) ^ (*(_WORD *)(a1 + 88) & 0x7FFF | (1 << (v16 - 1)))) & 0x7FFF;
    CurrentPrcb = KeGetCurrentPrcb();
    v30[0] = 0;
    while ( 1 )
    {
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      if ( SchedulerAssist )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v26 = SchedulerAssist[6];
          SchedulerAssist[6] = v26 + 1;
          if ( v26 == -1 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      if ( !_interlockedbittestandset64((volatile signed __int32 *)(v7 + 64), 0LL) )
        break;
      v24 = CurrentPrcb->SchedulerAssist;
      if ( v24 )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v27 = v24[6] - 1;
          v24[6] = v27;
          if ( !v27 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      do
        KeYieldProcessorEx(v30);
      while ( *(_QWORD *)(v7 + 64) );
    }
    v25 = *(_BYTE *)(v16 + v7 + 824);
    if ( v25 == -1 )
      KeBugCheckEx(0x157u, v7, v16, 1uLL, 0LL);
    *(_BYTE *)(v16 + v7 + 824) = v25 + 1;
    v13 = 0;
    *(_DWORD *)(v7 + 856) |= 1 << v16;
    if ( *(char *)(v7 + 195) < (char)v16 )
    {
      KiSetPriorityThread(v7, a3, (unsigned int)v16);
      v13 = 1;
    }
    KiReleaseThreadLockSafe(v7);
  }
  else
  {
    LOBYTE(v16) = 0;
  }
  BaseIoPriorityThread = PsGetBaseIoPriorityThread(v7);
  if ( BaseIoPriorityThread < *(char *)(v20 + 1)
    && *(__int16 *)(a1 + 88) >= 0
    && (unsigned int)KiAbThreadBoostIoPriority(v7, a5, 0LL) )
  {
    BYTE1(v29) = 2;
    *(_WORD *)(a1 + 88) |= 0x8000u;
    v13 = 1;
  }
  else
  {
    v11 = 0;
  }
  if ( (*(_DWORD *)(v7 + 1368) == 0) >= *(char *)(a2 + 2)
    || (*(_BYTE *)(a1 + 90) & 1) != 0
    || !(unsigned int)KiAbThreadBoostIoPriority(v7, a5, 1LL) )
  {
    v12 = 0;
  }
  else
  {
    *(_WORD *)(a1 + 90) |= 1u;
    v13 = 1;
    BYTE2(v29) = 1;
  }
  if ( a4 && v13 && *(_BYTE *)(v7 + 793) )
    KiAbThreadInsertList(v7, a4, v7 + 808);
  if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 && v29 )
  {
    LOBYTE(v19) = v11;
    LOBYTE(v18) = v16;
    EtwTraceAutoBoostSetFloor(v7, *(_DWORD *)(a1 + 32) & 0xFFFFFFFC, v18, v19, v12, v28, v10, v31, 0, *a6);
  }
  LOBYTE(v9) = (_BYTE)v16 != 0;
  return v9;
}
