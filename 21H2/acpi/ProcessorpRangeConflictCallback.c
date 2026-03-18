/*
 * XREFs of ProcessorpRangeConflictCallback @ 0x1C00B6520
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall ProcessorpRangeConflictCallback(__int64 a1, __int64 a2)
{
  __int64 v2; // r9
  unsigned int v3; // r8d
  unsigned int v4; // eax

  v2 = *(_QWORD *)(a2 + 16);
  if ( !v2 )
    return 0;
  if ( (*(_BYTE *)(a2 + 33) & 1) == 0 )
    return 0;
  if ( !*(_BYTE *)(a1 + 14) )
    return 0;
  if ( *(_QWORD *)a1 == *(_QWORD *)(a2 + 24) )
    return 0;
  v3 = *(_DWORD *)(a1 + 8);
  v4 = *(_DWORD *)(v2 + 16);
  if ( v3 != v4 && (v3 < 0xFFF00000 || v4 < 0xFFF00000) )
    return 0;
  if ( (*(_BYTE *)(a1 + 12) & 1) != 0 )
  {
    if ( (*(_BYTE *)(a2 + 32) & 2) == 0 )
      return 0;
  }
  else if ( (*(_BYTE *)(a2 + 32) & 1) == 0 )
  {
    return 0;
  }
  return 1;
}
