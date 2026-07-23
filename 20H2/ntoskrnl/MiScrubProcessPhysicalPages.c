/*
 * XREFs of MiScrubProcessPhysicalPages @ 0x1408D8E80
 * Callers:
 *     MiScrubProcesses @ 0x1408DE850 (MiScrubProcesses.c)
 * Callees:
 *     RtlFindSetBitsEx @ 0x1402873C0 (RtlFindSetBitsEx.c)
 *     ExGetCallBackBlockRoutine @ 0x140381A60 (ExGetCallBackBlockRoutine.c)
 *     MiLockAwePagesExclusive @ 0x14054B4B8 (MiLockAwePagesExclusive.c)
 *     MiLockAweVadsExclusive @ 0x14054B500 (MiLockAweVadsExclusive.c)
 *     MiScrubAwePage @ 0x14054C23C (MiScrubAwePage.c)
 *     MiUnlockAwePagesExclusive @ 0x14054C4A0 (MiUnlockAwePagesExclusive.c)
 *     MiUnlockAweVadsExclusive @ 0x14054C4F8 (MiUnlockAweVadsExclusive.c)
 *     MiMakePageBad @ 0x140561E64 (MiMakePageBad.c)
 *     MiScrubInterrupted @ 0x140561F88 (MiScrubInterrupted.c)
 */

__int64 __fastcall MiScrubProcessPhysicalPages(__int64 a1)
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
  unsigned __int64 v11; // rbp
  __int64 v12; // r14
  ULONG_PTR v13; // rsi
  unsigned __int64 i; // r15
  __int64 v15; // r8
  _DWORD *v16; // r9
  unsigned __int64 v18; // [rsp+58h] [rbp+10h]

  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
  MiLockAweVadsExclusive((__int64)CurrentThread);
  v4 = Process[1].ActiveProcessorsPadding[8];
  v5 = *(_QWORD *)(v4 + 392);
  if ( v5 )
  {
    v18 = ExGetCallBackBlockRoutine(*(_QWORD *)(v4 + 392));
    v6 = v18;
    v7 = 0LL;
    MiLockAwePagesExclusive(v8, (__int64)CurrentThread);
    v9 = MiScrubInterrupted(a1);
    while ( !v9 )
    {
      SetBits = RtlFindSetBitsEx((PRTL_BITMAP_EX)(v5 + 16), 1uLL, v7);
      v11 = SetBits;
      if ( SetBits < v7 || SetBits == -1LL )
        break;
      v12 = SetBits * v6;
      v13 = 48 * v12 - 0x58000000000LL;
      for ( i = 0LL; i < v18; ++i )
      {
        if ( (int)MiScrubAwePage(a1, v12, (_DWORD *)v5) < 0 )
          MiMakePageBad(v13, 1LL, v15, v16);
        MiUnlockAwePagesExclusive(v5, (__int64)CurrentThread);
        MiUnlockAweVadsExclusive((__int64)CurrentThread);
        ++v12;
        v13 += 48LL;
        MiLockAweVadsExclusive((__int64)CurrentThread);
        MiLockAwePagesExclusive(v5, (__int64)CurrentThread);
        if ( !_bittest64(*(const signed __int64 **)(v5 + 24), v11) )
          break;
      }
      v7 = v11 + 1;
      if ( v11 + 1 >= *(_QWORD *)(v5 + 16) )
        break;
      v9 = MiScrubInterrupted(a1);
      v6 = v18;
    }
    MiUnlockAwePagesExclusive(v5, (__int64)CurrentThread);
  }
  return MiUnlockAweVadsExclusive((__int64)CurrentThread);
}
