/*
 * XREFs of _LdrpGetMUILangConfigNode@16 @ 0x4B351644
 * Callers:
 *     _RtlpTraverseParents@24 @ 0x4B2AA078 (_RtlpTraverseParents@24.c)
 * Callees:
 *     _RtlpCompareConfigNodeWithSpec@16 @ 0x4B3538E2 (_RtlpCompareConfigNodeWithSpec@16.c)
 *     _RtlpMuiRegGetLanginfoTypeNSpec@12 @ 0x4B3549CC (_RtlpMuiRegGetLanginfoTypeNSpec@12.c)
 */

int __fastcall LdrpGetMUILangConfigNode(int a1, int a2, int a3, _WORD *a4)
{
  int v5; // edi
  __int16 v6; // si
  int v7; // ecx
  int v8; // eax
  int v9; // [esp+4h] [ebp-14h]
  int v10; // [esp+8h] [ebp-10h]
  _DWORD v11[2]; // [esp+10h] [ebp-8h] BYREF

  v11[1] = a2;
  if ( !a2 || !a3 || !a4 )
    return -1073741811;
  *a4 = -1;
  if ( (int)RtlpMuiRegGetLanginfoTypeNSpec(v11) < 0 )
    return -1073741595;
  v5 = 0;
  v10 = *(unsigned __int16 *)(a3 + 4);
  v6 = 0;
  if ( !*(_WORD *)(a3 + 4) )
    return -1073741811;
  v7 = *(_DWORD *)(a3 + 8);
  v8 = 0;
  v9 = v7;
  while ( !(unsigned __int8)RtlpCompareConfigNodeWithSpec(v11[0], v7 + 12 * v8) )
  {
    v7 = v9;
    v8 = ++v6;
    if ( v6 >= v10 )
      return -1073741811;
  }
  *a4 = v6;
  if ( v6 == -1 )
    return -1073741811;
  return v5;
}
