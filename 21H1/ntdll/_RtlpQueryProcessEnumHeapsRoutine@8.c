/*
 * XREFs of _RtlpQueryProcessEnumHeapsRoutine@8 @ 0x4B337B10
 * Callers:
 *     <none>
 * Callees:
 *     _memset @ 0x4B2F8F30 (_memset.c)
 *     _RtlpCommitQueryDebugInfo@8 @ 0x4B3378A8 (_RtlpCommitQueryDebugInfo@8.c)
 *     _RtlHpQuerySegmentHeapRoutine@8 @ 0x4B3569F1 (_RtlHpQuerySegmentHeapRoutine@8.c)
 */

int __stdcall RtlpQueryProcessEnumHeapsRoutine(int a1, _DWORD *a2)
{
  _DWORD *v2; // ebx
  char *DebugInfo; // eax
  char *v4; // esi
  int result; // eax
  int v6; // edi
  int v7; // edx
  _DWORD *v8; // ecx
  int v9; // ecx
  int v10; // eax

  v2 = (_DWORD *)a2[14];
  DebugInfo = RtlpCommitQueryDebugInfo(a2, 0x40u);
  v4 = DebugInfo;
  if ( !DebugInfo )
    return -1073741801;
  memset(DebugInfo, 0, 0x40u);
  v6 = a1;
  result = RtlHpQuerySegmentHeapRoutine(a1, v4);
  if ( result < 0 )
  {
    v7 = *((_DWORD *)v4 + 4);
    *(_DWORD *)v4 = a1;
    *((_DWORD *)v4 + 1) = *(_DWORD *)(a1 + 64);
    *((_WORD *)v4 + 4) = 8;
    *((_WORD *)v4 + 5) = *(_WORD *)(a1 + 172);
    v8 = *(_DWORD **)(a1 + 164);
    if ( v8 != (_DWORD *)(a1 + 164) )
    {
      do
      {
        v7 += (v8[4] - v8[7]) << 12;
        *((_DWORD *)v4 + 4) = v7;
        v8 = (_DWORD *)*v8;
      }
      while ( v8 != (_DWORD *)(a1 + 164) );
      v6 = a1;
    }
    if ( *(_DWORD *)(v6 + 8) == -571548178 || (*(_BYTE *)(v6 + 234) != 2 ? (v9 = 0) : (v9 = *(_DWORD *)(v6 + 228)), !v9) )
      v10 = 0;
    else
      v10 = *(_DWORD *)(v9 + 20) - v9;
    *((_DWORD *)v4 + 4) = v7 + v10;
    *((_DWORD *)v4 + 3) = v7 + v10 - 8 * *(_DWORD *)(v6 + 116);
    ++*v2;
    return 0;
  }
  else
  {
    ++*v2;
  }
  return result;
}
