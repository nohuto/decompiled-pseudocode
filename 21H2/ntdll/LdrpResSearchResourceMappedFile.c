/*
 * XREFs of LdrpResSearchResourceMappedFile @ 0x180055BD4
 * Callers:
 *     LdrResSearchResource @ 0x1800554B0 (LdrResSearchResource.c)
 *     LdrResGetRCConfig @ 0x1800580E0 (LdrResGetRCConfig.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180024850 (RtlGetCurrentServiceSessionId.c)
 *     LdrIsResItemExist @ 0x180034BD4 (LdrIsResItemExist.c)
 *     LdrLoadAlternateResourceModuleEx @ 0x180034EA0 (LdrLoadAlternateResourceModuleEx.c)
 *     RtlLcidToLocaleName @ 0x18003B2F0 (RtlLcidToLocaleName.c)
 *     LdrpResReportResourceAccessInternal @ 0x180042CA4 (LdrpResReportResourceAccessInternal.c)
 *     LdrpIsReparsePoint @ 0x180053670 (LdrpIsReparsePoint.c)
 *     LdrpResGetResourceDirectory @ 0x180056300 (LdrpResGetResourceDirectory.c)
 *     LdrpResSearchResourceInsideDirectory @ 0x180056708 (LdrpResSearchResourceInsideDirectory.c)
 *     LdrpResGetMappingSize @ 0x1800578D0 (LdrpResGetMappingSize.c)
 *     LdrResFallbackLangList @ 0x180057BE8 (LdrResFallbackLangList.c)
 *     LdrResGetRCConfig @ 0x1800580E0 (LdrResGetRCConfig.c)
 *     LdrpFindMessageInAlternateModule @ 0x18006A618 (LdrpFindMessageInAlternateModule.c)
 *     __security_check_cookie @ 0x18008C940 (__security_check_cookie.c)
 *     _wcsicmp @ 0x18008E370 (_wcsicmp.c)
 *     memmove @ 0x1800A4480 (memmove.c)
 *     LdrpTraceLoadMUIDll @ 0x1800E1754 (LdrpTraceLoadMUIDll.c)
 */

__int64 __fastcall LdrpResSearchResourceMappedFile(
        void *a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        int a5,
        _QWORD *a6,
        __int64 *a7,
        void *a8,
        unsigned int *a9)
{
  unsigned int v10; // r15d
  __int64 v11; // rcx
  __int64 v12; // r12
  int v13; // ebx
  int v14; // esi
  int v15; // r14d
  bool v16; // dl
  bool v17; // r12
  PVOID v18; // rbx
  bool v19; // cl
  bool v20; // r12
  NTSTATUS MappingSize; // esi
  unsigned int v22; // ecx
  LANGID *v23; // r11
  int v24; // r10d
  __int64 *v25; // rax
  __int64 v26; // rdx
  int v27; // r9d
  int v28; // r8d
  int v29; // ecx
  int v30; // ebx
  __int64 v31; // r14
  __int64 result; // rax
  char v33; // al
  bool v34; // zf
  int v35; // eax
  unsigned int *v36; // rcx
  __int16 v37; // cx
  int RCConfig; // eax
  __int64 v39; // r8
  __int64 v40; // rax
  LANGID v41; // cx
  NTSTATUS v42; // eax
  __int64 v43; // r9
  __int64 v44; // rcx
  __int64 v45; // r8
  int v46; // ebx
  __int64 v47; // rax
  unsigned int v48; // r13d
  int v49; // [rsp+70h] [rbp-3D8h]
  char v50; // [rsp+74h] [rbp-3D4h]
  char v51; // [rsp+75h] [rbp-3D3h]
  char v52; // [rsp+76h] [rbp-3D2h]
  LANGID v53; // [rsp+78h] [rbp-3D0h] BYREF
  unsigned __int16 v54; // [rsp+7Ch] [rbp-3CCh]
  PVOID DllHandle; // [rsp+80h] [rbp-3C8h]
  ULONG_PTR ResourceOffset; // [rsp+88h] [rbp-3C0h] BYREF
  PVOID ResourceDllBase; // [rsp+90h] [rbp-3B8h] BYREF
  __int64 v58; // [rsp+98h] [rbp-3B0h]
  unsigned int v59; // [rsp+A0h] [rbp-3A8h]
  __int64 *v60; // [rsp+A8h] [rbp-3A0h]
  int v61; // [rsp+B0h] [rbp-398h]
  _QWORD *v62; // [rsp+B8h] [rbp-390h]
  unsigned int *v63; // [rsp+C0h] [rbp-388h]
  __int64 v64; // [rsp+C8h] [rbp-380h] BYREF
  __int64 v65; // [rsp+D0h] [rbp-378h] BYREF
  __int64 v66; // [rsp+D8h] [rbp-370h]
  __int64 v67; // [rsp+E0h] [rbp-368h]
  __int64 *v68; // [rsp+E8h] [rbp-360h]
  __int64 v69; // [rsp+F0h] [rbp-358h] BYREF
  void *v70; // [rsp+F8h] [rbp-350h]
  _QWORD v71[2]; // [rsp+100h] [rbp-348h] BYREF
  __int64 v72; // [rsp+110h] [rbp-338h] BYREF
  __int64 v73; // [rsp+118h] [rbp-330h] BYREF
  _UNICODE_STRING LocaleName; // [rsp+120h] [rbp-328h] BYREF
  int v75; // [rsp+130h] [rbp-318h] BYREF
  const wchar_t *v76; // [rsp+138h] [rbp-310h]
  _WORD v77[2]; // [rsp+140h] [rbp-308h] BYREF
  _WORD v78[262]; // [rsp+144h] [rbp-304h]
  _WORD Src[88]; // [rsp+350h] [rbp-F8h] BYREF

  v60 = (__int64 *)a4;
  v10 = a3;
  v58 = a2;
  DllHandle = a1;
  v62 = a6;
  v68 = a7;
  v70 = a8;
  v63 = a9;
  ResourceDllBase = 0LL;
  v66 = 0LL;
  v67 = 0LL;
  v64 = 0LL;
  v65 = 0LL;
  v50 = 0;
  v61 = a3 & 0x40;
  v51 = 0;
  v52 = 0;
  LODWORD(v71[0]) = 4980810;
  v71[1] = L"LdrpResSearchResourceMappedFile Enter";
  v75 = 4849736;
  v76 = L"LdrpResSearchResourceMappedFile Exit";
  if ( RtlGetCurrentServiceSessionId() )
    v11 = (__int64)NtCurrentPeb()->SharedData + 555;
  else
    v11 = 2147353477LL;
  if ( (*(_BYTE *)v11 & 1) != 0 )
  {
    v12 = 2147353476LL;
    if ( RtlGetCurrentServiceSessionId() )
      v44 = (__int64)NtCurrentPeb()->SharedData + 554;
    else
      v44 = 2147353476LL;
    LdrpTraceLoadMUIDll(v71, *(unsigned __int8 *)v44);
  }
  else
  {
    v12 = 2147353476LL;
  }
  v54 = 0;
  v13 = v10 & 0x80;
  v14 = a5;
  if ( a5 == 3 )
  {
    v54 = *(_WORD *)(a4 + 16);
    if ( (*(_QWORD *)a4 & 0xFFFFFFFFFFFF0000uLL) == 0
      || (v34 = wcsicmp(*(const wchar_t **)a4, L"MUI") == 0, v33 = 1, !v34) )
    {
      v33 = 0;
    }
    v50 = v33;
  }
  v15 = v10 & 0x80;
  if ( (v10 & 0x10) == 0 )
  {
    v15 = v10 & 0x80;
    if ( a5 >= 1 && a5 <= 3 )
    {
      if ( a5 == 3 )
        v37 = *((_WORD *)v60 + 8);
      else
        v37 = 0;
      if ( (v10 & 0x1000000) == 0
        && (((*v60 - 16) & 0xFFFFFFFFFFFFFFF7uLL) != 0 && !v50
         || (~(_BYTE)v10 & 8) == 0
         || (v37 & 0xF3FF) != 0
         || v37 == 3072) )
      {
        RCConfig = LdrResGetRCConfig((_DWORD)DllHandle, v58, 0, v10, 1);
        MappingSize = RCConfig;
        v49 = RCConfig;
        if ( RCConfig >= 0 )
        {
          v15 = v13 | LdrIsResItemExist(DllHandle, v60, v39, v10);
        }
        else
        {
          if ( RCConfig != -1073741686 )
          {
LABEL_39:
            v31 = 2147353477LL;
            goto LABEL_40;
          }
          v15 = v13 | 0x80000;
        }
        v14 = a5;
      }
      else
      {
        v10 |= 0x10u;
        v15 = v13;
      }
    }
  }
  if ( (v15 & 0x60000) == 0x60000 )
  {
    MappingSize = -1073741686;
    v49 = -1073741686;
    goto LABEL_39;
  }
  v16 = (~v15 & 0x20000) != 0 && (~v15 & 0x80000) != 0 && (~(_BYTE)v10 & 0x10) != 0;
  v17 = v16;
  v77[0] = 1;
  v78[0] = 0;
  if ( !v16 && v14 != 3 || (v10 & 0x10) != 0 && (v10 & 0x20) != 0 )
  {
    v18 = DllHandle;
  }
  else
  {
    v35 = v15 | 4;
    if ( (v10 & 4) == 0 )
      v35 = v15;
    v15 = v35;
    v18 = DllHandle;
    result = LdrResFallbackLangList((_DWORD)DllHandle, v58, v54, v35, (__int64)v77);
    if ( (int)result < 0 && (v10 & 0x1000) != 0 )
      return result;
  }
  if ( (v10 & 0x10) != 0 || (~v15 & 0x40000) != 0 || (v15 & 0x80000) != 0 )
  {
    result = LdrpResGetResourceDirectory(v18, (__int64)&v64);
    if ( (int)result < 0 )
      return result;
  }
LABEL_12:
  v19 = 0;
  if ( (v15 & 0x20000) == 0 )
    v19 = v17;
  v20 = v19;
  LOBYTE(v54) = v19;
  MappingSize = 0;
  v49 = 0;
  ResourceOffset = 0LL;
  v53 = 0;
  v22 = 0;
  while ( 1 )
  {
    v59 = v22;
    if ( v22 >= v77[0] )
    {
LABEL_92:
      v30 = a5;
LABEL_34:
      if ( v20 && (v10 & 0x200000) == 0 )
        LdrpResReportResourceAccessInternal(ResourceDllBase, ResourceOffset, v60, v30);
      if ( MappingSize >= 0 )
        goto LABEL_38;
      v17 = v54;
      if ( (_BYTE)v54 )
      {
        if ( v52 || v51 || (int)LdrpIsReparsePoint(DllHandle) < 0 )
        {
          if ( (v15 & 0x40000) != 0 )
            v17 = 0;
          else
            v15 |= 0x20000u;
        }
        else
        {
          v15 |= 0x400000u;
          v52 = 1;
        }
      }
      v18 = DllHandle;
      if ( !v17 )
        goto LABEL_38;
      goto LABEL_12;
    }
    if ( !v20 )
      break;
    ResourceDllBase = 0LL;
    ResourceOffset = 0LL;
    v40 = v22;
    v41 = v78[4 * v22];
    if ( !v41 )
    {
      if ( *(_DWORD *)&v78[4 * v40 + 2] == 2 )
        goto LABEL_125;
LABEL_84:
      MappingSize = -1073741811;
LABEL_85:
      v49 = MappingSize;
      goto LABEL_125;
    }
    if ( *(_DWORD *)&v78[4 * v40 + 2] == 10 )
      goto LABEL_84;
    v53 = v41;
    v42 = LdrLoadAlternateResourceModuleEx(v18, v41, &ResourceDllBase, &ResourceOffset, v15 | 0x1000);
    MappingSize = v42;
    v49 = v42;
    if ( v42 >= 0 )
    {
      v51 = 1;
      if ( !ResourceOffset )
      {
        LOBYTE(v43) = 1;
        MappingSize = LdrpResGetMappingSize(ResourceDllBase, &ResourceOffset, 512LL, v43);
        v49 = MappingSize;
      }
      if ( (v10 & 0x1000) != 0 && MappingSize < 0 )
        goto LABEL_92;
      MappingSize = LdrpResGetResourceDirectory(ResourceDllBase, (__int64)&v65);
      v49 = MappingSize;
      if ( MappingSize < 0 )
        goto LABEL_125;
      break;
    }
    if ( v42 == -1073741772 || v42 == -1073741766 )
    {
      MappingSize = -1073020927;
      goto LABEL_85;
    }
LABEL_125:
    v22 = v59 + 1;
    v18 = DllHandle;
  }
  v69 = 0LL;
  v23 = &v53;
  if ( v20 )
    v23 = 0LL;
  v24 = v10 | 0x20;
  if ( !v20 )
    v24 = v10;
  v25 = &v69;
  if ( v68 )
    v25 = v68;
  v26 = v64;
  if ( v20 )
    v26 = v65;
  v27 = v66;
  if ( v20 )
    v27 = v67;
  v28 = v58;
  if ( v20 )
    v28 = ResourceOffset;
  v29 = (int)v18;
  if ( v20 )
    v29 = (int)ResourceDllBase;
  v30 = a5;
  MappingSize = LdrpResSearchResourceInsideDirectory(
                  v29,
                  0,
                  v28,
                  v27,
                  v26,
                  0LL,
                  (__int64)v60,
                  a5,
                  (__int64)v77,
                  (__int64)v62,
                  (__int64)v25,
                  v24,
                  (__int64)v23);
  v49 = MappingSize;
  if ( v61 && (~v15 & 0x40000) != 0 )
  {
    if ( MappingSize < 0 )
    {
LABEL_33:
      if ( !v20 )
        goto LABEL_34;
      v46 = ResourceOffset;
      v71[0] = ResourceDllBase;
      if ( (int)LdrResGetRCConfig((_DWORD)DllHandle, v58, (unsigned int)&v73, 4096, 1) >= 0
        && (int)LdrResGetRCConfig(v71[0], v46, (unsigned int)&v72, 4096, 0) >= 0 )
      {
        v47 = *(_QWORD *)(v73 + 28) - *(_QWORD *)(v72 + 28);
        if ( !v47 )
          v47 = *(_QWORD *)(v73 + 36) - *(_QWORD *)(v72 + 36);
        if ( !v47 )
          goto LABEL_92;
      }
      goto LABEL_125;
    }
    if ( v62 && v20 )
    {
      if ( v68 )
        v45 = *v68;
      else
        LODWORD(v45) = v69;
      MappingSize = LdrpFindMessageInAlternateModule((_DWORD)ResourceDllBase, *v62, v45, *((_DWORD *)v60 + 6), 1);
      v49 = MappingSize;
      if ( MappingSize < 0 )
      {
        *v62 = 0LL;
        if ( MappingSize == -1073741701 )
          goto LABEL_38;
      }
    }
  }
  if ( MappingSize < 0 )
    goto LABEL_33;
  v36 = v63;
  if ( !v63 )
    goto LABEL_34;
  if ( v53 )
  {
    LocaleName.Buffer = Src;
    LocaleName.MaximumLength = 172;
    MappingSize = RtlLcidToLocaleName(v53, &LocaleName, 2u, 0);
    v49 = MappingSize;
    if ( MappingSize >= 0 )
    {
      v48 = LocaleName.Length >> 1;
      v36 = v63;
      goto LABEL_130;
    }
LABEL_38:
    v12 = 2147353476LL;
    goto LABEL_39;
  }
  Src[0] = 0;
  v48 = 0;
LABEL_130:
  if ( v48 < *v36 && v70 )
  {
    memmove(v70, Src, 2LL * v48);
    *v63 = v48 + 1;
    *((_WORD *)v70 + v48) = 0;
    v30 = a5;
    goto LABEL_34;
  }
  *v36 = v48 + 1;
  MappingSize = -1073741789;
  v49 = -1073741789;
  v12 = 2147353476LL;
  v31 = 2147353477LL;
LABEL_40:
  if ( RtlGetCurrentServiceSessionId() )
  {
    v31 = (__int64)NtCurrentPeb()->SharedData + 555;
    MappingSize = v49;
  }
  if ( (*(_BYTE *)v31 & 1) != 0 )
  {
    if ( RtlGetCurrentServiceSessionId() )
    {
      v12 = (__int64)NtCurrentPeb()->SharedData + 554;
      MappingSize = v49;
    }
    LdrpTraceLoadMUIDll(&v75, *(unsigned __int8 *)v12);
  }
  return (unsigned int)MappingSize;
}
