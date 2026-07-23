/*
 * XREFs of RtlpMuiRegResizeLanguageList @ 0x180105A8C
 * Callers:
 *     RtlpMuiRegGrowLanguageList @ 0x180105200 (RtlpMuiRegGrowLanguageList.c)
 * Callees:
 *     _SafeReallocBlob @ 0x180107CF4 (_SafeReallocBlob.c)
 */

__int64 __fastcall RtlpMuiRegResizeLanguageList(__int64 a1, int a2)
{
  int v2; // ebx
  __int64 result; // rax

  v2 = 4;
  if ( a2 >= 1 )
    v2 = a2;
  if ( !a1 )
    return 0LL;
  if ( v2 < *(unsigned __int16 *)(a1 + 4) )
    return 0LL;
  result = SafeReallocBlob(a1, 64, v2, 6);
  if ( !result )
    return 0LL;
  *(_DWORD *)result = 0;
  *(_QWORD *)(result + 24) = result + 64;
  *(_WORD *)(result + 6) = v2;
  return result;
}
