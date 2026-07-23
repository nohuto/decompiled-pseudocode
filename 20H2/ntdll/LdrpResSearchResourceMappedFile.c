/*
 * XREFs of LdrpResSearchResourceMappedFile @ 0x180048F4C
 * Callers:
 *     LdrResSearchResource @ 0x180048B80 (LdrResSearchResource.c)
 *     LdrResGetRCConfig @ 0x18004B370 (LdrResGetRCConfig.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180024850 (RtlGetCurrentServiceSessionId.c)
 *     LdrIsResItemExist @ 0x180034BD4 (LdrIsResItemExist.c)
 *     LdrLoadAlternateResourceModuleEx @ 0x180034EA0 (LdrLoadAlternateResourceModuleEx.c)
 *     RtlLcidToLocaleName @ 0x18003B2F0 (RtlLcidToLocaleName.c)
 *     LdrpResReportResourceAccessInternal @ 0x180042CE4 (LdrpResReportResourceAccessInternal.c)
 *     LdrpResGetResourceDirectory @ 0x180049670 (LdrpResGetResourceDirectory.c)
 *     LdrpResSearchResourceInsideDirectory @ 0x180049A78 (LdrpResSearchResourceInsideDirectory.c)
 *     LdrpResGetMappingSize @ 0x18004AC40 (LdrpResGetMappingSize.c)
 *     LdrResFallbackLangList @ 0x18004AE70 (LdrResFallbackLangList.c)
 *     LdrResGetRCConfig @ 0x18004B370 (LdrResGetRCConfig.c)
 *     LdrpFindMessageInAlternateModule @ 0x180069128 (LdrpFindMessageInAlternateModule.c)
 *     LdrpIsReparsePoint @ 0x180069FE4 (LdrpIsReparsePoint.c)
 *     __security_check_cookie @ 0x18008C340 (__security_check_cookie.c)
 *     _wcsicmp @ 0x18008DD70 (_wcsicmp.c)
 *     memmove @ 0x1800A3EC0 (memmove.c)
 *     LdrpTraceLoadMUIDll @ 0x1800E19DC (LdrpTraceLoadMUIDll.c)
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
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rcx
  __int64 v15; // r12
  int v16; // ebx
  int v17; // esi
  int v18; // r14d
  bool v19; // r12
  PVOID v20; // rbx
  bool v21; // cl
  bool v22; // r12
  NTSTATUS MappingSize; // esi
  unsigned int v24; // ecx
  LANGID *v25; // r11
  int v26; // r10d
  __int64 *v27; // rax
  __int64 v28; // rdx
  int v29; // r9d
  int v30; // r8d
  int v31; // ecx
  int v32; // ebx
  __int64 v33; // r14
  __int64 result; // rax
  char v35; // al
  bool v36; // zf
  int v37; // eax
  unsigned int *v38; // rcx
  __int16 v39; // cx
  int RCConfig; // eax
  __int64 v41; // rax
  LANGID v42; // cx
  NTSTATUS v43; // eax
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
    v14 = (__int64)NtCurrentPeb()->SharedData + 555;
  else
    v14 = 2147353477LL;
  if ( (*(_BYTE *)v14 & 1) != 0 )
  {
    v15 = 2147353476LL;
    if ( RtlGetCurrentServiceSessionId() )
      v44 = (__int64)NtCurrentPeb()->SharedData + 554;
    else
      v44 = 2147353476LL;
    LdrpTraceLoadMUIDll(v71, *(unsigned __int8 *)v44);
  }
  else
  {
    v15 = 2147353476LL;
  }
  v54 = 0;
  v16 = v10 & 0x80;
  v17 = a5;
  if ( a5 == 3 )
  {
    v54 = *(_WORD *)(a4 + 16);
    if ( (*(_QWORD *)a4 & 0xFFFFFFFFFFFF0000uLL) == 0
      || (v36 = wcsicmp(*(const wchar_t **)a4, L"MUI") == 0, v35 = 1, !v36) )
    {
      v35 = 0;
    }
    v50 = v35;
  }
  v18 = v10 & 0x80;
  if ( (v10 & 0x10) == 0 )
  {
    v18 = v10 & 0x80;
    if ( a5 >= 1 && a5 <= 3 )
    {
      if ( a5 == 3 )
        v39 = *((_WORD *)v60 + 8);
      else
        v39 = 0;
      if ( (v10 & 0x1000000) == 0
        && (((*v60 - 16) & 0xFFFFFFFFFFFFFFF7uLL) != 0 && !v50
         || (~(_BYTE)v10 & 8) == 0
         || (v39 & 0xF3FF) != 0
         || v39 == 3072) )
      {
        RCConfig = LdrResGetRCConfig((_DWORD)DllHandle, v58, 0, v10, 1);
        MappingSize = RCConfig;
        v49 = RCConfig;
        if ( RCConfig >= 0 )
        {
          v18 = v16 | LdrIsResItemExist(DllHandle, v60, v12, v10);
        }
        else
        {
          if ( RCConfig != -1073741686 )
          {
LABEL_39:
            v33 = 2147353477LL;
            goto LABEL_40;
          }
          v18 = v16 | 0x80000;
        }
        v17 = a5;
      }
      else
      {
        v10 |= 0x10u;
        v18 = v16;
      }
    }
  }
  if ( (v18 & 0x60000) == 0x60000 )
  {
    MappingSize = -1073741686;
    v49 = -1073741686;
    goto LABEL_39;
  }
  LOBYTE(v11) = (~v18 & 0x20000) != 0 && (~v18 & 0x80000) != 0 && (~(_BYTE)v10 & 0x10) != 0;
  v19 = (_BYTE)v11 != 0;
  v77[0] = 1;
  v78[0] = 0;
  if ( !(_BYTE)v11 && v17 != 3 || (v10 & 0x10) != 0 && (v10 & 0x20) != 0 )
  {
    v20 = DllHandle;
  }
  else
  {
    v37 = v18 | 4;
    if ( (v10 & 4) == 0 )
      v37 = v18;
    v18 = v37;
    v20 = DllHandle;
    result = LdrResFallbackLangList((_DWORD)DllHandle, v58, v54, v37, (__int64)v77);
    if ( (int)result < 0 && (v10 & 0x1000) != 0 )
      return result;
  }
  if ( (v10 & 0x10) != 0 || (~v18 & 0x40000) != 0 || (v18 & 0x80000) != 0 )
  {
    result = LdrpResGetResourceDirectory(v20, (__int64)&v64);
    if ( (int)result < 0 )
      return result;
  }
LABEL_12:
  v21 = 0;
  if ( (v18 & 0x20000) == 0 )
    v21 = v19;
  v22 = v21;
  LOBYTE(v54) = v21;
  MappingSize = 0;
  v49 = 0;
  ResourceOffset = 0LL;
  v53 = 0;
  v24 = 0;
  while ( 1 )
  {
    v59 = v24;
    if ( v24 >= v77[0] )
    {
LABEL_92:
      v32 = a5;
LABEL_34:
      if ( v22 && (v10 & 0x200000) == 0 )
        LdrpResReportResourceAccessInternal(ResourceDllBase, ResourceOffset, v60, v32);
      if ( MappingSize >= 0 )
        goto LABEL_38;
      v19 = v54;
      if ( (_BYTE)v54 )
      {
        if ( v52 || v51 || (int)LdrpIsReparsePoint(DllHandle, v11, v12, v13) < 0 )
        {
          if ( (v18 & 0x40000) != 0 )
            v19 = 0;
          else
            v18 |= 0x20000u;
        }
        else
        {
          v18 |= 0x400000u;
          v52 = 1;
        }
      }
      v20 = DllHandle;
      if ( !v19 )
        goto LABEL_38;
      goto LABEL_12;
    }
    if ( !v22 )
      break;
    ResourceDllBase = 0LL;
    ResourceOffset = 0LL;
    v41 = v24;
    v42 = v78[4 * v24];
    if ( !v42 )
    {
      if ( *(_DWORD *)&v78[4 * v41 + 2] == 2 )
        goto LABEL_125;
LABEL_84:
      MappingSize = -1073741811;
LABEL_85:
      v49 = MappingSize;
      goto LABEL_125;
    }
    if ( *(_DWORD *)&v78[4 * v41 + 2] == 10 )
      goto LABEL_84;
    v53 = v42;
    v43 = LdrLoadAlternateResourceModuleEx(v20, v42, &ResourceDllBase, &ResourceOffset, v18 | 0x1000);
    MappingSize = v43;
    v49 = v43;
    if ( v43 >= 0 )
    {
      v51 = 1;
      if ( !ResourceOffset )
      {
        LOBYTE(v13) = 1;
        MappingSize = LdrpResGetMappingSize(ResourceDllBase, &ResourceOffset, 512LL, v13);
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
    if ( v43 == -1073741772 || v43 == -1073741766 )
    {
      MappingSize = -1073020927;
      goto LABEL_85;
    }
LABEL_125:
    v24 = v59 + 1;
    v20 = DllHandle;
  }
  v69 = 0LL;
  v25 = &v53;
  if ( v22 )
    v25 = 0LL;
  v26 = v10 | 0x20;
  if ( !v22 )
    v26 = v10;
  v27 = &v69;
  if ( v68 )
    v27 = v68;
  v28 = v64;
  if ( v22 )
    v28 = v65;
  v29 = v66;
  if ( v22 )
    v29 = v67;
  v30 = v58;
  if ( v22 )
    v30 = ResourceOffset;
  v31 = (int)v20;
  if ( v22 )
    v31 = (int)ResourceDllBase;
  v32 = a5;
  MappingSize = LdrpResSearchResourceInsideDirectory(
                  v31,
                  0,
                  v30,
                  v29,
                  v28,
                  0LL,
                  (__int64)v60,
                  a5,
                  (__int64)v77,
                  (__int64)v62,
                  (__int64)v27,
                  v26,
                  (__int64)v25);
  v49 = MappingSize;
  if ( v61 && (~v18 & 0x40000) != 0 )
  {
    if ( MappingSize < 0 )
    {
LABEL_33:
      if ( !v22 )
        goto LABEL_34;
      v46 = ResourceOffset;
      v71[0] = ResourceDllBase;
      if ( (int)LdrResGetRCConfig((_DWORD)DllHandle, v58, (unsigned int)&v73, 4096, 1) >= 0
        && (int)LdrResGetRCConfig(v71[0], v46, (unsigned int)&v72, 4096, 0) >= 0 )
      {
        v11 = v73;
        v47 = *(_QWORD *)(v73 + 28) - *(_QWORD *)(v72 + 28);
        if ( !v47 )
          v47 = *(_QWORD *)(v73 + 36) - *(_QWORD *)(v72 + 36);
        if ( !v47 )
          goto LABEL_92;
      }
      goto LABEL_125;
    }
    if ( v62 && v22 )
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
  v38 = v63;
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
      v38 = v63;
      goto LABEL_130;
    }
LABEL_38:
    v15 = 2147353476LL;
    goto LABEL_39;
  }
  Src[0] = 0;
  v48 = 0;
LABEL_130:
  if ( v48 < *v38 && v70 )
  {
    memmove(v70, Src, 2LL * v48);
    *v63 = v48 + 1;
    *((_WORD *)v70 + v48) = 0;
    v32 = a5;
    goto LABEL_34;
  }
  *v38 = v48 + 1;
  MappingSize = -1073741789;
  v49 = -1073741789;
  v15 = 2147353476LL;
  v33 = 2147353477LL;
LABEL_40:
  if ( RtlGetCurrentServiceSessionId() )
  {
    v33 = (__int64)NtCurrentPeb()->SharedData + 555;
    MappingSize = v49;
  }
  if ( (*(_BYTE *)v33 & 1) != 0 )
  {
    if ( RtlGetCurrentServiceSessionId() )
    {
      v15 = (__int64)NtCurrentPeb()->SharedData + 554;
      MappingSize = v49;
    }
    LdrpTraceLoadMUIDll(&v75, *(unsigned __int8 *)v15);
  }
  return (unsigned int)MappingSize;
}
