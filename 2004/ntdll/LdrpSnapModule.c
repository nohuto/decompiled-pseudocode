/*
 * XREFs of LdrpSnapModule @ 0x1800323F0
 * Callers:
 *     LdrpMapAndSnapDependency @ 0x180017990 (LdrpMapAndSnapDependency.c)
 *     LdrpProcessWork @ 0x18005EB1C (LdrpProcessWork.c)
 * Callees:
 *     LdrpLogDllState @ 0x18001A6CC (LdrpLogDllState.c)
 *     RtlImageNtHeaderEx @ 0x180032AD0 (RtlImageNtHeaderEx.c)
 *     RtlpxLookupFunctionTable @ 0x180032F40 (RtlpxLookupFunctionTable.c)
 *     LdrpResolveForwarder @ 0x1800332E8 (LdrpResolveForwarder.c)
 *     LdrpReportError @ 0x18003F2A4 (LdrpReportError.c)
 *     LdrpDoPostSnapWork @ 0x180047B60 (LdrpDoPostSnapWork.c)
 *     LdrpLogLoadFailureEtwEvent @ 0x18005FF5C (LdrpLogLoadFailureEtwEvent.c)
 *     LdrpLogError @ 0x1800600D8 (LdrpLogError.c)
 *     LdrpFreeReplacedModule @ 0x180066508 (LdrpFreeReplacedModule.c)
 *     LdrpHandlePendingModuleReplaced @ 0x180066674 (LdrpHandlePendingModuleReplaced.c)
 *     CompatCachepLookupCdb @ 0x180073484 (CompatCachepLookupCdb.c)
 *     RtlAddressInSectionTable @ 0x180076E70 (RtlAddressInSectionTable.c)
 *     NtUnmapViewOfSection @ 0x18009D350 (NtUnmapViewOfSection.c)
 *     LdrpLogDbgPrint @ 0x1800CDAE8 (LdrpLogDbgPrint.c)
 *     LdrpCheckRedirection @ 0x1800D4F30 (LdrpCheckRedirection.c)
 *     LdrpGenericExceptionFilter @ 0x1800D543C (LdrpGenericExceptionFilter.c)
 *     RtlpImageDirectoryEntryToData32 @ 0x1800EAEB0 (RtlpImageDirectoryEntryToData32.c)
 */

__int64 __fastcall LdrpSnapModule(__int64 a1)
{
  __int64 v2; // rdi
  __int64 v3; // r13
  __int64 v4; // r10
  unsigned int v5; // eax
  __int64 v6; // rbx
  __int64 v7; // rcx
  __int64 v8; // r15
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // r14
  __int64 v14; // r13
  unsigned __int64 v15; // r15
  bool v16; // bl
  unsigned __int64 v17; // rdi
  int v18; // eax
  __int16 v19; // ax
  __int64 v20; // rdx
  _DWORD *v21; // rdx
  char *v22; // r11
  unsigned __int64 v23; // r9
  unsigned int v24; // r8d
  unsigned __int64 v25; // rcx
  __int64 v26; // rax
  __int64 *v27; // r14
  unsigned __int64 *v28; // r13
  __int64 v29; // rax
  int v30; // r12d
  unsigned __int64 v31; // r13
  unsigned __int64 v32; // rdi
  unsigned __int64 v33; // r14
  unsigned __int16 *v34; // rbx
  int v35; // r9d
  int v36; // r10d
  int v37; // r11d
  unsigned __int8 *v38; // rax
  unsigned __int64 v39; // rdx
  unsigned __int8 v40; // cl
  int v41; // ecx
  int v42; // eax
  int v43; // eax
  __int64 v44; // rcx
  unsigned __int64 *v45; // r13
  int v46; // eax
  __int64 v47; // r10
  __int64 v48; // rdx
  char v50; // al
  __int64 v51; // rax
  __int64 v52; // rdi
  __int64 v53; // [rsp+40h] [rbp-B8h]
  _DWORD *v54; // [rsp+48h] [rbp-B0h]
  __int64 v55; // [rsp+50h] [rbp-A8h]
  _DWORD *v56; // [rsp+58h] [rbp-A0h] BYREF
  unsigned int v57; // [rsp+60h] [rbp-98h]
  __int64 *v58; // [rsp+68h] [rbp-90h]
  unsigned __int64 *v59; // [rsp+70h] [rbp-88h]
  unsigned __int64 v60; // [rsp+78h] [rbp-80h]
  char *v61; // [rsp+80h] [rbp-78h]
  __int64 v62; // [rsp+88h] [rbp-70h]
  unsigned __int64 v63; // [rsp+90h] [rbp-68h]
  unsigned __int64 v64; // [rsp+98h] [rbp-60h]
  __int128 v65; // [rsp+A0h] [rbp-58h] BYREF
  __int64 v66; // [rsp+B0h] [rbp-48h]
  __int64 v68; // [rsp+108h] [rbp+10h] BYREF
  unsigned int v69; // [rsp+110h] [rbp+18h] BYREF
  unsigned int v70; // [rsp+118h] [rbp+20h]

  v2 = *(_QWORD *)(a1 + 56);
  v53 = v2;
  v3 = *(_QWORD *)(v2 + 48);
  v62 = v3;
  LdrpLogDllState(v3, v2 + 72, 0x14A6u);
  LdrpHandlePendingModuleReplaced(a1);
  v70 = 0;
  v4 = a1;
  while ( 1 )
  {
    v5 = *(_DWORD *)(v4 + 120);
    if ( v5 >= *(_DWORD *)(v4 + 96) )
    {
      v30 = LdrpDoPostSnapWork(v4);
      if ( v30 >= 0 )
      {
        LdrpLogDllState(*(_QWORD *)(v2 + 48), v2 + 72, 0x14A7u);
        *(_DWORD *)(*(_QWORD *)(v2 + 152) + 56LL) = 5;
      }
      goto LABEL_65;
    }
    v6 = v5;
    v7 = *(_QWORD *)(*(_QWORD *)(v4 + 88) + 8LL * v5);
    v8 = v7;
    v55 = v7;
    v9 = *(_QWORD *)(v4 + 88);
    if ( v7 )
    {
      v10 = *(_QWORD *)(v7 + 176);
      if ( v10 )
      {
        if ( (*(_DWORD *)(v10 + 32) & 0x80000) == 0 && *(_QWORD *)(v10 + 56) != v7 )
        {
          v8 = *(_QWORD *)(v10 + 56);
          v55 = v8;
          *(_QWORD *)(v10 + 56) = v7;
          v9 = *(_QWORD *)(v4 + 88);
        }
      }
    }
    if ( *(_QWORD *)(v9 + 8LL * v5) != v8 )
    {
      LdrpFreeReplacedModule();
      v4 = a1;
      *(_QWORD *)(*(_QWORD *)(a1 + 88) + 8 * v6) = v8;
    }
    v11 = *(_QWORD *)(v4 + 128);
    v12 = *(unsigned int *)(v11 + 20 * v6);
    v13 = v12 + v3;
    v14 = v62 + *(unsigned int *)(v11 + 20 * v6 + 16);
    if ( !(_DWORD)v12 || (unsigned int)v12 > *(_DWORD *)(v2 + 64) )
      v13 = v62 + *(unsigned int *)(v11 + 20 * v6 + 16);
    if ( v8 )
      break;
LABEL_52:
    ++*(_DWORD *)(v4 + 120);
    v3 = v62;
  }
  v15 = *(_QWORD *)(v8 + 48);
  v16 = 1;
  v17 = v15;
  v68 = 0LL;
  v54 = 0LL;
  v56 = 0LL;
  if ( (v15 & 3) != 0 )
  {
    v17 = v15 & 0xFFFFFFFFFFFFFFFCuLL;
    v16 = (v15 & 1) == 0;
  }
  v18 = RtlImageNtHeaderEx(1LL, v17, 0LL, &v68);
  if ( v68 )
  {
    v19 = *(_WORD *)(v68 + 24);
    if ( v19 == 267 )
    {
      v18 = RtlpImageDirectoryEntryToData32(v17, v16, 0, (unsigned int)&v69, v68, (__int64)&v56);
      v21 = v56;
      v54 = v56;
      goto LABEL_78;
    }
    if ( v19 != 523 )
      goto LABEL_79;
    if ( !*(_DWORD *)(v68 + 132) )
      goto LABEL_79;
    v20 = *(unsigned int *)(v68 + 136);
    if ( !(_DWORD)v20 )
      goto LABEL_79;
    v69 = *(_DWORD *)(v68 + 140);
    if ( !v16 && (unsigned int)v20 >= *(_DWORD *)(v68 + 84) )
    {
      v21 = (_DWORD *)RtlAddressInSectionTable(v68, v17, (unsigned int)v20);
      v54 = v21;
      if ( v21 )
      {
        v18 = 0;
        goto LABEL_78;
      }
      goto LABEL_79;
    }
    v21 = (_DWORD *)(v17 + v20);
LABEL_19:
    v54 = v21;
  }
  else
  {
    v21 = 0LL;
LABEL_78:
    if ( v18 < 0 )
    {
LABEL_79:
      v21 = 0LL;
      goto LABEL_19;
    }
  }
  if ( !v21 )
  {
    v50 = LdrpDebugFlags;
    if ( (LdrpDebugFlags & 3) != 0 )
    {
      LdrpLogDbgPrint(
        (unsigned int)"minkernel\\ntdll\\ldrsnap.c",
        2636,
        (unsigned int)"LdrpSnapModule",
        0,
        (__int64)"DLL \"%wZ\" does not contain an export table\n",
        v55 + 72);
      v50 = LdrpDebugFlags;
    }
    if ( (v50 & 0x10) != 0 )
      __debugbreak();
    v30 = -1073741701;
    goto LABEL_65;
  }
  if ( qword_18017F3A8 && (byte_18017F38C & 1) == 0 )
  {
    if ( v15 < *((_QWORD *)&xmmword_18017F510 + 1)
      || v15 >= *((_QWORD *)&xmmword_18017F510 + 1) + (unsigned __int64)(unsigned int)qword_18017F520 )
    {
      RtlpxLookupFunctionTable(v15, &v65);
      v21 = v54;
    }
    else
    {
      v65 = xmmword_18017F510;
      v66 = qword_18017F520;
    }
    v68 = *((_QWORD *)&v65 + 1);
    if ( *((_QWORD *)&v65 + 1) != v15 )
      __fastfail(0x18u);
  }
  v22 = (char *)v21 + v69;
  v61 = v22;
  v23 = v15 + (unsigned int)v21[7];
  v60 = v23;
  v24 = v21[6];
  v57 = v24;
  v25 = v15 + (unsigned int)v21[8];
  v56 = (_DWORD *)v25;
  v63 = v15 + (unsigned int)v21[9];
  v4 = a1;
  v26 = 8LL * *(unsigned int *)(a1 + 124);
  v27 = (__int64 *)(v26 + v13);
  v28 = (unsigned __int64 *)(v26 + v14);
  while ( 2 )
  {
    v59 = v28;
    v58 = v27;
    v29 = *v27;
    if ( !*v27 )
    {
      *(_DWORD *)(v4 + 124) = 0;
      v2 = v53;
      goto LABEL_52;
    }
    v30 = -1073741702;
    LODWORD(v68) = -1073741702;
    v31 = (unsigned __int64)v29 >> 63;
    v32 = -4530927LL;
    v33 = 0LL;
    if ( v29 < 0 )
    {
      v70 = (unsigned __int16)v29;
      v43 = (unsigned __int16)v29 - v21[4];
LABEL_45:
      if ( (unsigned int)v43 < v21[5] )
      {
        v44 = *(unsigned int *)(v23 + 4LL * v43);
        if ( (_DWORD)v44 )
        {
          v32 = v15 + v44;
          v30 = 0;
          LODWORD(v68) = 0;
          if ( v15 + v44 > (unsigned __int64)v21 && v32 < (unsigned __int64)v22 )
          {
            v46 = LdrpResolveForwarder((char *)(v15 + v44));
            v30 = v46;
            LODWORD(v68) = v46;
            if ( v46 == 259 )
              return 0LL;
            if ( v46 >= 0 )
              v32 = v64;
          }
        }
      }
    }
    else
    {
      v34 = (unsigned __int16 *)(*(_QWORD *)(v53 + 48) + (unsigned int)v29);
      v33 = (unsigned __int64)(v34 + 1);
      if ( (*(_DWORD *)(v4 + 32) & 0x2000000) == 0 )
        goto LABEL_30;
      v51 = LdrpCheckRedirection(v53, v55, v34 + 1);
      v32 = v51;
      if ( v51 != -4530927 )
      {
        if ( (LdrpDebugFlags & 5) != 0 )
          LdrpLogDbgPrint(
            (unsigned int)"minkernel\\ntdll\\ldrsnap.c",
            2709,
            (unsigned int)"LdrpSnapModule",
            2,
            (__int64)"Import '%s' of DLL '%wZ' is redirected to 0x%p",
            v33,
            v53 + 72,
            v51);
        goto LABEL_49;
      }
      v25 = (unsigned __int64)v56;
      v24 = v57;
LABEL_30:
      v35 = *v34;
      v36 = 0;
      v37 = v24 - 1;
      if ( v35 >= v24 )
        v35 = v37 / 2;
      if ( v37 >= 0 )
      {
        while ( 1 )
        {
          v38 = (unsigned __int8 *)(v34 + 1);
          v39 = v15 + *(unsigned int *)(v25 + 4LL * v35) - v33;
          while ( 1 )
          {
            v40 = *v38;
            if ( *v38 != v38[v39] )
              break;
            ++v38;
            if ( !v40 )
            {
              v41 = 0;
              goto LABEL_37;
            }
          }
          v41 = v40 < v38[v39] ? -1 : 1;
LABEL_37:
          if ( !v41 )
            break;
          v42 = v35 - 1;
          if ( v41 >= 0 )
            v42 = v37;
          v37 = v42;
          if ( v41 >= 0 )
            v36 = v35 + 1;
          v35 = (v36 + v42) / 2;
          v25 = (unsigned __int64)v56;
          if ( v42 < v36 )
            goto LABEL_91;
        }
        v43 = *(unsigned __int16 *)(v63 + 2LL * v35);
        v21 = v54;
        v23 = v60;
        v22 = v61;
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
          (const char *)v34 + 2,
          (const void *)v15);
      if ( (LdrpDebugFlags & 0x40) != 0 )
        __debugbreak();
    }
    if ( v30 >= 0 )
    {
LABEL_49:
      v45 = v59;
      *v59 = v32;
      v27 = v58 + 1;
      v28 = v45 + 1;
      v4 = a1;
      ++*(_DWORD *)(a1 + 124);
      v25 = (unsigned __int64)v56;
      v21 = v54;
      v24 = v57;
      v23 = v60;
      v22 = v61;
      continue;
    }
    break;
  }
  if ( v30 != -1073741702 && v30 != -1073741515 )
  {
LABEL_65:
    v47 = a1;
    goto LABEL_66;
  }
  if ( (unsigned int)CompatCachepLookupCdb(*(wchar_t **)(v53 + 80))
    || (unsigned int)CompatCachepLookupCdb(*(wchar_t **)(v55 + 80)) )
  {
    v52 = v53 + 72;
    LdrpLogLoadFailureEtwEvent(v53 + 72, v55 + 72, 1, (unsigned int)&LoadFailure, 0);
    LdrpLogLoadFailureEtwEvent(v53 + 72, v55 + 72, 1, (unsigned int)&LoadFailureOperational, 1);
  }
  else
  {
    v52 = v53 + 72;
  }
  if ( (_BYTE)v31 )
  {
    v30 = -1073741512;
    v33 = v70;
  }
  else
  {
    v30 = -1073741511;
  }
  LODWORD(v68) = v30;
  LdrpReportError(v52, v33, (unsigned int)v30);
  v47 = a1;
LABEL_66:
  v48 = *(_QWORD *)(v47 + 184);
  if ( v48 )
  {
    NtUnmapViewOfSection(-1LL, v48);
    v47 = a1;
    *(_QWORD *)(a1 + 184) = 0LL;
  }
  if ( v30 < 0 )
    LdrpLogError((unsigned int)v30, 25LL, 0LL, v47);
  return (unsigned int)v30;
}
