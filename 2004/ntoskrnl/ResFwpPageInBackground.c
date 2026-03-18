/*
 * XREFs of ResFwpPageInBackground @ 0x1409F044C
 * Callers:
 *     ResFwBackgroundTransition @ 0x1409F0408 (ResFwBackgroundTransition.c)
 * Callees:
 *     BgpFwFreeMemory @ 0x140398FD0 (BgpFwFreeMemory.c)
 *     BgpFwReleaseLock @ 0x140399518 (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x140399568 (BgpFwAcquireLock.c)
 *     BgpFwAllocateMemory @ 0x1403997F4 (BgpFwAllocateMemory.c)
 *     memmove @ 0x140409FC0 (memmove.c)
 */

void ResFwpPageInBackground()
{
  void *Memory; // rbx

  if ( (dword_140C13310 & 0xC00) != 0xC00 && (dword_140C13310 & 0x100000) == 0 )
  {
    if ( qword_140C13360 )
    {
      Memory = (void *)BgpFwAllocateMemory((unsigned int)Size);
      if ( Memory )
      {
        BgpFwReleaseLock();
        memmove(Memory, qword_140C13360, (unsigned int)Size);
        BgpFwAcquireLock();
        if ( qword_140C13358 )
          BgpFwFreeMemory((__int64)Memory);
        else
          _InterlockedExchange64((volatile __int64 *)&qword_140C13358, (__int64)Memory);
      }
    }
  }
}
