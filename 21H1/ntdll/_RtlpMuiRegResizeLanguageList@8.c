/*
 * XREFs of _RtlpMuiRegResizeLanguageList@8 @ 0x4B36BD04
 * Callers:
 *     _RtlpMuiRegGrowLanguageList@8 @ 0x4B36B8F3 (_RtlpMuiRegGrowLanguageList@8.c)
 * Callees:
 *     _SafeReallocBlob @ 0x4B36D0C0 (_SafeReallocBlob.c)
 */

int __fastcall RtlpMuiRegResizeLanguageList(unsigned __int16 *a1, int a2)
{
  int v2; // esi
  int result; // eax
  int v4; // [esp+4h] [ebp-4h] BYREF

  v4 = 0;
  v2 = a2;
  if ( a2 < 1 )
    v2 = 4;
  if ( !a1 )
    return 0;
  if ( v2 < a1[2] )
    return 0;
  result = SafeReallocBlob(a1, v2, 6, (int)a1, (int)a1, (int)&v4);
  if ( !result )
    return 0;
  *(_DWORD *)result = v4;
  *(_WORD *)(result + 6) = v2;
  *(_DWORD *)(result + 16) = result + 56;
  return result;
}
