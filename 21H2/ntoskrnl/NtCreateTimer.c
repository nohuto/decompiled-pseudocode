/*
 * XREFs of NtCreateTimer @ 0x140641B80
 * Callers:
 *     <none>
 * Callees:
 *     PsInsertVirtualizedTimer @ 0x1402403B8 (PsInsertVirtualizedTimer.c)
 *     KeInitializeTimerEx @ 0x140266A80 (KeInitializeTimerEx.c)
 *     KeInitializeDpc @ 0x140269650 (KeInitializeDpc.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140355AE0 (KiLeaveGuardedRegionUnsafe.c)
 *     ExReleaseResourceLite @ 0x140356140 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x1403568F0 (ExAcquireResourceExclusiveLite.c)
 *     ObCreateObjectEx @ 0x14071BBF0 (ObCreateObjectEx.c)
 *     ObInsertObjectEx @ 0x14071BE00 (ObInsertObjectEx.c)
 */

NTSTATUS __cdecl NtCreateTimer(
        PHANDLE TimerHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        TIMER_TYPE TimerType)
{
  HANDLE *v5; // r14
  char PreviousMode; // si
  NTSTATUS Object; // ecx
  __int64 v8; // r9
  _KPROCESS *Process; // r15
  unsigned __int64 v11; // rdi
  struct _KTHREAD *CurrentThread; // rax
  __int64 v13; // r12
  __int64 v14; // [rsp+58h] [rbp-40h] BYREF
  __int64 v15; // [rsp+60h] [rbp-38h]

  v5 = TimerHandle;
  v14 = 0LL;
  if ( (unsigned int)TimerType > SynchronizationTimer )
    return -1073741582;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    TimerHandle = (PHANDLE)0x7FFFFFFF0000LL;
    if ( (unsigned __int64)v5 < 0x7FFFFFFF0000LL )
      TimerHandle = v5;
    *TimerHandle = *TimerHandle;
  }
  LOBYTE(TimerHandle) = PreviousMode;
  Object = ObCreateObjectEx((_DWORD)TimerHandle, (_DWORD)ExTimerObjectType, (_DWORD)ObjectAttributes, PreviousMode);
  if ( Object >= 0 )
  {
    KeInitializeDpc((PRKDPC)0xA0, (PKDEFERRED_ROUTINE)ExpTimerDpcRoutine, 0LL);
    KeInitializeTimerEx(0LL, TimerType);
    MEMORY[0x40] = 0LL;
    MEMORY[0x130] = 0;
    MEMORY[0x100] = 0LL;
    MEMORY[0x108] = 0LL;
    v15 = 280LL;
    MEMORY[0x118] = 0LL;
    if ( PreviousMode )
    {
      Process = KeGetCurrentThread()->ApcState.Process;
      if ( (*(_DWORD *)&Process->0 & 0x10) != 0 )
      {
        v11 = Process[1].Affinity.Bitmap[16];
        LOBYTE(v8) = 0;
        if ( v11 )
        {
          CurrentThread = KeGetCurrentThread();
          --CurrentThread->SpecialApcDisable;
          v13 = v11 + 56;
          ExAcquireResourceExclusiveLite((PERESOURCE)(v11 + 56), 1u);
          LOBYTE(v8) = (*(_DWORD *)(v11 + 1320) & 0x40000) != 0 && *(_DWORD *)(v11 + 856);
        }
        else
        {
          v13 = 56LL;
        }
        PsInsertVirtualizedTimer((KSPIN_LOCK *)Process, (_QWORD *)0x120, (KSPIN_LOCK *)0x40, v8, (KSPIN_LOCK **)v15);
        if ( v11 )
        {
          ExReleaseResourceLite((PERESOURCE)v13);
          KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
        }
      }
    }
    Object = ObInsertObjectEx(0LL, 0LL, 0, 0LL, (__int64)&v14);
    if ( Object >= 0 )
      *v5 = (HANDLE)v14;
  }
  return Object;
}
