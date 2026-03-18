/*
 * XREFs of EtwpCoverageSamplerAllocateTable @ 0x140948930
 * Callers:
 *     EtwpCovSampHashMakeRoomAndAcquireLock @ 0x140947570 (EtwpCovSampHashMakeRoomAndAcquireLock.c)
 *     EtwpCoverageSamplerStart @ 0x1409499BC (EtwpCoverageSamplerStart.c)
 * Callees:
 *     memset @ 0x140411300 (memset.c)
 *     ExAllocatePoolWithTag @ 0x1409B7010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
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
