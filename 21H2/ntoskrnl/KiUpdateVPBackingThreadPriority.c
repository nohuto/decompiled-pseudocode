/*
 * XREFs of KiUpdateVPBackingThreadPriority @ 0x14027A380
 * Callers:
 *     KeYieldExecution @ 0x14021B710 (KeYieldExecution.c)
 *     KiTryToUpdateVPBackingThreadPriority @ 0x14023DB64 (KiTryToUpdateVPBackingThreadPriority.c)
 *     KeDelayExecutionThread @ 0x140278A00 (KeDelayExecutionThread.c)
 *     KiQuantumEnd @ 0x140279260 (KiQuantumEnd.c)
 *     KiQueueReadyThread @ 0x14027A920 (KiQueueReadyThread.c)
 *     KiDeferredReadySingleThread @ 0x14034EC10 (KiDeferredReadySingleThread.c)
 *     KiSwapThread @ 0x140351420 (KiSwapThread.c)
 * Callees:
 *     KiSetBasePriorityAndClearDecrement @ 0x14029B01C (KiSetBasePriorityAndClearDecrement.c)
 *     KiComputePriorityFloor @ 0x1402D5610 (KiComputePriorityFloor.c)
 *     KiUpdateThreadPriority @ 0x1402D56A0 (KiUpdateThreadPriority.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     KiReadGuestSchedulerAssistPriority @ 0x14051FE88 (KiReadGuestSchedulerAssistPriority.c)
 */

char __fastcall KiUpdateVPBackingThreadPriority(ULONG_PTR BugCheckParameter1, __int64 a2, char a3)
{
  int GuestSchedulerAssistPriority; // eax
  __int64 v8; // rdx
  int v9; // r9d
  int v10; // r8d
  char v11; // cl
  char v12; // cl
  char v13; // cl
  char v14; // cl
  unsigned int v15; // edi
  __int64 v16; // r9

  if ( (*(_DWORD *)(BugCheckParameter1 + 120) & 0x400000) == 0 )
    return 0;
  _InterlockedOr(*(volatile signed __int32 **)(BugCheckParameter1 + 968), 0x100000u);
  GuestSchedulerAssistPriority = KiReadGuestSchedulerAssistPriority(BugCheckParameter1);
  v8 = (unsigned int)GuestSchedulerAssistPriority;
  v9 = 32;
  if ( GuestSchedulerAssistPriority >= 16 )
  {
    v9 = GuestSchedulerAssistPriority;
    v8 = 15LL;
  }
  v10 = *(_DWORD *)(BugCheckParameter1 + 1024);
  if ( (_DWORD)v8 != v10 )
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
  LOBYTE(v8) = v14;
  v15 = (char)KiComputePriorityFloor(BugCheckParameter1, v8);
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
    LOBYTE(v16) = a2 != 0;
    KiUpdateThreadPriority(a2, BugCheckParameter1, v15, v16);
  }
LABEL_22:
  if ( (*(_DWORD *)(BugCheckParameter1 + 120) & 0x400000) != 0 )
    _InterlockedAnd(*(volatile signed __int32 **)(BugCheckParameter1 + 968), 0xFFEFFFFF);
  return 1;
}
