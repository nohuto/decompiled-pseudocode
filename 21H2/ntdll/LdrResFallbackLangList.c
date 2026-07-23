/*
 * XREFs of LdrResFallbackLangList @ 0x180057BE8
 * Callers:
 *     LdrpResSearchResourceMappedFile @ 0x180055BD4 (LdrpResSearchResourceMappedFile.c)
 *     LdrpResSearchResourceHandle @ 0x1800E472C (LdrpResSearchResourceHandle.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180024850 (RtlGetCurrentServiceSessionId.c)
 *     LdrpSetThreadPreferredLangList @ 0x180036318 (LdrpSetThreadPreferredLangList.c)
 *     GetLCIDFromLangListNodeWithLICCheck @ 0x180037EF8 (GetLCIDFromLangListNodeWithLICCheck.c)
 *     RtlCultureNameToLCID @ 0x18003B850 (RtlCultureNameToLCID.c)
 *     RtlInitUnicodeString @ 0x18003BA40 (RtlInitUnicodeString.c)
 *     RtlpResUltimateFallbackInfo @ 0x180057FB8 (RtlpResUltimateFallbackInfo.c)
 *     LdrpGetParentLangId @ 0x18007EB94 (LdrpGetParentLangId.c)
 *     NtQueryDefaultLocale @ 0x18009D8A0 (NtQueryDefaultLocale.c)
 *     LdrpTraceLoadMUIDll @ 0x1800E1754 (LdrpTraceLoadMUIDll.c)
 */

__int64 __fastcall LdrResFallbackLangList(__int64 a1, int a2, unsigned __int16 a3, int a4, unsigned __int16 *a5)
{
  int v5; // r15d
  __int64 v6; // r12
  __int64 v7; // rcx
  __int64 v8; // r14
  __int64 v10; // r8
  unsigned int v11; // r13d
  unsigned __int16 CurrentLocale; // bx
  int v13; // edx
  int v14; // ecx
  int v15; // esi
  int v16; // ecx
  int v17; // ecx
  int v18; // ecx
  int v19; // ecx
  int v20; // ecx
  int v21; // ecx
  char v22; // al
  unsigned int v23; // r10d
  unsigned __int16 *MergedPrefLanguages; // rcx
  __int64 v25; // rdx
  unsigned int v26; // ecx
  NTSTATUS v28; // eax
  NTSTATUS v29; // eax
  __int64 v30; // rcx
  __int64 v31; // rcx
  bool v32[4]; // [rsp+38h] [rbp-51h] BYREF
  _WORD v33[2]; // [rsp+3Ch] [rbp-4Dh] BYREF
  unsigned int v34; // [rsp+40h] [rbp-49h]
  unsigned __int16 v35; // [rsp+44h] [rbp-45h] BYREF
  DWORD v36; // [rsp+48h] [rbp-41h] BYREF
  DWORD DefaultLocaleId; // [rsp+4Ch] [rbp-3Dh] BYREF
  DWORD Lcid; // [rsp+50h] [rbp-39h] BYREF
  int v39; // [rsp+54h] [rbp-35h] BYREF
  PCWSTR SourceString; // [rsp+58h] [rbp-31h] BYREF
  int v41; // [rsp+60h] [rbp-29h] BYREF
  const wchar_t *v42; // [rsp+68h] [rbp-21h]
  int v43; // [rsp+70h] [rbp-19h] BYREF
  const wchar_t *v44; // [rsp+78h] [rbp-11h]
  _UNICODE_STRING DestinationString; // [rsp+80h] [rbp-9h] BYREF
  int v50; // [rsp+108h] [rbp+7Fh]

  v41 = 3801144;
  v42 = L"LdrResFallbackLangList Enter";
  v43 = 3670070;
  v44 = L"LdrResFallbackLangList Exit";
  v5 = 0;
  v6 = 2147353477LL;
  if ( RtlGetCurrentServiceSessionId() )
    v7 = (__int64)NtCurrentPeb()->SharedData + 555;
  else
    v7 = 2147353477LL;
  v8 = 2147353476LL;
  if ( (*(_BYTE *)v7 & 1) != 0 )
  {
    if ( RtlGetCurrentServiceSessionId() )
      v31 = (__int64)NtCurrentPeb()->SharedData + 554;
    else
      v31 = 2147353476LL;
    LdrpTraceLoadMUIDll(&v41, *(unsigned __int8 *)v31);
  }
  if ( !a5 )
  {
    v11 = -1073741811;
    goto LABEL_31;
  }
  *a5 = 0;
  LODWORD(v10) = 0;
  *((_BYTE *)a5 + 516) = 0;
  v11 = 0;
  v34 = 0;
  CurrentLocale = 0;
  v32[0] = 0;
  v36 = 0;
LABEL_6:
  v13 = a4;
  while ( 1 )
  {
    v14 = v10;
    v15 = v10;
    v10 = (unsigned int)(v10 + 1);
    v50 = v10;
    if ( !v14 )
    {
      CurrentLocale = a3;
      v5 = 1;
      goto LABEL_23;
    }
    v16 = v14 - 1;
    if ( !v16 )
      break;
    v17 = v16 - 1;
    if ( v17 )
    {
      v18 = v17 - 1;
      if ( !v18 )
      {
        if ( !a1 )
          goto LABEL_38;
        if ( (int)RtlpResUltimateFallbackInfo(a1, a2, (unsigned int)&SourceString, (unsigned int)&v39, v13) < 0 )
          goto LABEL_37;
        RtlInitUnicodeString(&DestinationString, SourceString);
        if ( !RtlCultureNameToLCID(&DestinationString, &Lcid) )
        {
          v11 = -1073020923;
LABEL_37:
          LODWORD(v10) = v50;
LABEL_38:
          CurrentLocale = -4370;
          goto LABEL_6;
        }
        CurrentLocale = Lcid;
        v33[0] = Lcid;
        if ( (a4 & 0x100000) != 0 )
        {
          GetLCIDFromLangListNodeWithLICCheck(v30, (__int64)NtCurrentTeb()->MergedPrefLanguages, 0, v33, v32);
          if ( v32[0] )
            CurrentLocale = -4370;
          else
            CurrentLocale = v33[0];
        }
        LODWORD(v10) = v50;
        v5 = (v39 & 1) != 0 ? 10 : 4;
        goto LABEL_23;
      }
      v19 = v18 - 1;
      if ( v19 )
      {
        v20 = v19 - 1;
        if ( v20 )
        {
          v21 = v20 - 1;
          if ( v21 )
          {
            if ( v21 != 1 )
              goto LABEL_31;
            CurrentLocale = 1033;
LABEL_24:
            v25 = *a5;
            v26 = 0;
            if ( !*a5 )
              goto LABEL_28;
            do
            {
              if ( a5[4 * v26 + 2] == CurrentLocale )
                break;
              ++v26;
            }
            while ( v26 < (unsigned int)v25 );
            if ( v26 >= (unsigned int)v25 )
            {
LABEL_28:
              if ( (unsigned int)v25 >= 0x40 )
                goto LABEL_31;
              a5[4 * v25 + 2] = CurrentLocale;
              *(_DWORD *)&a5[4 * (*a5)++ + 4] = v5;
            }
            goto LABEL_6;
          }
          CurrentLocale = -4370;
          v28 = NtQueryDefaultLocale(0, &DefaultLocaleId);
          LODWORD(v10) = v50;
          v13 = a4;
          v11 = v28;
          if ( v28 >= 0 && DefaultLocaleId != v36 )
          {
            CurrentLocale = DefaultLocaleId;
            goto LABEL_23;
          }
        }
        else
        {
          CurrentLocale = -4370;
          v29 = NtQueryDefaultLocale(1u, &v36);
          LODWORD(v10) = v50;
          v13 = a4;
          v11 = v29;
          if ( v29 >= 0 )
          {
            CurrentLocale = v36;
            goto LABEL_23;
          }
        }
      }
      else
      {
        v33[0] = -4370;
        if ( (~v13 & 0x80000) != 0 )
          goto LABEL_31;
        if ( NtCurrentTeb() )
        {
          CurrentLocale = NtCurrentTeb()->CurrentLocale;
          goto LABEL_23;
        }
        CurrentLocale = v33[0];
      }
    }
    else
    {
      CurrentLocale = 0;
      v33[0] = 0;
      v22 = LdrpSetThreadPreferredLangList();
      v23 = v34;
      if ( v22 )
      {
        MergedPrefLanguages = (unsigned __int16 *)NtCurrentTeb()->MergedPrefLanguages;
        if ( v34 < MergedPrefLanguages[2] )
        {
          GetLCIDFromLangListNodeWithLICCheck(
            (__int64)MergedPrefLanguages,
            (__int64)NtCurrentTeb()->MergedPrefLanguages,
            v34,
            v33,
            v32);
          v23 = v34;
        }
        CurrentLocale = v33[0];
      }
      if ( !CurrentLocale )
      {
        LODWORD(v10) = v50;
        CurrentLocale = -4370;
        goto LABEL_6;
      }
      if ( v32[0] && (a4 & 0x100000) != 0 )
        CurrentLocale = -4370;
      v5 = 3;
      v34 = v23 + 1;
      LODWORD(v10) = v15;
LABEL_23:
      v13 = a4;
      if ( CurrentLocale != 0xEEEE )
        goto LABEL_24;
    }
  }
  if ( (v13 & 4) == 0 )
  {
    if ( (a3 & 0x3FF) != 0 )
    {
      *((_BYTE *)a5 + 516) = 1;
      if ( (int)LdrpGetParentLangId(CurrentLocale, &v35, v10) < 0 )
        goto LABEL_31;
      LODWORD(v10) = v15;
      CurrentLocale = v35;
      if ( !v35 )
        LODWORD(v10) = -1;
    }
    else
    {
      CurrentLocale = -4370;
    }
    v5 = 2;
    goto LABEL_23;
  }
  *((_BYTE *)a5 + 516) = 1;
LABEL_31:
  if ( RtlGetCurrentServiceSessionId() )
    v6 = (__int64)NtCurrentPeb()->SharedData + 555;
  if ( (*(_BYTE *)v6 & 1) != 0 )
  {
    if ( RtlGetCurrentServiceSessionId() )
      v8 = (__int64)NtCurrentPeb()->SharedData + 554;
    LdrpTraceLoadMUIDll(&v43, *(unsigned __int8 *)v8);
  }
  return v11;
}
