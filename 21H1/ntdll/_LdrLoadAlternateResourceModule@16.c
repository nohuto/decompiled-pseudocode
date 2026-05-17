/*
 * XREFs of _LdrLoadAlternateResourceModule@16 @ 0x4B2AA250
 * Callers:
 *     <none>
 * Callees:
 *     _LdrpCompareServiceChecksum@8 @ 0x4B2AA440 (_LdrpCompareServiceChecksum@8.c)
 *     _LdrpGetRcConfig@16 @ 0x4B2B8818 (_LdrpGetRcConfig@16.c)
 *     _LdrpSetThreadPreferredLangList@0 @ 0x4B2BA5F0 (_LdrpSetThreadPreferredLangList@0.c)
 *     _GetLCIDFromLangListNodeWithLICCheck@20 @ 0x4B2BA710 (_GetLCIDFromLangListNodeWithLICCheck@20.c)
 *     _LdrLoadAlternateResourceModuleEx@20 @ 0x4B2BBDA0 (_LdrLoadAlternateResourceModuleEx@20.c)
 *     _RtlCultureNameToLCID@8 @ 0x4B2D56B0 (_RtlCultureNameToLCID@8.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     _RtlInitUnicodeString@8 @ 0x4B2F5020 (_RtlInitUnicodeString@8.c)
 *     _memset @ 0x4B2F8F30 (_memset.c)
 */

int __stdcall LdrLoadAlternateResourceModule(int a1, _DWORD *a2, int *a3, int a4)
{
  int v4; // edi
  int AlternateResourceModule; // ebx
  _DWORD *v6; // ecx
  int v7; // edx
  int v8; // eax
  __int16 v9; // si
  int v10; // eax
  unsigned int v11; // eax
  int *v12; // esi
  int RcConfig; // eax
  int v15; // eax
  char v16; // al
  bool v17; // zf
  char v18; // [esp+13h] [ebp-C5h] BYREF
  _DWORD *v19; // [esp+14h] [ebp-C4h]
  int v20; // [esp+18h] [ebp-C0h]
  int v21; // [esp+1Ch] [ebp-BCh]
  int v22; // [esp+20h] [ebp-B8h] BYREF
  int v23; // [esp+24h] [ebp-B4h]
  unsigned int v24; // [esp+28h] [ebp-B0h]
  unsigned int v25; // [esp+2Ch] [ebp-ACh]
  int v26; // [esp+30h] [ebp-A8h]
  int v27; // [esp+34h] [ebp-A4h]
  int *v28; // [esp+38h] [ebp-A0h]
  __int16 v29; // [esp+3Ch] [ebp-9Ch] BYREF
  int v30; // [esp+40h] [ebp-98h]
  int v31; // [esp+44h] [ebp-94h]
  UNICODE_STRING DestinationString; // [esp+48h] [ebp-90h] BYREF
  _WORD v33[66]; // [esp+50h] [ebp-88h] BYREF

  v23 = a1;
  v19 = a2;
  v28 = a3;
  v20 = 0;
  memset(v33, 0, 0x80u);
  v24 = 0;
  v4 = 0;
  v25 = 0;
  v26 = 0;
  v27 = 0;
  AlternateResourceModule = -1073020927;
  if ( !a1 )
    return -1073741811;
  v6 = v19;
  if ( !v19 )
    return -1073741811;
  v18 = 0;
  v21 = a4 & 0x1000000;
  v7 = 0;
  v31 = 61166;
LABEL_4:
  while ( 2 )
  {
    v8 = v21;
    while ( 1 )
    {
      while ( 1 )
      {
        v30 = v7;
        if ( v8 )
          break;
        v20 = v7 + 1;
        if ( v7 )
        {
          if ( v7 != 1 )
            goto LABEL_15;
          RcConfig = LdrpGetRcConfig(1, 1);
          v6 = v19;
          v4 = RcConfig;
          v7 = v20;
          v8 = v21;
          if ( v4 && *(_DWORD *)v4 == -20054323 && (*(_BYTE *)(v4 + 24) & 2) != 0 )
          {
            v15 = *(_DWORD *)(v4 + 124);
            if ( !v15 )
              goto LABEL_4;
            RtlInitUnicodeString(&DestinationString, (PCWSTR)(v4 + v15));
            v16 = RtlCultureNameToLCID(&DestinationString, &v29);
            v6 = v19;
            v17 = v16 == 0;
            v7 = v20;
            v8 = v21;
            if ( !v17 )
            {
              v9 = v29;
              LOWORD(v22) = v29;
              if ( (a4 & 0x80u) == 0 && (*(_DWORD *)(v4 + 20) & 0x100) != 0 )
              {
                GetLCIDFromLangListNodeWithLICCheck(0, &v22, &v18);
                v6 = v19;
                v7 = v20;
                v8 = v21;
                if ( !v18 )
                {
                  v9 = v22;
                  goto LABEL_8;
                }
                v9 = -4370;
                goto LABEL_7;
              }
              v7 = v20;
LABEL_27:
              v8 = v21;
              goto LABEL_8;
            }
          }
        }
        else
        {
          v9 = 0;
          LOWORD(v22) = 0;
          if ( (unsigned __int8)LdrpSetThreadPreferredLangList() )
          {
            if ( v25 < *((unsigned __int16 *)NtCurrentTeb()->MergedPrefLanguages + 2) )
              GetLCIDFromLangListNodeWithLICCheck(v25, &v22, &v18);
            v9 = v22;
          }
          v6 = v19;
          v7 = v20;
          v8 = v21;
          if ( v9 )
          {
            if ( (a4 & 0x80u) == 0 )
            {
              if ( v18 )
              {
                if ( (v4 || (v4 = LdrpGetRcConfig(0, 1)) != 0)
                  && *(_DWORD *)v4 == -20054323
                  && (*(_DWORD *)(v4 + 20) & 0x100) != 0 )
                {
                  v9 = -4370;
                  LOWORD(v22) = -4370;
                }
              }
            }
            v7 = v30;
            ++v25;
            v6 = v19;
            v20 = v30;
            goto LABEL_27;
          }
        }
      }
      v9 = -3346;
LABEL_7:
      LOWORD(v22) = v9;
LABEL_8:
      if ( v9 != (_WORD)v31 )
      {
        v10 = 0;
        if ( v24 )
        {
          while ( v33[v10] != v9 )
          {
            if ( ++v10 >= v24 )
              goto LABEL_10;
          }
          goto LABEL_4;
        }
LABEL_10:
        v11 = v24;
        if ( v24 >= 0x40 )
          goto LABEL_15;
        v33[v24] = v9;
        v12 = v28;
        v24 = v11 + 1;
        AlternateResourceModule = LdrLoadAlternateResourceModuleEx(v23, v22, v6, v28, a4);
        v8 = v21;
        if ( v21 )
          goto LABEL_15;
        v6 = v19;
        v7 = v20;
        if ( AlternateResourceModule >= 0 )
          break;
      }
    }
    if ( (a4 & 0x80u) != 0 && !(unsigned __int8)LdrpCompareServiceChecksum(v23, *v19) )
    {
      v6 = v19;
      if ( !v26 )
      {
        v26 = *v19;
        if ( v12 )
          v27 = *v12;
        else
          v27 = 0;
      }
      v7 = v20;
      AlternateResourceModule = -1073020927;
      continue;
    }
    break;
  }
LABEL_15:
  if ( AlternateResourceModule < 0 && (a4 & 0x80u) != 0 && v26 )
  {
    *v19 = v26;
    if ( v28 )
      *v28 = v27;
    return 0;
  }
  return AlternateResourceModule;
}
