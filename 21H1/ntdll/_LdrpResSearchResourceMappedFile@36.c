/*
 * XREFs of _LdrpResSearchResourceMappedFile@36 @ 0x4B2BACC0
 * Callers:
 *     _LdrResSearchResource@32 @ 0x4B2BA8B0 (_LdrResSearchResource@32.c)
 *     _LdrResGetRCConfig@20 @ 0x4B2BB5A0 (_LdrResGetRCConfig@20.c)
 * Callees:
 *     _LdrpIsReparsePoint@4 @ 0x4B2A87A0 (_LdrpIsReparsePoint@4.c)
 *     _LdrpResReportResourceAccessInternal@16 @ 0x4B2B0BD2 (_LdrpResReportResourceAccessInternal@16.c)
 *     _LdrIsResItemExist@16 @ 0x4B2B8120 (_LdrIsResItemExist@16.c)
 *     _LdrpFindMessageInAlternateModule@20 @ 0x4B2B86EA (_LdrpFindMessageInAlternateModule@20.c)
 *     _LdrResFallbackLangList@20 @ 0x4B2BA2A0 (_LdrResFallbackLangList@20.c)
 *     _LdrpResGetMappingSize@16 @ 0x4B2BAB30 (_LdrpResGetMappingSize@16.c)
 *     _LdrpResGetResourceDirectory@20 @ 0x4B2BB320 (_LdrpResGetResourceDirectory@20.c)
 *     _LdrResGetRCConfig@20 @ 0x4B2BB5A0 (_LdrResGetRCConfig@20.c)
 *     _LdrLoadAlternateResourceModuleEx@20 @ 0x4B2BBDA0 (_LdrLoadAlternateResourceModuleEx@20.c)
 *     _LdrpResSearchResourceInsideDirectory@52 @ 0x4B2BE960 (_LdrpResSearchResourceInsideDirectory@52.c)
 *     _RtlGetCurrentServiceSessionId@0 @ 0x4B2C3BF0 (_RtlGetCurrentServiceSessionId@0.c)
 *     _RtlLcidToLocaleName@16 @ 0x4B2D5A10 (_RtlLcidToLocaleName@16.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     __wcsicmp @ 0x4B2F7990 (__wcsicmp.c)
 *     _memcpy @ 0x4B2F88B0 (_memcpy.c)
 *     _LdrpTraceLoadMUIDll@8 @ 0x4B33FAF1 (_LdrpTraceLoadMUIDll@8.c)
 *     _LdrpResCompareServiceChecksum@16 @ 0x4B342FDE (_LdrpResCompareServiceChecksum@16.c)
 */

NTSTATUS __fastcall LdrpResSearchResourceMappedFile(
        void *a1,
        unsigned int a2,
        int a3,
        int *a4,
        int a5,
        int **a6,
        unsigned int *a7,
        void *a8,
        unsigned int *a9)
{
  int *v9; // ecx
  int v10; // ebx
  _DWORD *SharedData; // eax
  int v12; // eax
  int v13; // esi
  __int16 v14; // di
  int v15; // edx
  char v16; // cl
  __int16 v17; // dx
  int RCConfig; // eax
  int v19; // ecx
  bool v20; // dl
  NTSTATUS result; // eax
  bool v22; // cl
  NTSTATUS MappingSize; // edi
  unsigned int i; // edx
  unsigned int *v25; // edx
  int v26; // edx
  int v27; // edi
  unsigned int v28; // edx
  bool v29; // al
  unsigned int *v30; // ecx
  _DWORD *v31; // eax
  int v32; // eax
  LANGID v33; // dx
  int v34; // eax
  NTSTATUS v35; // eax
  int v36; // eax
  unsigned int v37; // eax
  unsigned int v38; // eax
  int v39; // esi
  signed int IsReparsePoint; // eax
  int v41; // eax
  size_t v42; // [esp-4h] [ebp-35Ch]
  _DWORD v43[2]; // [esp+10h] [ebp-348h] BYREF
  _UNICODE_STRING LocaleName; // [esp+18h] [ebp-340h] BYREF
  void *v45; // [esp+28h] [ebp-330h]
  unsigned int v46; // [esp+2Ch] [ebp-32Ch] BYREF
  unsigned int *v47; // [esp+30h] [ebp-328h]
  unsigned int *v48; // [esp+34h] [ebp-324h]
  int v49; // [esp+38h] [ebp-320h]
  int v50; // [esp+3Ch] [ebp-31Ch] BYREF
  int v51; // [esp+40h] [ebp-318h] BYREF
  int v52; // [esp+44h] [ebp-314h] BYREF
  int v53; // [esp+48h] [ebp-310h] BYREF
  unsigned int *v54; // [esp+4Ch] [ebp-30Ch]
  unsigned int v55; // [esp+50h] [ebp-308h]
  int **v56; // [esp+54h] [ebp-304h]
  int v57; // [esp+58h] [ebp-300h] BYREF
  const wchar_t *v58; // [esp+5Ch] [ebp-2FCh]
  LANGID LanguageId[2]; // [esp+60h] [ebp-2F8h] BYREF
  unsigned int Size; // [esp+64h] [ebp-2F4h]
  int Size_4; // [esp+68h] [ebp-2F0h]
  int *v62; // [esp+6Ch] [ebp-2ECh]
  PVOID DllHandle; // [esp+70h] [ebp-2E8h]
  PVOID ResourceDllBase; // [esp+74h] [ebp-2E4h] BYREF
  ULONG_PTR ResourceOffset; // [esp+78h] [ebp-2E0h] BYREF
  int v66; // [esp+80h] [ebp-2D8h]
  bool v67; // [esp+87h] [ebp-2D1h]
  unsigned __int16 v68; // [esp+88h] [ebp-2D0h] BYREF
  _WORD v69[258]; // [esp+8Ch] [ebp-2CCh]
  _WORD Src[86]; // [esp+290h] [ebp-C8h] BYREF
  CPPEH_RECORD ms_exc; // [esp+340h] [ebp-18h]

  Size = a2;
  DllHandle = a1;
  v9 = a4;
  v62 = a4;
  v56 = a6;
  v47 = a7;
  v45 = a8;
  v54 = a9;
  ResourceDllBase = 0;
  v50 = 0;
  v51 = 0;
  v52 = 0;
  v53 = 0;
  HIBYTE(ResourceOffset) = 0;
  v10 = a3;
  BYTE6(ResourceOffset) = (a3 & 0x40) != 0;
  WORD2(ResourceOffset) = 0;
  v57 = 4980810;
  v58 = L"LdrpResSearchResourceMappedFile Enter";
  v43[0] = 4849736;
  v43[1] = L"LdrpResSearchResourceMappedFile Exit";
  SharedData = NtCurrentPeb()->SharedData;
  if ( SharedData && *SharedData )
    v12 = (int)NtCurrentPeb()->SharedData + 555;
  else
    v12 = 2147353477;
  if ( (*(_BYTE *)v12 & 1) != 0 )
  {
    if ( RtlGetCurrentServiceSessionId() )
      v36 = (int)NtCurrentPeb()->SharedData + 554;
    else
      v36 = 2147353476;
    LdrpTraceLoadMUIDll(&v57, *(unsigned __int8 *)v36);
    v9 = v62;
  }
  v13 = 0;
  Size_4 = 0;
  v14 = 0;
  if ( (a3 & 0x80u) != 0 )
  {
    v13 = 128;
    Size_4 = 128;
  }
  v15 = a5;
  if ( a5 == 3 )
  {
    v14 = *((_WORD *)v9 + 4);
    ms_exc.registration.TryLevel = 0;
    v16 = (*v9 & 0xFFFF0000) != 0 && !_wcsicmp((const wchar_t *)*v9, L"MUI");
    HIBYTE(ResourceOffset) = v16;
    ms_exc.registration.TryLevel = -2;
    v15 = 3;
  }
  else
  {
    v16 = HIBYTE(ResourceOffset);
  }
  if ( (a3 & 0x10) == 0 && (unsigned int)(v15 - 1) <= 2 )
  {
    if ( v15 == 3 )
      v17 = *((_WORD *)v62 + 4);
    else
      v17 = 0;
    if ( (a3 & 0x1000000) != 0 )
    {
      v10 = a3 | 0x10;
    }
    else if ( (*v62 == 16 || *v62 == 24 || v16) && (~(_BYTE)a3 & 8) != 0 && (!v17 || v17 == 1024 || v17 == 2048) )
    {
      v10 = a3 | 0x10;
    }
    else
    {
      RCConfig = LdrResGetRCConfig(DllHandle, Size, 0, a3, 1);
      v66 = RCConfig;
      if ( RCConfig >= 0 )
      {
        v13 |= LdrIsResItemExist(DllHandle, (wchar_t **)v62, v19, a3);
      }
      else
      {
        if ( RCConfig != -1073741686 )
          goto LABEL_52;
        v13 |= 0x80000u;
      }
      Size_4 = v13;
    }
  }
  if ( (v13 & 0x60000) == 0x60000 )
  {
    v66 = -1073741686;
LABEL_52:
    v31 = NtCurrentPeb()->SharedData;
    if ( v31 && *v31 )
      v32 = (int)NtCurrentPeb()->SharedData + 555;
    else
      v32 = 2147353477;
    if ( (*(_BYTE *)v32 & 1) != 0 )
    {
      if ( RtlGetCurrentServiceSessionId() )
        v41 = (int)NtCurrentPeb()->SharedData + 554;
      else
        v41 = 2147353476;
      LdrpTraceLoadMUIDll(v43, *(unsigned __int8 *)v41);
    }
    return v66;
  }
  v20 = (~v13 & 0x20000) != 0 && (~v13 & 0x80000) != 0 && (~(_BYTE)v10 & 0x10) != 0;
  v67 = v20;
  v68 = 1;
  v69[0] = 0;
  if ( !v20 && a5 != 3 || (v10 & 0x10) != 0 && (v10 & 0x20) != 0 )
    goto LABEL_145;
  if ( (v10 & 4) != 0 )
  {
    v13 |= 4u;
    Size_4 = v13;
  }
  result = LdrResFallbackLangList((int)DllHandle, Size, v14, v13, &v68);
  if ( result >= 0 || (v10 & 0x1000) == 0 )
  {
LABEL_145:
    if ( (v13 & 0x80000) == 0 && (~v13 & 0x40000) == 0 && (v10 & 0x10) == 0
      || (result = LdrpResGetResourceDirectory(DllHandle, __PAIR64__(v10, Size), (int)&v50, (int)&v52), result >= 0) )
    {
      v22 = v67;
      while ( 1 )
      {
        if ( (v13 & 0x20000) != 0 )
        {
          v22 = 0;
          v67 = 0;
        }
        MappingSize = 0;
        v66 = 0;
        LODWORD(ResourceOffset) = 0;
        LanguageId[0] = 0;
        for ( i = 0; ; i = v55 + 1 )
        {
          v55 = i;
          if ( i >= v68 )
            break;
          if ( !v22 )
            goto LABEL_35;
          ResourceDllBase = 0;
          LODWORD(ResourceOffset) = 0;
          v33 = v69[4 * i];
          v34 = *(_DWORD *)&v69[4 * v55 + 2];
          if ( v33 )
          {
            if ( v34 == 10 )
            {
              MappingSize = -1073741811;
              v66 = -1073741811;
              continue;
            }
            LanguageId[0] = v33;
            v35 = LdrLoadAlternateResourceModuleEx(DllHandle, v33, &ResourceDllBase, &ResourceOffset, v13 | 0x1000);
            MappingSize = v35;
            v66 = v35;
            if ( v35 < 0 )
            {
              if ( v35 == -1073741772 || v35 == -1073741766 )
              {
                MappingSize = -1073020927;
                v66 = -1073020927;
              }
LABEL_122:
              v22 = v67;
              continue;
            }
            BYTE5(ResourceOffset) = 1;
            if ( !(_DWORD)ResourceOffset )
            {
              MappingSize = LdrpResGetMappingSize((int)ResourceDllBase, (unsigned int *)&ResourceOffset, 512, 1);
              v66 = MappingSize;
            }
            if ( (v10 & 0x1000) != 0 && MappingSize < 0 )
              goto LABEL_49;
            MappingSize = LdrpResGetResourceDirectory(
                            ResourceDllBase,
                            __PAIR64__(v10, ResourceOffset),
                            (int)&v51,
                            (int)&v53);
            v66 = MappingSize;
            v22 = v67;
            if ( MappingSize >= 0 )
            {
LABEL_35:
              v46 = 0;
              if ( v22 )
                v49 = v10 | 0x20;
              else
                v49 = v10;
              v25 = v47;
              if ( !v47 )
                v25 = &v46;
              v48 = v25;
              if ( v22 )
                v26 = v53;
              else
                v26 = v52;
              v58 = (const wchar_t *)v26;
              if ( v22 )
                v27 = v51;
              else
                v27 = v50;
              if ( v22 )
                v28 = ResourceOffset;
              else
                v28 = Size;
              MappingSize = LdrpResSearchResourceInsideDirectory(
                              v28,
                              v27,
                              v58,
                              0,
                              v62,
                              a5,
                              &v68,
                              v56,
                              v48,
                              v49,
                              v22 ? 0 : LanguageId);
              v66 = MappingSize;
              if ( !BYTE6(ResourceOffset) || (~v13 & 0x40000) == 0 )
                goto LABEL_46;
              v29 = v67;
              if ( MappingSize >= 0 )
              {
                if ( v56 && v67 )
                {
                  if ( v47 )
                    v37 = *v47;
                  else
                    v37 = v46;
                  MappingSize = LdrpFindMessageInAlternateModule(ResourceDllBase, *v56, v37, v62[3], 1);
                  v66 = MappingSize;
                  if ( MappingSize < 0 )
                  {
                    *v56 = 0;
                    if ( MappingSize == -1073741701 )
                      goto LABEL_52;
                  }
LABEL_46:
                  v29 = v67;
                }
                if ( MappingSize >= 0 )
                {
                  v30 = v54;
                  if ( v54 )
                  {
                    if ( LanguageId[0] )
                    {
                      LocaleName.Buffer = Src;
                      LocaleName.MaximumLength = 172;
                      MappingSize = RtlLcidToLocaleName(LanguageId[0], &LocaleName, 2u, 0);
                      v66 = MappingSize;
                      if ( MappingSize < 0 )
                        goto LABEL_52;
                      v38 = LocaleName.Length >> 1;
                      v30 = v54;
                    }
                    else
                    {
                      v38 = 0;
                      Src[0] = 0;
                    }
                    v58 = (const wchar_t *)v38;
                    ms_exc.registration.TryLevel = 1;
                    if ( v38 >= *v30 || !v45 )
                    {
                      *v30 = v38 + 1;
                      v66 = -1073741789;
                      ms_exc.registration.TryLevel = -2;
                      goto LABEL_52;
                    }
                    v39 = 2 * v38;
                    LODWORD(v42) = 2 * v38;
                    memcpy(v45, Src, v42);
                    *v54 = (unsigned int)v58 + 1;
                    *(_WORD *)((char *)v45 + v39) = 0;
                    ms_exc.registration.TryLevel = -2;
                    v13 = Size_4;
                  }
LABEL_49:
                  v22 = v67;
                  break;
                }
              }
              if ( !v29 || (unsigned __int8)LdrpResCompareServiceChecksum(ResourceDllBase, ResourceOffset) )
                goto LABEL_49;
              goto LABEL_122;
            }
          }
          else if ( v34 != 2 )
          {
            MappingSize = -1073741811;
            v66 = -1073741811;
          }
        }
        if ( v22 && (v10 & 0x200000) == 0 )
        {
          LdrpResReportResourceAccessInternal(ResourceDllBase, ResourceOffset, v62, a5);
          v22 = v67;
        }
        if ( MappingSize < 0 )
        {
          if ( v22 )
          {
            if ( WORD2(ResourceOffset)
              || (IsReparsePoint = LdrpIsReparsePoint(DllHandle), v22 = v67, IsReparsePoint < 0) )
            {
              if ( (v13 & 0x40000) != 0 )
              {
                v22 = 0;
                v67 = 0;
              }
              else
              {
                v13 |= 0x20000u;
                Size_4 = v13;
              }
            }
            else
            {
              v13 |= 0x400000u;
              Size_4 = v13;
              BYTE4(ResourceOffset) = 1;
            }
          }
          if ( v22 )
            continue;
        }
        goto LABEL_52;
      }
    }
  }
  return result;
}
