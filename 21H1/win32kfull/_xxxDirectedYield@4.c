/*
 * XREFs of _xxxDirectedYield@4 @ 0x155BCE
 * Callers:
 *     ?HandleProcessSpinning@@YGHXZ @ 0x69E70 (-HandleProcessSpinning@@YGHXZ.c)
 *     _NtUserCallOneParam@8 @ 0x6E730 (_NtUserCallOneParam@8.c)
 *     ?xxxPollAndWaitForSingleObject@@YGKPAU_KEVENT@@PAXK@Z @ 0xE3788 (-xxxPollAndWaitForSingleObject@@YGKPAU_KEVENT@@PAXK@Z.c)
 * Callees:
 *     _xxxSleepTask@8 @ 0x457AA (_xxxSleepTask@8.c)
 *     _InsertTask@8 @ 0x155B50 (_InsertTask@8.c)
 */

int __stdcall xxxDirectedYield(int a1)
{
  int v1; // eax
  int v2; // edi

  if ( (*(_BYTE *)(_gptiCurrent + 264) & 2) != 0 && *(_DWORD *)(*(_DWORD *)(_gptiCurrent + 232) + 200) )
  {
    ++*(_DWORD *)(*(_DWORD *)(_gptiCurrent + 332) + 4);
    ++*(_DWORD *)(_gpsi + 4440);
    InsertTask(*(_DWORD *)(_gptiCurrent + 232), *(_DWORD **)(_gptiCurrent + 332));
    if ( a1 == -1 )
    {
LABEL_8:
      xxxSleepTask(1, 0);
      return 1;
    }
    v1 = PtiFromThreadId(a1);
    v2 = v1;
    if ( v1 && *(_DWORD *)(v1 + 232) == *(_DWORD *)(_gptiCurrent + 232) )
    {
      if ( (*(_BYTE *)(v1 + 264) & 2) != 0 )
      {
        ++*(_DWORD *)(*(_DWORD *)(v1 + 332) + 4);
        ++*(_DWORD *)(_gpsi + 4440);
        --*(_DWORD *)(*(_DWORD *)(v1 + 332) + 8);
        InsertTask(*(_DWORD *)(v1 + 232), *(_DWORD **)(v1 + 332));
        ++*(_DWORD *)(*(_DWORD *)(v2 + 332) + 8);
      }
      goto LABEL_8;
    }
  }
  return 1;
}
