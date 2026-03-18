/*
 * XREFs of ResFwpPageInBackground @ 0x1409F644C
 * Callers:
 *     ResFwBackgroundTransition @ 0x1409F6408 (ResFwBackgroundTransition.c)
 * Callees:
 *     BgpFwFreeMemory @ 0x14039B490 (BgpFwFreeMemory.c)
 *     BgpFwReleaseLock @ 0x14039B9D8 (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x14039BA28 (BgpFwAcquireLock.c)
 *     BgpFwAllocateMemory @ 0x14039BCB4 (BgpFwAllocateMemory.c)
 *     memmove @ 0x140411040 (memmove.c)
 */

void ResFwpPageInBackground()
{
  void *Memory; // rbx

  if ( (dword_140C13330 & 0xC00) != 0xC00 && (dword_140C13330 & 0x100000) == 0 )
  {
    if ( qword_140C13380 )
    {
      Memory = (void *)BgpFwAllocateMemory((unsigned int)Size);
      if ( Memory )
      {
        BgpFwReleaseLock();
        memmove(Memory, qword_140C13380, (unsigned int)Size);
        BgpFwAcquireLock();
        if ( qword_140C13378 )
          BgpFwFreeMemory((__int64)Memory);
        else
          _InterlockedExchange64((volatile __int64 *)&qword_140C13378, (__int64)Memory);
      }
    }
  }
}
