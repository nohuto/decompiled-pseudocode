/*
 * XREFs of _RtlCreateUserProcessEx@20 @ 0x4B33FC60
 * Callers:
 *     _RtlCreateUserProcess@40 @ 0x4B33FC00 (_RtlCreateUserProcess@40.c)
 * Callees:
 *     _RtlNormalizeProcessParams@4 @ 0x4B33FCE0 (_RtlNormalizeProcessParams@4.c)
 *     _RtlpCreateUserProcess@24 @ 0x4B342119 (_RtlpCreateUserProcess@24.c)
 */

int __stdcall RtlCreateUserProcessEx(int a1, int a2, char a3, int a4, void *a5)
{
  int v5; // eax
  int v6; // ecx

  if ( !a1 )
    return -1073741811;
  if ( !a2 )
    return -1073741811;
  v5 = RtlNormalizeProcessParams(a2);
  if ( !v5 )
    return -1073741811;
  v6 = 0;
  if ( a3 )
    v6 = 4;
  else
    *(_DWORD *)(v5 + 44) = 0;
  if ( (*(_DWORD *)(v5 + 8) & 0x40000) != 0 )
    v6 |= 0x80u;
  if ( (*(_DWORD *)(v5 + 8) & 0x400000) != 0 )
    v6 |= 0x40u;
  if ( (*(_DWORD *)(v5 + 8) & 0x800000) != 0 )
    v6 |= 0x40000u;
  return RtlpCreateUserProcess(v6, 1, a4, a5);
}
