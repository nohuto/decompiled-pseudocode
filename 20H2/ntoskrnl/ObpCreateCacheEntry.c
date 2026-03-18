/*
 * XREFs of ObpCreateCacheEntry @ 0x1405F6404
 * Callers:
 *     ObLogSecurityDescriptor @ 0x1405F6110 (ObLogSecurityDescriptor.c)
 * Callees:
 *     memmove @ 0x140411040 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x1409B7010 (ExAllocatePoolWithTag.c)
 */

char *__fastcall ObpCreateCacheEntry(void *Src, size_t Size, __int64 a3, unsigned int a4)
{
  unsigned int v4; // edi
  __int64 v6; // rsi
  char *PoolWithTag; // rbx

  v4 = Size;
  v6 = a4;
  if ( (int)Size + 40 < (unsigned int)Size )
    return 0LL;
  PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPoolCacheAligned, (unsigned int)(Size + 40), 0x6353624Fu);
  if ( !PoolWithTag )
    return 0LL;
  *(_QWORD *)PoolWithTag = 0LL;
  *(_QWORD *)(PoolWithTag + 28) = 0LL;
  *((_DWORD *)PoolWithTag + 9) = 0;
  *((_QWORD *)PoolWithTag + 1) = v6;
  *((_QWORD *)PoolWithTag + 2) = a3;
  *((_DWORD *)PoolWithTag + 6) = v4;
  memmove(PoolWithTag + 32, Src, v4);
  return PoolWithTag;
}
