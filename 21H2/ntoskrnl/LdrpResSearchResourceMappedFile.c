/*
 * XREFs of LdrpResSearchResourceMappedFile @ 0x140206200
 * Callers:
 *     LdrResSearchResource @ 0x140673120 (LdrResSearchResource.c)
 *     LdrResGetRCConfig @ 0x1406E3AE0 (LdrResGetRCConfig.c)
 * Callees:
 *     LdrLoadAlternateResourceModuleEx @ 0x1402D708C (LdrLoadAlternateResourceModuleEx.c)
 *     LdrIsResItemExist @ 0x1402D7740 (LdrIsResItemExist.c)
 *     LdrpFindMessageInAlternateModule @ 0x1402D7C70 (LdrpFindMessageInAlternateModule.c)
 *     DownLevelLangIDToLanguageName @ 0x140372644 (DownLevelLangIDToLanguageName.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     _wcsicmp @ 0x1403E1490 (_wcsicmp.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     LdrpResGetMappingSize @ 0x1406734EC (LdrpResGetMappingSize.c)
 *     LdrpResGetResourceDirectory @ 0x14067368C (LdrpResGetResourceDirectory.c)
 *     LdrResFallbackLangList @ 0x1406759F8 (LdrResFallbackLangList.c)
 *     LdrResGetRCConfig @ 0x1406E3AE0 (LdrResGetRCConfig.c)
 *     LdrpResSearchResourceInsideDirectory @ 0x1407D38A8 (LdrpResSearchResourceInsideDirectory.c)
 */

__int64 __fastcall LdrpResSearchResourceMappedFile(
        ULONGLONG a1,
        __int64 a2,
        int a3,
        __int64 a4,
        int a5,
        _QWORD *a6,
        __int64 *a7,
        void *a8,
        __int64 a9)
{
  bool v11; // dl
  unsigned __int16 v12; // r12
  int v13; // r14d
  int v14; // edi
  int v15; // esi
  int v16; // ecx
  int v17; // edx
  int MappingSize; // edi
  unsigned int v19; // r12d
  int v20; // ecx
  unsigned int i; // r14d
  char v22; // di
  unsigned __int16 *v23; // r11
  int v24; // r10d
  __int64 *v25; // rax
  __int64 v26; // rdx
  __int64 v27; // r9
  __int64 v28; // r8
  ULONGLONG v29; // rcx
  int v30; // eax
  _DWORD *v31; // r14
  __int64 result; // rax
  __int16 v33; // cx
  int RCConfig; // eax
  int AlternateResourceModule; // eax
  __int64 v36; // r8
  __int64 v37; // rsi
  _WORD *v38; // r15
  char v39; // [rsp+70h] [rbp-388h]
  unsigned __int16 v40; // [rsp+74h] [rbp-384h] BYREF
  int v41; // [rsp+78h] [rbp-380h]
  bool v42; // [rsp+7Ch] [rbp-37Ch]
  __int64 v43; // [rsp+80h] [rbp-378h] BYREF
  ULONGLONG v44; // [rsp+88h] [rbp-370h] BYREF
  ULONGLONG ullAugend; // [rsp+90h] [rbp-368h]
  int v46; // [rsp+98h] [rbp-360h]
  int v47; // [rsp+9Ch] [rbp-35Ch]
  __int64 v48; // [rsp+A0h] [rbp-358h]
  __int64 v49; // [rsp+A8h] [rbp-350h] BYREF
  _QWORD *v50; // [rsp+B0h] [rbp-348h]
  __int64 v51; // [rsp+B8h] [rbp-340h] BYREF
  __int64 v52; // [rsp+C0h] [rbp-338h] BYREF
  __int64 v53; // [rsp+C8h] [rbp-330h]
  __int64 v54; // [rsp+D0h] [rbp-328h]
  __int64 *v55; // [rsp+D8h] [rbp-320h]
  __int64 v56; // [rsp+E0h] [rbp-318h]
  void *v57; // [rsp+E8h] [rbp-310h]
  _DWORD v58[132]; // [rsp+F0h] [rbp-308h] BYREF
  _WORD Src[88]; // [rsp+300h] [rbp-F8h] BYREF

  v48 = a2;
  ullAugend = a1;
  v55 = a7;
  v50 = a6;
  v57 = a8;
  v56 = a9;
  v53 = 0LL;
  v54 = 0LL;
  v51 = 0LL;
  v52 = 0LL;
  memset(v58, 0, 0x206uLL);
  v11 = 0;
  v46 = a3 & 0x40;
  v49 = 0LL;
  v12 = 0;
  v13 = a3 & 0x80;
  v14 = a5;
  if ( a5 == 3 )
  {
    v12 = *(_WORD *)(a4 + 16);
    v11 = (*(_QWORD *)a4 & 0xFFFFFFFFFFFF0000uLL) != 0 && !wcsicmp(*(const wchar_t **)a4, L"MUI");
    v42 = v11;
  }
  v15 = a3 & 0x80;
  if ( (a3 & 0x10) == 0 )
  {
    v15 = a3 & 0x80;
    if ( a5 >= 1 && a5 <= 3 )
    {
      if ( a5 == 3 )
        v33 = *(_WORD *)(a4 + 16);
      else
        v33 = 0;
      if ( (a3 & 0x1000000) == 0
        && (((*(_QWORD *)a4 - 16LL) & 0xFFFFFFFFFFFFFFF7uLL) != 0 && !v11
         || (~(_BYTE)a3 & 8) == 0
         || (v33 & 0xF3FF) != 0
         || v33 == 3072) )
      {
        RCConfig = LdrResGetRCConfig(ullAugend, v48, 0, a3, 1);
        MappingSize = RCConfig;
        if ( RCConfig < 0 )
        {
          if ( RCConfig != -1073741686 )
            return (unsigned int)MappingSize;
          v15 = v13 | 0x80000;
          v14 = a5;
        }
        else
        {
          v15 = v13 | LdrIsResItemExist(ullAugend, a4, 0LL);
          v14 = a5;
        }
      }
      else
      {
        a3 |= 0x10u;
        v15 = v13;
      }
    }
  }
  v16 = 393216;
  if ( (v15 & 0x60000) == 0x60000 )
    return (unsigned int)-1073741686;
  v17 = ~v15;
  LOWORD(v58[0]) = 1;
  LOWORD(v58[1]) = 0;
  LOBYTE(v16) = (~v15 & 0x80000) != 0 && (~(_BYTE)a3 & 0x10) != 0;
  if ( (((unsigned __int8)v16 & ((~v15 & 0x20000) != 0)) != 0 || v14 == 3) && ((a3 & 0x10) == 0 || (a3 & 0x20) == 0) )
  {
    if ( (a3 & 4) != 0 )
      v15 |= 4u;
    result = LdrResFallbackLangList(v16, v17, v12, v15, (__int64)v58);
    if ( (int)result < 0 && (a3 & 0x1000) != 0 )
      return result;
  }
  if ( (a3 & 0x10) != 0 || (~v15 & 0x40000) != 0 || (v15 & 0x80000) != 0 )
  {
    result = LdrpResGetResourceDirectory(ullAugend, (__int64)&v51);
    if ( (int)result < 0 )
      return result;
  }
  MappingSize = 0;
  v19 = 0;
LABEL_15:
  if ( v19 >= LOWORD(v58[0]) )
    return (unsigned int)MappingSize;
  v44 = 0LL;
  v43 = 0LL;
  v40 = v58[2 * v19 + 1];
  v20 = v58[2 * v19 + 2];
  v41 = v20;
  for ( i = 0; ; ++i )
  {
    if ( i >= 2 )
    {
LABEL_48:
      ++v19;
      goto LABEL_15;
    }
    if ( i )
      break;
    if ( v20 != 9 )
    {
      if ( (v15 & 0xA0000) == 0 && (a3 & 0x10) == 0 && v40 && PnPBootDriversInitialized )
      {
        v39 = 1;
        AlternateResourceModule = LdrLoadAlternateResourceModuleEx(
                                    ullAugend,
                                    v40,
                                    (unsigned int)&v44,
                                    (unsigned int)&v43,
                                    v15 | 0x1000u);
        MappingSize = AlternateResourceModule;
        if ( AlternateResourceModule < 0 )
        {
          if ( AlternateResourceModule == -1073741772 || AlternateResourceModule == -1073741766 )
            MappingSize = -1073020927;
        }
        else
        {
          if ( !v43 )
            MappingSize = LdrpResGetMappingSize(v44, &v43, 512LL);
          if ( (a3 & 0x1000) != 0 && MappingSize < 0 )
            goto LABEL_48;
          MappingSize = LdrpResGetResourceDirectory(v44, (__int64)&v52);
          if ( MappingSize >= 0 )
          {
            v22 = 1;
            goto LABEL_20;
          }
        }
      }
LABEL_46:
      v20 = v41;
      continue;
    }
    a3 |= 0x20u;
  }
  v22 = 0;
  v39 = 0;
LABEL_20:
  if ( (~(_BYTE)a3 & 2) != 0 && a5 > 2 )
    *(_QWORD *)(a4 + 16) = v40;
  v49 = 0LL;
  v23 = &v40;
  if ( v22 )
    v23 = 0LL;
  v24 = a3;
  if ( v22 )
  {
    v24 = a3 | 0x20;
  }
  else if ( (a3 & 0x20) == 0 )
  {
    v24 = a3 | 4;
  }
  v25 = &v49;
  if ( v55 )
    v25 = v55;
  v26 = v51;
  if ( v22 )
    v26 = v52;
  v27 = v53;
  if ( v22 )
    v27 = v54;
  v28 = v48;
  if ( v22 )
    v28 = v43;
  v29 = ullAugend;
  if ( v22 )
    v29 = v44;
  v30 = LdrpResSearchResourceInsideDirectory(v29, 0LL, v28, v27, v26, 0LL, a4, a5, v58, v50, v25, v24, v23);
  MappingSize = v30;
  if ( v46 && v30 >= 0 && v50 && v39 )
  {
    if ( v55 )
      v36 = *v55;
    else
      LODWORD(v36) = v49;
    MappingSize = LdrpFindMessageInAlternateModule(v44, *v50, v36, *(_DWORD *)(a4 + 24), 1);
    if ( MappingSize < 0 )
    {
      *v50 = 0LL;
      if ( MappingSize == -1073741701 )
        return (unsigned int)MappingSize;
    }
  }
  if ( MappingSize < 0 )
    goto LABEL_46;
  v31 = (_DWORD *)v56;
  if ( !v56 )
    return (unsigned int)MappingSize;
  if ( v40 )
  {
    if ( (unsigned int)DownLevelLangIDToLanguageName(v40, Src, 86LL) )
    {
      v37 = -1LL;
      do
        ++v37;
      while ( Src[v37] );
      goto LABEL_103;
    }
    return (unsigned int)-1073741823;
  }
  else
  {
    Src[0] = 0;
    LODWORD(v37) = 0;
LABEL_103:
    if ( (unsigned int)v37 < *v31 && (v38 = v57) != 0LL )
    {
      memmove(v57, Src, 2LL * (unsigned int)v37);
      *v31 = v37 + 1;
      v38[(unsigned int)v37] = 0;
    }
    else
    {
      *v31 = v37 + 1;
      MappingSize = -1073741789;
      v47 = -1073741789;
    }
  }
  return (unsigned int)MappingSize;
}
