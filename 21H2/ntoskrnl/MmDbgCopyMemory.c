/*
 * XREFs of MmDbgCopyMemory @ 0x140546CDC
 * Callers:
 *     KiTpWriteMemory @ 0x14051D73C (KiTpWriteMemory.c)
 *     KdpReadPhysicalMemory @ 0x1409B8870 (KdpReadPhysicalMemory.c)
 *     KdpSearchMemory @ 0x1409B9018 (KdpSearchMemory.c)
 *     KdpSearchPhysicalPage @ 0x1409B9230 (KdpSearchPhysicalPage.c)
 *     KdpCopyMemoryChunks @ 0x1409BAB9C (KdpCopyMemoryChunks.c)
 * Callees:
 *     MiDbgCopyMemory @ 0x140545AE4 (MiDbgCopyMemory.c)
 */

__int64 __fastcall MmDbgCopyMemory(char *BaseAddress, _BYTE *a2, unsigned int a3, unsigned int a4, unsigned int a5)
{
  unsigned int v6; // edi
  __int64 result; // rax
  unsigned int v10; // ebp

  v6 = a3;
  if ( a4 > 2 && a4 != 4 && a4 != 8 )
    return 2147483650LL;
  result = 0LL;
  if ( a3 )
  {
    do
    {
      v10 = v6;
      if ( 4096 - ((unsigned __int16)BaseAddress & 0xFFFu) <= v6 )
        v10 = 4096 - ((unsigned __int16)BaseAddress & 0xFFF);
      result = MiDbgCopyMemory(BaseAddress, a2, v10, a4, a5);
      if ( (int)result < 0 )
        break;
      BaseAddress += v10;
      a2 += v10;
      v6 -= v10;
    }
    while ( v6 );
  }
  return result;
}
