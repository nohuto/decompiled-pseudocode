/*
 * XREFs of _RtlpMuiRegResizeLanguageConfigList@8 @ 0x4B36BCBB
 * Callers:
 *     _RtlpMuiRegGrowLanguageConfigList@8 @ 0x4B36B8D0 (_RtlpMuiRegGrowLanguageConfigList@8.c)
 * Callees:
 *     _SafeReallocBlob @ 0x4B36D0C0 (_SafeReallocBlob.c)
 */

int __fastcall RtlpMuiRegResizeLanguageConfigList(unsigned __int16 *a1, int a2)
{
  int v2; // esi
  int v3; // edx
  int v4; // eax
  int v6; // [esp+4h] [ebp-4h] BYREF

  v2 = a2;
  if ( a2 < 1 )
    v2 = 4;
  v3 = 0;
  if ( a1 )
  {
    if ( v2 >= a1[2] )
    {
      v4 = SafeReallocBlob(a1, v2, 12, (int)a1, (int)a1, (int)&v6);
      v3 = v4;
      if ( v4 )
      {
        *(_DWORD *)v4 = v6;
        *(_WORD *)(v4 + 6) = v2;
        *(_DWORD *)(v4 + 8) = v4 + 12;
      }
    }
  }
  return v3;
}
