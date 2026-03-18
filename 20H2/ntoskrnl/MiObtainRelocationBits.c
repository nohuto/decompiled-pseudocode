/*
 * XREFs of MiObtainRelocationBits @ 0x14062BC70
 * Callers:
 *     MiSelectImageBase @ 0x14062B97C (MiSelectImageBase.c)
 * Callees:
 *     KeAbPostRelease @ 0x14021ED30 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140220A40 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140220E40 (KiLeaveGuardedRegionUnsafe.c)
 *     RtlSetBitsEx @ 0x14022E620 (RtlSetBitsEx.c)
 *     ExfTryToWakePushLock @ 0x140242B40 (ExfTryToWakePushLock.c)
 *     RtlClearBitsEx @ 0x140250620 (RtlClearBitsEx.c)
 *     RtlFindClearBitsAndSetEx @ 0x1402D7390 (RtlFindClearBitsAndSetEx.c)
 *     MiSelectRelocationStartHint @ 0x14062BD4C (MiSelectRelocationStartHint.c)
 */

unsigned __int64 __fastcall MiObtainRelocationBits(unsigned __int64 **a1, unsigned __int16 a2, unsigned __int64 a3)
{
  struct _KTHREAD *CurrentThread; // r15
  unsigned __int64 v5; // r13
  unsigned __int64 ClearBitsAndSet; // rax
  unsigned __int64 v8; // rdi
  unsigned __int64 *v9; // rcx
  unsigned __int64 v11; // r14
  unsigned __int64 started; // rax

  CurrentThread = KeGetCurrentThread();
  v5 = a2;
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C4C9C8, 0LL);
  ClearBitsAndSet = RtlFindClearBitsAndSetEx(*a1, (unsigned int)v5, a3);
  v8 = ClearBitsAndSet;
  if ( ClearBitsAndSet != -1LL )
  {
    v9 = a1[1];
    if ( v9 )
    {
      v11 = RtlFindClearBitsAndSetEx(v9, v5, ClearBitsAndSet);
      if ( v11 != v8 )
      {
        RtlClearBitsEx((__int64)*a1, v8, v5);
        if ( v11 != -1LL )
          RtlClearBitsEx((__int64)a1[1], v11, v5);
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
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C4C9C8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_140C4C9C8);
  KeAbPostRelease((ULONG_PTR)&qword_140C4C9C8);
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  return v8;
}
