/*
 * XREFs of _LdrResSearchResource@32 @ 0x4B2BA8B0
 * Callers:
 *     _LdrResFindResourceDirectory@28 @ 0x4B2B97D0 (_LdrResFindResourceDirectory@28.c)
 *     _RtlLoadString@32 @ 0x4B2BA030 (_RtlLoadString@32.c)
 *     _LdrResFindResource@36 @ 0x4B342DB0 (_LdrResFindResource@36.c)
 * Callees:
 *     _LdrAddLoadAsDataTable@20 @ 0x4B2B8AD0 (_LdrAddLoadAsDataTable@20.c)
 *     _LdrpResGetMappingSize@16 @ 0x4B2BAB30 (_LdrpResGetMappingSize@16.c)
 *     _LdrpResSearchResourceMappedFile@36 @ 0x4B2BACC0 (_LdrpResSearchResourceMappedFile@36.c)
 *     _LdrLoadAlternateResourceModuleEx@20 @ 0x4B2BBDA0 (_LdrLoadAlternateResourceModuleEx@20.c)
 *     _RtlFreeAnsiString@4 @ 0x4B2C3B40 (_RtlFreeAnsiString@4.c)
 *     _RtlGetCurrentServiceSessionId@0 @ 0x4B2C3BF0 (_RtlGetCurrentServiceSessionId@0.c)
 *     _RtlCultureNameToLCID@8 @ 0x4B2D56B0 (_RtlCultureNameToLCID@8.c)
 *     _RtlLcidToLocaleName@16 @ 0x4B2D5A10 (_RtlLcidToLocaleName@16.c)
 *     _RtlInitUnicodeString@8 @ 0x4B2F5020 (_RtlInitUnicodeString@8.c)
 *     _memcpy @ 0x4B2F88B0 (_memcpy.c)
 *     __SEH_prolog4_GS @ 0x4B307B20 (__SEH_prolog4_GS.c)
 *     _LdrpTraceLoadMUIDll@8 @ 0x4B33FAF1 (_LdrpTraceLoadMUIDll@8.c)
 *     _LdrpResMapFile@16 @ 0x4B34316E (_LdrpResMapFile@16.c)
 *     _LdrpResSearchResourceHandle@32 @ 0x4B3434F8 (_LdrpResSearchResourceHandle@32.c)
 *     _LdrpResValdiateMappedAddress@4 @ 0x4B343B5A (_LdrpResValdiateMappedAddress@4.c)
 *     _LdrpResValidateFileHandle@4 @ 0x4B343B84 (_LdrpResValidateFileHandle@4.c)
 *     _LdrpResValidateFilePath@4 @ 0x4B343BC4 (_LdrpResValidateFilePath@4.c)
 */

int __stdcall LdrResSearchResource(wchar_t *a1, void *Src, unsigned int a3, int a4, int a5, int *a6, int a7, int a8)
{
  const void *v8; // edx
  _DWORD *SharedData; // eax
  int v10; // eax
  int v11; // ebx
  int v12; // ebx
  bool v13; // zf
  int v14; // ecx
  _DWORD *v15; // eax
  int result; // eax
  wchar_t *v17; // eax
  wchar_t *v18; // esi
  int *v19; // esi
  int v20; // eax
  int v21; // eax
  int v22; // eax
  int v23; // eax
  UNICODE_STRING DestinationString; // [esp+10h] [ebp-84h] BYREF
  _WORD v25[2]; // [esp+18h] [ebp-7Ch] BYREF
  const wchar_t *v26; // [esp+1Ch] [ebp-78h]
  _WORD v27[2]; // [esp+20h] [ebp-74h] BYREF
  const wchar_t *v28; // [esp+24h] [ebp-70h]
  UNICODE_STRING UnicodeString; // [esp+34h] [ebp-60h] BYREF
  int v30; // [esp+3Ch] [ebp-58h] BYREF
  int v31; // [esp+40h] [ebp-54h] BYREF
  void *v32; // [esp+44h] [ebp-50h]
  int v33; // [esp+48h] [ebp-4Ch]
  int v34; // [esp+4Ch] [ebp-48h]
  int *v35; // [esp+50h] [ebp-44h]
  int v36; // [esp+54h] [ebp-40h]
  wchar_t *v37; // [esp+58h] [ebp-3Ch]
  wchar_t *String2; // [esp+5Ch] [ebp-38h]
  int v39; // [esp+60h] [ebp-34h] BYREF
  int v40; // [esp+64h] [ebp-30h]
  _DWORD v41[2]; // [esp+68h] [ebp-2Ch] BYREF
  PCWSTR SourceString; // [esp+70h] [ebp-24h]
  CPPEH_RECORD ms_exc; // [esp+7Ch] [ebp-18h]

  v37 = a1;
  v8 = Src;
  v32 = Src;
  v33 = a5;
  v35 = a6;
  v34 = a7;
  v36 = a8;
  String2 = 0;
  v27[0] = 52;
  v27[1] = 54;
  v28 = L"LdrResSearchResource Enter";
  v25[0] = 50;
  v25[1] = 52;
  v26 = L"LdrResSearchResource Exit";
  SharedData = NtCurrentPeb()->SharedData;
  if ( SharedData && *SharedData )
    v10 = (int)NtCurrentPeb()->SharedData + 555;
  else
    v10 = 2147353477;
  if ( (*(_BYTE *)v10 & 1) != 0 )
  {
    v11 = 2147353476;
    if ( RtlGetCurrentServiceSessionId() )
      v20 = (int)NtCurrentPeb()->SharedData + 554;
    else
      v20 = 2147353476;
    LdrpTraceLoadMUIDll(v27, *(unsigned __int8 *)v20);
    v8 = v32;
  }
  else
  {
    v11 = 2147353476;
  }
  if ( !a1 || !v8 || a7 && !v36 )
  {
    v40 = -1073741811;
LABEL_24:
    v14 = 2147353477;
    v15 = NtCurrentPeb()->SharedData;
    if ( v15 && *v15 )
      v14 = (int)NtCurrentPeb()->SharedData + 555;
    if ( (*(_BYTE *)v14 & 1) != 0 )
    {
      if ( RtlGetCurrentServiceSessionId() )
        v11 = (int)NtCurrentPeb()->SharedData + 554;
      LdrpTraceLoadMUIDll(v25, *(unsigned __int8 *)v11);
    }
    return v40;
  }
  v12 = a4;
  if ( (a4 & 0xF00) == 0 )
    v12 = a4 | 0x100;
  if ( (v12 & 0x2000) == 0 )
    v12 |= 0x1000u;
  if ( (v12 & 0xFFF80000) != 0 )
    goto LABEL_22;
  if ( a3 < 3 && (v12 & 2) == 0 || a3 > 4 )
  {
    v40 = -1073741583;
    goto LABEL_23;
  }
  if ( (v12 & 0x41) != 0 )
  {
    if ( a3 != 4 )
      return -1073741583;
  }
  else if ( a3 != 4 )
  {
    goto LABEL_17;
  }
  if ( (v12 & 0x41) == 0 )
    return -1073741582;
LABEL_17:
  if ( (v12 & 0x100) != 0 )
  {
    v13 = (v12 & 0xE00) == 0;
    goto LABEL_19;
  }
  v21 = v12 & 0xC00;
  if ( (v12 & 0x200) != 0 )
  {
    v13 = v21 == 0;
LABEL_19:
    if ( v13 )
      goto LABEL_20;
LABEL_22:
    v40 = -1073741582;
    goto LABEL_23;
  }
  if ( v21 == 3072 )
    goto LABEL_22;
LABEL_20:
  v32 = (void *)(v12 & 0x8000);
  if ( (v12 & 0x8000) != 0 && (~v12 & 0x810) != 0 || (v12 & 0x3000) == 0x3000 || (v12 & 0x18) == 0x18 )
    goto LABEL_22;
  v39 = 0;
  if ( (v12 & 0x20000) != 0 )
  {
    ms_exc.registration.TryLevel = 0;
    if ( (v12 & 0x400) == 0 || !v35 || !*v35 )
    {
      v40 = -1073741811;
      ms_exc.registration.TryLevel = -2;
      goto LABEL_23;
    }
    v39 = *v35;
    ms_exc.registration.TryLevel = -2;
  }
  ms_exc.registration.TryLevel = 1;
  memcpy(v41, v8, 4 * a3);
  ms_exc.registration.TryLevel = -2;
  if ( a3 > 3 )
  {
    a3 = 3;
  }
  else if ( a3 != 3 )
  {
    goto LABEL_34;
  }
  if ( (unsigned int)SourceString >= 0x10000 )
  {
    ms_exc.registration.TryLevel = 2;
    if ( *SourceString )
    {
      RtlInitUnicodeString(&DestinationString, SourceString);
      if ( !(unsigned __int8)RtlCultureNameToLCID(&DestinationString, &v31) )
      {
        ms_exc.registration.TryLevel = -2;
        return -1073741811;
      }
    }
    else
    {
      v31 = 0;
    }
    ms_exc.registration.TryLevel = -2;
    SourceString = (PCWSTR)(unsigned __int16)v31;
  }
  else if ( SourceString )
  {
    if ( ((unsigned __int16)SourceString & 0x3FF) == 0
      || SourceString == (PCWSTR)127
      || (*(_DWORD *)&UnicodeString.Length = 0,
          UnicodeString.Buffer = 0,
          (int)RtlLcidToLocaleName(SourceString, &UnicodeString, 2, 1) < 0) )
    {
      v40 = -1073741811;
      goto LABEL_23;
    }
    if ( UnicodeString.Buffer )
      RtlFreeAnsiString(&UnicodeString);
  }
LABEL_34:
  if ( (v12 & 0x300) == 0 )
  {
    if ( (v12 & 0x400) == 0 && ((v12 & 0x800) == 0 || (~v12 & 0x8000) == 0) )
    {
LABEL_37:
      v18 = v37;
LABEL_38:
      if ( v32 )
      {
        result = LdrpResValidateFileHandle(v18);
        if ( result < 0 )
          return result;
        v23 = LdrpResSearchResourceHandle(v41, a3, v33, v35, v34, v36);
      }
      else
      {
        v19 = v35;
        v40 = LdrpResSearchResourceMappedFile(v12, v41, a3, v33, v35, v34, v36);
        if ( v40 != -1073741686 )
          goto LABEL_23;
        if ( v41[0] == 24 )
          goto LABEL_23;
        if ( v41[0] == 16 )
          goto LABEL_23;
        if ( (int)LdrLoadAlternateResourceModuleEx(String2, 62190, &v30, 0, 0x1000000) < 0 )
          goto LABEL_23;
        v39 = 0;
        if ( (int)LdrpResGetMappingSize(v30, &v39, v12, 0) < 0 )
          goto LABEL_23;
        v23 = LdrpResSearchResourceMappedFile(v12 | 0x1000000, v41, a3, v33, v19, v34, v36);
      }
      v40 = v23;
LABEL_23:
      v11 = 2147353476;
      goto LABEL_24;
    }
    if ( (v12 & 0x1400) == 0x1400 )
    {
      v18 = v37;
      result = LdrpResValidateFilePath(v37);
    }
    else
    {
      v18 = v37;
      if ( (v12 & 0x1000) == 0 )
        goto LABEL_96;
      result = LdrpResValidateFileHandle(v37);
    }
    if ( result < 0 )
      return result;
LABEL_96:
    v22 = LdrpResMapFile(v18, (int)&v39, v12);
    v40 = v22;
    if ( v22 < 0 )
    {
      if ( v22 != -1073741302 )
        goto LABEL_23;
    }
    else
    {
      if ( (v12 & 0x400) != 0 )
        result = LdrAddLoadAsDataTable(String2, v18, v39, 0, 0);
      else
        result = LdrAddLoadAsDataTable(String2, 0, v39, (int)v18, 0);
      if ( result < 0 )
        return result;
    }
    goto LABEL_38;
  }
  v17 = v37;
  String2 = v37;
  if ( (v12 & 0x200) == 0 )
    goto LABEL_85;
  if ( ((unsigned __int8)v37 & 1) == 0 )
  {
    String2 = (wchar_t *)((unsigned int)v37 | 1);
    v17 = v37;
  }
  if ( (v12 & 0x1000) == 0 || (result = LdrpResValdiateMappedAddress(v17), result >= 0) )
  {
LABEL_85:
    result = LdrpResGetMappingSize(String2, &v39, v12, 0);
    if ( result >= 0 || (v12 & 0x1000) == 0 )
      goto LABEL_37;
  }
  return result;
}
