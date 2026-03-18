/*
 * XREFs of KiAbSetMinimumThreadPriority @ 0x14035A424
 * Callers:
 *     KiAbProcessContextSwitch @ 0x1402B4EC0 (KiAbProcessContextSwitch.c)
 *     KiAbProcessThreadLocks @ 0x1403591D8 (KiAbProcessThreadLocks.c)
 *     KiAbIoBoostOwners @ 0x14035A160 (KiAbIoBoostOwners.c)
 *     KiAbCpuBoostOwners @ 0x14035A264 (KiAbCpuBoostOwners.c)
 * Callees:
 *     KiReleaseThreadLockSafe @ 0x140224100 (KiReleaseThreadLockSafe.c)
 *     KiAbThreadBoostIoPriority @ 0x140229BD8 (KiAbThreadBoostIoPriority.c)
 *     KiAbThreadInsertList @ 0x14024E928 (KiAbThreadInsertList.c)
 *     KeYieldProcessorEx @ 0x1402F32E0 (KeYieldProcessorEx.c)
 *     PsGetIoPriorityThread @ 0x14033D760 (PsGetIoPriorityThread.c)
 *     PsGetBaseIoPriorityThread @ 0x140343770 (PsGetBaseIoPriorityThread.c)
 *     KiSetPriorityThread @ 0x140344A30 (KiSetPriorityThread.c)
 *     KiAbEntryGetCpuPriorityKey @ 0x14035A6C8 (KiAbEntryGetCpuPriorityKey.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     EtwTraceAutoBoostSetFloor @ 0x14062D548 (EtwTraceAutoBoostSetFloor.c)
 */

__int64 __fastcall KiAbSetMinimumThreadPriority(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4, __int64 a5, _DWORD *a6)
{
  __int64 v7; // rdi
  int IoPriorityThread; // eax
  unsigned int v9; // ebx
  char v10; // r12
  char v11; // r13
  char v12; // si
  int v13; // ebp
  char CpuPriorityKey; // al
  __int64 v15; // r8
  __int64 v16; // r9
  _BYTE *v17; // r11
  ULONG_PTR v18; // r15
  int BaseIoPriorityThread; // eax
  int v20; // r8d
  _DWORD *v21; // r9
  __int64 v22; // r11
  __int64 v24; // rdx
  struct _KPRCB *CurrentPrcb; // rbp
  _DWORD *SchedulerAssist; // rcx
  _DWORD *v27; // rcx
  int v28; // eax
  char v29; // cl
  int v30; // eax
  char v31; // [rsp+50h] [rbp-58h]
  int v32; // [rsp+54h] [rbp-54h]
  int v33[20]; // [rsp+58h] [rbp-50h] BYREF
  char v34; // [rsp+B0h] [rbp+8h]

  v7 = a1 - 96LL * *(unsigned __int8 *)(a1 + 16) - 1696;
  v31 = *(_BYTE *)(v7 + 195);
  IoPriorityThread = PsGetIoPriorityThread(v7);
  v9 = 0;
  v10 = IoPriorityThread;
  v11 = 2;
  if ( IoPriorityThread < 2 && *(_DWORD *)(v7 + 1440) )
    v10 = 2;
  v12 = 1;
  if ( !*(_DWORD *)(v7 + 1448) || (v34 = 0, *(_DWORD *)(v7 + 1444)) )
    v34 = 1;
  v32 = 0;
  v13 = 0;
  *a6 = 0;
  CpuPriorityKey = KiAbEntryGetCpuPriorityKey(a1);
  v18 = (char)*v17;
  if ( CpuPriorityKey < (char)v18 )
  {
    v24 = *(unsigned int *)(a1 + 88);
    LOBYTE(v32) = *v17;
    *(_DWORD *)(a1 + 88) = v24 ^ (v24 ^ (v24 | (1 << (v18 - 1)))) & 0x3FFFFFFF;
    CurrentPrcb = KeGetCurrentPrcb();
    v33[0] = 0;
    while ( 1 )
    {
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      if ( SchedulerAssist )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v28 = SchedulerAssist[6];
          SchedulerAssist[6] = v28 + 1;
          if ( v28 == -1 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      if ( !_interlockedbittestandset64((volatile signed __int32 *)(v7 + 64), 0LL) )
        break;
      v27 = CurrentPrcb->SchedulerAssist;
      if ( v27 )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v30 = v27[6] - 1;
          v27[6] = v30;
          if ( !v30 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      do
        KeYieldProcessorEx(v33, v24, v15, v16);
      while ( *(_QWORD *)(v7 + 64) );
    }
    v29 = *(_BYTE *)(v18 + v7 + 824);
    if ( v29 == -1 )
      KeBugCheckEx(0x157u, v7, v18, 1uLL, 0LL);
    *(_BYTE *)(v18 + v7 + 824) = v29 + 1;
    v13 = 0;
    *(_DWORD *)(v7 + 856) |= 1 << v18;
    if ( *(char *)(v7 + 195) < (char)v18 )
    {
      KiSetPriorityThread((_KTHREAD *)v7, a3, v18);
      v13 = 1;
    }
    KiReleaseThreadLockSafe(v7);
  }
  else
  {
    LOBYTE(v18) = 0;
  }
  BaseIoPriorityThread = PsGetBaseIoPriorityThread(v7);
  if ( BaseIoPriorityThread >= *(char *)(v22 + 1)
    || (*(_DWORD *)(a1 + 88) & 0x40000000) != 0
    || !(unsigned int)KiAbThreadBoostIoPriority(v7, a5, 0LL, v21) )
  {
    v11 = 0;
  }
  else
  {
    *(_DWORD *)(a1 + 88) |= 0x40000000u;
    v13 = 1;
    BYTE1(v32) = 2;
  }
  if ( (*(_DWORD *)(v7 + 1448) == 0) < *(char *)(a2 + 2)
    && *(int *)(a1 + 88) >= 0
    && (unsigned int)KiAbThreadBoostIoPriority(v7, a5, 1LL, a6) )
  {
    *(_DWORD *)(a1 + 88) |= 0x80000000;
    v13 = 1;
    BYTE2(v32) = 1;
  }
  else
  {
    v12 = 0;
  }
  if ( a4 && v13 && *(_BYTE *)(v7 + 793) )
    KiAbThreadInsertList(v7, a4, (_QWORD *)(v7 + 808));
  if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 && v32 )
  {
    LOBYTE(v21) = v11;
    LOBYTE(v20) = v18;
    EtwTraceAutoBoostSetFloor(v7, *(_DWORD *)a1 & 0xFFFFFFFC, v20, (_DWORD)v21, v12, v31, v10, v34, 0, *a6);
  }
  LOBYTE(v9) = (_BYTE)v18 != 0;
  return v9;
}
