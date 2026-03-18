/*
 * XREFs of TdrTimedOperationDelay @ 0x1C0044570
 * Callers:
 *     <none>
 * Callees:
 *     ?_TdrTimedOperationGetRelativeTimeLeft@@YAXAEAU_DXGK_TIMED_OPERATION@@AEAT_LARGE_INTEGER@@@Z @ 0x1C0044324 (-_TdrTimedOperationGetRelativeTimeLeft@@YAXAEAU_DXGK_TIMED_OPERATION@@AEAT_LARGE_INTEGER@@@Z.c)
 *     TdrTimedOperationAllowToDebugTimeout @ 0x1C004438C (TdrTimedOperationAllowToDebugTimeout.c)
 *     TdrTimedOperationBugcheckOnTimeout @ 0x1C0044518 (TdrTimedOperationBugcheckOnTimeout.c)
 */

__int64 __fastcall TdrTimedOperationDelay(
        struct _DXGK_TIMED_OPERATION *a1,
        KPROCESSOR_MODE a2,
        BOOLEAN a3,
        __int64 *a4)
{
  unsigned int v5; // esi
  union _LARGE_INTEGER v9; // r10
  __int64 QuadPart; // rax
  union _LARGE_INTEGER v12; // [rsp+20h] [rbp-18h] BYREF
  union _LARGE_INTEGER Interval; // [rsp+28h] [rbp-10h] BYREF

  v5 = 0;
  v12.QuadPart = 0LL;
  _TdrTimedOperationGetRelativeTimeLeft(a1, &v12);
  v9 = v12;
  if ( v12.QuadPart )
  {
    if ( KeGetCurrentIrql() <= 1u && a4 && *a4 )
    {
      QuadPart = -(__int64)abs64(*a4);
      if ( QuadPart < v12.QuadPart )
        QuadPart = v12.QuadPart;
      Interval.QuadPart = QuadPart;
      v5 = KeDelayExecutionThread(a2, a3, &Interval);
      _TdrTimedOperationGetRelativeTimeLeft(a1, &v12);
      v9 = v12;
    }
    if ( v9.QuadPart )
      return v5;
  }
  a1->TimeoutTriggered = 1;
  if ( (unsigned int)TdrTimedOperationAllowToDebugTimeout(a1) )
  {
    a1->StartTick.QuadPart = MEMORY[0xFFFFF78000000320];
    return 0LL;
  }
  else
  {
    if ( a1->OsHandled )
      TdrTimedOperationBugcheckOnTimeout();
    return 258LL;
  }
}
