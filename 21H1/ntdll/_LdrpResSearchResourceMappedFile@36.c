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

int __fastcall LdrpResSearchResourceMappedFile(
        int a1,
        int a2,
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
  bool v16; // cl
  __int16 v17; // dx
  int RCConfig; // eax
  int v19; // ecx
  bool v20; // dl
  int result; // eax
  bool v22; // cl
  int MappingSize; // edi
  unsigned int i; // edx
  unsigned int *v25; // edx
  const wchar_t *v26; // edx
  int v27; // edi
  int v28; // edx
  bool v29; // al
  unsigned int *v30; // ecx
  _DWORD *v31; // eax
  int v32; // eax
  __int16 v33; // dx
  int v34; // eax
  int v35; // eax
  int v36; // eax
  unsigned int v37; // eax
  unsigned int v38; // eax
  int v39; // esi
  signed int IsReparsePoint; // eax
  int v41; // eax
  _DWORD v42[2]; // [esp+10h] [ebp-348h] BYREF
  _WORD v43[2]; // [esp+18h] [ebp-340h] BYREF
  _WORD *v44; // [esp+1Ch] [ebp-33Ch]
  void *v45; // [esp+28h] [ebp-330h]
  unsigned int v46; // [esp+2Ch] [ebp-32Ch] BYREF
  unsigned int *v47; // [esp+30h] [ebp-328h]
  unsigned int *v48; // [esp+34h] [ebp-324h]
  int v49; // [esp+38h] [ebp-320h]
  int v50; // [esp+3Ch] [ebp-31Ch] BYREF
  int v51; // [esp+40h] [ebp-318h] BYREF
  const wchar_t *v52; // [esp+44h] [ebp-314h] BYREF
  const wchar_t *v53; // [esp+48h] [ebp-310h] BYREF
  unsigned int *v54; // [esp+4Ch] [ebp-30Ch]
  unsigned int v55; // [esp+50h] [ebp-308h]
  int **v56; // [esp+54h] [ebp-304h]
  int v57; // [esp+58h] [ebp-300h] BYREF
  const wchar_t *v58; // [esp+5Ch] [ebp-2FCh]
  int v59; // [esp+60h] [ebp-2F8h] BYREF
  int v60; // [esp+64h] [ebp-2F4h]
  int v61; // [esp+68h] [ebp-2F0h]
  int *v62; // [esp+6Ch] [ebp-2ECh]
  int v63; // [esp+70h] [ebp-2E8h]
  int v64; // [esp+74h] [ebp-2E4h] BYREF
  int v65; // [esp+78h] [ebp-2E0h] BYREF
  char v66; // [esp+7Ch] [ebp-2DCh]
  char v67; // [esp+7Dh] [ebp-2DBh]
  bool v68; // [esp+7Eh] [ebp-2DAh]
  bool v69; // [esp+7Fh] [ebp-2D9h]
  int v70; // [esp+80h] [ebp-2D8h]
  bool v71; // [esp+87h] [ebp-2D1h]
  unsigned __int16 v72; // [esp+88h] [ebp-2D0h] BYREF
  _WORD v73[258]; // [esp+8Ch] [ebp-2CCh]
  _WORD Src[86]; // [esp+290h] [ebp-C8h] BYREF
  CPPEH_RECORD ms_exc; // [esp+340h] [ebp-18h]

  v60 = a2;
  v63 = a1;
  v9 = a4;
  v62 = a4;
  v56 = a6;
  v47 = a7;
  v45 = a8;
  v54 = a9;
  v64 = 0;
  v50 = 0;
  v51 = 0;
  v52 = 0;
  v53 = 0;
  v69 = 0;
  v10 = a3;
  v68 = (a3 & 0x40) != 0;
  v67 = 0;
  v66 = 0;
  v57 = 4980810;
  v58 = L"LdrpResSearchResourceMappedFile Enter";
  v42[0] = 4849736;
  v42[1] = L"LdrpResSearchResourceMappedFile Exit";
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
  v61 = 0;
  v14 = 0;
  if ( (a3 & 0x80u) != 0 )
  {
    v13 = 128;
    v61 = 128;
  }
  v15 = a5;
  if ( a5 == 3 )
  {
    v14 = *((_WORD *)v9 + 4);
    ms_exc.registration.TryLevel = 0;
    v16 = (*v9 & 0xFFFF0000) != 0 && !_wcsicmp((const wchar_t *)*v9, L"MUI");
    v69 = v16;
    ms_exc.registration.TryLevel = -2;
    v15 = 3;
  }
  else
  {
    v16 = v69;
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
      RCConfig = LdrResGetRCConfig(v63, v60, 0, a3, 1);
      v70 = RCConfig;
      if ( RCConfig >= 0 )
      {
        v13 |= LdrIsResItemExist(v63, (wchar_t **)v62, v19, a3);
      }
      else
      {
        if ( RCConfig != -1073741686 )
          goto LABEL_52;
        v13 |= 0x80000u;
      }
      v61 = v13;
    }
  }
  if ( (v13 & 0x60000) == 0x60000 )
  {
    v70 = -1073741686;
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
      LdrpTraceLoadMUIDll(v42, *(unsigned __int8 *)v41);
    }
    return v70;
  }
  v20 = (~v13 & 0x20000) != 0 && (~v13 & 0x80000) != 0 && (~(_BYTE)v10 & 0x10) != 0;
  v71 = v20;
  v72 = 1;
  v73[0] = 0;
  if ( !v20 && a5 != 3 || (v10 & 0x10) != 0 && (v10 & 0x20) != 0 )
    goto LABEL_146;
  if ( (v10 & 4) != 0 )
  {
    v13 |= 4u;
    v61 = v13;
  }
  result = LdrResFallbackLangList(v63, v60, v14, v13, &v72);
  if ( result >= 0 || (v10 & 0x1000) == 0 )
  {
LABEL_146:
    if ( (v13 & 0x80000) == 0 && (~v13 & 0x40000) == 0 && (v10 & 0x10) == 0
      || (result = LdrpResGetResourceDirectory(v63, v60, v10, &v50, &v52), result >= 0) )
    {
      v22 = v71;
      while ( 1 )
      {
        if ( (v13 & 0x20000) != 0 )
        {
          v22 = 0;
          v71 = 0;
        }
        MappingSize = 0;
        v70 = 0;
        v65 = 0;
        LOWORD(v59) = 0;
        for ( i = 0; ; i = v55 + 1 )
        {
          v55 = i;
          if ( i >= v72 )
            break;
          if ( !v22 )
            goto LABEL_35;
          v64 = 0;
          v65 = 0;
          v33 = v73[4 * i];
          v34 = *(_DWORD *)&v73[4 * v55 + 2];
          if ( v33 )
          {
            if ( v34 == 10 )
            {
              MappingSize = -1073741811;
              v70 = -1073741811;
              continue;
            }
            LOWORD(v59) = v33;
            v35 = LdrLoadAlternateResourceModuleEx(v63, v33, &v64, &v65, v13 | 0x1000);
            MappingSize = v35;
            v70 = v35;
            if ( v35 < 0 )
            {
              if ( v35 == -1073741772 || v35 == -1073741766 )
              {
                MappingSize = -1073020927;
                v70 = -1073020927;
              }
LABEL_122:
              v22 = v71;
              continue;
            }
            v67 = 1;
            if ( !v65 )
            {
              MappingSize = LdrpResGetMappingSize(v64, (unsigned int *)&v65, 512, 1);
              v70 = MappingSize;
            }
            if ( (v10 & 0x1000) != 0 && MappingSize < 0 )
              goto LABEL_49;
            MappingSize = LdrpResGetResourceDirectory(v64, v65, v10, &v51, &v53);
            v70 = MappingSize;
            v22 = v71;
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
              v58 = v26;
              if ( v22 )
                v27 = v51;
              else
                v27 = v50;
              if ( v22 )
                v28 = v65;
              else
                v28 = v60;
              MappingSize = LdrpResSearchResourceInsideDirectory(
                              v28,
                              v27,
                              v58,
                              0,
                              v62,
                              a5,
                              &v72,
                              v56,
                              v48,
                              v49,
                              v22 ? 0 : &v59);
              v70 = MappingSize;
              if ( !v68 || (~v13 & 0x40000) == 0 )
                goto LABEL_46;
              v29 = v71;
              if ( MappingSize >= 0 )
              {
                if ( v56 && v71 )
                {
                  if ( v47 )
                    v37 = *v47;
                  else
                    v37 = v46;
                  MappingSize = LdrpFindMessageInAlternateModule(v64, *v56, v37, v62[3], 1);
                  v70 = MappingSize;
                  if ( MappingSize < 0 )
                  {
                    *v56 = 0;
                    if ( MappingSize == -1073741701 )
                      goto LABEL_52;
                  }
LABEL_46:
                  v29 = v71;
                }
                if ( MappingSize >= 0 )
                {
                  v30 = v54;
                  if ( v54 )
                  {
                    if ( (_WORD)v59 )
                    {
                      v44 = Src;
                      v43[1] = 172;
                      MappingSize = RtlLcidToLocaleName((unsigned __int16)v59, v43, 2, 0);
                      v70 = MappingSize;
                      if ( MappingSize < 0 )
                        goto LABEL_52;
                      v38 = v43[0] >> 1;
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
                      v70 = -1073741789;
                      ms_exc.registration.TryLevel = -2;
                      goto LABEL_52;
                    }
                    v39 = 2 * v38;
                    memcpy(v45, Src, 2 * v38);
                    *v54 = (unsigned int)v58 + 1;
                    *(_WORD *)((char *)v45 + v39) = 0;
                    ms_exc.registration.TryLevel = -2;
                    v13 = v61;
                  }
LABEL_49:
                  v22 = v71;
                  break;
                }
              }
              if ( !v29 || (unsigned __int8)LdrpResCompareServiceChecksum(v64, v65) )
                goto LABEL_49;
              goto LABEL_122;
            }
          }
          else if ( v34 != 2 )
          {
            MappingSize = -1073741811;
            v70 = -1073741811;
          }
        }
        if ( v22 && (v10 & 0x200000) == 0 )
        {
          LdrpResReportResourceAccessInternal(v64, v65, v62, a5);
          v22 = v71;
        }
        if ( MappingSize < 0 )
        {
          if ( v22 )
          {
            if ( v66 || v67 || (IsReparsePoint = LdrpIsReparsePoint(v63), v22 = v71, IsReparsePoint < 0) )
            {
              if ( (v13 & 0x40000) != 0 )
              {
                v22 = 0;
                v71 = 0;
              }
              else
              {
                v13 |= 0x20000u;
                v61 = v13;
              }
            }
            else
            {
              v13 |= 0x400000u;
              v61 = v13;
              v66 = 1;
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
