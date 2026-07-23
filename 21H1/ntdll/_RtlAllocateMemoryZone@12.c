/*
 * XREFs of _RtlAllocateMemoryZone@12 @ 0x4B3A20A0
 * Callers:
 *     _RtlCreateMemoryBlockLookaside@20 @ 0x4B2AA940 (_RtlCreateMemoryBlockLookaside@20.c)
 *     _RtlAllocateMemoryBlockLookaside@12 @ 0x4B3A2010 (_RtlAllocateMemoryBlockLookaside@12.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl RtlAllocateMemoryZone(PVOID MemoryZone, SIZE_T BlockSize, PVOID *Block)
{
  unsigned int v3; // edi
  _DWORD *i; // edx
  signed __int32 v5; // esi

  *(_DWORD *)HIDWORD(BlockSize) = 0;
  if ( !(_DWORD)BlockSize )
    return -1073741811;
  v3 = (BlockSize + 3) & 0xFFFFFFFC;
  for ( i = (_DWORD *)*((_DWORD *)MemoryZone + 6); i; i = (_DWORD *)*i )
  {
    while ( 1 )
    {
      v5 = i[2];
      if ( v3 > i[3] - v5 )
        break;
      if ( _InterlockedCompareExchange(i + 2, v5 + v3, v5) == v5 )
      {
        *(_DWORD *)HIDWORD(BlockSize) = v5;
        return 0;
      }
    }
  }
  return -1073741670;
}
