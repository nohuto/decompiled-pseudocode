/*
 * XREFs of DrvDbGetDriverPackageMappedProperty @ 0x1406C4AB8
 * Callers:
 *     DrvDbDispatchDriverPackage @ 0x1406C3A30 (DrvDbDispatchDriverPackage.c)
 *     DrvDbGetDriverPackageMappedProperty @ 0x1406C4AB8 (DrvDbGetDriverPackageMappedProperty.c)
 *     DrvDbGetDriverPackageSignerScore @ 0x14071F9A0 (DrvDbGetDriverPackageSignerScore.c)
 *     DrvDbGetDriverPackageMappedPropertyKeys @ 0x14097A640 (DrvDbGetDriverPackageMappedPropertyKeys.c)
 * Callees:
 *     RtlStringCchCopyExW @ 0x1402FF324 (RtlStringCchCopyExW.c)
 *     memmove @ 0x140409FC0 (memmove.c)
 *     DrvDbOpenDriverPackageRegKey @ 0x1406C3D90 (DrvDbOpenDriverPackageRegKey.c)
 *     DrvDbOpenObjectRegKey @ 0x1406C3DD8 (DrvDbOpenObjectRegKey.c)
 *     _PnpCtxRegOpenKey @ 0x1406C41E4 (_PnpCtxRegOpenKey.c)
 *     DrvDbGetDriverPackageMappedProperty @ 0x1406C4AB8 (DrvDbGetDriverPackageMappedProperty.c)
 *     _PnpCtxRegCloseKey @ 0x1406C506C (_PnpCtxRegCloseKey.c)
 *     DrvDbGetRegValueMappedProperty @ 0x1406C525C (DrvDbGetRegValueMappedProperty.c)
 *     _PnpCtxRegQueryValue @ 0x1406C54FC (_PnpCtxRegQueryValue.c)
 *     DrvDbGetDriverPackageSignerScore @ 0x14071F9A0 (DrvDbGetDriverPackageSignerScore.c)
 *     _PnpCtxRegEnumKeyWithCallback @ 0x1407993A8 (_PnpCtxRegEnumKeyWithCallback.c)
 *     DrvDbGetObjectDatabaseNodeName @ 0x14097A970 (DrvDbGetObjectDatabaseNodeName.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall DrvDbGetDriverPackageMappedProperty(
        __int64 *a1,
        _WORD *a2,
        __int64 a3,
        __int64 a4,
        _DWORD *a5,
        NTSTRSAFE_PWSTR pszDest,
        unsigned int a7,
        __int64 (**a8)[3])
{
  _DWORD *v8; // r13
  unsigned int *v10; // r12
  int v13; // r8d
  __int64 *v14; // r10
  int DriverPackageMappedProperty; // ebx
  unsigned int v16; // edx
  __int64 (**i)[3]; // r11
  __int64 *v18; // r9
  __int64 v19; // rcx
  __int64 (**v20)[3]; // rsi
  __int64 v21; // rcx
  unsigned __int64 v22; // rdi
  int RegValueMappedProperty; // eax
  _DWORD *v24; // r13
  __int64 v26; // rax
  __int64 v27; // rcx
  char *v28; // r15
  __int64 v29; // rdx
  int v30; // eax
  __int64 v31; // rdx
  NTSTRSAFE_PWSTR v32; // rcx
  unsigned int v33; // eax
  __int64 v34; // rax
  __int64 v35; // r8
  wchar_t *v36; // rax
  __int64 v37; // rax
  int v38; // r8d
  int v39; // r8d
  int v40; // eax
  int v41; // eax
  NTSTRSAFE_PWSTR v42; // rcx
  __int64 v43; // rax
  int v44; // eax
  NTSTRSAFE_PWSTR v45; // r9
  int ObjectDatabaseNodeName; // eax
  __int64 v47; // rax
  PVOID PoolWithTag; // rax
  int v49; // r8d
  int v50; // eax
  __int64 v51; // rcx
  int v52; // r8d
  int v53; // r9d
  _DWORD *v54; // r13
  int v55; // r8d
  _WORD *v56; // rax
  __int64 v57; // r8
  _WORD *v58; // rdx
  unsigned __int64 v59; // rcx
  __int64 v60; // r9
  int v61; // ecx
  unsigned int v62; // eax
  __int64 v63; // rax
  __int64 v64; // rax
  bool v65; // zf
  __int64 v66; // rax
  unsigned int v67; // edx
  __int64 v68; // r8
  __int64 v69; // rax
  __int64 v70; // rdx
  NTSTRSAFE_PWSTR v71; // rcx
  unsigned int v72; // eax
  __int64 v73; // rax
  int v74; // eax
  _DWORD *v75; // r13
  char v76; // al
  char v77; // dl
  NTSTRSAFE_PWSTR v78; // rax
  unsigned int pcchRemaininga; // [rsp+28h] [rbp-89h]
  size_t *pcchRemaining; // [rsp+28h] [rbp-89h]
  ULONG dwFlags[2]; // [rsp+30h] [rbp-81h]
  int v82[2]; // [rsp+58h] [rbp-59h] BYREF
  wchar_t v83[2]; // [rsp+60h] [rbp-51h] BYREF
  int v84; // [rsp+64h] [rbp-4Dh] BYREF
  wchar_t v85[4]; // [rsp+68h] [rbp-49h] BYREF
  void *Src; // [rsp+70h] [rbp-41h]
  int v87; // [rsp+78h] [rbp-39h] BYREF
  __int64 v88; // [rsp+80h] [rbp-31h] BYREF
  __int128 v89; // [rsp+88h] [rbp-29h] BYREF
  __int64 v90; // [rsp+98h] [rbp-19h]
  NTSTRSAFE_PWSTR v91; // [rsp+A0h] [rbp-11h]
  __int64 v92; // [rsp+A8h] [rbp-9h] BYREF
  __int64 v93; // [rsp+B0h] [rbp-1h]
  wchar_t v96; // [rsp+110h] [rbp+5Fh] BYREF

  v8 = a5;
  v10 = (unsigned int *)a8;
  v92 = 0LL;
  v93 = 0LL;
  *a5 = 0;
  *v10 = 0;
  v13 = *(_DWORD *)(a4 + 16);
  v14 = a1;
  *(_QWORD *)v82 = 0LL;
  DriverPackageMappedProperty = 0;
  v90 = 0LL;
  v84 = 0;
  *(_DWORD *)v85 = 0;
  *(_DWORD *)v83 = 0;
  Src = 0LL;
  v87 = 0;
  v88 = 0LL;
  LOBYTE(v96) = 0;
  v89 = 0LL;
  switch ( v13 )
  {
    case 2:
      v26 = *(_QWORD *)a4 - DEVPKEY_NODE;
      if ( *(_QWORD *)a4 == DEVPKEY_NODE )
        v26 = *(_QWORD *)(a4 + 8) + 0x5008C7D4C8250077LL;
      if ( !v26 )
      {
        v45 = pszDest;
        pcchRemaininga = a7 >> 1;
        *v8 = 18;
        ObjectDatabaseNodeName = DrvDbGetObjectDatabaseNodeName(a1, 2LL, a2, v45, pcchRemaininga, v10);
        DriverPackageMappedProperty = ObjectDatabaseNodeName;
        if ( (int)(ObjectDatabaseNodeName + 0x80000000) < 0 || ObjectDatabaseNodeName == -1073741789 )
          *v10 *= 2;
        if ( ObjectDatabaseNodeName >= 0 )
          goto LABEL_27;
        v28 = 0LL;
        goto LABEL_47;
      }
      break;
    case 18:
      v37 = *(_QWORD *)a4 - DEVPKEY_DriverPackage_Configurable;
      if ( *(_QWORD *)a4 == DEVPKEY_DriverPackage_Configurable )
        v37 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
      if ( !v37 )
      {
        if ( a3 )
        {
          v38 = a3;
        }
        else
        {
          DriverPackageMappedProperty = DrvDbOpenDriverPackageRegKey((int)a1, (int)a2, 1, 0, (__int64)v82, 0LL);
          if ( DriverPackageMappedProperty < 0 )
            goto LABEL_27;
          v38 = v82[0];
          LODWORD(v14) = (_DWORD)a1;
        }
        DriverPackageMappedProperty = DrvDbGetDriverPackageMappedProperty(
                                        (int)v14,
                                        (int)a2,
                                        v38,
                                        (int)&DEVPKEY_DriverPackage_ConfigurableOverride,
                                        (__int64)v8,
                                        pszDest,
                                        a7,
                                        (__int64)v10);
        if ( (int)(DriverPackageMappedProperty + 0x80000000) < 0 || DriverPackageMappedProperty == -1073741789 )
          goto LABEL_27;
        v39 = v82[0];
        if ( a3 )
          v39 = a3;
        v40 = DrvDbGetDriverPackageMappedProperty(
                (int)a1,
                (int)a2,
                v39,
                (int)&DEVPKEY_DriverPackage_ConfigurableFlags,
                (__int64)v8,
                v85,
                4,
                (__int64)v10);
        DriverPackageMappedProperty = v40;
        if ( v40 == -1073741789 )
          goto LABEL_99;
        if ( v40 >= 0 )
        {
          if ( *v8 == 7 && *v10 == 4 )
          {
            v41 = *(_DWORD *)v85;
          }
          else
          {
            v41 = -1;
            *(_DWORD *)v85 = -1;
          }
          goto LABEL_79;
        }
        goto LABEL_27;
      }
      break;
    case 33:
      v47 = *(_QWORD *)a4 - DEVPKEY_DriverPackage_FamilyId;
      if ( *(_QWORD *)a4 == DEVPKEY_DriverPackage_FamilyId )
        v47 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
      if ( v47 )
        break;
      if ( !a3 )
      {
        DriverPackageMappedProperty = DrvDbOpenDriverPackageRegKey((int)a1, (int)a2, 1, 0, (__int64)v82, 0LL);
        if ( DriverPackageMappedProperty < 0 )
          goto LABEL_27;
      }
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x412uLL, 0x42444450u);
      Src = PoolWithTag;
      if ( !PoolWithTag )
        goto LABEL_135;
      v49 = v82[0];
      if ( a3 )
        v49 = a3;
      v50 = DrvDbGetDriverPackageMappedProperty(
              (int)a1,
              (int)a2,
              v49,
              (int)&DEVPKEY_DriverPackage_ProviderName,
              (__int64)v8,
              (NTSTRSAFE_PWSTR)PoolWithTag,
              1042,
              (__int64)v10);
      DriverPackageMappedProperty = v50;
      if ( v50 != -1073741789 )
      {
        if ( v50 < 0 )
          goto LABEL_49;
        if ( *v8 != 18 || *v10 - 2 > 0x206 || (v51 = (*v10 >> 1) - 1, v88 = (unsigned int)v51, *((_WORD *)Src + v51)) )
        {
LABEL_137:
          DriverPackageMappedProperty = -1073741823;
LABEL_49:
          if ( Src )
            ExFreePoolWithTag(Src, 0);
          goto LABEL_27;
        }
        v52 = v82[0];
        v53 = 2 * v51;
        v84 = 2 * v51;
        if ( a3 )
          v52 = a3;
        LODWORD(a8) = 1040 - v53;
        v91 = (NTSTRSAFE_PWSTR)((char *)Src + 2 * (unsigned int)v51 + 2);
        DriverPackageMappedProperty = DrvDbGetDriverPackageMappedProperty(
                                        (int)a1,
                                        (int)a2,
                                        v52,
                                        (int)&DEVPKEY_DriverPackage_OriginalInfName,
                                        (__int64)v8,
                                        v91,
                                        1040 - v53,
                                        (__int64)v10);
        v54 = a5;
        if ( DriverPackageMappedProperty == -1073741275 )
        {
          v55 = v82[0];
          if ( a3 )
            v55 = a3;
          DriverPackageMappedProperty = DrvDbGetDriverPackageMappedProperty(
                                          (int)a1,
                                          (int)a2,
                                          v55,
                                          (int)&DEVPKEY_DriverPackage_DriverInfName,
                                          (__int64)a5,
                                          v91,
                                          (int)a8,
                                          (__int64)v10);
        }
        if ( DriverPackageMappedProperty != -1073741789 )
        {
          if ( DriverPackageMappedProperty < 0 )
            goto LABEL_49;
          if ( *v54 == 18 && *v10 - 2 <= 0x206 )
          {
            v56 = Src;
            v57 = v88;
            v58 = Src;
            *((_WORD *)Src + v88) = 45;
            v59 = (unsigned __int16)*v58;
            if ( (_WORD)v59 )
            {
              do
              {
                if ( (unsigned __int16)v59 <= 0x3Au && (v60 = 0x400200100000000LL, _bittest64(&v60, v59))
                  || (_WORD)v59 == 126 )
                {
                  *v58 = 95;
                }
                v59 = (unsigned __int16)*++v58;
              }
              while ( (_WORD)v59 );
              v56 = Src;
            }
            v61 = v84;
            v56[v57] = 45;
            *v54 = 18;
            v62 = *v10 + v61 + 2;
            *v10 = v62;
            if ( pszDest && a7 >= v62 )
              memmove(pszDest, Src, v62);
            else
              DriverPackageMappedProperty = -1073741789;
            goto LABEL_49;
          }
          goto LABEL_137;
        }
      }
      DriverPackageMappedProperty = -1073741595;
      goto LABEL_49;
    case 29:
      v63 = *(_QWORD *)a4 - DEVPKEY_DriverPackage_Configurations;
      if ( *(_QWORD *)a4 == DEVPKEY_DriverPackage_Configurations )
        v63 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
      if ( v63 )
      {
LABEL_5:
        if ( v13 != 30 )
        {
          if ( v13 == 32 )
          {
            v69 = *(_QWORD *)a4 - DEVPKEY_DriverPackage_DriverPackageId;
            if ( *(_QWORD *)a4 == DEVPKEY_DriverPackage_DriverPackageId )
              v69 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
            if ( !v69 )
            {
              *v8 = 18;
              v70 = -1LL;
              do
                ++v70;
              while ( a2[v70] );
              v71 = pszDest;
              v72 = 2 * v70 + 2;
              *v10 = v72;
              if ( v71 && a7 >= v72 )
                memmove(v71, a2, v72);
              else
                return (unsigned int)-1073741789;
              return (unsigned int)DriverPackageMappedProperty;
            }
            break;
          }
          if ( v13 != 38 )
          {
            if ( v13 == 40 )
            {
              v43 = *(_QWORD *)a4 - DEVPKEY_DriverPackage_Primitive;
              if ( *(_QWORD *)a4 == DEVPKEY_DriverPackage_Primitive )
                v43 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
              if ( !v43 )
              {
                if ( !a3 )
                {
                  DriverPackageMappedProperty = DrvDbOpenDriverPackageRegKey((int)a1, (int)a2, 1, 0, (__int64)v82, 0LL);
                  if ( DriverPackageMappedProperty < 0 )
                    goto LABEL_27;
                  LODWORD(a3) = v82[0];
                  LODWORD(v14) = (_DWORD)a1;
                }
                v44 = DrvDbGetDriverPackageMappedProperty(
                        (int)v14,
                        (int)a2,
                        a3,
                        (int)&DEVPKEY_DriverPackage_PrimitiveFlags,
                        (__int64)v8,
                        v83,
                        4,
                        (__int64)v10);
                DriverPackageMappedProperty = v44;
                if ( v44 != -1073741789 )
                {
                  if ( v44 == -1073741275 )
                  {
                    v8 = a5;
                    DriverPackageMappedProperty = 0;
                  }
                  else
                  {
                    if ( v44 < 0 )
                      goto LABEL_27;
                    v8 = a5;
                    if ( *a5 == 7 && *v10 == 4 )
                    {
                      v41 = *(_DWORD *)v83;
                      goto LABEL_79;
                    }
                  }
                  v41 = -1;
                  *(_DWORD *)v83 = -1;
LABEL_79:
                  v42 = pszDest;
                  *v8 = 17;
                  *v10 = 1;
                  if ( v42 && a7 )
                  {
                    *(_BYTE *)v42 = (v41 != 0) - 1;
                    goto LABEL_27;
                  }
LABEL_101:
                  DriverPackageMappedProperty = -1073741789;
                  goto LABEL_27;
                }
LABEL_99:
                DriverPackageMappedProperty = -1073741595;
                goto LABEL_27;
              }
            }
            break;
          }
          v73 = *(_QWORD *)a4 - DEVPKEY_DriverPackage_Integrated;
          if ( *(_QWORD *)a4 == DEVPKEY_DriverPackage_Integrated )
            v73 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
          if ( v73 )
            break;
          if ( !a3 )
          {
            DriverPackageMappedProperty = DrvDbOpenObjectRegKey(a1, 0LL, 2u, a2, 1, 0, v82, 0LL, &v88);
            if ( DriverPackageMappedProperty < 0 )
              goto LABEL_27;
            LODWORD(a3) = v82[0];
            LODWORD(v14) = (_DWORD)a1;
          }
          v74 = DrvDbGetDriverPackageMappedProperty(
                  (int)v14,
                  (int)a2,
                  a3,
                  (int)&DEVPKEY_DriverPackage_Inbox,
                  (__int64)v8,
                  &v96,
                  1,
                  (__int64)v10);
          DriverPackageMappedProperty = v74;
          if ( v74 == -1073741789 )
            goto LABEL_99;
          if ( v74 == -1073741275 )
          {
            v75 = a5;
            v76 = 0;
            DriverPackageMappedProperty = 0;
          }
          else
          {
            if ( v74 < 0 )
              goto LABEL_27;
            v75 = a5;
            if ( *a5 == 17 && *v10 == 1 )
            {
              v77 = v96;
            }
            else
            {
              v77 = -1;
              LOBYTE(v96) = -1;
            }
            if ( !v77 )
              goto LABEL_199;
            if ( !*(_QWORD *)v82 )
            {
              LOBYTE(dwFlags[0]) = 0;
              LODWORD(pcchRemaining) = 1;
              DriverPackageMappedProperty = DrvDbOpenObjectRegKey(
                                              a1,
                                              0LL,
                                              2u,
                                              a2,
                                              pcchRemaining,
                                              *(_QWORD *)dwFlags,
                                              v82,
                                              0LL,
                                              &v88);
              if ( DriverPackageMappedProperty < 0 )
                goto LABEL_27;
              v77 = v96;
            }
            v76 = v77;
            if ( (*(_BYTE *)(v88 + 56) & 0x10) != 0 )
              v76 = 0;
          }
          LOBYTE(v96) = v76;
          v77 = v76;
LABEL_199:
          v78 = pszDest;
          *v75 = 17;
          *v10 = 1;
          if ( v78 && a7 )
          {
            *(_BYTE *)v78 = v77;
            goto LABEL_27;
          }
          goto LABEL_101;
        }
        v64 = *(_QWORD *)a4 - DEVPKEY_DriverPackage_ConfigurationScopes;
        if ( *(_QWORD *)a4 == DEVPKEY_DriverPackage_ConfigurationScopes )
          v64 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
        if ( v64 )
          break;
      }
      if ( !a3 )
      {
        DriverPackageMappedProperty = DrvDbOpenDriverPackageRegKey((int)a1, (int)a2, 1, 0, (__int64)v82, 0LL);
        if ( DriverPackageMappedProperty < 0 )
          goto LABEL_27;
        a3 = *(_QWORD *)v82;
        v14 = a1;
      }
      DriverPackageMappedProperty = PnpCtxRegOpenKey(*v14, a3, (__int64)L"Configurations", 0, 9u, (__int64)&v92);
      if ( DriverPackageMappedProperty == -1073741772 )
        DriverPackageMappedProperty = -1073741275;
      if ( DriverPackageMappedProperty >= 0 )
      {
        v65 = *(_DWORD *)(a4 + 16) == 30;
        *(_QWORD *)&v89 = pszDest;
        *(_WORD *)((char *)&v90 + 1) = 0;
        BYTE3(v90) = 0;
        HIDWORD(v89) = 0;
        HIDWORD(v90) = 0;
        if ( !v65 )
          goto LABEL_156;
        v66 = *(_QWORD *)a4 - DEVPKEY_DriverPackage_ConfigurationScopes;
        if ( *(_QWORD *)a4 == DEVPKEY_DriverPackage_ConfigurationScopes )
          v66 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
        LOBYTE(v90) = 1;
        if ( v66 )
LABEL_156:
          LOBYTE(v90) = 0;
        if ( pszDest )
          DWORD2(v89) = a7 >> 1;
        else
          DWORD2(v89) = 0;
        DriverPackageMappedProperty = PnpCtxRegEnumKeyWithCallback(*a1, v92, DrvDbGetConfigurationSubKeyCallback, &v89);
        if ( DriverPackageMappedProperty >= 0 )
        {
          if ( HIDWORD(v89) )
          {
            v68 = v89;
            DriverPackageMappedProperty = HIDWORD(v90);
            v67 = ++HIDWORD(v89);
            *a5 = 8210;
            *v10 = 2 * v67;
            if ( v68 && 2 * (unsigned __int64)v67 <= a7 )
              *(_WORD *)(v68 + 2LL * (v67 - 1)) = 0;
            else
              DriverPackageMappedProperty = -1073741789;
          }
          else
          {
            DriverPackageMappedProperty = -1073741275;
          }
        }
        else if ( v90 < 0 )
        {
          DriverPackageMappedProperty = HIDWORD(v90);
        }
      }
      goto LABEL_27;
    default:
      goto LABEL_5;
  }
  v16 = 0;
  for ( i = &off_140002160; ; i += 5 )
  {
    v18 = (__int64 *)*i;
    if ( LODWORD((**i)[2]) == v13 )
    {
      v19 = *v18 - *(_QWORD *)a4;
      if ( *v18 == *(_QWORD *)a4 )
        v19 = v18[1] - *(_QWORD *)(a4 + 8);
      if ( !v19 )
        break;
    }
    if ( ++v16 >= 0x20 )
      return (unsigned int)-1073741802;
  }
  v20 = &off_140002160 + 5 * v16;
  a8 = v20;
  if ( !v20 )
    return (unsigned int)-1073741802;
  if ( a3 )
  {
    v21 = v93;
  }
  else
  {
    DriverPackageMappedProperty = DrvDbOpenDriverPackageRegKey((int)v14, (int)a2, 1, 0, (__int64)v82, 0LL);
    if ( DriverPackageMappedProperty < 0 )
      goto LABEL_27;
    v21 = *(_QWORD *)v82;
  }
  if ( *((_DWORD *)v20 + 8) )
  {
    LODWORD(a5) = 48;
    v28 = (char *)ExAllocatePoolWithTag(PagedPool, 0x30uLL, 0x42444450u);
    if ( v28 )
    {
      v29 = *(_QWORD *)v82;
      if ( a3 )
        v29 = a3;
      v30 = PnpCtxRegQueryValue(v27, v29, L"Version", &v84, v28, &a5);
      DriverPackageMappedProperty = v30;
      if ( v30 == -1073741772 )
      {
        DriverPackageMappedProperty = -1073741275;
      }
      else if ( v30 == -1073741789 )
      {
        DriverPackageMappedProperty = -1073741595;
      }
      else if ( v30 >= 0 )
      {
        if ( v84 == 3 && (_DWORD)a5 == 48 )
        {
          v31 = (__int64)a8;
          v32 = pszDest;
          *v8 = *((_DWORD *)a8 + 2);
          v33 = *(_DWORD *)(v31 + 32);
          *v10 = v33;
          if ( v32 && a7 >= v33 )
            memmove(v32, &v28[*(unsigned int *)(v31 + 28)], *(unsigned int *)(v31 + 32));
          else
            DriverPackageMappedProperty = -1073741789;
        }
        else
        {
          DriverPackageMappedProperty = -1073741823;
        }
      }
      goto LABEL_47;
    }
LABEL_135:
    DriverPackageMappedProperty = -1073741801;
    goto LABEL_27;
  }
  v22 = a7;
  if ( a3 )
    v21 = a3;
  RegValueMappedProperty = DrvDbGetRegValueMappedProperty(v21, v21, v20, v8, pszDest, a7, v10);
  DriverPackageMappedProperty = RegValueMappedProperty;
  if ( RegValueMappedProperty == -1073741275 )
  {
    v24 = a5;
  }
  else
  {
    if ( RegValueMappedProperty && RegValueMappedProperty != -1073741789 )
      goto LABEL_27;
    v24 = a5;
    if ( *a5 != 18 || *v10 != 2 )
      goto LABEL_27;
  }
  if ( *(_DWORD *)(a4 + 16) != 7 )
    goto LABEL_27;
  v34 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_DriverPackage_SignerName;
  if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_DriverPackage_SignerName )
    v34 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
  if ( v34 )
    goto LABEL_27;
  v35 = *(_QWORD *)v82;
  if ( a3 )
    v35 = a3;
  if ( (int)DrvDbGetDriverPackageSignerScore(a1, a2, v35, &v87) < 0 || v87 != 218103811 )
    goto LABEL_27;
  v36 = pszDest;
  DriverPackageMappedProperty = 0;
  *v24 = 18;
  *v10 = 36;
  if ( v36 && (unsigned int)v22 >= 0x24 )
  {
    RtlStringCchCopyExW(v36, v22 >> 1, L"Microsoft Windows", 0LL, 0LL, 0x800u);
    goto LABEL_27;
  }
  DriverPackageMappedProperty = -1073741789;
  v28 = 0LL;
LABEL_47:
  if ( v28 )
  {
    ExFreePoolWithTag(v28, 0);
    goto LABEL_49;
  }
LABEL_27:
  if ( v92 )
    PnpCtxRegCloseKey();
  if ( *(_QWORD *)v82 )
    PnpCtxRegCloseKey();
  return (unsigned int)DriverPackageMappedProperty;
}
