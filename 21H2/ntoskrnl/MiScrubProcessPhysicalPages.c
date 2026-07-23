/*
 * XREFs of MiScrubProcessPhysicalPages @ 0x1408D67A0
 * Callers:
 *     MiScrubProcesses @ 0x1408DC170 (MiScrubProcesses.c)
 * Callees:
 *     RtlFindSetBitsEx @ 0x1402CD210 (RtlFindSetBitsEx.c)
 *     ExGetCallBackBlockRoutine @ 0x140381CB0 (ExGetCallBackBlockRoutine.c)
 *     MiLockAwePagesExclusive @ 0x14054D1F8 (MiLockAwePagesExclusive.c)
 *     MiLockAweVadsExclusive @ 0x14054D240 (MiLockAweVadsExclusive.c)
 *     MiScrubAwePage @ 0x14054DF7C (MiScrubAwePage.c)
 *     MiUnlockAwePagesExclusive @ 0x14054E1E0 (MiUnlockAwePagesExclusive.c)
 *     MiUnlockAweVadsExclusive @ 0x14054E238 (MiUnlockAweVadsExclusive.c)
 *     MiMakePageBad @ 0x140563B74 (MiMakePageBad.c)
 *     MiScrubInterrupted @ 0x140563C98 (MiScrubInterrupted.c)
 */

char __fastcall MiScrubProcessPhysicalPages(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rdi
  _KPROCESS *Process; // rbx
  unsigned __int64 v4; // rax
  __int64 v5; // rbx
  unsigned __int64 v6; // r14
  ULONG64 v7; // rsi
  __int64 v8; // rcx
  BOOL v9; // eax
  ULONG64 SetBits; // rax
  _DWORD *v11; // r9
  unsigned __int64 v12; // rbp
  __int64 v13; // r14
  ULONG_PTR v14; // rsi
  unsigned __int64 i; // r15
  __int64 v16; // r8
  _DWORD *v17; // r9
  unsigned __int64 v19; // [rsp+58h] [rbp+10h]

  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
  MiLockAweVadsExclusive((__int64)CurrentThread);
  v4 = Process[1].ActiveProcessorsPadding[8];
  v5 = *(_QWORD *)(v4 + 392);
  if ( v5 )
  {
    v19 = ExGetCallBackBlockRoutine(*(_QWORD *)(v4 + 392));
    v6 = v19;
    v7 = 0LL;
    MiLockAwePagesExclusive(v8, (__int64)CurrentThread);
    v9 = MiScrubInterrupted(a1);
    while ( !v9 )
    {
      SetBits = RtlFindSetBitsEx((PRTL_BITMAP_EX)(v5 + 16), 1uLL, v7);
      v12 = SetBits;
      if ( SetBits < v7 || SetBits == -1LL )
        break;
      v13 = SetBits * v6;
      v14 = 48 * v13 - 0x58000000000LL;
      for ( i = 0LL; i < v19; ++i )
      {
        if ( (int)MiScrubAwePage(a1, v13, (_DWORD *)v5, v11) < 0 )
          MiMakePageBad(v14, 1LL, v16, v17);
        MiUnlockAwePagesExclusive(v5, (__int64)CurrentThread);
        MiUnlockAweVadsExclusive((__int64)CurrentThread);
        ++v13;
        v14 += 48LL;
        MiLockAweVadsExclusive((__int64)CurrentThread);
        MiLockAwePagesExclusive(v5, (__int64)CurrentThread);
        if ( !_bittest64(*(const signed __int64 **)(v5 + 24), v12) )
          break;
      }
      v7 = v12 + 1;
      if ( v12 + 1 >= *(_QWORD *)(v5 + 16) )
        break;
      v9 = MiScrubInterrupted(a1);
      v6 = v19;
    }
    MiUnlockAwePagesExclusive(v5, (__int64)CurrentThread);
  }
  return MiUnlockAweVadsExclusive((__int64)CurrentThread);
}
