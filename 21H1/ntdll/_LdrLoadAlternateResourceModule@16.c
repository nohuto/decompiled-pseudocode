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

NTSTATUS __cdecl LdrLoadAlternateResourceModule(
        PVOID DllHandle,
        PVOID *ResourceDllBase,
        ULONG_PTR *ResourceOffset,
        ULONG Flags)
{
  PVOID v4; // esi
  int RcConfig; // edi
  int AlternateResourceModule; // ebx
  PVOID *v7; // ecx
  int v8; // edx
  ULONG v9; // eax
  LANGID v10; // si
  int v11; // eax
  unsigned int v12; // eax
  ULONG_PTR *v13; // esi
  int v15; // eax
  int v16; // eax
  BOOLEAN v17; // al
  bool v18; // zf
  size_t v19; // [esp-4h] [ebp-DCh]
  char v20; // [esp+13h] [ebp-C5h] BYREF
  PVOID *v21; // [esp+14h] [ebp-C4h]
  int v22; // [esp+18h] [ebp-C0h]
  ULONG v23; // [esp+1Ch] [ebp-BCh]
  LANGID LanguageId[2]; // [esp+20h] [ebp-B8h] BYREF
  PVOID BaseOfImage; // [esp+24h] [ebp-B4h]
  unsigned int v26; // [esp+28h] [ebp-B0h]
  unsigned int v27; // [esp+2Ch] [ebp-ACh]
  PVOID v28; // [esp+30h] [ebp-A8h]
  int v29; // [esp+34h] [ebp-A4h]
  ULONG_PTR *v30; // [esp+38h] [ebp-A0h]
  DWORD Lcid; // [esp+3Ch] [ebp-9Ch] BYREF
  int v32; // [esp+40h] [ebp-98h]
  int v33; // [esp+44h] [ebp-94h]
  _UNICODE_STRING DestinationString; // [esp+48h] [ebp-90h] BYREF
  _WORD v35[66]; // [esp+50h] [ebp-88h] BYREF

  BaseOfImage = DllHandle;
  LODWORD(v19) = 128;
  v21 = ResourceDllBase;
  v30 = ResourceOffset;
  v22 = 0;
  memset(v35, 0, v19);
  v4 = DllHandle;
  v26 = 0;
  RcConfig = 0;
  v27 = 0;
  v28 = 0;
  v29 = 0;
  AlternateResourceModule = -1073020927;
  if ( !DllHandle )
    return -1073741811;
  v7 = v21;
  if ( !v21 )
    return -1073741811;
  v20 = 0;
  v23 = Flags & 0x1000000;
  v8 = 0;
  v33 = 61166;
LABEL_4:
  while ( 2 )
  {
    v9 = v23;
    while ( 1 )
    {
      while ( 1 )
      {
        v32 = v8;
        if ( v9 )
          break;
        v22 = v8 + 1;
        if ( !v8 )
        {
          v10 = 0;
          LanguageId[0] = 0;
          if ( (unsigned __int8)LdrpSetThreadPreferredLangList() )
          {
            if ( v27 < *((unsigned __int16 *)NtCurrentTeb()->MergedPrefLanguages + 2) )
              GetLCIDFromLangListNodeWithLICCheck(v27, LanguageId, &v20);
            v10 = LanguageId[0];
          }
          v7 = v21;
          v8 = v22;
          v9 = v23;
          if ( !v10 )
            goto LABEL_28;
          if ( (Flags & 0x80u) == 0 )
          {
            if ( v20 )
            {
              if ( (RcConfig || (RcConfig = LdrpGetRcConfig(BaseOfImage, 0, 1)) != 0)
                && *(_DWORD *)RcConfig == -20054323
                && (*(_DWORD *)(RcConfig + 20) & 0x100) != 0 )
              {
                v10 = -4370;
                LanguageId[0] = -4370;
              }
            }
          }
          v8 = v32;
          ++v27;
          v7 = v21;
          v22 = v32;
          goto LABEL_27;
        }
        if ( v8 != 1 )
          goto LABEL_15;
        v15 = LdrpGetRcConfig(v4, 1, 1);
        v7 = v21;
        RcConfig = v15;
        v8 = v22;
        v9 = v23;
        if ( RcConfig && *(_DWORD *)RcConfig == -20054323 && (*(_BYTE *)(RcConfig + 24) & 2) != 0 )
        {
          v16 = *(_DWORD *)(RcConfig + 124);
          if ( !v16 )
            goto LABEL_4;
          RtlInitUnicodeString(&DestinationString, (PCWSTR)(RcConfig + v16));
          v17 = RtlCultureNameToLCID(&DestinationString, &Lcid);
          v7 = v21;
          v18 = v17 == 0;
          v8 = v22;
          v9 = v23;
          if ( !v18 )
          {
            v10 = Lcid;
            LanguageId[0] = Lcid;
            if ( (Flags & 0x80u) == 0 && (*(_DWORD *)(RcConfig + 20) & 0x100) != 0 )
            {
              GetLCIDFromLangListNodeWithLICCheck(0, LanguageId, &v20);
              v7 = v21;
              v8 = v22;
              v9 = v23;
              if ( !v20 )
              {
                v10 = LanguageId[0];
                goto LABEL_8;
              }
              v10 = -4370;
              goto LABEL_7;
            }
            v8 = v22;
LABEL_27:
            v9 = v23;
            goto LABEL_8;
          }
        }
      }
      v10 = -3346;
LABEL_7:
      LanguageId[0] = v10;
LABEL_8:
      if ( v10 != (_WORD)v33 )
      {
        v11 = 0;
        if ( v26 )
        {
          while ( v35[v11] != v10 )
          {
            if ( ++v11 >= v26 )
              goto LABEL_10;
          }
          goto LABEL_31;
        }
LABEL_10:
        v12 = v26;
        if ( v26 >= 0x40 )
          goto LABEL_15;
        v35[v26] = v10;
        v13 = v30;
        v26 = v12 + 1;
        AlternateResourceModule = LdrLoadAlternateResourceModuleEx(BaseOfImage, LanguageId[0], v7, v30, Flags);
        v9 = v23;
        if ( v23 )
          goto LABEL_15;
        v7 = v21;
        v8 = v22;
        if ( AlternateResourceModule >= 0 )
          break;
      }
LABEL_28:
      v4 = BaseOfImage;
    }
    if ( (Flags & 0x80u) != 0 && !(unsigned __int8)LdrpCompareServiceChecksum(BaseOfImage, *v21) )
    {
      v7 = v21;
      if ( !v28 )
      {
        v28 = *v21;
        if ( v13 )
          v29 = *(_DWORD *)v13;
        else
          v29 = 0;
      }
      v8 = v22;
      AlternateResourceModule = -1073020927;
LABEL_31:
      v4 = BaseOfImage;
      continue;
    }
    break;
  }
LABEL_15:
  if ( AlternateResourceModule < 0 && (Flags & 0x80u) != 0 && v28 )
  {
    *v21 = v28;
    if ( v30 )
      *(_DWORD *)v30 = v29;
    return 0;
  }
  return AlternateResourceModule;
}
