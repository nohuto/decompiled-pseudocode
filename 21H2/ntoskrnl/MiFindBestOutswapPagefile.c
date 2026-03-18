/*
 * XREFs of MiFindBestOutswapPagefile @ 0x14025FE60
 * Callers:
 *     MmOutSwapWorkingSet @ 0x140260144 (MmOutSwapWorkingSet.c)
 *     MmOutSwapVirtualAddresses @ 0x140375974 (MmOutSwapVirtualAddresses.c)
 * Callees:
 *     MiPageFileLargestBitmapsRun @ 0x14025FD40 (MiPageFileLargestBitmapsRun.c)
 *     MiWsSwapPageFileNumber @ 0x14025FF00 (MiWsSwapPageFileNumber.c)
 */

__int64 __fastcall MiFindBestOutswapPagefile(__int64 a1, unsigned int *a2)
{
  unsigned int v4; // eax
  __int64 v5; // rcx
  unsigned int v6; // r12d
  unsigned int v7; // esi
  unsigned int v8; // edi
  __int64 *v9; // r14
  unsigned int v11; // ebx

  v4 = MiWsSwapPageFileNumber();
  v6 = *(_DWORD *)(v5 + 16728);
  v7 = 0;
  *a2 = v4;
  v8 = 16;
  if ( !v6 )
    return *a2;
  v9 = (__int64 *)(v5 + 16736);
  do
  {
    if ( (*(_BYTE *)(*v9 + 204) & 0xD0) == 0x80 )
    {
      if ( v8 == 16
        || (v11 = MiPageFileLargestBitmapsRun(*(_QWORD *)(a1 + 8LL * v8 + 16736)),
            (unsigned int)MiPageFileLargestBitmapsRun(*v9) > v11) )
      {
        v8 = v7;
      }
    }
    ++v7;
    ++v9;
  }
  while ( v7 < v6 );
  if ( v8 == 16 )
    return *a2;
  return v8;
}
