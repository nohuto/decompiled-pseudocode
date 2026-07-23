/*
 * XREFs of _LdrpSnapModule@4 @ 0x4B2BDE10
 * Callers:
 *     _LdrpMapAndSnapDependency@4 @ 0x4B2CB3D0 (_LdrpMapAndSnapDependency@4.c)
 *     _LdrpProcessWork@8 @ 0x4B2CE6E8 (_LdrpProcessWork@8.c)
 * Callees:
 *     _RtlpImageDirectoryEntryToData64@24 @ 0x4B2A7346 (_RtlpImageDirectoryEntryToData64@24.c)
 *     _RtlAddressInSectionTable@12 @ 0x4B2B95F0 (_RtlAddressInSectionTable@12.c)
 *     _RtlpxLookupFunctionTable@8 @ 0x4B2BD6C0 (_RtlpxLookupFunctionTable@8.c)
 *     _RtlImageNtHeaderEx@20 @ 0x4B2BE540 (_RtlImageNtHeaderEx@20.c)
 *     _LdrpLogDllState@12 @ 0x4B2CDF06 (_LdrpLogDllState@12.c)
 *     _LdrpDoPostSnapWork@4 @ 0x4B2D0C67 (_LdrpDoPostSnapWork@4.c)
 *     _CompatCachepLookupCdb@8 @ 0x4B2D1C4D (_CompatCachepLookupCdb@8.c)
 *     _LdrpHandleReplacedModule@4 @ 0x4B2E86A0 (_LdrpHandleReplacedModule@4.c)
 *     _LdrpReportError@12 @ 0x4B2E9F63 (_LdrpReportError@12.c)
 *     _LdrpLogLoadFailureEtwEvent@20 @ 0x4B2EC106 (_LdrpLogLoadFailureEtwEvent@20.c)
 *     _LdrpLogError@16 @ 0x4B2EC95F (_LdrpLogError@16.c)
 *     _LdrpResolveForwarder@16 @ 0x4B2ED6C1 (_LdrpResolveForwarder@16.c)
 *     _LdrpFreeReplacedModule@4 @ 0x4B2F2697 (_LdrpFreeReplacedModule@4.c)
 *     _NtUnmapViewOfSection@8 @ 0x4B2F2C20 (_NtUnmapViewOfSection@8.c)
 *     _LdrpLogDbgPrint @ 0x4B32E582 (_LdrpLogDbgPrint.c)
 *     _LdrpCheckRedirection@12 @ 0x4B3342C5 (_LdrpCheckRedirection@12.c)
 *     _LdrpGenericExceptionFilter@8 @ 0x4B334947 (_LdrpGenericExceptionFilter@8.c)
 */

NTSTATUS __usercall LdrpSnapModule@<eax>(_DWORD *a1@<ecx>, int a2@<ebp>)
{
  _DWORD *v3; // edx
  int v4; // eax
  void *v5; // ecx
  NTSTATUS v6; // esi
  unsigned int v7; // edi
  int v8; // ecx
  int v9; // edx
  int v10; // eax
  int v11; // esi
  _DWORD *v12; // esi
  void *v13; // ecx
  int v14; // eax
  unsigned int v15; // edx
  char **v16; // eax
  int v17; // edi
  unsigned int v18; // eax
  char *v19; // esi
  NTSTATUS v20; // eax
  WORD v21; // ax
  ULONG v22; // edx
  char *v23; // ecx
  char v24; // al
  char *v25; // esi
  int v26; // ecx
  int v27; // eax
  int *v28; // ecx
  int v29; // eax
  unsigned __int16 *v30; // esi
  const char *v31; // ecx
  int v32; // eax
  char *v33; // edi
  char **v34; // ecx
  unsigned int v35; // esi
  int v36; // edi
  int v37; // eax
  signed int v38; // ecx
  bool v39; // cc
  unsigned int v40; // eax
  char *v41; // ecx
  int v42; // eax
  _IMAGE_NT_HEADERS64 *v43; // eax
  int v45; // edi
  int v46; // [esp-A0h] [ebp-ACh] BYREF
  int v47; // [esp-90h] [ebp-9Ch] BYREF
  int v48; // [esp-8Ch] [ebp-98h]
  int v49; // [esp-88h] [ebp-94h]
  int v50; // [esp-84h] [ebp-90h]
  int v51; // [esp-80h] [ebp-8Ch]
  unsigned int v52; // [esp-7Ch] [ebp-88h]
  char *v53; // [esp-78h] [ebp-84h] BYREF
  char *v54; // [esp-74h] [ebp-80h]
  char *v55; // [esp-70h] [ebp-7Ch]
  char *v56; // [esp-6Ch] [ebp-78h]
  char *v57; // [esp-68h] [ebp-74h]
  unsigned int v58; // [esp-64h] [ebp-70h]
  int v59; // [esp-60h] [ebp-6Ch]
  unsigned int v60; // [esp-5Ch] [ebp-68h]
  unsigned int v61; // [esp-58h] [ebp-64h] BYREF
  const char *v62; // [esp-54h] [ebp-60h]
  char **v63; // [esp-50h] [ebp-5Ch]
  int v64; // [esp-4Ch] [ebp-58h] BYREF
  int v65; // [esp-48h] [ebp-54h] BYREF
  int *v66; // [esp-44h] [ebp-50h]
  const char *v67; // [esp-40h] [ebp-4Ch]
  int v68; // [esp-3Ch] [ebp-48h]
  char *v69; // [esp-38h] [ebp-44h]
  int v70; // [esp-34h] [ebp-40h]
  int v71; // [esp-30h] [ebp-3Ch]
  char *v72; // [esp-2Ch] [ebp-38h]
  _DWORD *v73; // [esp-28h] [ebp-34h]
  char v74; // [esp-21h] [ebp-2Dh]
  int *v75; // [esp-1Ch] [ebp-28h]
  int *v76; // [esp-18h] [ebp-24h]
  _EXCEPTION_REGISTRATION_RECORD *ExceptionList; // [esp-10h] [ebp-1Ch]
  int (__cdecl *v78)(int, PVOID, int, int); // [esp-Ch] [ebp-18h]
  _EH4_SCOPETABLE *v79; // [esp-8h] [ebp-14h]
  int v80; // [esp-4h] [ebp-10h]
  _DWORD v81[2]; // [esp+0h] [ebp-Ch] BYREF
  int v82; // [esp+8h] [ebp-4h] BYREF
  _UNKNOWN *retaddr; // [esp+Ch] [ebp+0h]

  v81[0] = a2;
  v81[1] = retaddr;
  v80 = -2;
  v79 = stru_4B38BEB8;
  v78 = _except_handler4;
  ExceptionList = NtCurrentTeb()->NtTib.ExceptionList;
  v75 = &v82;
  v79 = (_EH4_SCOPETABLE *)(__security_cookie ^ (unsigned int)stru_4B38BEB8);
  v76 = &v46;
  v73 = a1;
  v68 = a1[8];
  v59 = *(_DWORD *)(v68 + 24);
  v51 = v68 + 36;
  LdrpLogDllState(5286);
  v3 = a1;
  if ( a1[11] )
  {
    v4 = LdrpHandleReplacedModule();
    v3 = a1;
    v5 = (void *)a1[11];
    if ( (void *)v4 != v5 )
    {
      LdrpFreeReplacedModule(v5);
      v3 = a1;
    }
    v3[11] = 0;
  }
  v6 = 0;
  v70 = 0;
  v62 = 0;
  while ( 1 )
  {
    v7 = v3[17];
    if ( v7 >= v3[13] )
      break;
    v8 = v3[12];
    v9 = *(_DWORD *)(v8 + 4 * v7);
    v71 = v9;
    v10 = v8;
    if ( !v9
      || (v11 = *(_DWORD *)(v9 + 92)) == 0
      || (*(_DWORD *)(v11 + 16) & 0x80000) != 0
      || *(_DWORD *)(v11 + 32) == v9 )
    {
      v12 = v73;
    }
    else
    {
      v71 = *(_DWORD *)(v11 + 32);
      *(_DWORD *)(v11 + 32) = v9;
      v12 = v73;
      v10 = v73[12];
    }
    v13 = *(void **)(v10 + 4 * v7);
    if ( v13 != (void *)v71 )
    {
      LdrpFreeReplacedModule(v13);
      *(_DWORD *)(v12[12] + 4 * v7) = v71;
    }
    v14 = v12[19];
    v15 = *(_DWORD *)(v14 + 20 * v7);
    v66 = (int *)(v15 + v59);
    v16 = (char **)(v59 + *(_DWORD *)(v14 + 20 * v7 + 16));
    v63 = v16;
    v17 = v68;
    if ( !v15 || v15 > *(_DWORD *)(v68 + 32) )
      v66 = (int *)v16;
    if ( v71 )
    {
      v18 = *(_DWORD *)(v71 + 24);
      v69 = (char *)v18;
      v74 = 1;
      v19 = (char *)v18;
      v64 = 0;
      v72 = 0;
      v65 = 0;
      if ( (v18 & 3) != 0 )
      {
        v19 = (char *)(v18 & 0xFFFFFFFC);
        v74 = (v18 & 1) == 0;
      }
      v20 = RtlImageNtHeaderEx(1u, v19, 0LL, (PIMAGE_NT_HEADERS *)&v64);
      if ( v64 )
      {
        v21 = *(_WORD *)(v64 + 24);
        if ( v21 == 267 )
        {
          if ( !*(_DWORD *)(v64 + 116) )
            goto LABEL_33;
          v22 = *(_DWORD *)(v64 + 120);
          if ( !v22 )
            goto LABEL_33;
          v61 = *(_DWORD *)(v64 + 124);
          if ( v74 || v22 < *(_DWORD *)(v64 + 84) )
          {
            v23 = &v19[v22];
            v72 = &v19[v22];
          }
          else
          {
            v72 = (char *)RtlAddressInSectionTable((PIMAGE_NT_HEADERS)v64, v19, v22);
            if ( v72 )
            {
              v20 = 0;
              goto LABEL_32;
            }
LABEL_33:
            v23 = 0;
            v72 = 0;
          }
LABEL_35:
          if ( !v23 )
          {
            v24 = ShowSnaps;
            if ( (ShowSnaps & 3) != 0 )
            {
              LdrpLogDbgPrint(
                "minkernel\\ntdll\\ldrsnap.c",
                2636,
                "LdrpSnapModule",
                0,
                "DLL \"%wZ\" does not contain an export table\n",
                v71 + 36);
              v24 = ShowSnaps;
            }
            if ( (v24 & 0x10) != 0 )
              __debugbreak();
            v6 = -1073741701;
            goto LABEL_101;
          }
          v25 = v69;
          if ( qword_4B3A9300 && (byte_4B3A92E4 & 1) == 0 )
          {
            v26 = dword_4B3A9374[0];
            if ( (unsigned int)v69 < dword_4B3A9374[0] || (unsigned int)v69 >= dword_4B3A9378[0] + dword_4B3A9374[0] )
            {
              RtlpxLookupFunctionTable(v69, (int)&v47, (int)v81, (ULONG_PTR *)v17);
              v26 = v48;
            }
            else
            {
              v47 = dword_4B3A9370[0];
              v48 = dword_4B3A9374[0];
              v49 = dword_4B3A9378[0];
              v50 = dword_4B3A937C[0];
            }
            v52 = v26;
            if ( (char *)v26 != v25 )
              __fastfail(0x18u);
            v23 = v72;
          }
          v54 = &v23[v61];
          v55 = &v25[*((_DWORD *)v23 + 7)];
          v58 = *((_DWORD *)v23 + 6);
          v57 = &v25[*((_DWORD *)v23 + 8)];
          v56 = &v25[*((_DWORD *)v23 + 9)];
          v3 = v73;
          v27 = 4 * v73[18];
          v28 = &v66[v27 / 4u];
          v66 = (int *)((char *)v66 + v27);
          v63 = (char **)((char *)v63 + v27);
LABEL_51:
          v29 = *v28;
          if ( !*v28 )
          {
            v3[18] = 0;
            ++v3[17];
            v6 = v70;
            continue;
          }
          v70 = -1073741702;
          v64 = -1073741702;
          v52 = (unsigned int)v29 >> 31;
          v65 = -4530927;
          v67 = 0;
          if ( v29 < 0 )
          {
            v62 = (const char *)(unsigned __int16)v29;
            v41 = v72;
            v40 = (unsigned __int16)v29 - *((_DWORD *)v72 + 4);
            goto LABEL_83;
          }
          v30 = (unsigned __int16 *)(v29 + *(_DWORD *)(v17 + 24));
          v31 = (const char *)(v30 + 1);
          v67 = (const char *)(v30 + 1);
          if ( (v3[4] & 0x2000000) != 0 )
          {
            v32 = LdrpCheckRedirection(v30 + 1);
            v33 = (char *)v32;
            v65 = v32;
            if ( v32 != -4530927 )
            {
              if ( (ShowSnaps & 5) != 0 )
                LdrpLogDbgPrint(
                  "minkernel\\ntdll\\ldrsnap.c",
                  2709,
                  "LdrpSnapModule",
                  2,
                  "Import '%s' of DLL '%wZ' is redirected to 0x%p",
                  v67,
                  v68 + 36,
                  v32);
              v70 = 0;
LABEL_58:
              v34 = v63;
              *v63 = v33;
              ++v66;
              v63 = v34 + 1;
              v3 = v73;
              ++v73[18];
              v17 = v68;
              v25 = v69;
              v28 = v66;
              goto LABEL_51;
            }
            v31 = v67;
          }
          v35 = *v30;
          v60 = 0;
          v36 = v58 - 1;
          if ( v35 >= v58 )
            v35 = v36 / 2;
          if ( v36 < 0 )
          {
LABEL_70:
            if ( (ShowSnaps & 3) != 0 )
              LdrpLogDbgPrint(
                "minkernel\\ntdll\\ldrsnap.c",
                1559,
                "LdrpNameToOrdinal",
                1,
                "Procedure \"%s\" could not be located in DLL at base 0x%p.\n",
                v67,
                v69);
            if ( (ShowSnaps & 0x40) != 0 )
              __debugbreak();
          }
          else
          {
            while ( 1 )
            {
              v37 = strcmp(v31, &v69[*(_DWORD *)&v57[4 * v35]]);
              if ( v37 )
                v37 = v37 < 0 ? -1 : 1;
              if ( !v37 )
                break;
              if ( v37 >= 0 )
              {
                v38 = v35 + 1;
                v60 = v35 + 1;
              }
              else
              {
                v36 = v35 - 1;
                v38 = v60;
              }
              v35 = (v36 + v38) / 2;
              v39 = v36 < v38;
              v31 = v67;
              if ( v39 )
                goto LABEL_70;
            }
            v40 = *(unsigned __int16 *)&v56[2 * v35];
            v25 = v69;
            v41 = v72;
LABEL_83:
            if ( v40 < *((_DWORD *)v41 + 5) )
            {
              v42 = *(_DWORD *)&v55[4 * v40];
              if ( v42 )
              {
                v33 = &v25[v42];
                v6 = 0;
                v70 = 0;
                v64 = 0;
                if ( v33 > v41 && v33 < v54 )
                {
                  v43 = (_IMAGE_NT_HEADERS64 *)LdrpResolveForwarder(v33, v71, v68, &v53);
                  v6 = (NTSTATUS)v43;
                  v70 = (int)v43;
                  v64 = (int)v43;
                  if ( v43 == (_IMAGE_NT_HEADERS64 *)259 )
                    return 0;
                  if ( (int)v43 < 0 )
                  {
LABEL_76:
                    if ( v6 == -1073741702 || v6 == -1073741515 )
                    {
                      if ( CompatCachepLookupCdb(*(wchar_t **)(v68 + 40))
                        || CompatCachepLookupCdb(*(wchar_t **)(v71 + 40)) )
                      {
                        LdrpLogLoadFailureEtwEvent(1, &LoadFailure, 0);
                        LdrpLogLoadFailureEtwEvent(1, &LoadFailureOperational, 1);
                      }
                      v80 = 0;
                      if ( (_BYTE)v52 )
                      {
                        v6 = -1073741512;
                      }
                      else
                      {
                        v6 = -1073741511;
                        v62 = v67;
                      }
                      v64 = v6;
                      LdrpReportError(v6);
                      v80 = -2;
                    }
                    goto LABEL_101;
                  }
                  v33 = v53;
                }
                goto LABEL_75;
              }
            }
          }
          v33 = (char *)v65;
          v6 = v70;
LABEL_75:
          if ( v6 < 0 )
            goto LABEL_76;
          goto LABEL_58;
        }
        if ( v21 != 523 )
          goto LABEL_33;
        v20 = RtlpImageDirectoryEntryToData64(v19, v74, 0, &v61, (PIMAGE_NT_HEADERS)v64, &v65);
        v72 = (char *)v65;
      }
LABEL_32:
      if ( v20 < 0 )
        goto LABEL_33;
      v23 = v72;
      goto LABEL_35;
    }
    v3 = v73;
    ++v73[17];
    v6 = v70;
  }
  if ( v6 >= 0 )
  {
    v6 = LdrpDoPostSnapWork(v3);
    if ( v6 >= 0 )
    {
      v45 = v68;
      LdrpLogDllState(5287);
      *(_DWORD *)(*(_DWORD *)(v45 + 80) + 32) = 5;
    }
LABEL_101:
    v3 = v73;
  }
  if ( v3[26] )
  {
    NtUnmapViewOfSection((HANDLE)0xFFFFFFFF, (PVOID)v3[26]);
    v3 = v73;
    v73[26] = 0;
  }
  if ( v6 < 0 )
    LdrpLogError(0, v3);
  return v6;
}
