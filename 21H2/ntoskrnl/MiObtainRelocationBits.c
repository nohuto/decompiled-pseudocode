/*
 * XREFs of MiObtainRelocationBits @ 0x1407095A8
 * Callers:
 *     MiSelectImageBase @ 0x1407092C0 (MiSelectImageBase.c)
 * Callees:
 *     RtlFindClearBitsAndSetEx @ 0x14029E780 (RtlFindClearBitsAndSetEx.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     RtlSetBitsEx @ 0x14030B740 (RtlSetBitsEx.c)
 *     RtlClearBitsEx @ 0x14030BB30 (RtlClearBitsEx.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     MiSelectRelocationStartHint @ 0x140709C0C (MiSelectRelocationStartHint.c)
 */

unsigned __int64 __fastcall MiObtainRelocationBits(unsigned __int64 **a1, unsigned __int16 a2, unsigned __int64 a3)
{
  struct _KTHREAD *CurrentThread; // rbp
  unsigned __int64 v5; // r13
  unsigned __int64 ClearBitsAndSet; // rax
  unsigned __int64 v8; // rdi
  unsigned __int64 *v9; // rcx
  bool v10; // zf
  unsigned __int64 v12; // r15
  unsigned __int64 started; // rax

  CurrentThread = KeGetCurrentThread();
  v5 = a2;
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C4F300, 0LL);
  ClearBitsAndSet = RtlFindClearBitsAndSetEx(*a1, (unsigned int)v5, a3);
  v8 = ClearBitsAndSet;
  if ( ClearBitsAndSet != -1LL )
  {
    v9 = a1[1];
    if ( v9 )
    {
      v12 = RtlFindClearBitsAndSetEx(v9, v5, ClearBitsAndSet);
      if ( v12 != v8 )
      {
        RtlClearBitsEx((__int64)*a1, v8, v5);
        if ( v12 != -1LL )
          RtlClearBitsEx((__int64)a1[1], v12, v5);
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
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C4F300, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&qword_140C4F300);
  KeAbPostRelease((ULONG_PTR)&qword_140C4F300);
  v10 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v10 && ($CEA84C04E3712D858E5667A507841A2A *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
  return v8;
}
