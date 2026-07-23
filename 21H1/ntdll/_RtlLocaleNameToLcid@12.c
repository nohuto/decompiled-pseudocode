/*
 * XREFs of _RtlLocaleNameToLcid@12 @ 0x4B2D5860
 * Callers:
 *     _LdrpGetParentLangId@8 @ 0x4B2A8888 (_LdrpGetParentLangId@8.c)
 *     _RtlLoadString@32 @ 0x4B2BA030 (_RtlLoadString@32.c)
 *     _RtlCultureNameToLCID@8 @ 0x4B2D56B0 (_RtlCultureNameToLCID@8.c)
 * Callees:
 *     _RtlpIsCustomLocale@4 @ 0x4B2D92D8 (_RtlpIsCustomLocale@4.c)
 *     _RtlpLoadNlsData@0 @ 0x4B2EA1FB (_RtlpLoadNlsData@0.c)
 *     _RtlpGetCustomCultureData@16 @ 0x4B3631F6 (_RtlpGetCustomCultureData@16.c)
 *     _RtlpMatchUILanguage@4 @ 0x4B36349D (_RtlpMatchUILanguage@4.c)
 *     _RtlpMatchUserLanguage@4 @ 0x4B363547 (_RtlpMatchUserLanguage@4.c)
 */

NTSTATUS __cdecl RtlLocaleNameToLcid(PCWSTR LocaleName, PLCID lcid, ULONG Flags)
{
  PCWSTR v3; // edi
  PLCID v4; // esi
  int v5; // edx
  int v6; // eax
  int v7; // ebx
  int v8; // ecx
  int v9; // esi
  int v10; // eax
  unsigned __int16 v11; // dx
  unsigned __int16 *v12; // esi
  unsigned __int16 v13; // ax
  int v14; // edx
  int v16; // esi
  int v17; // [esp+10h] [ebp-18h]
  int v18; // [esp+14h] [ebp-14h]
  int v19; // [esp+18h] [ebp-10h]
  int v20; // [esp+1Ch] [ebp-Ch]
  int i; // [esp+24h] [ebp-4h]

  v3 = LocaleName;
  if ( !LocaleName )
    return -1073741585;
  v4 = lcid;
  if ( !lcid )
    return -1073741584;
  if ( (Flags & 0xFFFFFFFC) != 0 )
    return -1073741583;
  v5 = pTblPtrs;
  v19 = pTblPtrs;
  if ( !pTblPtrs )
  {
    if ( !(unsigned __int8)RtlpLoadNlsData() )
      return -1073741823;
    v5 = pTblPtrs;
    v19 = pTblPtrs;
  }
  v6 = 0;
  v7 = *(unsigned __int16 *)(v5 + 2) - 1;
  v18 = 0;
  if ( v7 < 0 )
  {
LABEL_33:
    if ( !(unsigned __int8)RtlpIsCustomLocale(v3) )
      return -1073741585;
    if ( (Flags & 1) != 0 && (unsigned __int8)RtlpMatchUILanguage(v3) )
    {
      *v4 = 5120;
      return 0;
    }
    if ( (unsigned __int8)RtlpMatchUserLanguage(v3) )
    {
      *v4 = 3072;
      return 0;
    }
    if ( (Flags & 2) != 0 || (int)RtlpGetCustomCultureData(0, 0) >= 0 )
    {
      *v4 = 4096;
      return 0;
    }
    return -1073741823;
  }
  v8 = *(_DWORD *)(v5 + 16);
  v9 = *(_DWORD *)(v5 + 20);
  v20 = v8;
  for ( i = v9; ; v9 = i )
  {
    v10 = (v7 + v6) / 2;
    v17 = v10;
    v11 = *LocaleName;
    v12 = (unsigned __int16 *)(v9 + 2 * *(unsigned __int16 *)(v8 + 8 * v10) + 2);
    if ( !*LocaleName )
      break;
    while ( 1 )
    {
      v13 = *v12;
      if ( !*v12 )
      {
LABEL_19:
        v10 = v17;
        goto LABEL_20;
      }
      if ( (unsigned __int16)(v11 - 65) <= 0x19u )
        v11 |= 0x20u;
      if ( (unsigned __int16)(v13 - 65) <= 0x19u )
        v13 |= 0x20u;
      if ( v11 == 95 )
        v11 = 45;
      if ( v13 == 95 )
        v13 = 45;
      if ( v11 != v13 )
        break;
      v11 = v3[1];
      ++v3;
      ++v12;
      if ( !v11 )
        goto LABEL_19;
    }
    if ( v11 - v13 >= 0 )
    {
LABEL_27:
      v6 = v17 + 1;
      v18 = v17 + 1;
      goto LABEL_30;
    }
    v10 = v17;
LABEL_29:
    v7 = v10 - 1;
    v6 = v18;
LABEL_30:
    v3 = LocaleName;
    if ( v6 > v7 )
      goto LABEL_32;
    v8 = v20;
  }
LABEL_20:
  if ( *v3 )
    goto LABEL_27;
  if ( *v12 )
    goto LABEL_29;
  if ( v10 < 0 )
  {
    v3 = LocaleName;
LABEL_32:
    v4 = lcid;
    goto LABEL_33;
  }
  if ( (Flags & 2) != 0 )
  {
    v14 = v20;
LABEL_25:
    *lcid = *(_DWORD *)(v14 + 8 * v10 + 4) & 0x7FFFFFFF;
    return 0;
  }
  v16 = v19;
  _mm_lfence();
  v14 = *(_DWORD *)(v16 + 16);
  if ( (*(_BYTE *)(*(unsigned __int16 *)(v16 + 28) * *(unsigned __int16 *)(v14 + 8 * v10 + 2) + *(_DWORD *)(v16 + 8) + 24) & 1) != 0 )
  {
    v10 = v17;
    goto LABEL_25;
  }
  return -1073741585;
}
