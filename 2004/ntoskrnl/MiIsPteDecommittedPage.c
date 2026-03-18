/*
 * XREFs of MiIsPteDecommittedPage @ 0x140254880
 * Callers:
 *     MiComputePageCommitment @ 0x140254480 (MiComputePageCommitment.c)
 * Callees:
 *     MiIsPrototypePteVadLookup @ 0x140315EC0 (MiIsPrototypePteVadLookup.c)
 */

_BOOL8 __fastcall MiIsPteDecommittedPage(unsigned __int64 a1, __int64 a2, __int64 Process, __int64 a4)
{
  __int64 v5; // rcx
  unsigned __int64 CurrentThread; // rdx
  __int64 v8; // rax

  v5 = *(_QWORD *)a1;
  CurrentThread = 0xFFFFF6FB7DBED000uLL;
  if ( a1 >= 0xFFFFF6FB7DBED000uLL )
  {
    CurrentThread = 0xFFFFF6FB7DBED7F8uLL;
    if ( a1 <= 0xFFFFF6FB7DBED7F8uLL && (MiFlags & 0xC00000) != 0 )
    {
      CurrentThread = (unsigned __int64)KeGetCurrentThread();
      Process = *(_QWORD *)(CurrentThread + 184);
      if ( *(_BYTE *)(Process + 912) != 1 && (v5 & 1) != 0 && ((v5 & 0x20) == 0 || (v5 & 0x42) == 0) )
      {
        Process = (__int64)KeGetCurrentThread()->ApcState.Process;
        CurrentThread = *(_QWORD *)(Process + 1928);
        if ( CurrentThread )
        {
          Process = v5 | 0x20;
          v8 = *(_QWORD *)(CurrentThread + 8 * ((a1 >> 3) & 0x1FF));
          CurrentThread = (unsigned __int8)v8;
          LOBYTE(CurrentThread) = v8 & 0x20;
          if ( (v8 & 0x20) == 0 )
            Process = v5;
          v5 = Process;
          if ( (v8 & 0x42) != 0 )
            v5 = Process | 0x42;
        }
      }
    }
  }
  return (v5 & 0x3E0) == 0x200
      && (v5 & 1) == 0
      && ((v5 & 0x400) == 0 || (unsigned int)MiIsPrototypePteVadLookup(v5, CurrentThread, Process, a4));
}
