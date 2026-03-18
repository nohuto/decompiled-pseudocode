/*
 * XREFs of EtwpCoverageSamplerAllocateTable @ 0x1409418F0
 * Callers:
 *     EtwpCovSampHashMakeRoomAndAcquireLock @ 0x140940530 (EtwpCovSampHashMakeRoomAndAcquireLock.c)
 *     EtwpCoverageSamplerStart @ 0x140942988 (EtwpCoverageSamplerStart.c)
 * Callees:
 *     memset @ 0x140408F80 (memset.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1030 (ExAllocatePoolWithTag.c)
 */

_OWORD *__fastcall EtwpCoverageSamplerAllocateTable(int a1)
{
  _OWORD *PoolWithTag; // rax
  _OWORD *v3; // rbx
  PVOID v4; // rax

  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x20uLL, 0x56777445u);
  v3 = PoolWithTag;
  if ( PoolWithTag )
  {
    *PoolWithTag = 0LL;
    PoolWithTag[1] = 0LL;
    v4 = ExAllocatePoolWithTag(PagedPool, (unsigned int)(8 * a1), 0x56777445u);
    *((_QWORD *)v3 + 3) = v4;
    if ( !v4 )
    {
      ExFreePoolWithTag(v3, 0x56777445u);
      return 0LL;
    }
    memset(v4, 0, (unsigned int)(8 * a1));
    *((_DWORD *)v3 + 5) = a1;
  }
  return v3;
}
