/*
 * XREFs of _RtlpStkMarkDllRange@4 @ 0x4B2D07C5
 * Callers:
 *     _LdrpProcessMappedModule@16 @ 0x4B2D05EC (_LdrpProcessMappedModule@16.c)
 *     _AvrfMiniLoadDll@20 @ 0x4B3397A2 (_AvrfMiniLoadDll@20.c)
 * Callees:
 *     <none>
 */

volatile signed __int32 *__thiscall RtlpStkMarkDllRange(_DWORD *this)
{
  int v1; // edx
  int v2; // eax
  unsigned int v3; // ecx
  unsigned int v4; // esi
  unsigned int v5; // ebx
  unsigned int v6; // edx
  volatile signed __int32 *result; // eax

  v1 = this[6];
  v2 = this[8];
  v3 = 0;
  v4 = (v2 - (v1 & 0xFFF00000) + v1 + 0xFFFFF) >> 20;
  v5 = (v1 & 0xFFF00000) >> 20;
  do
  {
    v6 = (v5 & 0xFFFFF7FF) >> 5;
    result = (volatile signed __int32 *)(v5 & 0x1F);
    v3 |= 1 << (char)result;
    if ( (++v5 & 0x1F) == 0 )
    {
      result = &RtlpStkDllRanges[v6];
      _InterlockedOr(result, v3);
      v3 = 0;
    }
    --v4;
  }
  while ( v4 );
  if ( v3 )
  {
    result = &RtlpStkDllRanges[v6];
    _InterlockedOr(result, v3);
  }
  return result;
}
