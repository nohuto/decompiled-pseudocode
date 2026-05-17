/*
 * XREFs of _RtlpGetDefaultLanguageBaseOrParent@28 @ 0x4B354076
 * Callers:
 *     _RtlpGetCompleteLanguageFallback@20 @ 0x4B353F7A (_RtlpGetCompleteLanguageFallback@20.c)
 *     _RtlpSetInstallLanguage@8 @ 0x4B354A70 (_RtlpSetInstallLanguage@8.c)
 * Callees:
 *     _RtlLCIDToCultureName@8 @ 0x4B2D4F10 (_RtlLCIDToCultureName@8.c)
 *     _RtlpMuiRegGetInstalledLanguageInfoByIndex@24 @ 0x4B36B74B (_RtlpMuiRegGetInstalledLanguageInfoByIndex@24.c)
 *     _RtlpMuiRegGetString@16 @ 0x4B36B86B (_RtlpMuiRegGetString@16.c)
 */

int __fastcall RtlpGetDefaultLanguageBaseOrParent(
        int a1,
        _WORD *a2,
        _DWORD *a3,
        const unsigned __int16 *a4,
        unsigned int a5,
        _DWORD *a6,
        _DWORD *a7)
{
  unsigned __int16 *v8; // ecx
  int v9; // eax
  char v10; // dl
  int v11; // eax
  int v12; // eax
  int v13; // ebx
  unsigned int v14; // ecx
  unsigned __int16 v16; // [esp+10h] [ebp-24h] BYREF
  __int16 v17; // [esp+12h] [ebp-22h]
  const unsigned __int16 *v18; // [esp+14h] [ebp-20h]
  _BYTE v19[4]; // [esp+18h] [ebp-1Ch] BYREF
  int v20; // [esp+1Ch] [ebp-18h] BYREF
  _WORD *v21; // [esp+20h] [ebp-14h]
  int v22; // [esp+24h] [ebp-10h]
  int v23; // [esp+28h] [ebp-Ch]
  int v24; // [esp+2Ch] [ebp-8h]
  char v25; // [esp+33h] [ebp-1h]

  v23 = a1;
  if ( !a1 || !a2 || !a4 || (*a2 & 6) == 0 )
    return -1073741811;
  if ( a3 )
    *a3 = 0;
  v8 = a2 + 6;
  v9 = 0;
  v21 = a2 + 6;
  v10 = 0;
  v22 = 0;
  v25 = 0;
  while ( v9 < 4 )
  {
    v24 = *v8;
    v11 = ((a2[4] >> (2 * v9)) & 3) - 1;
    if ( !v11 )
    {
      if ( (*(_BYTE *)a2 & 4) != 0 )
        goto LABEL_16;
      v18 = a4;
      if ( 2 * (unsigned int)(unsigned __int16)a5 > 0xFFFF )
      {
        v17 = -1;
        goto LABEL_16;
      }
      v17 = 2 * a5;
      if ( RtlLCIDToCultureName((__int16)v24, &v16) )
        goto LABEL_26;
      goto LABEL_15;
    }
    v12 = v11 - 1;
    if ( !v12 )
    {
      if ( (int)RtlpMuiRegGetInstalledLanguageInfoByIndex(v19, a4, a5, &v20) >= 0 && (v20 & 0x1000) == 0 )
      {
        if ( a3 )
          *a3 = *(_DWORD *)(*(_DWORD *)(v23 + 20) + 12) + 28 * (__int16)v24;
LABEL_26:
        v10 = 1;
        v25 = 1;
        goto LABEL_16;
      }
      goto LABEL_15;
    }
    if ( v12 != 1 )
      goto LABEL_26;
    if ( (*(_BYTE *)a2 & 4) == 0 )
    {
      if ( (int)RtlpMuiRegGetString(a4, a5) >= 0 && (*a2 & 0x1000) == 0 )
        goto LABEL_26;
LABEL_15:
      v10 = v25;
    }
LABEL_16:
    v9 = v22 + 1;
    v8 = v21 + 1;
    ++v22;
    ++v21;
    if ( v10 )
      break;
  }
  v13 = 0;
  if ( !v25 )
    return -1073741275;
  v14 = wcslen(a4);
  if ( v14 >= a5 )
    return -1073741789;
  if ( a6 )
    *a6 = &a4[v14];
  if ( a7 )
    *a7 = a5 - v14;
  return v13;
}
