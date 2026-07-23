/*
 * XREFs of CmpInitializeNameCache @ 0x1407B9470
 * Callers:
 *     CmInitSystem1 @ 0x140A5AF78 (CmInitSystem1.c)
 * Callees:
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     memset @ 0x140414300 (memset.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 CmpInitializeNameCache()
{
  PVOID PoolWithTag; // rax
  _QWORD *v1; // rbx
  __int64 result; // rax

  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x8000uLL, 0x61434D43u);
  CmpNameCacheTable = PoolWithTag;
  v1 = PoolWithTag;
  if ( !PoolWithTag )
    KeBugCheckEx(0x67u, 3uLL, 2uLL, 0LL, 0LL);
  memset(PoolWithTag, 0, 0x8000uLL);
  result = 2048LL;
  do
  {
    *v1 = 0LL;
    v1 += 2;
    --result;
  }
  while ( result );
  return result;
}
