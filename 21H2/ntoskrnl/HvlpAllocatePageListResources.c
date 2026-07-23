/*
 * XREFs of HvlpAllocatePageListResources @ 0x14088EBF8
 * Callers:
 *     PopAllocateHiberContext @ 0x140777E04 (PopAllocateHiberContext.c)
 * Callees:
 *     memset @ 0x140414300 (memset.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall HvlpAllocatePageListResources(__int64 a1, int a2)
{
  int v2; // edi
  unsigned int v3; // ebx
  SIZE_T v4; // rsi
  PVOID PoolWithTag; // rax

  v2 = a2 + 2;
  v3 = -1073741670;
  v4 = (unsigned int)((a2 + 2) << 12);
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v4, 0x204C5648u);
  HvlpHibernateScratchPage = PoolWithTag;
  if ( PoolWithTag )
  {
    HvlpHibernateScratchPageCount = v2;
    memset(PoolWithTag, 0, (unsigned int)v4);
    return 0;
  }
  return v3;
}
