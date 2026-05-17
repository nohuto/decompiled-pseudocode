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

int __usercall LdrpSnapModule@<eax>(_DWORD *a1@<ecx>, int a2@<ebp>)
{
  _DWORD *v3; // edx
  int v4; // eax
  int v5; // esi
  unsigned int v6; // edi
  int v7; // ecx
  int v8; // edx
  int v9; // eax
  int v10; // esi
  _DWORD *v11; // esi
  int v12; // eax
  unsigned int v13; // edx
  char **v14; // eax
  int v15; // edi
  unsigned int v16; // eax
  unsigned int v17; // esi
  int v18; // eax
  __int16 v19; // ax
  unsigned int v20; // edx
  _DWORD *v21; // ecx
  char v22; // al
  char *v23; // esi
  int v24; // ecx
  int v25; // eax
  int *v26; // ecx
  int v27; // eax
  unsigned __int16 *v28; // esi
  const char *v29; // ecx
  int v30; // eax
  char *v31; // edi
  char **v32; // ecx
  unsigned int v33; // esi
  int v34; // edi
  int v35; // eax
  signed int v36; // ecx
  bool v37; // cc
  unsigned int v38; // eax
  unsigned int v39; // ecx
  int v40; // eax
  int v41; // eax
  int v43; // edi
  int v44; // [esp-A0h] [ebp-ACh] BYREF
  int v45; // [esp-90h] [ebp-9Ch] BYREF
  int v46; // [esp-8Ch] [ebp-98h]
  int v47; // [esp-88h] [ebp-94h]
  int v48; // [esp-84h] [ebp-90h]
  int v49; // [esp-80h] [ebp-8Ch]
  unsigned int v50; // [esp-7Ch] [ebp-88h]
  char *v51; // [esp-78h] [ebp-84h] BYREF
  char *v52; // [esp-74h] [ebp-80h]
  char *v53; // [esp-70h] [ebp-7Ch]
  char *v54; // [esp-6Ch] [ebp-78h]
  char *v55; // [esp-68h] [ebp-74h]
  unsigned int v56; // [esp-64h] [ebp-70h]
  int v57; // [esp-60h] [ebp-6Ch]
  unsigned int v58; // [esp-5Ch] [ebp-68h]
  int v59; // [esp-58h] [ebp-64h] BYREF
  const char *v60; // [esp-54h] [ebp-60h]
  char **v61; // [esp-50h] [ebp-5Ch]
  int v62; // [esp-4Ch] [ebp-58h] BYREF
  int v63; // [esp-48h] [ebp-54h] BYREF
  int *v64; // [esp-44h] [ebp-50h]
  const char *v65; // [esp-40h] [ebp-4Ch]
  int v66; // [esp-3Ch] [ebp-48h]
  char *v67; // [esp-38h] [ebp-44h]
  int v68; // [esp-34h] [ebp-40h]
  int v69; // [esp-30h] [ebp-3Ch]
  int v70; // [esp-2Ch] [ebp-38h]
  _DWORD *v71; // [esp-28h] [ebp-34h]
  char v72; // [esp-21h] [ebp-2Dh]
  int *v73; // [esp-1Ch] [ebp-28h]
  int *v74; // [esp-18h] [ebp-24h]
  _EXCEPTION_REGISTRATION_RECORD *ExceptionList; // [esp-10h] [ebp-1Ch]
  int (__cdecl *v76)(int, PVOID, int, int); // [esp-Ch] [ebp-18h]
  _EH4_SCOPETABLE *v77; // [esp-8h] [ebp-14h]
  int v78; // [esp-4h] [ebp-10h]
  _DWORD v79[2]; // [esp+0h] [ebp-Ch] BYREF
  int v80; // [esp+8h] [ebp-4h] BYREF
  _UNKNOWN *retaddr; // [esp+Ch] [ebp+0h]

  v79[0] = a2;
  v79[1] = retaddr;
  v78 = -2;
  v77 = stru_4B38BEB8;
  v76 = _except_handler4;
  ExceptionList = NtCurrentTeb()->NtTib.ExceptionList;
  v73 = &v80;
  v77 = (_EH4_SCOPETABLE *)(__security_cookie ^ (unsigned int)stru_4B38BEB8);
  v74 = &v44;
  v71 = a1;
  v66 = a1[8];
  v57 = *(_DWORD *)(v66 + 24);
  v49 = v66 + 36;
  LdrpLogDllState(5286);
  v3 = a1;
  if ( a1[11] )
  {
    v4 = LdrpHandleReplacedModule();
    v3 = a1;
    if ( v4 != a1[11] )
    {
      LdrpFreeReplacedModule();
      v3 = a1;
    }
    v3[11] = 0;
  }
  v5 = 0;
  v68 = 0;
  v60 = 0;
  while ( 1 )
  {
    v6 = v3[17];
    if ( v6 >= v3[13] )
      break;
    v7 = v3[12];
    v8 = *(_DWORD *)(v7 + 4 * v6);
    v69 = v8;
    v9 = v7;
    if ( !v8
      || (v10 = *(_DWORD *)(v8 + 92)) == 0
      || (*(_DWORD *)(v10 + 16) & 0x80000) != 0
      || *(_DWORD *)(v10 + 32) == v8 )
    {
      v11 = v71;
    }
    else
    {
      v69 = *(_DWORD *)(v10 + 32);
      *(_DWORD *)(v10 + 32) = v8;
      v11 = v71;
      v9 = v71[12];
    }
    if ( *(_DWORD *)(v9 + 4 * v6) != v69 )
    {
      LdrpFreeReplacedModule();
      *(_DWORD *)(v11[12] + 4 * v6) = v69;
    }
    v12 = v11[19];
    v13 = *(_DWORD *)(v12 + 20 * v6);
    v64 = (int *)(v13 + v57);
    v14 = (char **)(v57 + *(_DWORD *)(v12 + 20 * v6 + 16));
    v61 = v14;
    v15 = v66;
    if ( !v13 || v13 > *(_DWORD *)(v66 + 32) )
      v64 = (int *)v14;
    if ( v69 )
    {
      v16 = *(_DWORD *)(v69 + 24);
      v67 = (char *)v16;
      v72 = 1;
      v17 = v16;
      v62 = 0;
      v70 = 0;
      v63 = 0;
      if ( (v16 & 3) != 0 )
      {
        v17 = v16 & 0xFFFFFFFC;
        v72 = (v16 & 1) == 0;
      }
      v18 = RtlImageNtHeaderEx(1, v17, 0, 0, &v62);
      if ( v62 )
      {
        v19 = *(_WORD *)(v62 + 24);
        if ( v19 == 267 )
        {
          if ( !*(_DWORD *)(v62 + 116) )
            goto LABEL_33;
          v20 = *(_DWORD *)(v62 + 120);
          if ( !v20 )
            goto LABEL_33;
          v59 = *(_DWORD *)(v62 + 124);
          if ( v72 || v20 < *(_DWORD *)(v62 + 84) )
          {
            v21 = (_DWORD *)(v20 + v17);
            v70 = v20 + v17;
          }
          else
          {
            v70 = RtlAddressInSectionTable(v62, v17, v20);
            if ( v70 )
            {
              v18 = 0;
              goto LABEL_32;
            }
LABEL_33:
            v21 = 0;
            v70 = 0;
          }
LABEL_35:
          if ( !v21 )
          {
            v22 = ShowSnaps;
            if ( (ShowSnaps & 3) != 0 )
            {
              LdrpLogDbgPrint(
                "minkernel\\ntdll\\ldrsnap.c",
                2636,
                "LdrpSnapModule",
                0,
                "DLL \"%wZ\" does not contain an export table\n",
                v69 + 36);
              v22 = ShowSnaps;
            }
            if ( (v22 & 0x10) != 0 )
              __debugbreak();
            v5 = -1073741701;
            goto LABEL_101;
          }
          v23 = v67;
          if ( qword_4B3A9300 && (byte_4B3A92E4 & 1) == 0 )
          {
            v24 = dword_4B3A9374[0];
            if ( (unsigned int)v67 < dword_4B3A9374[0] || (unsigned int)v67 >= dword_4B3A9378[0] + dword_4B3A9374[0] )
            {
              RtlpxLookupFunctionTable(&v45, v67, (int)v79);
              v24 = v46;
            }
            else
            {
              v45 = dword_4B3A9370[0];
              v46 = dword_4B3A9374[0];
              v47 = dword_4B3A9378[0];
              v48 = dword_4B3A937C[0];
            }
            v50 = v24;
            if ( (char *)v24 != v23 )
              __fastfail(0x18u);
            v21 = (_DWORD *)v70;
          }
          v52 = (char *)v21 + v59;
          v53 = &v23[v21[7]];
          v56 = v21[6];
          v55 = &v23[v21[8]];
          v54 = &v23[v21[9]];
          v3 = v71;
          v25 = 4 * v71[18];
          v26 = &v64[v25 / 4u];
          v64 = (int *)((char *)v64 + v25);
          v61 = (char **)((char *)v61 + v25);
LABEL_51:
          v27 = *v26;
          if ( !*v26 )
          {
            v3[18] = 0;
            ++v3[17];
            v5 = v68;
            continue;
          }
          v68 = -1073741702;
          v62 = -1073741702;
          v50 = (unsigned int)v27 >> 31;
          v63 = -4530927;
          v65 = 0;
          if ( v27 < 0 )
          {
            v60 = (const char *)(unsigned __int16)v27;
            v39 = v70;
            v38 = (unsigned __int16)v27 - *(_DWORD *)(v70 + 16);
            goto LABEL_83;
          }
          v28 = (unsigned __int16 *)(v27 + *(_DWORD *)(v15 + 24));
          v29 = (const char *)(v28 + 1);
          v65 = (const char *)(v28 + 1);
          if ( (v3[4] & 0x2000000) != 0 )
          {
            v30 = LdrpCheckRedirection(v28 + 1);
            v31 = (char *)v30;
            v63 = v30;
            if ( v30 != -4530927 )
            {
              if ( (ShowSnaps & 5) != 0 )
                LdrpLogDbgPrint(
                  "minkernel\\ntdll\\ldrsnap.c",
                  2709,
                  "LdrpSnapModule",
                  2,
                  "Import '%s' of DLL '%wZ' is redirected to 0x%p",
                  v65,
                  v66 + 36,
                  v30);
              v68 = 0;
LABEL_58:
              v32 = v61;
              *v61 = v31;
              ++v64;
              v61 = v32 + 1;
              v3 = v71;
              ++v71[18];
              v15 = v66;
              v23 = v67;
              v26 = v64;
              goto LABEL_51;
            }
            v29 = v65;
          }
          v33 = *v28;
          v58 = 0;
          v34 = v56 - 1;
          if ( v33 >= v56 )
            v33 = v34 / 2;
          if ( v34 < 0 )
          {
LABEL_70:
            if ( (ShowSnaps & 3) != 0 )
              LdrpLogDbgPrint(
                "minkernel\\ntdll\\ldrsnap.c",
                1559,
                "LdrpNameToOrdinal",
                1,
                "Procedure \"%s\" could not be located in DLL at base 0x%p.\n",
                v65,
                v67);
            if ( (ShowSnaps & 0x40) != 0 )
              __debugbreak();
          }
          else
          {
            while ( 1 )
            {
              v35 = strcmp(v29, &v67[*(_DWORD *)&v55[4 * v33]]);
              if ( v35 )
                v35 = v35 < 0 ? -1 : 1;
              if ( !v35 )
                break;
              if ( v35 >= 0 )
              {
                v36 = v33 + 1;
                v58 = v33 + 1;
              }
              else
              {
                v34 = v33 - 1;
                v36 = v58;
              }
              v33 = (v34 + v36) / 2;
              v37 = v34 < v36;
              v29 = v65;
              if ( v37 )
                goto LABEL_70;
            }
            v38 = *(unsigned __int16 *)&v54[2 * v33];
            v23 = v67;
            v39 = v70;
LABEL_83:
            if ( v38 < *(_DWORD *)(v39 + 20) )
            {
              v40 = *(_DWORD *)&v53[4 * v38];
              if ( v40 )
              {
                v31 = &v23[v40];
                v5 = 0;
                v68 = 0;
                v62 = 0;
                if ( (unsigned int)v31 > v39 && v31 < v52 )
                {
                  v41 = LdrpResolveForwarder(v31, v69, v66, &v51);
                  v5 = v41;
                  v68 = v41;
                  v62 = v41;
                  if ( v41 == 259 )
                    return 0;
                  if ( v41 < 0 )
                  {
LABEL_76:
                    if ( v5 == -1073741702 || v5 == -1073741515 )
                    {
                      if ( CompatCachepLookupCdb(*(wchar_t **)(v66 + 40))
                        || CompatCachepLookupCdb(*(wchar_t **)(v69 + 40)) )
                      {
                        LdrpLogLoadFailureEtwEvent(1, LoadFailure, 0);
                        LdrpLogLoadFailureEtwEvent(1, LoadFailureOperational, 1);
                      }
                      v78 = 0;
                      if ( (_BYTE)v50 )
                      {
                        v5 = -1073741512;
                      }
                      else
                      {
                        v5 = -1073741511;
                        v60 = v65;
                      }
                      v62 = v5;
                      LdrpReportError(v5);
                      v78 = -2;
                    }
                    goto LABEL_101;
                  }
                  v31 = v51;
                }
                goto LABEL_75;
              }
            }
          }
          v31 = (char *)v63;
          v5 = v68;
LABEL_75:
          if ( v5 < 0 )
            goto LABEL_76;
          goto LABEL_58;
        }
        if ( v19 != 523 )
          goto LABEL_33;
        v18 = RtlpImageDirectoryEntryToData64(v17, v72, 0, &v59, v62, &v63);
        v70 = v63;
      }
LABEL_32:
      if ( v18 < 0 )
        goto LABEL_33;
      v21 = (_DWORD *)v70;
      goto LABEL_35;
    }
    v3 = v71;
    ++v71[17];
    v5 = v68;
  }
  if ( v5 >= 0 )
  {
    v5 = LdrpDoPostSnapWork(v3);
    if ( v5 >= 0 )
    {
      v43 = v66;
      LdrpLogDllState(5287);
      *(_DWORD *)(*(_DWORD *)(v43 + 80) + 32) = 5;
    }
LABEL_101:
    v3 = v71;
  }
  if ( v3[26] )
  {
    NtUnmapViewOfSection(-1, v3[26]);
    v3 = v71;
    v71[26] = 0;
  }
  if ( v5 < 0 )
    LdrpLogError(0, v3);
  return v5;
}
