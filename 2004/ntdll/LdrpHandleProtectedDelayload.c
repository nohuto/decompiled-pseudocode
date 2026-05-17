/*
 * XREFs of LdrpHandleProtectedDelayload @ 0x1800318A0
 * Callers:
 *     LdrResolveDelayLoadedAPI @ 0x180010380 (LdrResolveDelayLoadedAPI.c)
 * Callees:
 *     RtlReleasePath @ 0x180011F80 (RtlReleasePath.c)
 *     LdrpShouldModuleImportBeRedirected @ 0x18001427C (LdrpShouldModuleImportBeRedirected.c)
 *     LdrpGetDelayloadExportDll @ 0x18001664C (LdrpGetDelayloadExportDll.c)
 *     LdrpLoadForwardedDll @ 0x180016C08 (LdrpLoadForwardedDll.c)
 *     RtlFreeHeap @ 0x180024760 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18002A9A0 (RtlAllocateHeap.c)
 *     LdrpDereferenceModule @ 0x1800302E4 (LdrpDereferenceModule.c)
 *     RtlImageNtHeaderEx @ 0x180032AD0 (RtlImageNtHeaderEx.c)
 *     LdrpWriteBackProtectedDelayLoad @ 0x1800477A0 (LdrpWriteBackProtectedDelayLoad.c)
 *     RtlGuardCheckImageBase @ 0x180074A68 (RtlGuardCheckImageBase.c)
 *     LdrpParseForwarderDescription @ 0x1800759C4 (LdrpParseForwarderDescription.c)
 *     RtlAddressInSectionTable @ 0x180076E70 (RtlAddressInSectionTable.c)
 *     LdrpRedirectDelayloadFailure @ 0x180080DC4 (LdrpRedirectDelayloadFailure.c)
 *     __security_check_cookie @ 0x18008C240 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800A08F0 (_guard_dispatch_icall_nop.c)
 *     LdrpLogDbgPrint @ 0x1800CDAE8 (LdrpLogDbgPrint.c)
 *     LdrpCheckRedirection @ 0x1800D4F30 (LdrpCheckRedirection.c)
 *     AVrfCallAPILookupCallback @ 0x1800D9650 (AVrfCallAPILookupCallback.c)
 */

__int64 __fastcall LdrpHandleProtectedDelayload(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _QWORD *a5,
        unsigned int a6)
{
  int v7; // r15d
  int v8; // ebx
  __int64 v9; // r14
  int DelayloadExportDll; // eax
  int v11; // r13d
  __int64 v12; // rbx
  __int64 v13; // r9
  _QWORD *v14; // r12
  __int64 v15; // rsi
  __int64 v16; // r15
  _BYTE *Heap; // rdi
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // rdx
  int v22; // esi
  const char *v23; // r12
  __int64 v24; // r15
  __int64 v25; // r13
  unsigned __int64 v26; // rax
  char ShouldModuleImportBeRedirected; // al
  __int64 v28; // rax
  char *v29; // rdi
  unsigned __int64 v30; // r15
  bool v31; // bl
  unsigned __int64 v32; // rdi
  char *v33; // r14
  int v34; // eax
  __int16 v35; // ax
  __int64 v36; // rax
  unsigned int v37; // edx
  int v38; // r10d
  int v39; // r11d
  int v40; // r9d
  const char *v41; // rax
  signed __int64 v42; // rdx
  unsigned __int8 v43; // cl
  int v44; // ecx
  int v45; // eax
  int ForwardedDll; // ebx
  unsigned int v47; // esi
  unsigned int v48; // eax
  unsigned __int64 v49; // rdx
  unsigned __int64 v50; // r8
  unsigned __int64 v51; // r9
  unsigned int v52; // ecx
  __int64 v53; // rdx
  unsigned __int64 v54; // rdx
  unsigned __int64 v55; // r8
  unsigned __int64 v56; // r9
  __int64 v57; // rbx
  char i; // [rsp+40h] [rbp-588h]
  __int64 v60; // [rsp+48h] [rbp-580h] BYREF
  int v61; // [rsp+50h] [rbp-578h]
  unsigned int v62; // [rsp+54h] [rbp-574h]
  int v63; // [rsp+58h] [rbp-570h] BYREF
  __int64 v64; // [rsp+60h] [rbp-568h] BYREF
  unsigned int v65; // [rsp+68h] [rbp-560h]
  int v66; // [rsp+6Ch] [rbp-55Ch]
  unsigned int v67; // [rsp+70h] [rbp-558h]
  __int64 v68; // [rsp+78h] [rbp-550h]
  _BYTE *v69; // [rsp+80h] [rbp-548h]
  _QWORD *v70; // [rsp+88h] [rbp-540h] BYREF
  __int64 v71; // [rsp+90h] [rbp-538h]
  __int64 v72; // [rsp+98h] [rbp-530h]
  __int64 v73; // [rsp+A0h] [rbp-528h]
  const char *v74; // [rsp+A8h] [rbp-520h] BYREF
  __int64 v75; // [rsp+B0h] [rbp-518h] BYREF
  __int64 v76; // [rsp+B8h] [rbp-510h] BYREF
  __int64 v77; // [rsp+C0h] [rbp-508h]
  void (__fastcall *v78)(char **, __int64, char *, _QWORD, _QWORD); // [rsp+C8h] [rbp-500h]
  char *v79; // [rsp+D0h] [rbp-4F8h] BYREF
  __int64 v80; // [rsp+D8h] [rbp-4F0h]
  char **v81; // [rsp+E0h] [rbp-4E8h]
  __int64 v82; // [rsp+E8h] [rbp-4E0h]
  __int64 v83; // [rsp+F0h] [rbp-4D8h]
  _BYTE v84[24]; // [rsp+F8h] [rbp-4D0h] BYREF
  __int128 v85; // [rsp+110h] [rbp-4B8h] BYREF
  __int128 v86; // [rsp+120h] [rbp-4A8h]
  __int128 v87; // [rsp+130h] [rbp-498h]
  __int128 v88; // [rsp+140h] [rbp-488h]
  __int128 v89; // [rsp+150h] [rbp-478h]
  __int128 v90; // [rsp+160h] [rbp-468h]
  __int128 v91; // [rsp+170h] [rbp-458h]
  __int128 v92; // [rsp+180h] [rbp-448h]
  _BYTE v93[1024]; // [rsp+190h] [rbp-438h] BYREF

  v82 = a4;
  v7 = a3;
  v83 = a3;
  v8 = a2;
  v68 = a2;
  v9 = a1;
  v77 = a1;
  v70 = a5;
  v73 = 0LL;
  DelayloadExportDll = LdrpGetDelayloadExportDll(a1, a2, &v60, a6, (__int64)a5);
  v11 = DelayloadExportDll;
  v66 = DelayloadExportDll;
  if ( DelayloadExportDll < 0 )
  {
    v57 = LdrpRedirectDelayloadFailure(v9, 0, v8, v7, a4, (__int64)a5, DelayloadExportDll);
    v70 = (_QWORD *)v57;
    if ( v57 && (v11 == -1073741515 || v11 == -1073740671) )
      LdrpWriteBackProtectedDelayLoad(v9, (_DWORD)a5, (unsigned int)&v70, 1, 0);
  }
  else
  {
    v12 = v60;
    RtlGuardCheckImageBase(*(_QWORD *)(v60 + 48), 0LL);
    v13 = v68;
    v14 = (_QWORD *)(*(_QWORD *)(v9 + 48) + *(unsigned int *)(v68 + 12));
    v71 = (__int64)v14;
    v15 = a5 - v14;
    v80 = v15;
    LODWORD(v16) = 0;
    v61 = 0;
    if ( *v14 )
    {
      do
        v16 = (unsigned int)(v16 + 1);
      while ( v14[v16] );
      v61 = v16;
    }
    if ( (unsigned int)v16 <= 0x80 )
    {
      Heap = v93;
      v69 = v93;
    }
    else
    {
      Heap = (_BYTE *)RtlAllocateHeap(LdrpHeap, NtdllBaseTag + 0x40000, 8LL * (unsigned int)v16);
      v69 = Heap;
      v13 = v68;
      if ( !Heap )
      {
        Heap = v93;
        v69 = v93;
        v14 = v70;
        v71 = (__int64)v70;
        LODWORD(v16) = v16 - v15;
        if ( (unsigned int)v16 > 0x80 )
          LODWORD(v16) = 128;
        v61 = v16;
        LODWORD(v15) = 0;
        v80 = 0LL;
      }
    }
    if ( g_ShimsEnabled )
      v78 = (void (__fastcall *)(char **, __int64, char *, _QWORD, _QWORD))(__ROR8__(
                                                                              g_pfnSE_GetProcAddressForCaller,
                                                                              64 - (MEMORY[0x7FFE0330] & 0x3Fu)) ^ MEMORY[0x7FFE0330]);
    else
      v78 = 0LL;
    v18 = 0LL;
    v62 = 0;
    if ( (_DWORD)v16 )
    {
      v19 = 0LL;
      v72 = 0LL;
      v65 = v66;
      while ( 1 )
      {
        v81 = (char **)&Heap[8 * v19];
        *v81 = 0LL;
        if ( (_DWORD)v18 != (_DWORD)v15 )
        {
          if ( v14[v19] - *(_QWORD *)(v9 + 48) >= (unsigned __int64)*(unsigned int *)(v9 + 64) )
          {
            v52 = v62;
            goto LABEL_100;
          }
          v18 = v62;
        }
        v64 = 0LL;
        v20 = *(_QWORD *)(v9 + 48);
        v21 = *(_QWORD *)(v20
                        + *(unsigned int *)(v13 + 16)
                        + 8 * (((__int64)v14 + 8 * v18 - (v20 + *(unsigned int *)(v13 + 12))) >> 3));
        if ( v21 >= 0 )
        {
          v22 = 0;
          v23 = (const char *)(v21 + v20 + 2);
        }
        else
        {
          v22 = (unsigned __int16)v21;
          v23 = 0LL;
        }
        v74 = v23;
        v63 = v22;
        v24 = v60;
        v25 = v60;
        v76 = v60;
        v67 = 0;
        v26 = *(_QWORD *)(v60 + 80);
        v85 = 0LL;
        v86 = 0LL;
        v88 = 0LL;
        v89 = 0LL;
        v90 = 0LL;
        v91 = 0LL;
        v92 = 0LL;
        v87 = v26;
        ShouldModuleImportBeRedirected = LdrpShouldModuleImportBeRedirected(v9);
        for ( i = ShouldModuleImportBeRedirected; ; ShouldModuleImportBeRedirected = i )
        {
          if ( ShouldModuleImportBeRedirected )
          {
            if ( v23 )
            {
              v28 = LdrpCheckRedirection(v9, v25, v23);
              v29 = (char *)v28;
              if ( v28 != -4530927 )
              {
                v64 = v28;
                ForwardedDll = 0;
                goto LABEL_90;
              }
            }
          }
          v30 = *(_QWORD *)(v25 + 48);
          v31 = 1;
          v32 = v30;
          v75 = 0LL;
          v33 = 0LL;
          if ( (v30 & 3) != 0 )
          {
            v32 = v30 & 0xFFFFFFFFFFFFFFFCuLL;
            v31 = (v30 & 1) == 0;
          }
          v34 = RtlImageNtHeaderEx(1LL, v32, 0LL, &v75);
          if ( !v75 )
            goto LABEL_37;
          v35 = *(_WORD *)(v75 + 24);
          if ( v35 == 267 )
          {
            if ( !*(_DWORD *)(v75 + 116) )
              goto LABEL_38;
            v36 = *(unsigned int *)(v75 + 120);
            if ( !(_DWORD)v36 )
              goto LABEL_38;
            v37 = *(_DWORD *)(v75 + 124);
          }
          else
          {
            if ( v35 != 523 )
              goto LABEL_38;
            if ( !*(_DWORD *)(v75 + 132) )
              goto LABEL_38;
            v36 = *(unsigned int *)(v75 + 136);
            if ( !(_DWORD)v36 )
              goto LABEL_38;
            v37 = *(_DWORD *)(v75 + 140);
          }
          v65 = v37;
          if ( !v31 && (unsigned int)v36 >= *(_DWORD *)(v75 + 84) )
          {
            v33 = (char *)RtlAddressInSectionTable(v75, v32, (unsigned int)v36);
            if ( v33 )
            {
              v34 = 0;
LABEL_37:
              if ( v34 >= 0 )
                goto LABEL_39;
            }
LABEL_38:
            v33 = 0LL;
            goto LABEL_39;
          }
          v33 = (char *)(v32 + v36);
LABEL_39:
          if ( !v33 )
          {
            ForwardedDll = -1073741702;
            goto LABEL_83;
          }
          if ( v23 )
            break;
          if ( (LdrpDebugFlags & 5) != 0 )
            LdrpLogDbgPrint(
              (unsigned int)"minkernel\\ntdll\\ldrsnap.c",
              830,
              (unsigned int)"LdrpGetProcedureAddress",
              2,
              (__int64)"Loading procedure 0x%lx by ordinal\n",
              v22);
          if ( !v22 )
          {
            ForwardedDll = -1073741811;
LABEL_83:
            v29 = (char *)v64;
            goto LABEL_84;
          }
          v47 = v22 - *((_DWORD *)v33 + 4);
LABEL_70:
          if ( v47 >= *((_DWORD *)v33 + 5) )
          {
            ForwardedDll = (v23 != 0LL) - 1073741512;
            v29 = (char *)v64;
            v24 = v60;
            goto LABEL_85;
          }
          v29 = (char *)(v30 + *(unsigned int *)(v30 + *((unsigned int *)v33 + 7) + 4LL * (int)v47));
          v64 = (__int64)v29;
          if ( v29 < v33 || v29 >= &v33[v65] )
          {
            ForwardedDll = 0;
            v24 = v60;
            goto LABEL_85;
          }
          v48 = v67++;
          if ( v48 >= 0x20 )
          {
            ForwardedDll = -1073741701;
LABEL_84:
            v24 = v60;
            goto LABEL_85;
          }
          ForwardedDll = LdrpParseForwarderDescription(v29, v84, &v74, &v63);
          v24 = v60;
          if ( ForwardedDll < 0 )
            goto LABEL_85;
          DWORD2(v86) = *(_DWORD *)(v25 + 272);
          ForwardedDll = LdrpLoadForwardedDll((__int64)v84, (int)&v85, v60, v25, 2, (__int64)&v76);
          if ( ForwardedDll < 0 )
            goto LABEL_85;
          v25 = v76;
          LdrpDereferenceModule(v76, v49, v50, v51);
          v23 = v74;
          v22 = v63;
          v9 = v77;
        }
        if ( (LdrpDebugFlags & 5) != 0 )
          LdrpLogDbgPrint(
            (unsigned int)"minkernel\\ntdll\\ldrsnap.c",
            812,
            (unsigned int)"LdrpGetProcedureAddress",
            2,
            (__int64)"Locating procedure \"%s\" by name\n",
            v23);
        v38 = 0;
        v39 = *((_DWORD *)v33 + 6) - 1;
        v40 = v39 / 2;
        if ( v39 >= 0 )
        {
          while ( 1 )
          {
            v41 = v23;
            v42 = v30 + *(unsigned int *)(v30 + *((unsigned int *)v33 + 8) + 4LL * v40) - (_QWORD)v23;
            while ( 1 )
            {
              v43 = *v41;
              if ( *v41 != v41[v42] )
                break;
              ++v41;
              if ( !v43 )
              {
                v44 = 0;
                goto LABEL_54;
              }
            }
            v44 = v43 < (unsigned int)v41[v42] ? -1 : 1;
LABEL_54:
            if ( !v44 )
              break;
            v45 = v40 - 1;
            if ( v44 >= 0 )
              v45 = v39;
            v39 = v45;
            if ( v44 >= 0 )
              v38 = v40 + 1;
            v40 = (v38 + v45) / 2;
            if ( v45 < v38 )
              goto LABEL_60;
          }
          v47 = *(unsigned __int16 *)(v30 + *((unsigned int *)v33 + 9) + 2LL * v40);
          goto LABEL_70;
        }
LABEL_60:
        if ( (LdrpDebugFlags & 3) != 0 )
          LdrpLogDbgPrint(
            (unsigned int)"minkernel\\ntdll\\ldrsnap.c",
            1559,
            (unsigned int)"LdrpNameToOrdinal",
            1,
            (__int64)"Procedure \"%s\" could not be located in DLL at base 0x%p.\n",
            v23,
            (const void *)v30);
        if ( (LdrpDebugFlags & 0x40) != 0 )
          __debugbreak();
        ForwardedDll = -1073741702;
        v29 = (char *)v64;
        v24 = v60;
LABEL_85:
        if ( BYTE12(v92) )
          RtlReleasePath(v85);
        if ( ForwardedDll < 0 )
          v29 = 0LL;
        v64 = (__int64)v29;
        v9 = v77;
LABEL_90:
        v63 = ForwardedDll;
        if ( ForwardedDll >= 0 )
        {
          if ( AvrfpAPILookupCallbacksEnabled )
          {
            AVrfCallAPILookupCallback(*(_QWORD *)(v9 + 48), *(_QWORD *)(v24 + 48), (_DWORD)v29, 1, (__int64)&v64);
            v29 = (char *)v64;
          }
          if ( v78 )
          {
            v79 = 0LL;
            v78(&v79, v24, v29, *(_QWORD *)(v9 + 48), 0LL);
            if ( v79 )
              v29 = v79;
          }
        }
        *v81 = v29;
        v52 = v62;
        LODWORD(v15) = v80;
        Heap = v69;
        LODWORD(v16) = v61;
        v14 = (_QWORD *)v71;
        v19 = v72;
        if ( v62 == (_DWORD)v80 )
        {
          v11 = ForwardedDll;
          v66 = ForwardedDll;
          v73 = *(_QWORD *)&v69[8 * (unsigned int)v80];
        }
        else
        {
          v11 = v66;
        }
LABEL_100:
        v18 = v52 + 1;
        v62 = v18;
        v72 = ++v19;
        v13 = v68;
        if ( (unsigned int)v18 >= (unsigned int)v16 )
        {
          v12 = v60;
          break;
        }
      }
    }
    if ( v11 < 0 )
    {
      v53 = LdrpRedirectDelayloadFailure(v9, v12, v68, v83, v82, (__int64)v70, v11);
      v73 = v53;
      v70 = (_QWORD *)v53;
      if ( v53 )
      {
        if ( (unsigned int)(v11 + 1073741512) <= 1 || v11 == -1073741702 || v11 == -1073740671 )
          *(_QWORD *)&Heap[8 * (unsigned int)v15] = v53;
      }
    }
    LdrpWriteBackProtectedDelayLoad(v9, (_DWORD)v14, (_DWORD)Heap, v16, v15);
    if ( v93 != Heap )
      RtlFreeHeap(LdrpHeap, 0, (__int64)Heap);
    LdrpDereferenceModule(v12, v54, v55, v56);
    return v73;
  }
  return v57;
}
