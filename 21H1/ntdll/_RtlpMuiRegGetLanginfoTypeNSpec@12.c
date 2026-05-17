/*
 * XREFs of _RtlpMuiRegGetLanginfoTypeNSpec@12 @ 0x4B3549CC
 * Callers:
 *     _LdrpGetMUILangConfigNode@16 @ 0x4B351644 (_LdrpGetMUILangConfigNode@16.c)
 *     _RtlpCompareConfigNodeWithSpec@16 @ 0x4B3538E2 (_RtlpCompareConfigNodeWithSpec@16.c)
 * Callees:
 *     <none>
 */

int __fastcall RtlpMuiRegGetLanginfoTypeNSpec(int a1, _DWORD *a2, __int16 *a3)
{
  __int16 v4; // ax
  int v5; // ebx
  __int16 v6; // cx

  v4 = 0;
  v5 = 0;
  if ( a1 && a2 && a3 )
  {
    v6 = *(_WORD *)(a1 + 4);
    if ( v6 == 4096 || v6 == 5120 || !v6 )
    {
      v6 = *(_WORD *)(a1 + 6);
      if ( v6 <= 0 )
      {
        *a2 = 0;
        v5 = -1073741811;
        goto LABEL_12;
      }
      *a2 = 3;
    }
    else
    {
      *a2 = 1;
    }
    v4 = v6;
LABEL_12:
    *a3 = v4;
    return v5;
  }
  return -1073741811;
}
