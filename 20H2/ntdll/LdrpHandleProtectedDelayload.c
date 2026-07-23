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
 *     LdrpWriteBackProtectedDelayLoad @ 0x1800477F0 (LdrpWriteBackProtectedDelayLoad.c)
 *     RtlGuardCheckImageBase @ 0x180074B68 (RtlGuardCheckImageBase.c)
 *     LdrpParseForwarderDescription @ 0x180075AC4 (LdrpParseForwarderDescription.c)
 *     RtlAddressInSectionTable @ 0x180076F70 (RtlAddressInSectionTable.c)
 *     LdrpRedirectDelayloadFailure @ 0x180080EC4 (LdrpRedirectDelayloadFailure.c)
 *     __security_check_cookie @ 0x18008C340 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800A0B90 (_guard_dispatch_icall_nop.c)
 *     LdrpLogDbgPrint @ 0x1800CDCC8 (LdrpLogDbgPrint.c)
 *     LdrpCheckRedirection @ 0x1800D52D0 (LdrpCheckRedirection.c)
 *     AVrfCallAPILookupCallback @ 0x1800D99F0 (AVrfCallAPILookupCallback.c)
 */

__int64 __fastcall LdrpHandleProtectedDelayload(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        unsigned int a6)
{
  int v7; // r15d
  int v8; // ebx
  __int64 v9; // r14
  NTSTATUS DelayloadExportDll; // eax
  NTSTATUS Status; // r13d
  char *v12; // rbx
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
  _QWORD *v24; // r15
  _QWORD *v25; // r13
  unsigned __int64 v26; // rax
  char ShouldModuleImportBeRedirected; // al
  __int64 v28; // rax
  char *v29; // rdi
  unsigned __int64 v30; // r15
  bool v31; // bl
  char *v32; // rdi
  char *v33; // r14
  NTSTATUS v34; // eax
  unsigned __int16 Magic; // ax
  __int64 SizeOfHeapCommit_low; // rax
  unsigned int SizeOfHeapCommit_high; // edx
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
  unsigned int v49; // ecx
  __int64 v50; // rdx
  __int64 v51; // rbx
  char i; // [rsp+40h] [rbp-588h]
  PVOID v54; // [rsp+48h] [rbp-580h] BYREF
  int v55; // [rsp+50h] [rbp-578h]
  unsigned int v56; // [rsp+54h] [rbp-574h]
  int v57; // [rsp+58h] [rbp-570h] BYREF
  __int64 v58; // [rsp+60h] [rbp-568h] BYREF
  unsigned int v59; // [rsp+68h] [rbp-560h]
  NTSTATUS v60; // [rsp+6Ch] [rbp-55Ch]
  unsigned int v61; // [rsp+70h] [rbp-558h]
  int v62[2]; // [rsp+78h] [rbp-550h]
  _BYTE *v63; // [rsp+80h] [rbp-548h]
  __int64 v64; // [rsp+88h] [rbp-540h] BYREF
  __int64 v65; // [rsp+90h] [rbp-538h]
  __int64 v66; // [rsp+98h] [rbp-530h]
  __int64 v67; // [rsp+A0h] [rbp-528h]
  const char *v68; // [rsp+A8h] [rbp-520h] BYREF
  PIMAGE_NT_HEADERS OutHeaders; // [rsp+B0h] [rbp-518h] BYREF
  PVOID v70; // [rsp+B8h] [rbp-510h] BYREF
  __int64 v71; // [rsp+C0h] [rbp-508h]
  void (__fastcall *v72)(char **, _QWORD *, char *, _QWORD, _QWORD); // [rsp+C8h] [rbp-500h]
  char *v73; // [rsp+D0h] [rbp-4F8h] BYREF
  __int64 v74; // [rsp+D8h] [rbp-4F0h]
  char **v75; // [rsp+E0h] [rbp-4E8h]
  __int64 v76; // [rsp+E8h] [rbp-4E0h]
  int v77[2]; // [rsp+F0h] [rbp-4D8h]
  _BYTE v78[24]; // [rsp+F8h] [rbp-4D0h] BYREF
  PWSTR Path[2]; // [rsp+110h] [rbp-4B8h] BYREF
  __int128 v80; // [rsp+120h] [rbp-4A8h]
  __int128 v81; // [rsp+130h] [rbp-498h]
  __int128 v82; // [rsp+140h] [rbp-488h]
  __int128 v83; // [rsp+150h] [rbp-478h]
  __int128 v84; // [rsp+160h] [rbp-468h]
  __int128 v85; // [rsp+170h] [rbp-458h]
  __int128 v86; // [rsp+180h] [rbp-448h]
  _BYTE BaseAddress[1024]; // [rsp+190h] [rbp-438h] BYREF

  v76 = a4;
  v7 = a3;
  *(_QWORD *)v77 = a3;
  v8 = a2;
  *(_QWORD *)v62 = a2;
  v9 = a1;
  v71 = a1;
  v64 = a5;
  v67 = 0LL;
  DelayloadExportDll = LdrpGetDelayloadExportDll(a1, a2, (volatile signed __int32 **)&v54, a6, a5);
  Status = DelayloadExportDll;
  v60 = DelayloadExportDll;
  if ( DelayloadExportDll < 0 )
  {
    v51 = LdrpRedirectDelayloadFailure(v9, 0, v8, v7, a4, a5, DelayloadExportDll);
    v64 = v51;
    if ( v51 && (Status == -1073741515 || Status == -1073740671) )
      LdrpWriteBackProtectedDelayLoad(v9, a5, (unsigned int)&v64, 1, 0);
  }
  else
  {
    v12 = (char *)v54;
    RtlGuardCheckImageBase(*((PVOID *)v54 + 6));
    v13 = *(_QWORD *)v62;
    v14 = (_QWORD *)(*(_QWORD *)(v9 + 48) + *(unsigned int *)(*(_QWORD *)v62 + 12LL));
    v65 = (__int64)v14;
    v15 = (a5 - (__int64)v14) >> 3;
    v74 = v15;
    LODWORD(v16) = 0;
    v55 = 0;
    if ( *v14 )
    {
      do
        v16 = (unsigned int)(v16 + 1);
      while ( v14[v16] );
      v55 = v16;
    }
    if ( (unsigned int)v16 <= 0x80 )
    {
      Heap = BaseAddress;
      v63 = BaseAddress;
    }
    else
    {
      Heap = RtlAllocateHeap(LdrpHeap, NtdllBaseTag + 0x40000, 8LL * (unsigned int)v16);
      v63 = Heap;
      v13 = *(_QWORD *)v62;
      if ( !Heap )
      {
        Heap = BaseAddress;
        v63 = BaseAddress;
        v14 = (_QWORD *)v64;
        v65 = v64;
        LODWORD(v16) = v16 - v15;
        if ( (unsigned int)v16 > 0x80 )
          LODWORD(v16) = 128;
        v55 = v16;
        LODWORD(v15) = 0;
        v74 = 0LL;
      }
    }
    if ( g_ShimsEnabled )
      v72 = (void (__fastcall *)(char **, _QWORD *, char *, _QWORD, _QWORD))(__ROR8__(
                                                                               g_pfnSE_GetProcAddressForCaller,
                                                                               64 - (MEMORY[0x7FFE0330] & 0x3Fu)) ^ MEMORY[0x7FFE0330]);
    else
      v72 = 0LL;
    v18 = 0LL;
    v56 = 0;
    if ( (_DWORD)v16 )
    {
      v19 = 0LL;
      v66 = 0LL;
      v59 = v60;
      while ( 1 )
      {
        v75 = (char **)&Heap[8 * v19];
        *v75 = 0LL;
        if ( (_DWORD)v18 != (_DWORD)v15 )
        {
          if ( v14[v19] - *(_QWORD *)(v9 + 48) >= (unsigned __int64)*(unsigned int *)(v9 + 64) )
          {
            v49 = v56;
            goto LABEL_100;
          }
          v18 = v56;
        }
        v58 = 0LL;
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
        v68 = v23;
        v57 = v22;
        v24 = v54;
        v25 = v54;
        v70 = v54;
        v61 = 0;
        v26 = *((_QWORD *)v54 + 10);
        *(_OWORD *)Path = 0LL;
        v80 = 0LL;
        v82 = 0LL;
        v83 = 0LL;
        v84 = 0LL;
        v85 = 0LL;
        v86 = 0LL;
        v81 = v26;
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
                v58 = v28;
                ForwardedDll = 0;
                goto LABEL_90;
              }
            }
          }
          v30 = v25[6];
          v31 = 1;
          v32 = (char *)v30;
          OutHeaders = 0LL;
          v33 = 0LL;
          if ( (v30 & 3) != 0 )
          {
            v32 = (char *)(v30 & 0xFFFFFFFFFFFFFFFCuLL);
            v31 = (v30 & 1) == 0;
          }
          v34 = RtlImageNtHeaderEx(1u, v32, 0LL, &OutHeaders);
          if ( !OutHeaders )
            goto LABEL_37;
          Magic = OutHeaders->OptionalHeader.Magic;
          if ( Magic == 267 )
          {
            if ( !HIDWORD(OutHeaders->OptionalHeader.SizeOfHeapReserve) )
              goto LABEL_38;
            SizeOfHeapCommit_low = LODWORD(OutHeaders->OptionalHeader.SizeOfHeapCommit);
            if ( !(_DWORD)SizeOfHeapCommit_low )
              goto LABEL_38;
            SizeOfHeapCommit_high = HIDWORD(OutHeaders->OptionalHeader.SizeOfHeapCommit);
          }
          else
          {
            if ( Magic != 523 )
              goto LABEL_38;
            if ( !OutHeaders->OptionalHeader.NumberOfRvaAndSizes )
              goto LABEL_38;
            SizeOfHeapCommit_low = OutHeaders->OptionalHeader.DataDirectory[0].VirtualAddress;
            if ( !(_DWORD)SizeOfHeapCommit_low )
              goto LABEL_38;
            SizeOfHeapCommit_high = OutHeaders->OptionalHeader.DataDirectory[0].Size;
          }
          v59 = SizeOfHeapCommit_high;
          if ( !v31 && (unsigned int)SizeOfHeapCommit_low >= OutHeaders->OptionalHeader.SizeOfHeaders )
          {
            v33 = (char *)RtlAddressInSectionTable(OutHeaders, v32, SizeOfHeapCommit_low);
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
          v33 = &v32[SizeOfHeapCommit_low];
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
            v29 = (char *)v58;
            goto LABEL_84;
          }
          v47 = v22 - *((_DWORD *)v33 + 4);
LABEL_70:
          if ( v47 >= *((_DWORD *)v33 + 5) )
          {
            ForwardedDll = (v23 != 0LL) - 1073741512;
            v29 = (char *)v58;
            v24 = v54;
            goto LABEL_85;
          }
          v29 = (char *)(v30 + *(unsigned int *)(v30 + *((unsigned int *)v33 + 7) + 4LL * (int)v47));
          v58 = (__int64)v29;
          if ( v29 < v33 || v29 >= &v33[v59] )
          {
            ForwardedDll = 0;
            v24 = v54;
            goto LABEL_85;
          }
          v48 = v61++;
          if ( v48 >= 0x20 )
          {
            ForwardedDll = -1073741701;
LABEL_84:
            v24 = v54;
            goto LABEL_85;
          }
          ForwardedDll = LdrpParseForwarderDescription(v29, v78, &v68, &v57);
          v24 = v54;
          if ( ForwardedDll < 0 )
            goto LABEL_85;
          DWORD2(v80) = *((_DWORD *)v25 + 68);
          ForwardedDll = LdrpLoadForwardedDll((__int64)v78, (__int64)Path, (__int64)v54, (__int64)v25, 2, (__int64)&v70);
          if ( ForwardedDll < 0 )
            goto LABEL_85;
          v25 = v70;
          LdrpDereferenceModule((char *)v70);
          v23 = v68;
          v22 = v57;
          v9 = v71;
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
        v29 = (char *)v58;
        v24 = v54;
LABEL_85:
        if ( BYTE12(v86) )
          RtlReleasePath(Path[0]);
        if ( ForwardedDll < 0 )
          v29 = 0LL;
        v58 = (__int64)v29;
        v9 = v71;
LABEL_90:
        v57 = ForwardedDll;
        if ( ForwardedDll >= 0 )
        {
          if ( AvrfpAPILookupCallbacksEnabled )
          {
            AVrfCallAPILookupCallback(*(_QWORD *)(v9 + 48), v24[6], (_DWORD)v29, 1, (__int64)&v58);
            v29 = (char *)v58;
          }
          if ( v72 )
          {
            v73 = 0LL;
            v72(&v73, v24, v29, *(_QWORD *)(v9 + 48), 0LL);
            if ( v73 )
              v29 = v73;
          }
        }
        *v75 = v29;
        v49 = v56;
        LODWORD(v15) = v74;
        Heap = v63;
        LODWORD(v16) = v55;
        v14 = (_QWORD *)v65;
        v19 = v66;
        if ( v56 == (_DWORD)v74 )
        {
          Status = ForwardedDll;
          v60 = ForwardedDll;
          v67 = *(_QWORD *)&v63[8 * (unsigned int)v74];
        }
        else
        {
          Status = v60;
        }
LABEL_100:
        v18 = v49 + 1;
        v56 = v18;
        v66 = ++v19;
        v13 = *(_QWORD *)v62;
        if ( (unsigned int)v18 >= (unsigned int)v16 )
        {
          v12 = (char *)v54;
          break;
        }
      }
    }
    if ( Status < 0 )
    {
      v50 = LdrpRedirectDelayloadFailure(v9, (int)v12, v62[0], v77[0], v76, v64, Status);
      v67 = v50;
      v64 = v50;
      if ( v50 )
      {
        if ( (unsigned int)(Status + 1073741512) <= 1 || Status == -1073741702 || Status == -1073740671 )
          *(_QWORD *)&Heap[8 * (unsigned int)v15] = v50;
      }
    }
    LdrpWriteBackProtectedDelayLoad(v9, (_DWORD)v14, (_DWORD)Heap, v16, v15);
    if ( BaseAddress != Heap )
      RtlFreeHeap(LdrpHeap, 0, Heap);
    LdrpDereferenceModule(v12);
    return v67;
  }
  return v51;
}
