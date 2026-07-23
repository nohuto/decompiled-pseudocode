/*
 * XREFs of LdrpResSearchResourceMappedFile @ 0x14027B884
 * Callers:
 *     LdrResSearchResource @ 0x14065AFC0 (LdrResSearchResource.c)
 *     LdrResGetRCConfig @ 0x14077989C (LdrResGetRCConfig.c)
 * Callees:
 *     LdrpFindMessageInAlternateModule @ 0x140361BD8 (LdrpFindMessageInAlternateModule.c)
 *     LdrIsResItemExist @ 0x1403620F0 (LdrIsResItemExist.c)
 *     LdrLoadAlternateResourceModuleEx @ 0x1403625A4 (LdrLoadAlternateResourceModuleEx.c)
 *     DownLevelLangIDToLanguageName @ 0x140362A8C (DownLevelLangIDToLanguageName.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     _wcsicmp @ 0x1403CEAD0 (_wcsicmp.c)
 *     memmove @ 0x140409FC0 (memmove.c)
 *     memset @ 0x14040A280 (memset.c)
 *     LdrResFallbackLangList @ 0x140658DC0 (LdrResFallbackLangList.c)
 *     LdrpResGetMappingSize @ 0x14065B22C (LdrpResGetMappingSize.c)
 *     LdrpResSearchResourceInsideDirectory @ 0x14065B394 (LdrpResSearchResourceInsideDirectory.c)
 *     LdrpResGetResourceDirectory @ 0x14065C004 (LdrpResGetResourceDirectory.c)
 *     LdrResGetRCConfig @ 0x14077989C (LdrResGetRCConfig.c)
 */

__int64 __fastcall LdrpResSearchResourceMappedFile(
        void *a1,
        ULONG64 a2,
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
  int v16; // edx
  int MappingSize; // edi
  unsigned int v18; // r12d
  int v19; // ecx
  unsigned int i; // r14d
  char v21; // di
  LANGID *v22; // r11
  int v23; // r10d
  __int64 *v24; // rax
  __int64 v25; // rdx
  __int64 v26; // r9
  ULONG64 v27; // r8
  PVOID v28; // rcx
  int v29; // eax
  _DWORD *v30; // r14
  __int64 result; // rax
  int v32; // ecx
  int v33; // eax
  __int16 v34; // cx
  int RCConfig; // eax
  NTSTATUS v36; // eax
  ULONG64 v37; // rdx
  __int64 v38; // r8
  __int64 v39; // rsi
  _WORD *v40; // r15
  char v41; // [rsp+70h] [rbp-388h]
  LANGID v42; // [rsp+74h] [rbp-384h] BYREF
  int v43; // [rsp+78h] [rbp-380h]
  bool v44; // [rsp+7Ch] [rbp-37Ch]
  ULONG_PTR ResourceOffset; // [rsp+80h] [rbp-378h] BYREF
  PVOID ResourceDllBase; // [rsp+88h] [rbp-370h] BYREF
  PVOID DllHandle; // [rsp+90h] [rbp-368h]
  int v48; // [rsp+98h] [rbp-360h]
  int v49; // [rsp+9Ch] [rbp-35Ch]
  ULONG64 Size; // [rsp+A0h] [rbp-358h]
  __int64 v51; // [rsp+A8h] [rbp-350h] BYREF
  _QWORD *v52; // [rsp+B0h] [rbp-348h]
  __int64 v53; // [rsp+B8h] [rbp-340h] BYREF
  __int64 v54; // [rsp+C0h] [rbp-338h] BYREF
  __int64 v55; // [rsp+C8h] [rbp-330h]
  __int64 v56; // [rsp+D0h] [rbp-328h]
  __int64 *v57; // [rsp+D8h] [rbp-320h]
  __int64 v58; // [rsp+E0h] [rbp-318h]
  void *v59; // [rsp+E8h] [rbp-310h]
  _DWORD v60[132]; // [rsp+F0h] [rbp-308h] BYREF
  _WORD Src[88]; // [rsp+300h] [rbp-F8h] BYREF

  Size = a2;
  DllHandle = a1;
  v52 = a6;
  v57 = a7;
  v59 = a8;
  v58 = a9;
  v55 = 0LL;
  v56 = 0LL;
  v53 = 0LL;
  v54 = 0LL;
  memset(v60, 0, 0x208uLL);
  v11 = 0;
  v48 = a3 & 0x40;
  v51 = 0LL;
  v12 = 0;
  v13 = a3 & 0x80;
  v14 = a5;
  if ( a5 == 3 )
  {
    v12 = *(_WORD *)(a4 + 16);
    v11 = (*(_QWORD *)a4 & 0xFFFFFFFFFFFF0000uLL) != 0 && !wcsicmp(*(const wchar_t **)a4, L"MUI");
    v44 = v11;
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
        RCConfig = LdrResGetRCConfig((_DWORD)DllHandle, Size, 0, a3, 1);
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
          v15 = v13 | LdrIsResItemExist(DllHandle, a4, 0LL);
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
  LOWORD(v60[0]) = 1;
  LOWORD(v60[1]) = 0;
  if ( ((~v15 & 0x80000) != 0 && (~(_BYTE)a3 & 0x10) != 0 && (~v15 & 0x20000) != 0 || v14 == 3)
    && ((a3 & 0x10) == 0 || (a3 & 0x20) == 0) )
  {
    v32 = a3;
    v33 = v15 | 4;
    if ( (a3 & 4) == 0 )
      v33 = v15;
    v15 = v33;
    LOBYTE(v32) = a3 & 4;
    result = LdrResFallbackLangList(v32, v16, v12, v33, (__int64)v60);
    if ( (int)result < 0 && (a3 & 0x1000) != 0 )
      return result;
  }
  if ( (a3 & 0x10) != 0 || (~v15 & 0x40000) != 0 || (v15 & 0x80000) != 0 )
  {
    result = LdrpResGetResourceDirectory((ULONGLONG)DllHandle, Size, (__int64)&v53);
    if ( (int)result < 0 )
      return result;
  }
  MappingSize = 0;
  v18 = 0;
LABEL_15:
  if ( v18 >= LOWORD(v60[0]) )
    return (unsigned int)MappingSize;
  ResourceDllBase = 0LL;
  ResourceOffset = 0LL;
  v42 = v60[2 * v18 + 1];
  v19 = v60[2 * v18 + 2];
  v43 = v19;
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
      if ( (v15 & 0xA0000) == 0 && (a3 & 0x10) == 0 && v42 && PnPBootDriversInitialized )
      {
        v41 = 1;
        v36 = LdrLoadAlternateResourceModuleEx(DllHandle, v42, &ResourceDllBase, &ResourceOffset, v15 | 0x1000);
        MappingSize = v36;
        if ( v36 < 0 )
        {
          if ( v36 == -1073741772 || v36 == -1073741766 )
            MappingSize = -1073020927;
        }
        else
        {
          v37 = ResourceOffset;
          if ( !ResourceOffset )
          {
            MappingSize = LdrpResGetMappingSize(ResourceDllBase, &ResourceOffset, 512LL);
            v37 = ResourceOffset;
          }
          if ( (a3 & 0x1000) != 0 && MappingSize < 0 )
            goto LABEL_48;
          MappingSize = LdrpResGetResourceDirectory((ULONGLONG)ResourceDllBase, v37, (__int64)&v54);
          if ( MappingSize >= 0 )
          {
            v21 = 1;
            goto LABEL_20;
          }
        }
      }
LABEL_46:
      v19 = v43;
      continue;
    }
    a3 |= 0x20u;
  }
  v21 = 0;
  v41 = 0;
LABEL_20:
  if ( (~(_BYTE)a3 & 2) != 0 && a5 > 2 )
    *(_QWORD *)(a4 + 16) = v42;
  v51 = 0LL;
  v22 = &v42;
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
  v24 = &v51;
  if ( v57 )
    v24 = v57;
  v25 = v53;
  if ( v21 )
    v25 = v54;
  v26 = v55;
  if ( v21 )
    v26 = v56;
  v27 = Size;
  if ( v21 )
    v27 = ResourceOffset;
  v28 = DllHandle;
  if ( v21 )
    v28 = ResourceDllBase;
  v29 = LdrpResSearchResourceInsideDirectory(v28, 0LL, v27, v26, v25, 0LL, a4, a5, v60, v52, v24, v23, v22);
  MappingSize = v29;
  if ( v48 && v29 >= 0 && v52 && v41 )
  {
    if ( v57 )
      v38 = *v57;
    else
      LODWORD(v38) = v51;
    MappingSize = LdrpFindMessageInAlternateModule((_DWORD)ResourceDllBase, *v52, v38, *(_DWORD *)(a4 + 24), 1);
    if ( MappingSize < 0 )
    {
      *v52 = 0LL;
      if ( MappingSize == -1073741701 )
        return (unsigned int)MappingSize;
    }
  }
  if ( MappingSize < 0 )
    goto LABEL_46;
  v30 = (_DWORD *)v58;
  if ( !v58 )
    return (unsigned int)MappingSize;
  if ( v42 )
  {
    if ( (unsigned int)DownLevelLangIDToLanguageName(v42, Src, 86LL) )
    {
      v39 = -1LL;
      do
        ++v39;
      while ( Src[v39] );
      goto LABEL_103;
    }
    return (unsigned int)-1073741823;
  }
  else
  {
    Src[0] = 0;
    LODWORD(v39) = 0;
LABEL_103:
    if ( (unsigned int)v39 < *v30 && (v40 = v59) != 0LL )
    {
      memmove(v59, Src, 2LL * (unsigned int)v39);
      *v30 = v39 + 1;
      v40[(unsigned int)v39] = 0;
    }
    else
    {
      *v30 = v39 + 1;
      MappingSize = -1073741789;
      v49 = -1073741789;
    }
  }
  return (unsigned int)MappingSize;
}
