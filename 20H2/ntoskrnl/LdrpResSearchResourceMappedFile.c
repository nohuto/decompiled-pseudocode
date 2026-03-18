/*
 * XREFs of LdrpResSearchResourceMappedFile @ 0x1402FDBB4
 * Callers:
 *     LdrResSearchResource @ 0x1406AE480 (LdrResSearchResource.c)
 *     LdrResGetRCConfig @ 0x140787E9C (LdrResGetRCConfig.c)
 * Callees:
 *     LdrpFindMessageInAlternateModule @ 0x1402FC794 (LdrpFindMessageInAlternateModule.c)
 *     LdrIsResItemExist @ 0x1402FCABC (LdrIsResItemExist.c)
 *     LdrLoadAlternateResourceModuleEx @ 0x1402FD0B0 (LdrLoadAlternateResourceModuleEx.c)
 *     DownLevelLangIDToLanguageName @ 0x140364D34 (DownLevelLangIDToLanguageName.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     _wcsicmp @ 0x1403D1760 (_wcsicmp.c)
 *     memmove @ 0x140411040 (memmove.c)
 *     memset @ 0x140411300 (memset.c)
 *     LdrpResGetMappingSize @ 0x1406AE6EC (LdrpResGetMappingSize.c)
 *     LdrpResSearchResourceInsideDirectory @ 0x1406AE854 (LdrpResSearchResourceInsideDirectory.c)
 *     LdrpResGetResourceDirectory @ 0x1406AF4C4 (LdrpResGetResourceDirectory.c)
 *     LdrResFallbackLangList @ 0x1406AF85C (LdrResFallbackLangList.c)
 *     LdrResGetRCConfig @ 0x140787E9C (LdrResGetRCConfig.c)
 */

__int64 __fastcall LdrpResSearchResourceMappedFile(
        ULONGLONG a1,
        __int64 a2,
        int a3,
        __int64 a4,
        int a5,
        unsigned int **a6,
        __int64 *a7,
        void *a8,
        __int64 a9)
{
  bool v11; // dl
  unsigned __int16 v12; // r12
  int v13; // r14d
  int v14; // edi
  int v15; // esi
  int v16; // edx
  int MappingSize; // edi
  unsigned int v18; // r12d
  int v19; // ecx
  unsigned int i; // r14d
  char v21; // di
  unsigned __int16 *v22; // r11
  int v23; // r10d
  __int64 *v24; // rax
  __int64 v25; // rdx
  __int64 v26; // r9
  __int64 v27; // r8
  ULONGLONG v28; // rcx
  int v29; // eax
  _DWORD *v30; // r14
  __int64 result; // rax
  int v32; // ecx
  int v33; // eax
  __int16 v34; // cx
  int RCConfig; // eax
  int v36; // eax
  unsigned __int64 v37; // r8
  __int64 v38; // rsi
  _WORD *v39; // r15
  char v40; // [rsp+70h] [rbp-388h]
  unsigned __int16 v41; // [rsp+74h] [rbp-384h] BYREF
  int v42; // [rsp+78h] [rbp-380h]
  bool v43; // [rsp+7Ch] [rbp-37Ch]
  __int64 v44; // [rsp+80h] [rbp-378h] BYREF
  ULONGLONG v45; // [rsp+88h] [rbp-370h] BYREF
  ULONGLONG ullAugend; // [rsp+90h] [rbp-368h]
  int v47; // [rsp+98h] [rbp-360h]
  int v48; // [rsp+9Ch] [rbp-35Ch]
  __int64 v49; // [rsp+A0h] [rbp-358h]
  __int64 v50; // [rsp+A8h] [rbp-350h] BYREF
  unsigned int **v51; // [rsp+B0h] [rbp-348h]
  __int64 v52; // [rsp+B8h] [rbp-340h] BYREF
  __int64 v53; // [rsp+C0h] [rbp-338h] BYREF
  __int64 v54; // [rsp+C8h] [rbp-330h]
  __int64 v55; // [rsp+D0h] [rbp-328h]
  __int64 *v56; // [rsp+D8h] [rbp-320h]
  __int64 v57; // [rsp+E0h] [rbp-318h]
  void *v58; // [rsp+E8h] [rbp-310h]
  _DWORD v59[132]; // [rsp+F0h] [rbp-308h] BYREF
  _WORD Src[88]; // [rsp+300h] [rbp-F8h] BYREF

  v49 = a2;
  ullAugend = a1;
  v51 = a6;
  v56 = a7;
  v58 = a8;
  v57 = a9;
  v54 = 0LL;
  v55 = 0LL;
  v52 = 0LL;
  v53 = 0LL;
  memset(v59, 0, 0x208uLL);
  v11 = 0;
  v47 = a3 & 0x40;
  v50 = 0LL;
  v12 = 0;
  v13 = a3 & 0x80;
  v14 = a5;
  if ( a5 == 3 )
  {
    v12 = *(_WORD *)(a4 + 16);
    v11 = (*(_QWORD *)a4 & 0xFFFFFFFFFFFF0000uLL) != 0 && !wcsicmp(*(const wchar_t **)a4, L"MUI");
    v43 = v11;
  }
  v15 = a3 & 0x80;
  if ( (a3 & 0x10) == 0 )
  {
    v15 = a3 & 0x80;
    if ( a5 >= 1 && a5 <= 3 )
    {
      if ( a5 == 3 )
        v34 = *(_WORD *)(a4 + 16);
      else
        v34 = 0;
      if ( (a3 & 0x1000000) == 0
        && (((*(_QWORD *)a4 - 16LL) & 0xFFFFFFFFFFFFFFF7uLL) != 0 && !v11
         || (~(_BYTE)a3 & 8) == 0
         || (v34 & 0xF3FF) != 0
         || v34 == 3072) )
      {
        RCConfig = LdrResGetRCConfig(ullAugend, v49, 0, a3, 1);
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
          v15 = v13 | LdrIsResItemExist(ullAugend, (_QWORD *)a4, 0LL);
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
  if ( (v15 & 0x60000) == 0x60000 )
    return (unsigned int)-1073741686;
  v16 = ~v15;
  LOWORD(v59[0]) = 1;
  LOWORD(v59[1]) = 0;
  if ( ((~v15 & 0x80000) != 0 && (~(_BYTE)a3 & 0x10) != 0 && (~v15 & 0x20000) != 0 || v14 == 3)
    && ((a3 & 0x10) == 0 || (a3 & 0x20) == 0) )
  {
    v32 = a3;
    v33 = v15 | 4;
    if ( (a3 & 4) == 0 )
      v33 = v15;
    v15 = v33;
    LOBYTE(v32) = a3 & 4;
    result = LdrResFallbackLangList(v32, v16, v12, v33, (__int64)v59);
    if ( (int)result < 0 && (a3 & 0x1000) != 0 )
      return result;
  }
  if ( (a3 & 0x10) != 0 || (~v15 & 0x40000) != 0 || (v15 & 0x80000) != 0 )
  {
    result = LdrpResGetResourceDirectory(ullAugend, (__int64)&v52);
    if ( (int)result < 0 )
      return result;
  }
  MappingSize = 0;
  v18 = 0;
LABEL_15:
  if ( v18 >= LOWORD(v59[0]) )
    return (unsigned int)MappingSize;
  v45 = 0LL;
  v44 = 0LL;
  v41 = v59[2 * v18 + 1];
  v19 = v59[2 * v18 + 2];
  v42 = v19;
  for ( i = 0; ; ++i )
  {
    if ( i >= 2 )
    {
LABEL_48:
      ++v18;
      goto LABEL_15;
    }
    if ( i )
      break;
    if ( v19 != 9 )
    {
      if ( (v15 & 0xA0000) == 0 && (a3 & 0x10) == 0 && v41 && PnPBootDriversInitialized )
      {
        v40 = 1;
        v36 = LdrLoadAlternateResourceModuleEx(ullAugend, v41, &v45, &v44, v15 | 0x1000u);
        MappingSize = v36;
        if ( v36 < 0 )
        {
          if ( v36 == -1073741772 || v36 == -1073741766 )
            MappingSize = -1073020927;
        }
        else
        {
          if ( !v44 )
            MappingSize = LdrpResGetMappingSize(v45, &v44, 512LL);
          if ( (a3 & 0x1000) != 0 && MappingSize < 0 )
            goto LABEL_48;
          MappingSize = LdrpResGetResourceDirectory(v45, (__int64)&v53);
          if ( MappingSize >= 0 )
          {
            v21 = 1;
            goto LABEL_20;
          }
        }
      }
LABEL_46:
      v19 = v42;
      continue;
    }
    a3 |= 0x20u;
  }
  v21 = 0;
  v40 = 0;
LABEL_20:
  if ( (~(_BYTE)a3 & 2) != 0 && a5 > 2 )
    *(_QWORD *)(a4 + 16) = v41;
  v50 = 0LL;
  v22 = &v41;
  if ( v21 )
    v22 = 0LL;
  v23 = a3;
  if ( v21 )
  {
    v23 = a3 | 0x20;
  }
  else if ( (a3 & 0x20) == 0 )
  {
    v23 = a3 | 4;
  }
  v24 = &v50;
  if ( v56 )
    v24 = v56;
  v25 = v52;
  if ( v21 )
    v25 = v53;
  v26 = v54;
  if ( v21 )
    v26 = v55;
  v27 = v49;
  if ( v21 )
    v27 = v44;
  v28 = ullAugend;
  if ( v21 )
    v28 = v45;
  v29 = LdrpResSearchResourceInsideDirectory(v28, 0LL, v27, v26, v25, 0LL, a4, a5, v59, v51, v24, v23, v22);
  MappingSize = v29;
  if ( v47 && v29 >= 0 && v51 && v40 )
  {
    v37 = v56 ? *v56 : v50;
    MappingSize = LdrpFindMessageInAlternateModule(v45, *v51, v37, *(_DWORD *)(a4 + 24), 1);
    if ( MappingSize < 0 )
    {
      *v51 = 0LL;
      if ( MappingSize == -1073741701 )
        return (unsigned int)MappingSize;
    }
  }
  if ( MappingSize < 0 )
    goto LABEL_46;
  v30 = (_DWORD *)v57;
  if ( !v57 )
    return (unsigned int)MappingSize;
  if ( v41 )
  {
    if ( (unsigned int)DownLevelLangIDToLanguageName(v41, Src, 86LL, 2LL) )
    {
      v38 = -1LL;
      do
        ++v38;
      while ( Src[v38] );
      goto LABEL_103;
    }
    return (unsigned int)-1073741823;
  }
  else
  {
    Src[0] = 0;
    LODWORD(v38) = 0;
LABEL_103:
    if ( (unsigned int)v38 < *v30 && (v39 = v58) != 0LL )
    {
      memmove(v58, Src, 2LL * (unsigned int)v38);
      *v30 = v38 + 1;
      v39[(unsigned int)v38] = 0;
    }
    else
    {
      *v30 = v38 + 1;
      MappingSize = -1073741789;
      v48 = -1073741789;
    }
  }
  return (unsigned int)MappingSize;
}
