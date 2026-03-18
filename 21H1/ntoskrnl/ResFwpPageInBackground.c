/*
 * XREFs of ResFwpPageInBackground @ 0x1409F044C
 * Callers:
 *     ResFwBackgroundTransition @ 0x1409F0408 (ResFwBackgroundTransition.c)
 * Callees:
 *     BgpFwFreeMemory @ 0x140398840 (BgpFwFreeMemory.c)
 *     BgpFwReleaseLock @ 0x140398D88 (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x140398DD8 (BgpFwAcquireLock.c)
 *     BgpFwAllocateMemory @ 0x140399064 (BgpFwAllocateMemory.c)
 *     memmove @ 0x140408CC0 (memmove.c)
 */

void ResFwpPageInBackground()
{
  void *Memory; // rbx

  if ( (dword_140C132D0 & 0xC00) != 0xC00 && (dword_140C132D0 & 0x100000) == 0 )
  {
    if ( qword_140C13320 )
    {
      Memory = (void *)BgpFwAllocateMemory((unsigned int)Size);
      if ( Memory )
      {
        BgpFwReleaseLock();
        memmove(Memory, qword_140C13320, (unsigned int)Size);
        BgpFwAcquireLock();
        if ( qword_140C13318 )
          BgpFwFreeMemory((__int64)Memory);
        else
          _InterlockedExchange64((volatile __int64 *)&qword_140C13318, (__int64)Memory);
      }
    }
  }
}
