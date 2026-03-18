/*
 * XREFs of TdrTimedOperationDelay @ 0x1C00528F0
 * Callers:
 *     <none>
 * Callees:
 *     ?_TdrTimedOperationGetRelativeTimeLeft@@YAXAEAU_DXGK_TIMED_OPERATION@@AEAT_LARGE_INTEGER@@@Z @ 0x1C00526A4 (-_TdrTimedOperationGetRelativeTimeLeft@@YAXAEAU_DXGK_TIMED_OPERATION@@AEAT_LARGE_INTEGER@@@Z.c)
 *     TdrTimedOperationAllowToDebugTimeout @ 0x1C005270C (TdrTimedOperationAllowToDebugTimeout.c)
 *     TdrTimedOperationBugcheckOnTimeout @ 0x1C0052898 (TdrTimedOperationBugcheckOnTimeout.c)
 */

__int64 __fastcall TdrTimedOperationDelay(
        struct _DXGK_TIMED_OPERATION *a1,
        KPROCESSOR_MODE a2,
        BOOLEAN a3,
        __int64 *a4)
{
  unsigned int v5; // ebp
  union _LARGE_INTEGER v9; // rbx
  union _LARGE_INTEGER v10; // rax
  union _LARGE_INTEGER v12; // [rsp+20h] [rbp-28h] BYREF
  union _LARGE_INTEGER Interval; // [rsp+28h] [rbp-20h] BYREF

  v5 = 0;
  v12.QuadPart = 0LL;
  _TdrTimedOperationGetRelativeTimeLeft(a1, &v12);
  v9 = v12;
  if ( v12.QuadPart )
  {
    if ( KeGetCurrentIrql() <= 1u && a4 && *a4 )
    {
      v10.QuadPart = -(__int64)abs64(*a4);
      if ( v10.QuadPart < v9.QuadPart )
        v10 = v9;
      Interval = v10;
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
