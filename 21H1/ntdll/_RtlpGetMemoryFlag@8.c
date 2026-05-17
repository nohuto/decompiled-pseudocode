/*
 * XREFs of _RtlpGetMemoryFlag@8 @ 0x4B35E7A1
 * Callers:
 *     _RtlpScanProcessVirtualMemory@0 @ 0x4B35ECB4 (_RtlpScanProcessVirtualMemory@0.c)
 * Callees:
 *     <none>
 */

bool __fastcall RtlpGetMemoryFlag(_DWORD *a1, unsigned int a2)
{
  unsigned int v3; // eax

  while ( 1 )
  {
    if ( a2 < a1[1] || a2 > a1[2] )
      return 0;
    v3 = a2 <= a1[1] ? 0 : (a2 - a1[1]) / *a1;
    if ( *a1 == 4096 )
      break;
    a1 = (_DWORD *)a1[v3 + 11];
    if ( !a1 )
      return 0;
  }
  return ((1 << (v3 & 7)) & *((char *)a1 + (v3 >> 3) + 12)) != 0;
}
