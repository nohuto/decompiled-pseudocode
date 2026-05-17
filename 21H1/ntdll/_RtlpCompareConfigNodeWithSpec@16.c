/*
 * XREFs of _RtlpCompareConfigNodeWithSpec@16 @ 0x4B3538E2
 * Callers:
 *     _LdrpGetMUILangConfigNode@16 @ 0x4B351644 (_LdrpGetMUILangConfigNode@16.c)
 * Callees:
 *     _RtlpMuiRegGetLanginfoTypeNSpec@12 @ 0x4B3549CC (_RtlpMuiRegGetLanginfoTypeNSpec@12.c)
 */

char __fastcall RtlpCompareConfigNodeWithSpec(int a1, int a2, __int16 a3, __int16 *a4)
{
  char v5; // bl
  __int16 v6; // cx
  int v7; // eax
  __int16 v10; // [esp+14h] [ebp-4h] BYREF

  v5 = 0;
  if ( !a1 || !a4 )
    return 0;
  v6 = *a4;
  v7 = (unsigned __int16)a4[1] >> 14;
  v10 = *a4;
  if ( v7 == 2 )
  {
    if ( v6 >= 0
      && v6 < (int)*(unsigned __int16 *)(*(_DWORD *)(a1 + 20) + 6)
      && (int)RtlpMuiRegGetLanginfoTypeNSpec(&v10) >= 0 )
    {
      v7 = 2;
      v6 = v10;
      goto LABEL_8;
    }
    return 0;
  }
LABEL_8:
  if ( a2 == v7 && a3 == v6 )
    return 1;
  return v5;
}
