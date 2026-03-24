/*
 * XREFs of NtCreateTimer @ 0x14064CD60
 * Callers:
 *     <none>
 * Callees:
 *     KeInitializeTimerEx @ 0x140278AE0 (KeInitializeTimerEx.c)
 *     KeInitializeDpc @ 0x14027B6B0 (KeInitializeDpc.c)
 *     PsInsertVirtualizedTimer @ 0x1402C1F18 (PsInsertVirtualizedTimer.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14034AD90 (KiLeaveGuardedRegionUnsafe.c)
 *     ExReleaseResourceLite @ 0x14034B3F0 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x14034BBA0 (ExAcquireResourceExclusiveLite.c)
 *     ObCreateObjectEx @ 0x140704810 (ObCreateObjectEx.c)
 *     ObInsertObjectEx @ 0x140704A20 (ObInsertObjectEx.c)
 */

__int64 __fastcall NtCreateTimer(__int64 a1, __int64 a2, int a3, TIMER_TYPE a4)
{
  _QWORD *v5; // r14
  char PreviousMode; // si
  int Object; // ecx
  __int64 v8; // r9
  _KPROCESS *Process; // r15
  unsigned __int64 v11; // rdi
  struct _KTHREAD *CurrentThread; // rax
  __int64 v13; // r12
  __int64 v14; // [rsp+58h] [rbp-40h] BYREF
  __int64 v15; // [rsp+60h] [rbp-38h]

  v5 = (_QWORD *)a1;
  v14 = 0LL;
  if ( (unsigned int)a4 > SynchronizationTimer )
    return 3221225714LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    a1 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)v5 < 0x7FFFFFFF0000LL )
      a1 = (__int64)v5;
    *(_QWORD *)a1 = *(_QWORD *)a1;
  }
  LOBYTE(a1) = PreviousMode;
  Object = ObCreateObjectEx(a1, (_DWORD)ExTimerObjectType, a3, PreviousMode);
  if ( Object >= 0 )
  {
    KeInitializeDpc((PRKDPC)0xA0, (PKDEFERRED_ROUTINE)ExpTimerDpcRoutine, 0LL);
    KeInitializeTimerEx(0LL, a4);
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
      *v5 = v14;
  }
  return (unsigned int)Object;
}
