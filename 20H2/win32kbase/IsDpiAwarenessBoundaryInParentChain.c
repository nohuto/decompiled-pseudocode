/*
 * XREFs of IsDpiAwarenessBoundaryInParentChain @ 0x1C01397E4
 * Callers:
 *     TransformRectBetweenCoordinateSpaces @ 0x1C002F7A0 (TransformRectBetweenCoordinateSpaces.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsDpiAwarenessBoundaryInParentChain(__int64 a1)
{
  unsigned int v1; // edx
  __int64 v2; // r8
  __int64 v3; // r9
  unsigned int v4; // r10d
  unsigned int v5; // r9d
  int v6; // ecx
  int v7; // eax

  v1 = 0;
  while ( 1 )
  {
    v2 = *(_QWORD *)(a1 + 104);
    if ( !v2 )
      break;
    v3 = *(_QWORD *)(v2 + 40);
    if ( (*(_WORD *)(v3 + 42) & 0x2FFF) == 0x29D )
      break;
    v4 = *(_DWORD *)(v3 + 288);
    v5 = *(_DWORD *)(*(_QWORD *)(a1 + 40) + 288LL);
    if ( (((unsigned __int16)(v4 >> 8) ^ (unsigned __int16)(v5 >> 8)) & 0x1FF) != 0 )
      return 1;
    if ( (v5 & 0xF) != 2 || (v6 = 1, (v5 & 0x20000000) == 0) )
      v6 = 0;
    if ( (v4 & 0xF) != 2 || (v7 = 1, (v4 & 0x20000000) == 0) )
      v7 = 0;
    if ( v6 != v7 )
      return 1;
    a1 = v2;
  }
  return v1;
}
