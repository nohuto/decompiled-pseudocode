/*
 * XREFs of MiScrubProcessPhysicalPages @ 0x14097D7F8
 * Callers:
 *     MiScrubProcesses @ 0x140983B80 (MiScrubProcesses.c)
 * Callees:
 *     RtlFindSetBitsEx @ 0x14030ACF0 (RtlFindSetBitsEx.c)
 *     MiGetAwePageSize @ 0x1405AAF90 (MiGetAwePageSize.c)
 *     MiLockAwePagesExclusive @ 0x1405AB970 (MiLockAwePagesExclusive.c)
 *     MiLockAweVadsExclusive @ 0x1405AB9B8 (MiLockAweVadsExclusive.c)
 *     MiScrubAwePage @ 0x1405AC670 (MiScrubAwePage.c)
 *     MiUnlockAwePagesExclusive @ 0x1405AC8D4 (MiUnlockAwePagesExclusive.c)
 *     MiUnlockAweVadsExclusive @ 0x1405AC950 (MiUnlockAweVadsExclusive.c)
 *     MiMakePageBad @ 0x1405C4E28 (MiMakePageBad.c)
 *     MiScrubInterrupted @ 0x1405C4F88 (MiScrubInterrupted.c)
 */

char __fastcall MiScrubProcessPhysicalPages(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rdi
  _KPROCESS *Process; // rbx
  unsigned __int64 v4; // rax
  __int64 v5; // rbx
  unsigned __int64 v6; // rsi
  unsigned __int64 AwePageSize; // r15
  __int64 v8; // rcx
  unsigned __int64 SetBits; // rax
  unsigned __int64 v10; // rbp
  unsigned __int64 v11; // r14
  ULONG_PTR i; // rsi

  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
  MiLockAweVadsExclusive((__int64)CurrentThread);
  v4 = Process[1].ActiveProcessors.StaticBitmap[28];
  v5 = *(_QWORD *)(v4 + 376);
  if ( v5 )
  {
    v6 = 0LL;
    AwePageSize = MiGetAwePageSize(*(_QWORD *)(v4 + 376));
    MiLockAwePagesExclusive(v8, (__int64)CurrentThread);
    do
    {
      if ( MiScrubInterrupted(a1) )
        break;
      SetBits = RtlFindSetBitsEx((unsigned __int64 *)(v5 + 24), 1uLL, v6);
      v10 = SetBits;
      if ( SetBits < v6 || SetBits == -1LL )
        break;
      v11 = 0LL;
      for ( i = SetBits * AwePageSize; v11 < AwePageSize; ++v11 )
      {
        if ( (int)MiScrubAwePage(a1, i, v5) < 0 )
          MiMakePageBad(i, 1);
        MiUnlockAwePagesExclusive(v5, (__int64)CurrentThread);
        MiUnlockAweVadsExclusive((__int64)CurrentThread);
        ++i;
        MiLockAweVadsExclusive((__int64)CurrentThread);
        MiLockAwePagesExclusive(v5, (__int64)CurrentThread);
        if ( !_bittest64(*(const signed __int64 **)(v5 + 32), v10) )
          break;
      }
      v6 = v10 + 1;
    }
    while ( v10 + 1 < *(_QWORD *)(v5 + 24) );
    MiUnlockAwePagesExclusive(v5, (__int64)CurrentThread);
  }
  return MiUnlockAweVadsExclusive((__int64)CurrentThread);
}
