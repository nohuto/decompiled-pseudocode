/*
 * XREFs of MiFindBestOutswapPagefile @ 0x14033A054
 * Callers:
 *     MmOutSwapWorkingSet @ 0x1403394F4 (MmOutSwapWorkingSet.c)
 *     MmOutSwapVirtualAddresses @ 0x14033AC68 (MmOutSwapVirtualAddresses.c)
 * Callees:
 *     MiWsSwapPageFileNumber @ 0x14033A0F4 (MiWsSwapPageFileNumber.c)
 *     MiPageFileLargestBitmapsRun @ 0x14033A8B0 (MiPageFileLargestBitmapsRun.c)
 */

__int64 __fastcall MiFindBestOutswapPagefile(__int64 a1, unsigned int *a2)
{
  unsigned int v4; // eax
  __int64 v5; // rcx
  unsigned int v6; // r12d
  unsigned int v7; // esi
  unsigned int v8; // edi
  _QWORD *v9; // r14
  unsigned int v11; // ebx

  v4 = MiWsSwapPageFileNumber();
  v6 = *(_DWORD *)(v5 + 6936);
  v7 = 0;
  *a2 = v4;
  v8 = 16;
  if ( !v6 )
    return *a2;
  v9 = (_QWORD *)(v5 + 6944);
  do
  {
    if ( (*(_BYTE *)(*v9 + 204LL) & 0xD0) == 0x80 )
    {
      if ( v8 == 16
        || (v11 = MiPageFileLargestBitmapsRun(*(_QWORD *)(a1 + 8LL * v8 + 6944)),
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
