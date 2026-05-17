/*
 * XREFs of _RtlpMuiRegValidateConfigNode@8 @ 0x4B36BE8D
 * Callers:
 *     _RtlpPopulateLanguageConfigList@12 @ 0x4B2AD962 (_RtlpPopulateLanguageConfigList@12.c)
 * Callees:
 *     _RtlpMuiRegGetInstalledLanguageIndex@16 @ 0x4B2D4EAF (_RtlpMuiRegGetInstalledLanguageIndex@16.c)
 *     _RtlpMuiRegConfigMatchesInstalled@28 @ 0x4B36AEFF (_RtlpMuiRegConfigMatchesInstalled@28.c)
 */

int __fastcall RtlpMuiRegValidateConfigNode(int a1, int a2)
{
  int v3; // edx
  int InstalledLanguageIndex; // esi
  _WORD *v5; // edi
  __int16 v6; // ax
  int v7; // ecx
  int v8; // ecx
  unsigned __int16 v9; // ax
  __int16 v10; // ax
  __int16 v12; // [esp+Ch] [ebp-2Ch]
  int v13; // [esp+10h] [ebp-28h]
  int v14; // [esp+14h] [ebp-24h]
  int v15; // [esp+18h] [ebp-20h]
  int v16; // [esp+1Ch] [ebp-1Ch]
  int v17; // [esp+20h] [ebp-18h]
  _WORD *v18; // [esp+24h] [ebp-14h] BYREF
  int v19; // [esp+28h] [ebp-10h]
  int v20; // [esp+2Ch] [ebp-Ch]
  __int16 v21; // [esp+30h] [ebp-8h] BYREF
  __int16 v22; // [esp+34h] [ebp-4h] BYREF

  v19 = a1;
  v22 = -1;
  InstalledLanguageIndex = RtlpMuiRegGetInstalledLanguageIndex(
                             a1,
                             *(unsigned __int16 *)(a2 + 2) >> 14,
                             *(_WORD *)a2,
                             &v21);
  if ( InstalledLanguageIndex >= 0 )
  {
    v5 = (_WORD *)(*(_DWORD *)(*(_DWORD *)(v19 + 20) + 12) + 28 * v21);
    if ( (*v5 & 0x1000) != 0 )
    {
      return -1073741772;
    }
    else
    {
      v6 = 0;
      LOBYTE(v7) = 0;
      v15 = 0;
      v14 = 0;
      while ( 1 )
      {
        LOWORD(v3) = *(_WORD *)(a2 + 2) >> v7;
        LOBYTE(v3) = v3 & 3;
        v21 = v3;
        if ( !(_BYTE)v3 )
          break;
        if ( !v5 )
          return -1073741772;
        v20 = 0;
        LOBYTE(v8) = 0;
        v16 = v6;
        v17 = 0;
        v12 = *(_WORD *)(a2 + 2 * v6 + 6);
        while ( 1 )
        {
          v9 = v5[4];
          v18 = 0;
          LOBYTE(v13) = (v9 >> v8) & 3;
          if ( RtlpMuiRegConfigMatchesInstalled(v19, v3, v12, v13, v5[(__int16)v20 + 6], (int *)&v18, &v22) )
          {
            if ( (!v18 || (*v18 & 0x1000) == 0) && ((*(_BYTE *)v5 & 4) == 0 || v18) )
              break;
          }
          ++v20;
          v8 = v17 + 2;
          v17 = v8;
          if ( (__int16)v8 >= 8 )
            return -1073741772;
          LOWORD(v3) = v21;
        }
        v5 = v18;
        if ( v22 != -1 )
        {
          HIWORD(v3) = 0;
          v10 = v22;
          *(_WORD *)(a2 + 2) = (2 << (2 * v16)) | *(_WORD *)(a2 + 2) & ~(3 << (2 * v16));
          *(_WORD *)(a2 + 2 * v16 + 6) = v10;
        }
        v7 = v14 + 2;
        v6 = v15 + 1;
        v14 = v7;
        ++v15;
        if ( (__int16)v7 >= 6 )
          return InstalledLanguageIndex;
      }
      if ( !v6 )
        return -1073741823;
    }
  }
  return InstalledLanguageIndex;
}
