/*
 * XREFs of _RtlpMuiRegConfigMatchesInstalled@28 @ 0x4B36AEFF
 * Callers:
 *     _RtlpMuiRegValidateConfigNode@8 @ 0x4B36BE8D (_RtlpMuiRegValidateConfigNode@8.c)
 * Callees:
 *     _MuiRegAllocArray @ 0x4B2AD7D8 (_MuiRegAllocArray.c)
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _RtlpMuiRegGetInstalledLanguageIndex@16 @ 0x4B2D4EAF (_RtlpMuiRegGetInstalledLanguageIndex@16.c)
 *     _RtlLCIDToCultureName@8 @ 0x4B2D4F10 (_RtlLCIDToCultureName@8.c)
 *     _RtlCultureNameToLCID@8 @ 0x4B2D56B0 (_RtlCultureNameToLCID@8.c)
 *     _RtlInitUnicodeString@8 @ 0x4B2F5020 (_RtlInitUnicodeString@8.c)
 *     __wcsicmp @ 0x4B2F7990 (__wcsicmp.c)
 *     _RtlpMuiRegLangInfoMatchesSpec@16 @ 0x4B36B990 (_RtlpMuiRegLangInfoMatchesSpec@16.c)
 */

char __fastcall RtlpMuiRegConfigMatchesInstalled(int a1, int a2, __int16 a3, int a4, __int16 a5, int *a6, __int16 *a7)
{
  wchar_t *v7; // esi
  int v9; // eax
  __int16 v10; // di
  char v11; // bl
  int v12; // edx
  int v13; // edi
  int v14; // ecx
  int v15; // ecx
  int v16; // edx
  const WCHAR *v17; // eax
  wchar_t *v18; // eax
  int v19; // edx
  const wchar_t *v20; // eax
  __int16 v22; // [esp-8h] [ebp-34h]
  _UNICODE_STRING DestinationString; // [esp+Ch] [ebp-20h] BYREF
  int v24; // [esp+14h] [ebp-18h]
  int v25; // [esp+18h] [ebp-14h]
  DWORD Lcid; // [esp+1Ch] [ebp-10h] BYREF
  DWORD v27; // [esp+20h] [ebp-Ch]
  int v28; // [esp+24h] [ebp-8h]
  wchar_t *v29; // [esp+28h] [ebp-4h] BYREF

  v7 = 0;
  v28 = a2;
  v25 = 0;
  v9 = 0;
  v24 = a1;
  v29 = 0;
  v27 = 0;
  v10 = a3;
  if ( (_BYTE)a2 == (_BYTE)a4 )
  {
    v11 = a3 == a5;
    goto LABEL_14;
  }
  if ( !(_BYTE)a2 || !(_BYTE)a4 )
    goto LABEL_54;
  if ( a7 )
    *a7 = -1;
  if ( (_BYTE)a2 == 2 )
  {
    if ( a1 )
    {
      if ( a3 >= 0 )
      {
        v12 = *(_DWORD *)(a1 + 20);
        if ( a3 < (int)*(unsigned __int16 *)(v12 + 6) )
        {
          v25 = *(_DWORD *)(v12 + 12) + 28 * a3;
          v11 = RtlpMuiRegLangInfoMatchesSpec(a4, a5);
LABEL_12:
          LOBYTE(a2) = v28;
LABEL_13:
          v9 = v27;
          goto LABEL_14;
        }
      }
    }
    goto LABEL_53;
  }
  if ( (_BYTE)a4 != 2 )
  {
    if ( (_BYTE)a2 == 1 )
    {
      if ( (_BYTE)a4 == 3 )
      {
        v16 = *(_DWORD *)(a1 + 24);
        if ( v16 && a5 >= 0 && a5 < (int)*(unsigned __int16 *)(v16 + 6) )
          v17 = (const WCHAR *)(*(_DWORD *)(v16 + 16) + 2 * *(__int16 *)(*(_DWORD *)(v16 + 12) + 2 * a5));
        else
          v17 = 0;
        if ( v17 )
        {
          RtlInitUnicodeString(&DestinationString, v17);
          if ( RtlCultureNameToLCID(&DestinationString, &Lcid) )
          {
            v10 = a3;
            v11 = a3 == (__int16)Lcid;
            goto LABEL_12;
          }
        }
      }
    }
    else if ( (_BYTE)a2 == 3 && (_BYTE)a4 == 1 )
    {
      v18 = (wchar_t *)MuiRegAllocArray(a4, 0x55u);
      v7 = v18;
      if ( v18 )
      {
        DestinationString.Buffer = v18;
        *(_DWORD *)&DestinationString.Length = 11141120;
        if ( RtlLCIDToCultureName(a5, &DestinationString) )
        {
          v19 = *(_DWORD *)(a1 + 24);
          v10 = a3;
          if ( v19 && a3 >= 0 && a3 < (int)*(unsigned __int16 *)(v19 + 6) )
            v20 = (const wchar_t *)(*(_DWORD *)(v19 + 16) + 2 * *(__int16 *)(*(_DWORD *)(v19 + 12) + 2 * a3));
          else
            v20 = 0;
          if ( v20 && !_wcsicmp(DestinationString.Buffer, v20) )
          {
            v11 = 1;
            goto LABEL_55;
          }
        }
      }
LABEL_54:
      v11 = 0;
LABEL_55:
      if ( v7 )
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v7);
      goto LABEL_12;
    }
LABEL_53:
    v7 = v29;
    goto LABEL_54;
  }
  if ( !a1 )
    goto LABEL_53;
  if ( a5 < 0 )
    goto LABEL_53;
  v15 = *(_DWORD *)(a1 + 20);
  Lcid = a5;
  if ( a5 >= (int)*(unsigned __int16 *)(v15 + 6) )
    goto LABEL_53;
  v10 = a3;
  v27 = *(_DWORD *)(v15 + 12) + 28 * Lcid;
  v11 = RtlpMuiRegLangInfoMatchesSpec(a2, a3);
  v9 = v27;
  if ( v11 && v27 )
  {
    LOBYTE(a2) = v28;
    if ( a7 )
    {
      *a7 = a5;
      goto LABEL_13;
    }
  }
  else
  {
    LOBYTE(a2) = v28;
  }
LABEL_14:
  if ( a6 )
  {
    if ( !v11 )
    {
      *a6 = 0;
      return v11;
    }
    if ( v9 )
      goto LABEL_22;
    v9 = v25;
    if ( v25 )
      goto LABEL_22;
    *a6 = 0;
    v22 = v10;
    v13 = v24;
    if ( RtlpMuiRegGetInstalledLanguageIndex(v24, (unsigned __int8)a2, v22, (__int16 *)&v29) >= 0 && (__int16)v29 >= 0 )
    {
      v14 = *(_DWORD *)(v13 + 20);
      if ( (__int16)v29 < (int)*(unsigned __int16 *)(v14 + 6) )
      {
        v9 = *(_DWORD *)(v14 + 12) + 28 * (__int16)v29;
LABEL_22:
        *a6 = v9;
      }
    }
  }
  return v11;
}
