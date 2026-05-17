/*
 * XREFs of _RtlAllocateMemoryZone@12 @ 0x4B3A20A0
 * Callers:
 *     _RtlCreateMemoryBlockLookaside@20 @ 0x4B2AA940 (_RtlCreateMemoryBlockLookaside@20.c)
 *     _RtlAllocateMemoryBlockLookaside@12 @ 0x4B3A2010 (_RtlAllocateMemoryBlockLookaside@12.c)
 * Callees:
 *     <none>
 */

int __stdcall RtlAllocateMemoryZone(int a1, int a2, signed __int32 *a3)
{
  unsigned int v3; // edi
  _DWORD *i; // edx
  signed __int32 v5; // esi

  *a3 = 0;
  if ( !a2 )
    return -1073741811;
  v3 = (a2 + 3) & 0xFFFFFFFC;
  for ( i = *(_DWORD **)(a1 + 24); i; i = (_DWORD *)*i )
  {
    while ( 1 )
    {
      v5 = i[2];
      if ( v3 > i[3] - v5 )
        break;
      if ( _InterlockedCompareExchange(i + 2, v5 + v3, v5) == v5 )
      {
        *a3 = v5;
        return 0;
      }
    }
  }
  return -1073741670;
}
