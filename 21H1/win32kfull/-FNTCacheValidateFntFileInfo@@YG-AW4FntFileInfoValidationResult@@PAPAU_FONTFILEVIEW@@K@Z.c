/*
 * XREFs of ?FNTCacheValidateFntFileInfo@@YG?AW4FntFileInfoValidationResult@@PAPAU_FONTFILEVIEW@@K@Z @ 0x1E85AE
 * Callers:
 *     UmfdLoadFontFileView @ 0xDDE4C (UmfdLoadFontFileView.c)
 * Callees:
 *     _Win32FileInfo@12 @ 0xDEF22 (_Win32FileInfo@12.c)
 */

int __fastcall FNTCacheValidateFntFileInfo(int a1, unsigned int a2)
{
  int v2; // esi
  unsigned int v3; // edi
  int v5; // ecx
  const WCHAR *v6; // ecx
  _DWORD *v7; // ecx
  int v8; // edx
  int v9; // eax
  int v11[2]; // [esp+10h] [ebp-18h] BYREF
  int v12; // [esp+18h] [ebp-10h] BYREF
  int v13; // [esp+1Ch] [ebp-Ch]
  unsigned int v14; // [esp+24h] [ebp-4h]

  v2 = 0;
  v3 = 0;
  v14 = a2;
  if ( a2 )
  {
    while ( 1 )
    {
      v5 = *(_DWORD *)(a1 + 4 * v3);
      v11[0] = 0;
      v11[1] = 0;
      v12 = 0;
      v6 = *(const WCHAR **)(v5 + 48);
      v13 = 0;
      if ( !Win32FileInfo(v6, &v12, v11) )
        break;
      v7 = *(_DWORD **)(a1 + 4 * v3);
      v8 = v11[0];
      if ( *v7 != v12 || v7[1] != v13 || v7[4] != v11[0] )
        v2 = 1;
      *v7 = v12;
      v7[1] = v13;
      v9 = *(_DWORD *)(a1 + 4 * v3++);
      *(_DWORD *)(v9 + 16) = v8;
      if ( v3 >= v14 )
        goto LABEL_10;
    }
    v2 = 2;
LABEL_10:
    if ( v2 == 1 && dword_274068 )
      *(_DWORD *)(dword_274068 + 12) |= 2u;
  }
  return v2;
}
