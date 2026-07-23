/*
 * XREFs of _RtlpMuiRegResizeLanguages@8 @ 0x4B36BD50
 * Callers:
 *     _RtlpMuiRegGrowLanguages@8 @ 0x4B36B916 (_RtlpMuiRegGrowLanguages@8.c)
 * Callees:
 *     _SafeReallocBlob @ 0x4B36D0C0 (_SafeReallocBlob.c)
 */

int __fastcall RtlpMuiRegResizeLanguages(unsigned __int16 *a1, int a2)
{
  int v2; // edi
  int v3; // esi
  int v4; // eax
  int v6; // [esp+Ch] [ebp-4h] BYREF

  v2 = a2;
  v3 = 0;
  if ( a2 < 1 )
    v2 = 4;
  if ( a1 )
  {
    if ( v2 >= a1[3] )
    {
      v4 = SafeReallocBlob(a1, v2, 28, (int)a1, (int)a1, (int)&v6);
      v3 = v4;
      if ( v4 )
      {
        *(_DWORD *)v4 = v6;
        *(_WORD *)(v4 + 4) = v2;
        *(_DWORD *)(v4 + 12) = v4 + 16;
      }
    }
  }
  return v3;
}
