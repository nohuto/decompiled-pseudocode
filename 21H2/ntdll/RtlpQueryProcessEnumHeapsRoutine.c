/*
 * XREFs of RtlpQueryProcessEnumHeapsRoutine @ 0x1800D8E60
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1800A4740 (memset.c)
 *     RtlpCommitQueryDebugInfo @ 0x1800D89F8 (RtlpCommitQueryDebugInfo.c)
 *     RtlHpQuerySegmentHeapRoutine @ 0x1800F25F0 (RtlHpQuerySegmentHeapRoutine.c)
 */

__int64 __fastcall RtlpQueryProcessEnumHeapsRoutine(__int64 a1, _QWORD *a2)
{
  _DWORD *v2; // rsi
  char *DebugInfo; // rax
  char *v5; // rdi
  __int64 result; // rax
  __int64 v7; // rdx
  __int64 *i; // rcx
  __int64 v9; // rcx
  __int64 v10; // rax

  v2 = (_DWORD *)a2[14];
  DebugInfo = RtlpCommitQueryDebugInfo(a2, 0x58u);
  v5 = DebugInfo;
  if ( !DebugInfo )
    return 3221225495LL;
  memset(DebugInfo, 0, 0x58uLL);
  result = RtlHpQuerySegmentHeapRoutine(a1, v5);
  if ( (int)result < 0 )
  {
    v7 = *((_QWORD *)v5 + 3);
    *(_QWORD *)v5 = a1;
    *((_DWORD *)v5 + 2) = *(_DWORD *)(a1 + 112);
    *((_WORD *)v5 + 6) = 16;
    *((_WORD *)v5 + 7) = *(_WORD *)(a1 + 304);
    for ( i = *(__int64 **)(a1 + 288); i != (__int64 *)(a1 + 288); i = (__int64 *)*i )
    {
      v7 += (unsigned int)((*((_DWORD *)i + 8) - *((_DWORD *)i + 14)) << 12);
      *((_QWORD *)v5 + 3) = v7;
    }
    if ( *(_DWORD *)(a1 + 16) == -571548178
      || (*(_BYTE *)(a1 + 418) != 2 ? (v9 = 0LL) : (v9 = *(_QWORD *)(a1 + 408)), !v9) )
    {
      v10 = 0LL;
    }
    else
    {
      v10 = *(_QWORD *)(v9 + 40) - v9;
    }
    *((_QWORD *)v5 + 3) = v7 + v10;
    *((_QWORD *)v5 + 2) = v7 + v10 - 16LL * *(_QWORD *)(a1 + 192);
    ++*v2;
    return 0LL;
  }
  else
  {
    ++*v2;
  }
  return result;
}
