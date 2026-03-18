/*
 * XREFs of KiUpdateVPBackingThreadPriority @ 0x1402ED2C0
 * Callers:
 *     KiSwapThread @ 0x14020C300 (KiSwapThread.c)
 *     KiDeferredReadySingleThread @ 0x1402873F0 (KiDeferredReadySingleThread.c)
 *     KeDelayExecutionThread @ 0x1402BC230 (KeDelayExecutionThread.c)
 *     KiQuantumEnd @ 0x1402EC1A0 (KiQuantumEnd.c)
 *     KiQueueReadyThread @ 0x1402EDF50 (KiQueueReadyThread.c)
 *     KeYieldExecution @ 0x1402F1580 (KeYieldExecution.c)
 *     KiTryToUpdateVPBackingThreadPriority @ 0x14034D084 (KiTryToUpdateVPBackingThreadPriority.c)
 * Callees:
 *     KiComputePriorityFloor @ 0x1402141A0 (KiComputePriorityFloor.c)
 *     KiUpdateThreadPriority @ 0x140214230 (KiUpdateThreadPriority.c)
 *     KiSetBasePriorityAndClearDecrement @ 0x1402F1220 (KiSetBasePriorityAndClearDecrement.c)
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
 *     KiReadGuestSchedulerAssistPriority @ 0x14051A798 (KiReadGuestSchedulerAssistPriority.c)
 */

char __fastcall KiUpdateVPBackingThreadPriority(ULONG_PTR BugCheckParameter1, __int64 a2, char a3)
{
  int GuestSchedulerAssistPriority; // eax
  int v8; // edx
  int v9; // r9d
  int v10; // r8d
  char v11; // cl
  char v12; // cl
  char v13; // cl
  unsigned __int8 v14; // cl
  unsigned int v15; // edi

  if ( (*(_DWORD *)(BugCheckParameter1 + 120) & 0x400000) == 0 )
    return 0;
  _InterlockedOr(*(volatile signed __int32 **)(BugCheckParameter1 + 968), 0x100000u);
  GuestSchedulerAssistPriority = KiReadGuestSchedulerAssistPriority(BugCheckParameter1);
  v8 = GuestSchedulerAssistPriority;
  v9 = 32;
  if ( GuestSchedulerAssistPriority >= 16 )
  {
    v9 = GuestSchedulerAssistPriority;
    v8 = 15;
  }
  v10 = *(_DWORD *)(BugCheckParameter1 + 1024);
  if ( v8 != v10 )
  {
    v11 = *(_BYTE *)((char)v8 + BugCheckParameter1 + 824);
    if ( v11 == -1 )
      KeBugCheckEx(0x157u, BugCheckParameter1, (char)v8, 1uLL, 0LL);
    *(_BYTE *)((char)v8 + BugCheckParameter1 + 824) = v11 + 1;
    *(_DWORD *)(BugCheckParameter1 + 856) |= 1 << v8;
    if ( v10 != 32 )
    {
      v12 = *(_BYTE *)((char)v10 + BugCheckParameter1 + 824);
      if ( !v12 )
        KeBugCheckEx(0x157u, BugCheckParameter1, (char)v10, 2uLL, 0LL);
      v13 = v12 - 1;
      *(_BYTE *)((char)v10 + BugCheckParameter1 + 824) = v13;
      if ( !v13 )
        *(_DWORD *)(BugCheckParameter1 + 856) ^= 1 << v10;
    }
    *(_DWORD *)(BugCheckParameter1 + 1024) = v8;
  }
  v14 = v9;
  if ( v9 == 32 )
    v14 = v8;
  v15 = (char)KiComputePriorityFloor(BugCheckParameter1, v14);
  if ( a3 && (*(_BYTE *)(BugCheckParameter1 + 564) & 0xF0) != 0 )
  {
    if ( (int)v15 <= *(char *)(BugCheckParameter1 + 195) )
      goto LABEL_22;
    goto LABEL_21;
  }
  if ( v15 != *(char *)(BugCheckParameter1 + 195) )
  {
LABEL_21:
    KiSetBasePriorityAndClearDecrement(BugCheckParameter1, 0LL, 0LL);
    KiUpdateThreadPriority(a2, BugCheckParameter1, (_SINGLE_LIST_ENTRY *)v15, a2 != 0);
  }
LABEL_22:
  if ( (*(_DWORD *)(BugCheckParameter1 + 120) & 0x400000) != 0 )
    _InterlockedAnd(*(volatile signed __int32 **)(BugCheckParameter1 + 968), 0xFFEFFFFF);
  return 1;
}
