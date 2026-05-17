/*
 * XREFs of _LdrpConvertLangFallbackListToMultiSz@28 @ 0x4B2D3319
 * Callers:
 *     _RtlGetUserPreferredUILanguages@20 @ 0x4B2AA700 (_RtlGetUserPreferredUILanguages@20.c)
 *     _RtlGetThreadPreferredUILanguages@16 @ 0x4B2D2D80 (_RtlGetThreadPreferredUILanguages@16.c)
 *     _RtlGetProcessPreferredUILanguages@16 @ 0x4B352330 (_RtlGetProcessPreferredUILanguages@16.c)
 *     _RtlGetSystemPreferredUILanguages@20 @ 0x4B352400 (_RtlGetSystemPreferredUILanguages@20.c)
 * Callees:
 *     _RtlpMuiRegGetInstalledLangInfoIndex@16 @ 0x4B2AB64D (_RtlpMuiRegGetInstalledLangInfoIndex@16.c)
 *     _RtlpMuiRegTryToAppendLanguageToMuiszFromLangList@24 @ 0x4B2D3477 (_RtlpMuiRegTryToAppendLanguageToMuiszFromLangList@24.c)
 */

unsigned int __fastcall LdrpConvertLangFallbackListToMultiSz(
        int a1,
        int a2,
        _DWORD *a3,
        unsigned int *a4,
        char a5,
        char a6,
        _DWORD *a7)
{
  unsigned int v7; // ebx
  unsigned int *v8; // edx
  char v10; // cl
  int v11; // edi
  int appended; // eax
  unsigned int v13; // esi
  unsigned int v14; // ebx
  unsigned int result; // eax
  int v16; // edx
  int v17; // eax
  char v18; // [esp+Fh] [ebp-39h]
  __int16 v19; // [esp+10h] [ebp-38h] BYREF
  int v20; // [esp+14h] [ebp-34h]
  unsigned int v21; // [esp+18h] [ebp-30h]
  int v22; // [esp+1Ch] [ebp-2Ch]
  unsigned int v23; // [esp+20h] [ebp-28h] BYREF
  int v24; // [esp+24h] [ebp-24h]
  int v25; // [esp+28h] [ebp-20h]
  _BYTE v26[28]; // [esp+2Ch] [ebp-1Ch] BYREF

  v7 = 0;
  v20 = a2;
  v8 = a4;
  v23 = 0;
  v10 = 0;
  v25 = a1;
  v18 = 0;
  if ( !a4 )
    return -1073741811;
  if ( !a1 )
  {
    if ( a3 )
    {
      if ( *a4 < 2 )
        v7 = -1073741789;
      else
        *a3 = 0;
    }
    *a4 = 2;
    return v7;
  }
  v21 = *a4;
  v11 = 0;
  v22 = 0;
  if ( !*(_WORD *)(a1 + 4) )
    goto LABEL_9;
  do
  {
    if ( a6 )
    {
      v16 = *(_DWORD *)(a1 + 16);
      v17 = 6 * (unsigned __int16)v7;
      if ( *(_WORD *)(v17 + v16) != 2 )
        goto LABEL_7;
      v24 = *(unsigned __int16 *)(v17 + v16 + 4);
      if ( RtlpMuiRegGetInstalledLangInfoIndex(*(_DWORD *)(v20 + 20), 2, v24, &v19) < 0 )
        goto LABEL_7;
      if ( a5 < 0 )
      {
        qmemcpy(v26, (const void *)(*(_DWORD *)(*(_DWORD *)(v20 + 20) + 12) + 28 * (__int16)v24), sizeof(v26));
        a1 = v25;
        v11 = v22;
        a6 = (v26[0] & 6) == 0 ? a6 : 0;
      }
    }
    appended = RtlpMuiRegTryToAppendLanguageToMuiszFromLangList(
                 *(_DWORD *)(a1 + 16) + 6 * (unsigned __int16)v7,
                 &v23,
                 a3,
                 v21);
    if ( appended >= 0 )
      goto LABEL_6;
    if ( appended == -1073741789 )
    {
      v18 = 1;
LABEL_6:
      v22 = ++v11;
    }
LABEL_7:
    LOWORD(v7) = v7 + 1;
  }
  while ( (unsigned __int16)v7 < *(_WORD *)(a1 + 4) );
  v7 = v23;
  v8 = a4;
  v10 = v18;
LABEL_9:
  v13 = v21;
  if ( a3 )
  {
    if ( v7 >= v21 )
    {
      v10 = 1;
    }
    else
    {
      *((_WORD *)a3 + v7) = 0;
      v8 = a4;
    }
  }
  v14 = v7 + 1;
  if ( !v11 )
  {
    if ( a3 )
    {
      if ( v14 >= v13 )
        v10 = 1;
      else
        *((_WORD *)a3 + v14) = 0;
    }
    ++v14;
  }
  *v8 = v14;
  result = v10 != 0 ? 0xC0000023 : 0;
  if ( a7 )
    *a7 = v11;
  return result;
}
