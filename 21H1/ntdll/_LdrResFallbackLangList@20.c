/*
 * XREFs of _LdrResFallbackLangList@20 @ 0x4B2BA2A0
 * Callers:
 *     _LdrpResSearchResourceMappedFile@36 @ 0x4B2BACC0 (_LdrpResSearchResourceMappedFile@36.c)
 *     _LdrpResSearchResourceHandle@32 @ 0x4B3434F8 (_LdrpResSearchResourceHandle@32.c)
 * Callees:
 *     _LdrpGetParentLangId@8 @ 0x4B2A8888 (_LdrpGetParentLangId@8.c)
 *     _RtlpResUltimateFallbackInfo@20 @ 0x4B2BA1A3 (_RtlpResUltimateFallbackInfo@20.c)
 *     _LdrpSetThreadPreferredLangList@0 @ 0x4B2BA5F0 (_LdrpSetThreadPreferredLangList@0.c)
 *     _GetLCIDFromLangListNodeWithLICCheck@20 @ 0x4B2BA710 (_GetLCIDFromLangListNodeWithLICCheck@20.c)
 *     _RtlGetCurrentServiceSessionId@0 @ 0x4B2C3BF0 (_RtlGetCurrentServiceSessionId@0.c)
 *     _RtlCultureNameToLCID@8 @ 0x4B2D56B0 (_RtlCultureNameToLCID@8.c)
 *     _NtQueryDefaultLocale@8 @ 0x4B2F2AB0 (_NtQueryDefaultLocale@8.c)
 *     _RtlInitUnicodeString@8 @ 0x4B2F5020 (_RtlInitUnicodeString@8.c)
 *     _LdrpTraceLoadMUIDll@8 @ 0x4B33FAF1 (_LdrpTraceLoadMUIDll@8.c)
 */

NTSTATUS __fastcall LdrResFallbackLangList(int a1, int a2, __int16 a3, int a4, unsigned __int16 *a5)
{
  _DWORD *SharedData; // eax
  int v6; // eax
  int v7; // eax
  int v8; // esi
  struct _TEB *v9; // eax
  int v10; // edi
  unsigned __int16 v11; // di
  unsigned int v12; // ecx
  unsigned int v13; // edx
  _WORD *v14; // eax
  int v15; // ecx
  int v16; // ecx
  _DWORD *v17; // eax
  int v18; // eax
  int v20; // eax
  int v21; // eax
  unsigned __int16 v22; // cx
  int LCIDFromLangListNodeWithLICCheck; // eax
  int v24; // eax
  char v25; // [esp+13h] [ebp-4Dh] BYREF
  unsigned __int16 v26; // [esp+14h] [ebp-4Ch] BYREF
  __int16 v27; // [esp+18h] [ebp-48h] BYREF
  int v28; // [esp+1Ch] [ebp-44h]
  NTSTATUS v29; // [esp+20h] [ebp-40h]
  int v30; // [esp+24h] [ebp-3Ch]
  unsigned int v31; // [esp+28h] [ebp-38h]
  DWORD DefaultLocaleId; // [esp+2Ch] [ebp-34h] BYREF
  int v33; // [esp+30h] [ebp-30h]
  int v34; // [esp+34h] [ebp-2Ch]
  PCWSTR SourceString; // [esp+38h] [ebp-28h] BYREF
  DWORD Lcid; // [esp+3Ch] [ebp-24h] BYREF
  int v37; // [esp+40h] [ebp-20h] BYREF
  DWORD v38; // [esp+44h] [ebp-1Ch] BYREF
  _DWORD v39[2]; // [esp+48h] [ebp-18h] BYREF
  _DWORD v40[2]; // [esp+50h] [ebp-10h] BYREF
  _UNICODE_STRING DestinationString; // [esp+58h] [ebp-8h] BYREF

  SharedData = NtCurrentPeb()->SharedData;
  v34 = a2;
  v33 = a1;
  v30 = 0;
  v39[0] = 3801144;
  v39[1] = L"LdrResFallbackLangList Enter";
  v40[0] = 3670070;
  v40[1] = L"LdrResFallbackLangList Exit";
  if ( SharedData && *SharedData )
    v6 = (int)NtCurrentPeb()->SharedData + 555;
  else
    v6 = 2147353477;
  if ( (*(_BYTE *)v6 & 1) != 0 )
  {
    if ( RtlGetCurrentServiceSessionId() )
      v21 = (int)NtCurrentPeb()->SharedData + 554;
    else
      v21 = 2147353476;
    LdrpTraceLoadMUIDll(v39, *(unsigned __int8 *)v21);
  }
  if ( !a5 )
  {
    v16 = -1073741811;
    v29 = -1073741811;
    goto LABEL_35;
  }
  v7 = 0;
  v8 = 0;
  *a5 = 0;
  *((_BYTE *)a5 + 516) = 0;
  v31 = 0;
  v29 = 0;
  v25 = 0;
  DefaultLocaleId = 0;
LABEL_6:
  v28 = v7;
  while ( 2 )
  {
    v9 = (struct _TEB *)v8;
    v10 = v8++;
    switch ( (unsigned int)v9 )
    {
      case 0u:
        LOWORD(v9) = a3;
        v30 = 1;
        goto LABEL_14;
      case 1u:
        if ( (a4 & 4) == 0 )
        {
          if ( (a3 & 0x3FF) != 0 )
          {
            v22 = v28;
            *((_BYTE *)a5 + 516) = 1;
            if ( LdrpGetParentLangId(v22, &v27) < 0 )
              goto LABEL_34;
            LOWORD(v28) = v27;
            LOWORD(v9) = v27;
            if ( v27 )
              v8 = v10;
            else
              v8 = -1;
          }
          else
          {
            LOWORD(v9) = -4370;
            v28 = 61166;
          }
          v30 = 2;
LABEL_15:
          if ( (_WORD)v9 != 0xEEEE )
          {
LABEL_16:
            v11 = *a5;
            v12 = 0;
            v13 = *a5;
            if ( !*a5 )
              goto LABEL_20;
            v14 = a5 + 2;
            while ( 1 )
            {
              v11 = *a5;
              if ( *v14 == (_WORD)v28 )
                break;
              ++v12;
              v14 += 4;
              if ( v12 >= v13 )
                goto LABEL_20;
            }
            if ( v12 >= v13 )
            {
LABEL_20:
              if ( v11 >= 0x40u )
                goto LABEL_34;
              v15 = v30;
              a5[4 * v13 + 2] = v28;
              *(_DWORD *)&a5[4 * (*a5)++ + 4] = v15;
            }
          }
          continue;
        }
        *((_BYTE *)a5 + 516) = 1;
LABEL_34:
        v16 = v29;
LABEL_35:
        v17 = NtCurrentPeb()->SharedData;
        if ( v17 && *v17 )
          v18 = (int)NtCurrentPeb()->SharedData + 555;
        else
          v18 = 2147353477;
        if ( (*(_BYTE *)v18 & 1) == 0 )
          return v16;
        if ( RtlGetCurrentServiceSessionId() )
          v24 = (int)NtCurrentPeb()->SharedData + 554;
        else
          v24 = 2147353476;
        LdrpTraceLoadMUIDll(v40, *(unsigned __int8 *)v24);
        return v29;
      case 2u:
        v26 = 0;
        if ( !(unsigned __int8)LdrpSetThreadPreferredLangList() )
          goto LABEL_24;
        if ( v31 >= *((unsigned __int16 *)NtCurrentTeb()->MergedPrefLanguages + 2) )
          goto LABEL_24;
        GetLCIDFromLangListNodeWithLICCheck(v31, &v26, &v25);
        LOWORD(v9) = v26;
        v28 = v26;
        if ( !v26 )
          goto LABEL_24;
        if ( v25 && (a4 & 0x100000) != 0 )
        {
          LOWORD(v28) = -4370;
          LOWORD(v9) = -4370;
        }
        ++v31;
        v8 = v10;
        v30 = 3;
        goto LABEL_15;
      case 3u:
        if ( !v33 || RtlpResUltimateFallbackInfo(v33, v34, &SourceString, &v37, a4) < 0 )
          goto LABEL_24;
        RtlInitUnicodeString(&DestinationString, SourceString);
        if ( RtlCultureNameToLCID(&DestinationString, &Lcid) )
        {
          LOWORD(v20) = Lcid;
          v28 = v20;
          v26 = Lcid;
          if ( (a4 & 0x100000) != 0 )
          {
            LCIDFromLangListNodeWithLICCheck = GetLCIDFromLangListNodeWithLICCheck(0, &v26, &v25);
            if ( v25 )
            {
              LOWORD(v28) = -4370;
            }
            else
            {
              LOWORD(LCIDFromLangListNodeWithLICCheck) = v26;
              v28 = LCIDFromLangListNodeWithLICCheck;
            }
          }
          v30 = (v37 & 1) != 0 ? 10 : 4;
          LOWORD(v9) = v28;
          goto LABEL_15;
        }
        v29 = -1073020923;
LABEL_24:
        LOWORD(v28) = -4370;
        continue;
      case 4u:
        v26 = -4370;
        HIWORD(v7) = ~HIWORD(a4);
        if ( (~a4 & 0x80000) != 0 )
          goto LABEL_34;
        if ( !NtCurrentTeb() )
        {
          LOWORD(v7) = v26;
          goto LABEL_6;
        }
        v9 = NtCurrentTeb();
        LOWORD(v9) = v9->CurrentLocale;
LABEL_14:
        v28 = (int)v9;
        goto LABEL_15;
      case 5u:
        LOWORD(v28) = -4370;
        v9 = (struct _TEB *)NtQueryDefaultLocale(1u, &DefaultLocaleId);
        v29 = (NTSTATUS)v9;
        if ( (int)v9 < 0 )
          continue;
        LOWORD(v9) = DefaultLocaleId;
        goto LABEL_14;
      case 6u:
        LOWORD(v28) = -4370;
        v29 = NtQueryDefaultLocale(0, &v38);
        if ( v29 < 0 )
          continue;
        v9 = (struct _TEB *)v38;
        if ( v38 == DefaultLocaleId )
          continue;
        goto LABEL_14;
      case 7u:
        LOWORD(v28) = 1033;
        goto LABEL_16;
      default:
        goto LABEL_34;
    }
  }
}
