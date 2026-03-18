/*
 * XREFs of ResFwpPageOutBackground @ 0x1409EE470
 * Callers:
 *     ResFwBackgroundTransition @ 0x1409F0408 (ResFwBackgroundTransition.c)
 * Callees:
 *     BgpFwFreeMemory @ 0x140398840 (BgpFwFreeMemory.c)
 *     BgpFwReleaseLock @ 0x140398D88 (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x140398DD8 (BgpFwAcquireLock.c)
 *     memmove @ 0x140408CC0 (memmove.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1030 (ExAllocatePoolWithTag.c)
 */

void ResFwpPageOutBackground()
{
  void *v0; // rsi
  PVOID PoolWithTag; // rax
  void *v2; // rdi

  if ( (dword_140C132D0 & 0xC00) != 0xC00 )
  {
    v0 = qword_140C13318;
    if ( qword_140C13318 )
    {
      if ( qword_140C13320 )
      {
LABEL_9:
        _InterlockedExchange64((volatile __int64 *)&qword_140C13318, 0LL);
        BgpFwFreeMemory((__int64)v0);
        return;
      }
      BgpFwReleaseLock();
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)Size, 0x4B494742u);
      v2 = PoolWithTag;
      if ( PoolWithTag )
        memmove(PoolWithTag, qword_140C13318, (unsigned int)Size);
      BgpFwAcquireLock();
      if ( v2 )
      {
        if ( qword_140C13320 )
        {
          BgpFwReleaseLock();
          ExFreePoolWithTag(v2, 0x4B494742u);
          BgpFwAcquireLock();
          return;
        }
        _InterlockedExchange64((volatile __int64 *)&qword_140C13320, (__int64)v2);
        goto LABEL_9;
      }
    }
  }
}
