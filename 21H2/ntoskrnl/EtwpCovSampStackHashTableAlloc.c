/*
 * XREFs of EtwpCovSampStackHashTableAlloc @ 0x140946194
 * Callers:
 *     EtwpCovSampCaptureContextStart @ 0x140942488 (EtwpCovSampCaptureContextStart.c)
 * Callees:
 *     memset @ 0x140414300 (memset.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall EtwpCovSampStackHashTableAlloc(void **a1, int a2)
{
  unsigned int v3; // ebx
  void *v4; // rcx
  _DWORD *PoolWithTag; // rax
  _DWORD *v7; // rsi

  v3 = 0;
  v4 = *a1;
  if ( v4 )
  {
    ExFreePoolWithTag(v4, 0x56777445u);
    *a1 = 0LL;
  }
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)(4 * a2 + 8), 0x56777445u);
  v7 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, (unsigned int)(4 * a2 + 8));
    v7[1] = a2;
    *a1 = v7;
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v3;
}
