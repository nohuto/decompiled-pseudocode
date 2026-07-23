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

NTSTATUS __stdcall LdrResSearchResource(
        const WCHAR *a1,
        void *Src,
        unsigned int a3,
        int a4,
        int a5,
        _DWORD *a6,
        int a7,
        int a8)
{
  const void *v8; // edx
  _DWORD *SharedData; // eax
  int v10; // eax
  int v11; // ebx
  int v12; // ebx
  bool v13; // zf
  int v14; // ecx
  _DWORD *v15; // eax
  NTSTATUS result; // eax
  PCWSTR v17; // eax
  WCHAR *v18; // esi
  _DWORD *v19; // esi
  int v20; // eax
  int v21; // eax
  int v22; // eax
  int v23; // eax
  size_t v24; // [esp-4h] [ebp-98h]
  _ACTIVATION_CONTEXT *v25; // [esp+0h] [ebp-94h]
  _UNICODE_STRING DestinationString; // [esp+10h] [ebp-84h] BYREF
  _WORD v27[2]; // [esp+18h] [ebp-7Ch] BYREF
  const wchar_t *v28; // [esp+1Ch] [ebp-78h]
  _WORD v29[2]; // [esp+20h] [ebp-74h] BYREF
  const wchar_t *v30; // [esp+24h] [ebp-70h]
  _UNICODE_STRING LocaleName; // [esp+34h] [ebp-60h] BYREF
  PVOID ResourceDllBase; // [esp+3Ch] [ebp-58h] BYREF
  DWORD Lcid; // [esp+40h] [ebp-54h] BYREF
  void *v34; // [esp+44h] [ebp-50h]
  int v35; // [esp+48h] [ebp-4Ch]
  int v36; // [esp+4Ch] [ebp-48h]
  _DWORD *v37; // [esp+50h] [ebp-44h]
  int v38; // [esp+54h] [ebp-40h]
  PCWSTR DosFileName; // [esp+58h] [ebp-3Ch]
  PVOID Module; // [esp+5Ch] [ebp-38h]
  ULONG_PTR Size; // [esp+60h] [ebp-34h] BYREF
  _DWORD v42[2]; // [esp+68h] [ebp-2Ch] BYREF
  PCWSTR SourceString; // [esp+70h] [ebp-24h]
  CPPEH_RECORD ms_exc; // [esp+7Ch] [ebp-18h]

  DosFileName = a1;
  v8 = Src;
  v34 = Src;
  v35 = a5;
  v37 = a6;
  v36 = a7;
  v38 = a8;
  Module = 0;
  v29[0] = 52;
  v29[1] = 54;
  v30 = L"LdrResSearchResource Enter";
  v27[0] = 50;
  v27[1] = 52;
  v28 = L"LdrResSearchResource Exit";
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
    LdrpTraceLoadMUIDll(v29, *(unsigned __int8 *)v20);
    v8 = v34;
  }
  else
  {
    v11 = 2147353476;
  }
  if ( !a1 || !v8 || a7 && !v38 )
  {
    HIDWORD(Size) = -1073741811;
LABEL_24:
    v14 = 2147353477;
    v15 = NtCurrentPeb()->SharedData;
    if ( v15 && *v15 )
      v14 = (int)NtCurrentPeb()->SharedData + 555;
    if ( (*(_BYTE *)v14 & 1) != 0 )
    {
      if ( RtlGetCurrentServiceSessionId() )
        v11 = (int)NtCurrentPeb()->SharedData + 554;
      LdrpTraceLoadMUIDll(v27, *(unsigned __int8 *)v11);
    }
    return HIDWORD(Size);
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
    HIDWORD(Size) = -1073741583;
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
    HIDWORD(Size) = -1073741582;
    goto LABEL_23;
  }
  if ( v21 == 3072 )
    goto LABEL_22;
LABEL_20:
  v34 = (void *)(v12 & 0x8000);
  if ( (v12 & 0x8000) != 0 && (~v12 & 0x810) != 0 || (v12 & 0x3000) == 0x3000 || (v12 & 0x18) == 0x18 )
    goto LABEL_22;
  LODWORD(Size) = 0;
  if ( (v12 & 0x20000) != 0 )
  {
    ms_exc.registration.TryLevel = 0;
    if ( (v12 & 0x400) == 0 || !v37 || !*v37 )
    {
      HIDWORD(Size) = -1073741811;
      ms_exc.registration.TryLevel = -2;
      goto LABEL_23;
    }
    LODWORD(Size) = *v37;
    ms_exc.registration.TryLevel = -2;
  }
  ms_exc.registration.TryLevel = 1;
  LODWORD(v24) = 4 * a3;
  memcpy(v42, v8, v24);
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
      if ( !RtlCultureNameToLCID(&DestinationString, &Lcid) )
      {
        ms_exc.registration.TryLevel = -2;
        return -1073741811;
      }
    }
    else
    {
      Lcid = 0;
    }
    ms_exc.registration.TryLevel = -2;
    SourceString = (PCWSTR)(unsigned __int16)Lcid;
  }
  else if ( SourceString )
  {
    if ( ((unsigned __int16)SourceString & 0x3FF) == 0
      || SourceString == (PCWSTR)127
      || (*(_DWORD *)&LocaleName.Length = 0,
          LocaleName.Buffer = 0,
          RtlLcidToLocaleName((LCID)SourceString, &LocaleName, 2u, 1u) < 0) )
    {
      HIDWORD(Size) = -1073741811;
      goto LABEL_23;
    }
    if ( LocaleName.Buffer )
      RtlFreeAnsiString(&LocaleName);
  }
LABEL_34:
  if ( (v12 & 0x300) == 0 )
  {
    if ( (v12 & 0x400) == 0 && ((v12 & 0x800) == 0 || (~v12 & 0x8000) == 0) )
    {
LABEL_37:
      v18 = (WCHAR *)DosFileName;
LABEL_38:
      if ( v34 )
      {
        result = LdrpResValidateFileHandle(v18);
        if ( result < 0 )
          return result;
        v23 = LdrpResSearchResourceHandle(v42, a3, v35, v37, v36, v38);
      }
      else
      {
        v19 = v37;
        HIDWORD(Size) = LdrpResSearchResourceMappedFile(v12, v42, a3, v35, v37, v36, v38);
        if ( HIDWORD(Size) != -1073741686 )
          goto LABEL_23;
        if ( v42[0] == 24 )
          goto LABEL_23;
        if ( v42[0] == 16 )
          goto LABEL_23;
        if ( LdrLoadAlternateResourceModuleEx(Module, 0xF2EEu, &ResourceDllBase, 0, 0x1000000u) < 0 )
          goto LABEL_23;
        LODWORD(Size) = 0;
        if ( (int)LdrpResGetMappingSize(ResourceDllBase, &Size, v12, 0) < 0 )
          goto LABEL_23;
        v23 = LdrpResSearchResourceMappedFile(v12 | 0x1000000, v42, a3, v35, v19, v36, v38);
      }
      HIDWORD(Size) = v23;
LABEL_23:
      v11 = 2147353476;
      goto LABEL_24;
    }
    if ( (v12 & 0x1400) == 0x1400 )
    {
      v18 = (WCHAR *)DosFileName;
      result = LdrpResValidateFilePath(DosFileName);
    }
    else
    {
      v18 = (WCHAR *)DosFileName;
      if ( (v12 & 0x1000) == 0 )
        goto LABEL_96;
      result = LdrpResValidateFileHandle((HANDLE)DosFileName);
    }
    if ( result < 0 )
      return result;
LABEL_96:
    v22 = LdrpResMapFile(v18, &Size, v12);
    HIDWORD(Size) = v22;
    if ( v22 < 0 )
    {
      if ( v22 != -1073741302 )
        goto LABEL_23;
    }
    else
    {
      if ( (v12 & 0x400) != 0 )
        result = LdrAddLoadAsDataTable(Module, v18, (unsigned int)Size, 0, v25);
      else
        result = LdrAddLoadAsDataTable(Module, 0, __PAIR64__((unsigned int)v18, Size), 0, v25);
      if ( result < 0 )
        return result;
    }
    goto LABEL_38;
  }
  v17 = DosFileName;
  Module = (PVOID)DosFileName;
  if ( (v12 & 0x200) == 0 )
    goto LABEL_85;
  if ( ((unsigned __int8)DosFileName & 1) == 0 )
  {
    Module = (PVOID)((unsigned int)DosFileName | 1);
    v17 = DosFileName;
  }
  if ( (v12 & 0x1000) == 0 || (result = LdrpResValdiateMappedAddress(v17), result >= 0) )
  {
LABEL_85:
    result = LdrpResGetMappingSize(Module, &Size, v12, 0);
    if ( result >= 0 || (v12 & 0x1000) == 0 )
      goto LABEL_37;
  }
  return result;
}
