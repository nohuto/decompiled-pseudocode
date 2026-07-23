/*
 * XREFs of _RtlpQueryProcessEnumHeapsRoutine@8 @ 0x4B337B10
 * Callers:
 *     <none>
 * Callees:
 *     _memset @ 0x4B2F8F30 (_memset.c)
 *     _RtlpCommitQueryDebugInfo@8 @ 0x4B3378A8 (_RtlpCommitQueryDebugInfo@8.c)
 *     _RtlHpQuerySegmentHeapRoutine@8 @ 0x4B3569F1 (_RtlHpQuerySegmentHeapRoutine@8.c)
 */

int __userpurge RtlpQueryProcessEnumHeapsRoutine@<eax>(int a1@<edi>, int a2, _DWORD *a3)
{
  _DWORD *v3; // ebx
  char *DebugInfo; // eax
  char *v5; // esi
  int result; // eax
  int v7; // edi
  int v8; // edx
  _DWORD *v9; // ecx
  int v10; // ecx
  int v11; // eax
  size_t v12; // [esp-8h] [ebp-14h]

  v3 = (_DWORD *)a3[14];
  DebugInfo = RtlpCommitQueryDebugInfo(a3, 0x40u);
  v5 = DebugInfo;
  if ( !DebugInfo )
    return -1073741801;
  HIDWORD(v12) = a1;
  LODWORD(v12) = 64;
  memset(DebugInfo, 0, v12);
  v7 = a2;
  result = RtlHpQuerySegmentHeapRoutine(a2, v5);
  if ( result < 0 )
  {
    v8 = *((_DWORD *)v5 + 4);
    *(_DWORD *)v5 = a2;
    *((_DWORD *)v5 + 1) = *(_DWORD *)(a2 + 64);
    *((_WORD *)v5 + 4) = 8;
    *((_WORD *)v5 + 5) = *(_WORD *)(a2 + 172);
    v9 = *(_DWORD **)(a2 + 164);
    if ( v9 != (_DWORD *)(a2 + 164) )
    {
      do
      {
        v8 += (v9[4] - v9[7]) << 12;
        *((_DWORD *)v5 + 4) = v8;
        v9 = (_DWORD *)*v9;
      }
      while ( v9 != (_DWORD *)(a2 + 164) );
      v7 = a2;
    }
    if ( *(_DWORD *)(v7 + 8) == -571548178
      || (*(_BYTE *)(v7 + 234) != 2 ? (v10 = 0) : (v10 = *(_DWORD *)(v7 + 228)), !v10) )
    {
      v11 = 0;
    }
    else
    {
      v11 = *(_DWORD *)(v10 + 20) - v10;
    }
    *((_DWORD *)v5 + 4) = v8 + v11;
    *((_DWORD *)v5 + 3) = v8 + v11 - 8 * *(_DWORD *)(v7 + 116);
    ++*v3;
    return 0;
  }
  else
  {
    ++*v3;
  }
  return result;
}
