/*
 * XREFs of PsResumeThread @ 0x1406BC3F0
 * Callers:
 *     NtResumeThread @ 0x1406BC330 (NtResumeThread.c)
 *     DbgkpPostFakeThreadMessages @ 0x1408878F4 (DbgkpPostFakeThreadMessages.c)
 *     DbgkpWakeTarget @ 0x140888570 (DbgkpWakeTarget.c)
 *     DbgkQueueUserExceptionReport @ 0x140889270 (DbgkQueueUserExceptionReport.c)
 *     DbgkUserReportWorkRoutine @ 0x1408897B0 (DbgkUserReportWorkRoutine.c)
 * Callees:
 *     KeResumeThread @ 0x1403106F4 (KeResumeThread.c)
 *     EtwTiLogSuspendResumeThread @ 0x14093E444 (EtwTiLogSuspendResumeThread.c)
 */

__int64 __fastcall PsResumeThread(__int64 a1, _DWORD *a2, __int64 a3, _DWORD *a4)
{
  int v6; // eax
  struct _KTHREAD *CurrentThread; // rdx
  int v8; // esi
  __int64 v9; // r8
  int v10; // ecx

  v6 = KeResumeThread(a1, (__int64)a2, a3, a4);
  CurrentThread = KeGetCurrentThread();
  v8 = v6;
  if ( v6 == 1 )
  {
    v9 = *(_QWORD *)(a1 + 544);
    v10 = *(_DWORD *)(v9 + 2172);
    if ( (v10 & 0x8000) == 0 )
    {
      _InterlockedOr((volatile signed __int32 *)(v9 + 2172), 0x8000u);
      v10 = *(_DWORD *)(v9 + 2172);
    }
    if ( (v10 & 0x100000) != 0 )
      EtwTiLogSuspendResumeThread(0LL, CurrentThread, a1, 0LL);
  }
  if ( a2 )
    *a2 = v8;
  return 0LL;
}
