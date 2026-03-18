/*
 * XREFs of SleepstudyHelper_Initialize @ 0x1C008A434
 * Callers:
 *     DriverEntry @ 0x1C008C008 (DriverEntry.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00437E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall SleepstudyHelper_Initialize(_QWORD *a1, __int64 a2)
{
  NTSTATUS v4; // eax
  unsigned int v5; // r8d

  v4 = RtlRunOnceExecuteOnce(
         &SleepstudyHelperInitializeRunOnce,
         (PRTL_RUN_ONCE_INIT_FN)SleepstudyHelperInitializeOnce,
         0LL,
         0LL);
  v5 = 0;
  if ( v4 >= 0 && qword_1C006AC40 )
    return (unsigned int)qword_1C006AC40(a1, a2, 0LL);
  else
    *a1 = &SleepstudyHelperUnsupportedHandle;
  return v5;
}
