/*
 * XREFs of MiObtainRelocationBits @ 0x14063AE7C
 * Callers:
 *     MiSelectImageBase @ 0x14063AF58 (MiSelectImageBase.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140260DE0 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     RtlSetBitsEx @ 0x1402A30D0 (RtlSetBitsEx.c)
 *     RtlFindClearBitsAndSetEx @ 0x1402A92F0 (RtlFindClearBitsAndSetEx.c)
 *     RtlClearBitsEx @ 0x1402AA000 (RtlClearBitsEx.c)
 *     ExfTryToWakePushLock @ 0x14035A680 (ExfTryToWakePushLock.c)
 *     MiSelectRelocationStartHint @ 0x1406C11B4 (MiSelectRelocationStartHint.c)
 */

unsigned __int64 __fastcall MiObtainRelocationBits(unsigned __int64 **a1, unsigned __int16 a2, unsigned __int64 a3)
{
  struct _KTHREAD *CurrentThread; // r15
  unsigned __int64 v5; // r13
  unsigned __int64 ClearBitsAndSet; // rax
  unsigned __int64 v8; // rdi
  unsigned __int64 *v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned __int64 v14; // r14
  unsigned __int64 started; // rax

  CurrentThread = KeGetCurrentThread();
  v5 = a2;
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C4CA88, 0LL);
  ClearBitsAndSet = RtlFindClearBitsAndSetEx(*a1, (unsigned int)v5, a3);
  v8 = ClearBitsAndSet;
  if ( ClearBitsAndSet != -1LL )
  {
    v9 = a1[1];
    if ( v9 )
    {
      v14 = RtlFindClearBitsAndSetEx(v9, v5, ClearBitsAndSet);
      if ( v14 != v8 )
      {
        RtlClearBitsEx((__int64)*a1, v8, v5);
        if ( v14 != -1LL )
          RtlClearBitsEx((__int64)a1[1], v14, v5);
        started = MiSelectRelocationStartHint(a1, (unsigned __int16)v5, a3, 1LL);
        v8 = started;
        if ( started != -1LL )
        {
          RtlSetBitsEx((__int64)*a1, started, v5);
          RtlSetBitsEx((__int64)a1[1], v8, v5);
        }
      }
    }
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C4CA88, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&qword_140C4CA88);
  KeAbPostRelease((ULONG_PTR)&qword_140C4CA88);
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread, v10, v11, v12);
  return v8;
}
