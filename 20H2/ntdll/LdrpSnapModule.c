/*
 * XREFs of LdrpSnapModule @ 0x1800323F0
 * Callers:
 *     LdrpMapAndSnapDependency @ 0x180017990 (LdrpMapAndSnapDependency.c)
 *     LdrpProcessWork @ 0x18005EC2C (LdrpProcessWork.c)
 * Callees:
 *     LdrpLogDllState @ 0x18001A6CC (LdrpLogDllState.c)
 *     RtlImageNtHeaderEx @ 0x180032AD0 (RtlImageNtHeaderEx.c)
 *     RtlpxLookupFunctionTable @ 0x180032F40 (RtlpxLookupFunctionTable.c)
 *     LdrpResolveForwarder @ 0x1800332E8 (LdrpResolveForwarder.c)
 *     LdrpReportError @ 0x18003F2F4 (LdrpReportError.c)
 *     LdrpDoPostSnapWork @ 0x180047BB0 (LdrpDoPostSnapWork.c)
 *     LdrpLogLoadFailureEtwEvent @ 0x18006006C (LdrpLogLoadFailureEtwEvent.c)
 *     LdrpLogError @ 0x1800601E8 (LdrpLogError.c)
 *     LdrpFreeReplacedModule @ 0x180066618 (LdrpFreeReplacedModule.c)
 *     LdrpHandlePendingModuleReplaced @ 0x180066784 (LdrpHandlePendingModuleReplaced.c)
 *     CompatCachepLookupCdb @ 0x180073584 (CompatCachepLookupCdb.c)
 *     RtlAddressInSectionTable @ 0x180076F70 (RtlAddressInSectionTable.c)
 *     NtUnmapViewOfSection @ 0x18009D5F0 (NtUnmapViewOfSection.c)
 *     LdrpLogDbgPrint @ 0x1800CDCC8 (LdrpLogDbgPrint.c)
 *     LdrpCheckRedirection @ 0x1800D52D0 (LdrpCheckRedirection.c)
 *     LdrpGenericExceptionFilter @ 0x1800D57DC (LdrpGenericExceptionFilter.c)
 *     RtlpImageDirectoryEntryToData32 @ 0x1800EB3C0 (RtlpImageDirectoryEntryToData32.c)
 */

__int64 __fastcall LdrpSnapModule(__int64 a1)
{
  __int64 v2; // rdi
  __int64 v3; // r13
  __int64 v4; // r10
  unsigned int v5; // eax
  __int64 v6; // rbx
  unsigned __int64 *v7; // rcx
  unsigned __int64 *v8; // r15
  __int64 v9; // rdx
  unsigned __int64 v10; // r8
  unsigned __int64 *v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // r14
  __int64 v15; // r13
  unsigned __int64 v16; // r15
  bool v17; // bl
  char *v18; // rdi
  NTSTATUS v19; // eax
  unsigned __int16 Magic; // ax
  __int64 VirtualAddress; // rdx
  char *v22; // rdx
  char *v23; // r11
  unsigned __int64 v24; // r9
  unsigned int v25; // r8d
  __int64 v26; // rcx
  __int64 v27; // rax
  __int64 *v28; // r14
  unsigned __int64 *v29; // r13
  __int64 v30; // rax
  int v31; // r12d
  unsigned __int64 v32; // r13
  unsigned __int64 v33; // rdi
  unsigned __int64 v34; // r14
  unsigned __int16 *v35; // rbx
  int v36; // r9d
  int v37; // r10d
  int v38; // r11d
  unsigned __int8 *v39; // rax
  unsigned __int64 v40; // rdx
  unsigned __int8 v41; // cl
  int v42; // ecx
  int v43; // eax
  int v44; // eax
  __int64 v45; // rcx
  unsigned __int64 *v46; // r13
  int v47; // eax
  __int64 v48; // r10
  void *v49; // rdx
  char v51; // al
  __int64 v52; // rax
  __int64 v53; // rdi
  int NtHeaders; // [rsp+20h] [rbp-D8h]
  int NtHeadersa; // [rsp+20h] [rbp-D8h]
  __int64 v56; // [rsp+40h] [rbp-B8h]
  __int64 v57; // [rsp+48h] [rbp-B0h]
  unsigned __int64 *v58; // [rsp+50h] [rbp-A8h]
  __int64 v59; // [rsp+58h] [rbp-A0h] BYREF
  unsigned int v60; // [rsp+60h] [rbp-98h]
  __int64 *v61; // [rsp+68h] [rbp-90h]
  unsigned __int64 *v62; // [rsp+70h] [rbp-88h]
  unsigned __int64 v63; // [rsp+78h] [rbp-80h]
  char *v64; // [rsp+80h] [rbp-78h]
  __int64 v65; // [rsp+88h] [rbp-70h]
  unsigned __int64 v66; // [rsp+90h] [rbp-68h]
  unsigned __int64 v67; // [rsp+98h] [rbp-60h]
  __int128 v68; // [rsp+A0h] [rbp-58h]
  __int64 v69; // [rsp+B0h] [rbp-48h]
  PIMAGE_NT_HEADERS OutHeaders; // [rsp+108h] [rbp+10h] BYREF
  unsigned int Size; // [rsp+110h] [rbp+18h]
  unsigned int v73; // [rsp+118h] [rbp+20h]

  v2 = *(_QWORD *)(a1 + 56);
  v56 = v2;
  v3 = *(_QWORD *)(v2 + 48);
  v65 = v3;
  LdrpLogDllState(v3, v2 + 72, 0x14A6u);
  LdrpHandlePendingModuleReplaced(a1);
  v73 = 0;
  v4 = a1;
  while ( 1 )
  {
    v5 = *(_DWORD *)(v4 + 120);
    if ( v5 >= *(_DWORD *)(v4 + 96) )
    {
      v31 = LdrpDoPostSnapWork(v4);
      if ( v31 >= 0 )
      {
        LdrpLogDllState(*(_QWORD *)(v2 + 48), v2 + 72, 0x14A7u);
        *(_DWORD *)(*(_QWORD *)(v2 + 152) + 56LL) = 5;
      }
      goto LABEL_65;
    }
    v6 = v5;
    v7 = *(unsigned __int64 **)(*(_QWORD *)(v4 + 88) + 8LL * v5);
    v8 = v7;
    v58 = v7;
    v9 = *(_QWORD *)(v4 + 88);
    if ( v7 )
    {
      v10 = v7[22];
      if ( v10 )
      {
        if ( (*(_DWORD *)(v10 + 32) & 0x80000) == 0 && *(unsigned __int64 **)(v10 + 56) != v7 )
        {
          v8 = *(unsigned __int64 **)(v10 + 56);
          v58 = v8;
          *(_QWORD *)(v10 + 56) = v7;
          v9 = *(_QWORD *)(v4 + 88);
        }
      }
    }
    v11 = *(unsigned __int64 **)(v9 + 8LL * v5);
    if ( v11 != v8 )
    {
      LdrpFreeReplacedModule(v11);
      v4 = a1;
      *(_QWORD *)(*(_QWORD *)(a1 + 88) + 8 * v6) = v8;
    }
    v12 = *(_QWORD *)(v4 + 128);
    v13 = *(unsigned int *)(v12 + 20 * v6);
    v14 = v13 + v3;
    v15 = v65 + *(unsigned int *)(v12 + 20 * v6 + 16);
    if ( !(_DWORD)v13 || (unsigned int)v13 > *(_DWORD *)(v2 + 64) )
      v14 = v65 + *(unsigned int *)(v12 + 20 * v6 + 16);
    if ( v8 )
      break;
LABEL_52:
    ++*(_DWORD *)(v4 + 120);
    v3 = v65;
  }
  v16 = v8[6];
  v17 = 1;
  v18 = (char *)v16;
  OutHeaders = 0LL;
  v57 = 0LL;
  v59 = 0LL;
  if ( (v16 & 3) != 0 )
  {
    v18 = (char *)(v16 & 0xFFFFFFFFFFFFFFFCuLL);
    v17 = (v16 & 1) == 0;
  }
  v19 = RtlImageNtHeaderEx(1u, v18, 0LL, &OutHeaders);
  if ( OutHeaders )
  {
    Magic = OutHeaders->OptionalHeader.Magic;
    if ( Magic == 267 )
    {
      v19 = RtlpImageDirectoryEntryToData32(v18, OutHeaders, (__int64)&v59);
      v22 = (char *)v59;
      v57 = v59;
      goto LABEL_78;
    }
    if ( Magic != 523 )
      goto LABEL_79;
    if ( !OutHeaders->OptionalHeader.NumberOfRvaAndSizes )
      goto LABEL_79;
    VirtualAddress = OutHeaders->OptionalHeader.DataDirectory[0].VirtualAddress;
    if ( !(_DWORD)VirtualAddress )
      goto LABEL_79;
    Size = OutHeaders->OptionalHeader.DataDirectory[0].Size;
    if ( !v17 && (unsigned int)VirtualAddress >= OutHeaders->OptionalHeader.SizeOfHeaders )
    {
      v22 = (char *)RtlAddressInSectionTable(OutHeaders, v18, VirtualAddress);
      v57 = (__int64)v22;
      if ( v22 )
      {
        v19 = 0;
        goto LABEL_78;
      }
      goto LABEL_79;
    }
    v22 = &v18[VirtualAddress];
LABEL_19:
    v57 = (__int64)v22;
  }
  else
  {
    v22 = 0LL;
LABEL_78:
    if ( v19 < 0 )
    {
LABEL_79:
      v22 = 0LL;
      goto LABEL_19;
    }
  }
  if ( !v22 )
  {
    v51 = LdrpDebugFlags;
    if ( (LdrpDebugFlags & 3) != 0 )
    {
      LdrpLogDbgPrint(
        (unsigned int)"minkernel\\ntdll\\ldrsnap.c",
        2636,
        (unsigned int)"LdrpSnapModule",
        0,
        (__int64)"DLL \"%wZ\" does not contain an export table\n",
        v58 + 9);
      v51 = LdrpDebugFlags;
    }
    if ( (v51 & 0x10) != 0 )
      __debugbreak();
    v31 = -1073741701;
    goto LABEL_65;
  }
  if ( LdrSystemDllInitBlock.CfgBitMap && (LdrSystemDllInitBlock.Flags & 1) == 0 )
  {
    if ( v16 < *((_QWORD *)&xmmword_180181510 + 1)
      || v16 >= *((_QWORD *)&xmmword_180181510 + 1) + (unsigned __int64)(unsigned int)qword_180181520 )
    {
      RtlpxLookupFunctionTable((PVOID)v16);
      v22 = (char *)v57;
    }
    else
    {
      v68 = xmmword_180181510;
      v69 = qword_180181520;
    }
    OutHeaders = (PIMAGE_NT_HEADERS)*((_QWORD *)&v68 + 1);
    if ( *((_QWORD *)&v68 + 1) != v16 )
      __fastfail(0x18u);
  }
  v23 = &v22[Size];
  v64 = v23;
  v24 = v16 + *((unsigned int *)v22 + 7);
  v63 = v24;
  v25 = *((_DWORD *)v22 + 6);
  v60 = v25;
  v26 = v16 + *((unsigned int *)v22 + 8);
  v59 = v26;
  v66 = v16 + *((unsigned int *)v22 + 9);
  v4 = a1;
  v27 = 8LL * *(unsigned int *)(a1 + 124);
  v28 = (__int64 *)(v27 + v14);
  v29 = (unsigned __int64 *)(v27 + v15);
  while ( 2 )
  {
    v62 = v29;
    v61 = v28;
    v30 = *v28;
    if ( !*v28 )
    {
      *(_DWORD *)(v4 + 124) = 0;
      v2 = v56;
      goto LABEL_52;
    }
    v31 = -1073741702;
    LODWORD(OutHeaders) = -1073741702;
    v32 = (unsigned __int64)v30 >> 63;
    v33 = -4530927LL;
    v34 = 0LL;
    if ( v30 < 0 )
    {
      v73 = (unsigned __int16)v30;
      v44 = (unsigned __int16)v30 - *((_DWORD *)v22 + 4);
LABEL_45:
      if ( (unsigned int)v44 < *((_DWORD *)v22 + 5) )
      {
        v45 = *(unsigned int *)(v24 + 4LL * v44);
        if ( (_DWORD)v45 )
        {
          v33 = v16 + v45;
          v31 = 0;
          LODWORD(OutHeaders) = 0;
          if ( v16 + v45 > (unsigned __int64)v22 && v33 < (unsigned __int64)v23 )
          {
            v47 = LdrpResolveForwarder((char *)(v16 + v45));
            v31 = v47;
            LODWORD(OutHeaders) = v47;
            if ( v47 == 259 )
              return 0LL;
            if ( v47 >= 0 )
              v33 = v67;
          }
        }
      }
    }
    else
    {
      v35 = (unsigned __int16 *)(*(_QWORD *)(v56 + 48) + (unsigned int)v30);
      v34 = (unsigned __int64)(v35 + 1);
      if ( (*(_DWORD *)(v4 + 32) & 0x2000000) == 0 )
        goto LABEL_30;
      v52 = LdrpCheckRedirection(v56, v58, v35 + 1);
      v33 = v52;
      if ( v52 != -4530927 )
      {
        if ( (LdrpDebugFlags & 5) != 0 )
          LdrpLogDbgPrint(
            (unsigned int)"minkernel\\ntdll\\ldrsnap.c",
            2709,
            (unsigned int)"LdrpSnapModule",
            2,
            (__int64)"Import '%s' of DLL '%wZ' is redirected to 0x%p",
            v34,
            v56 + 72,
            v52);
        goto LABEL_49;
      }
      v26 = v59;
      v25 = v60;
LABEL_30:
      v36 = *v35;
      v37 = 0;
      v38 = v25 - 1;
      if ( v36 >= v25 )
        v36 = v38 / 2;
      if ( v38 >= 0 )
      {
        while ( 1 )
        {
          v39 = (unsigned __int8 *)(v35 + 1);
          v40 = v16 + *(unsigned int *)(v26 + 4LL * v36) - v34;
          while ( 1 )
          {
            v41 = *v39;
            if ( *v39 != v39[v40] )
              break;
            ++v39;
            if ( !v41 )
            {
              v42 = 0;
              goto LABEL_37;
            }
          }
          v42 = v41 < v39[v40] ? -1 : 1;
LABEL_37:
          if ( !v42 )
            break;
          v43 = v36 - 1;
          if ( v42 >= 0 )
            v43 = v38;
          v38 = v43;
          if ( v42 >= 0 )
            v37 = v36 + 1;
          v36 = (v37 + v43) / 2;
          v26 = v59;
          if ( v43 < v37 )
            goto LABEL_91;
        }
        v44 = *(unsigned __int16 *)(v66 + 2LL * v36);
        v22 = (char *)v57;
        v24 = v63;
        v23 = v64;
        goto LABEL_45;
      }
LABEL_91:
      if ( (LdrpDebugFlags & 3) != 0 )
        LdrpLogDbgPrint(
          (unsigned int)"minkernel\\ntdll\\ldrsnap.c",
          1559,
          (unsigned int)"LdrpNameToOrdinal",
          1,
          (__int64)"Procedure \"%s\" could not be located in DLL at base 0x%p.\n",
          (const char *)v35 + 2,
          (const void *)v16);
      if ( (LdrpDebugFlags & 0x40) != 0 )
        __debugbreak();
    }
    if ( v31 >= 0 )
    {
LABEL_49:
      v46 = v62;
      *v62 = v33;
      v28 = v61 + 1;
      v29 = v46 + 1;
      v4 = a1;
      ++*(_DWORD *)(a1 + 124);
      v26 = v59;
      v22 = (char *)v57;
      v25 = v60;
      v24 = v63;
      v23 = v64;
      continue;
    }
    break;
  }
  if ( v31 != -1073741702 && v31 != -1073741515 )
  {
LABEL_65:
    v48 = a1;
    goto LABEL_66;
  }
  if ( (unsigned int)CompatCachepLookupCdb(*(wchar_t **)(v56 + 80))
    || (unsigned int)CompatCachepLookupCdb((wchar_t *)v58[10]) )
  {
    v53 = v56 + 72;
    LOBYTE(NtHeaders) = 0;
    LdrpLogLoadFailureEtwEvent(v56 + 72, v58 + 9, 1LL, &LoadFailure, NtHeaders);
    LOBYTE(NtHeadersa) = 1;
    LdrpLogLoadFailureEtwEvent(v56 + 72, v58 + 9, 1LL, &LoadFailureOperational, NtHeadersa);
  }
  else
  {
    v53 = v56 + 72;
  }
  if ( (_BYTE)v32 )
  {
    v31 = -1073741512;
    v34 = v73;
  }
  else
  {
    v31 = -1073741511;
  }
  LODWORD(OutHeaders) = v31;
  LdrpReportError(v53, v34, (unsigned int)v31);
  v48 = a1;
LABEL_66:
  v49 = *(void **)(v48 + 184);
  if ( v49 )
  {
    NtUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, v49);
    v48 = a1;
    *(_QWORD *)(a1 + 184) = 0LL;
  }
  if ( v31 < 0 )
    LdrpLogError((unsigned int)v31, 25LL, 0LL, v48);
  return (unsigned int)v31;
}
