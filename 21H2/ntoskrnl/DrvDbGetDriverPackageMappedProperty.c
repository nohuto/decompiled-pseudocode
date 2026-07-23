/*
 * XREFs of DrvDbGetDriverPackageMappedProperty @ 0x1406306CC
 * Callers:
 *     DrvDbGetDriverPackageMappedProperty @ 0x1406306CC (DrvDbGetDriverPackageMappedProperty.c)
 *     DrvDbDispatchDriverPackage @ 0x140630DE0 (DrvDbDispatchDriverPackage.c)
 *     DrvDbGetDriverPackageSignerScore @ 0x140734F00 (DrvDbGetDriverPackageSignerScore.c)
 *     DrvDbGetDriverPackageMappedPropertyKeys @ 0x14097DD10 (DrvDbGetDriverPackageMappedPropertyKeys.c)
 * Callees:
 *     RtlStringCchCopyExW @ 0x140253448 (RtlStringCchCopyExW.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     _PnpCtxRegQueryValue @ 0x14061A094 (_PnpCtxRegQueryValue.c)
 *     DrvDbGetRegValueMappedProperty @ 0x1406303EC (DrvDbGetRegValueMappedProperty.c)
 *     _PnpCtxRegCloseKey @ 0x1406306B4 (_PnpCtxRegCloseKey.c)
 *     DrvDbGetDriverPackageMappedProperty @ 0x1406306CC (DrvDbGetDriverPackageMappedProperty.c)
 *     DrvDbOpenDriverPackageRegKey @ 0x1406339AC (DrvDbOpenDriverPackageRegKey.c)
 *     DrvDbOpenObjectRegKey @ 0x140635220 (DrvDbOpenObjectRegKey.c)
 *     _PnpCtxRegOpenKey @ 0x14063562C (_PnpCtxRegOpenKey.c)
 *     DrvDbGetDriverPackageSignerScore @ 0x140734F00 (DrvDbGetDriverPackageSignerScore.c)
 *     _PnpCtxRegEnumKeyWithCallback @ 0x1407B1628 (_PnpCtxRegEnumKeyWithCallback.c)
 *     DrvDbGetObjectDatabaseNodeName @ 0x14097E040 (DrvDbGetObjectDatabaseNodeName.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall DrvDbGetDriverPackageMappedProperty(
        _QWORD *a1,
        _WORD *a2,
        void *a3,
        __int64 a4,
        _DWORD *a5,
        NTSTRSAFE_PWSTR pszDest,
        unsigned int a7,
        __int64 (**a8)[3])
{
  _DWORD *v8; // r13
  unsigned int *v10; // r12
  int v13; // r8d
  _QWORD *v14; // r10
  int DriverPackageMappedProperty; // ebx
  unsigned int v16; // edx
  __int64 (**i)[3]; // r11
  __int64 *v18; // r9
  __int64 v19; // rcx
  __int64 (**v20)[3]; // rsi
  unsigned __int64 v21; // rcx
  void *v22; // rcx
  unsigned __int64 v23; // rdi
  int RegValueMappedProperty; // eax
  _DWORD *v25; // r13
  __int64 v27; // rax
  char *v28; // r15
  void *v29; // rdx
  int Value; // eax
  __int64 v31; // rdx
  unsigned int v32; // eax
  __int64 v33; // rax
  void *v34; // r8
  wchar_t *v35; // rax
  __int64 v36; // rax
  int v37; // r8d
  int v38; // r8d
  int v39; // eax
  int v40; // eax
  __int64 v41; // rax
  int v42; // eax
  NTSTRSAFE_PWSTR v43; // r9
  int ObjectDatabaseNodeName; // eax
  __int64 v45; // rax
  PVOID PoolWithTag; // rax
  int v47; // r8d
  int v48; // eax
  int v49; // r8d
  int v50; // r9d
  _DWORD *v51; // r13
  int v52; // r8d
  _WORD *v53; // rax
  __int64 v54; // r8
  _WORD *v55; // rdx
  unsigned __int64 v56; // rcx
  __int64 v57; // r9
  int v58; // ecx
  unsigned int v59; // eax
  __int64 v60; // rax
  __int64 v61; // rax
  bool v62; // zf
  __int64 v63; // rax
  unsigned int v64; // edx
  __int64 v65; // r8
  __int64 v66; // rax
  __int64 v67; // rdx
  NTSTRSAFE_PWSTR v68; // rcx
  unsigned int v69; // eax
  __int64 v70; // rax
  int v71; // eax
  _DWORD *v72; // r13
  char v73; // al
  char v74; // dl
  NTSTRSAFE_PWSTR v75; // rax
  unsigned int pcchRemaining; // [rsp+28h] [rbp-89h]
  int v77[2]; // [rsp+58h] [rbp-59h] BYREF
  wchar_t v78[2]; // [rsp+60h] [rbp-51h] BYREF
  int v79; // [rsp+64h] [rbp-4Dh] BYREF
  wchar_t v80[4]; // [rsp+68h] [rbp-49h] BYREF
  void *Src; // [rsp+70h] [rbp-41h]
  int v82; // [rsp+78h] [rbp-39h] BYREF
  __int64 v83; // [rsp+80h] [rbp-31h] BYREF
  __int128 v84; // [rsp+88h] [rbp-29h] BYREF
  __int64 v85; // [rsp+98h] [rbp-19h]
  NTSTRSAFE_PWSTR v86; // [rsp+A0h] [rbp-11h]
  void *v87; // [rsp+A8h] [rbp-9h] BYREF
  void *v88; // [rsp+B0h] [rbp-1h]
  wchar_t v91; // [rsp+110h] [rbp+5Fh] BYREF

  v8 = a5;
  v10 = (unsigned int *)a8;
  v87 = 0LL;
  v88 = 0LL;
  *a5 = 0;
  *v10 = 0;
  v13 = *(_DWORD *)(a4 + 16);
  v14 = a1;
  *(_QWORD *)v77 = 0LL;
  DriverPackageMappedProperty = 0;
  v85 = 0LL;
  v79 = 0;
  *(_DWORD *)v80 = 0;
  *(_DWORD *)v78 = 0;
  Src = 0LL;
  v82 = 0;
  v83 = 0LL;
  LOBYTE(v91) = 0;
  v84 = 0LL;
  switch ( v13 )
  {
    case 2:
      v27 = *(_QWORD *)a4 - DEVPKEY_NODE;
      if ( *(_QWORD *)a4 == DEVPKEY_NODE )
        v27 = *(_QWORD *)(a4 + 8) + 0x5008C7D4C8250077LL;
      if ( !v27 )
      {
        v43 = pszDest;
        pcchRemaining = a7 >> 1;
        *v8 = 18;
        ObjectDatabaseNodeName = DrvDbGetObjectDatabaseNodeName(a1, 2LL, a2, v43, pcchRemaining, v10);
        DriverPackageMappedProperty = ObjectDatabaseNodeName;
        v21 = ObjectDatabaseNodeName + 0x80000000;
        if ( (v21 & 0x80000000) != 0LL || ObjectDatabaseNodeName == -1073741789 )
        {
          v21 = 2 * *v10;
          *v10 = v21;
        }
        if ( ObjectDatabaseNodeName >= 0 )
          goto LABEL_27;
        v28 = 0LL;
        goto LABEL_47;
      }
      break;
    case 18:
      v36 = *(_QWORD *)a4 - DEVPKEY_DriverPackage_Configurable;
      if ( *(_QWORD *)a4 == DEVPKEY_DriverPackage_Configurable )
        v36 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
      if ( !v36 )
      {
        if ( a3 )
        {
          v37 = (int)a3;
        }
        else
        {
          DriverPackageMappedProperty = DrvDbOpenDriverPackageRegKey((_DWORD)a1, (_DWORD)a2, 1, 0, (__int64)v77, 0LL);
          if ( DriverPackageMappedProperty < 0 )
            goto LABEL_27;
          v37 = v77[0];
          LODWORD(v14) = (_DWORD)a1;
        }
        DriverPackageMappedProperty = DrvDbGetDriverPackageMappedProperty(
                                        (int)v14,
                                        (int)a2,
                                        v37,
                                        (int)&DEVPKEY_DriverPackage_ConfigurableOverride,
                                        (__int64)v8,
                                        pszDest,
                                        a7,
                                        (__int64)v10);
        if ( (int)(DriverPackageMappedProperty + 0x80000000) < 0 || DriverPackageMappedProperty == -1073741789 )
          goto LABEL_27;
        v38 = v77[0];
        if ( a3 )
          v38 = (int)a3;
        v39 = DrvDbGetDriverPackageMappedProperty(
                (int)a1,
                (int)a2,
                v38,
                (int)&DEVPKEY_DriverPackage_ConfigurableFlags,
                (__int64)v8,
                v80,
                4,
                (__int64)v10);
        DriverPackageMappedProperty = v39;
        if ( v39 == -1073741789 )
          goto LABEL_99;
        if ( v39 >= 0 )
        {
          if ( *v8 == 7 && *v10 == 4 )
          {
            v40 = *(_DWORD *)v80;
          }
          else
          {
            v40 = -1;
            *(_DWORD *)v80 = -1;
          }
          goto LABEL_79;
        }
        goto LABEL_27;
      }
      break;
    case 33:
      v45 = *(_QWORD *)a4 - DEVPKEY_DriverPackage_FamilyId;
      if ( *(_QWORD *)a4 == DEVPKEY_DriverPackage_FamilyId )
        v45 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
      if ( v45 )
        break;
      if ( !a3 )
      {
        DriverPackageMappedProperty = DrvDbOpenDriverPackageRegKey((_DWORD)a1, (_DWORD)a2, 1, 0, (__int64)v77, 0LL);
        if ( DriverPackageMappedProperty < 0 )
          goto LABEL_27;
      }
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x412uLL, 0x42444450u);
      Src = PoolWithTag;
      if ( !PoolWithTag )
        goto LABEL_135;
      v47 = v77[0];
      if ( a3 )
        v47 = (int)a3;
      v48 = DrvDbGetDriverPackageMappedProperty(
              (int)a1,
              (int)a2,
              v47,
              (int)&DEVPKEY_DriverPackage_ProviderName,
              (__int64)v8,
              (NTSTRSAFE_PWSTR)PoolWithTag,
              1042,
              (__int64)v10);
      DriverPackageMappedProperty = v48;
      if ( v48 != -1073741789 )
      {
        if ( v48 < 0 )
          goto LABEL_49;
        if ( *v8 != 18
          || (v21 = *v10, (unsigned int)(v21 - 2) > 0x206)
          || (v21 = ((unsigned int)v21 >> 1) - 1, v83 = (unsigned int)v21, *((_WORD *)Src + v21)) )
        {
LABEL_137:
          DriverPackageMappedProperty = -1073741823;
LABEL_49:
          if ( Src )
            ExFreePoolWithTag(Src, 0);
          goto LABEL_27;
        }
        v49 = v77[0];
        v50 = 2 * v21;
        v79 = 2 * v21;
        if ( a3 )
          v49 = (int)a3;
        LODWORD(a8) = 1040 - v50;
        v86 = (NTSTRSAFE_PWSTR)((char *)Src + 2 * (unsigned int)v21 + 2);
        DriverPackageMappedProperty = DrvDbGetDriverPackageMappedProperty(
                                        (int)a1,
                                        (int)a2,
                                        v49,
                                        (int)&DEVPKEY_DriverPackage_OriginalInfName,
                                        (__int64)v8,
                                        v86,
                                        1040 - v50,
                                        (__int64)v10);
        v51 = a5;
        if ( DriverPackageMappedProperty == -1073741275 )
        {
          v52 = v77[0];
          if ( a3 )
            v52 = (int)a3;
          DriverPackageMappedProperty = DrvDbGetDriverPackageMappedProperty(
                                          (int)a1,
                                          (int)a2,
                                          v52,
                                          (int)&DEVPKEY_DriverPackage_DriverInfName,
                                          (__int64)a5,
                                          v86,
                                          (int)a8,
                                          (__int64)v10);
        }
        if ( DriverPackageMappedProperty != -1073741789 )
        {
          if ( DriverPackageMappedProperty < 0 )
            goto LABEL_49;
          if ( *v51 == 18 && *v10 - 2 <= 0x206 )
          {
            v53 = Src;
            v54 = v83;
            v55 = Src;
            *((_WORD *)Src + v83) = 45;
            v56 = (unsigned __int16)*v55;
            if ( (_WORD)v56 )
            {
              do
              {
                if ( (unsigned __int16)v56 <= 0x3Au && (v57 = 0x400200100000000LL, _bittest64(&v57, v56))
                  || (_WORD)v56 == 126 )
                {
                  *v55 = 95;
                }
                v56 = (unsigned __int16)*++v55;
              }
              while ( (_WORD)v56 );
              v53 = Src;
            }
            v58 = v79;
            v53[v54] = 45;
            *v51 = 18;
            v59 = *v10 + v58 + 2;
            *v10 = v59;
            v21 = (unsigned __int64)pszDest;
            if ( pszDest && a7 >= v59 )
              memmove(pszDest, Src, v59);
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
      v60 = *(_QWORD *)a4 - DEVPKEY_DriverPackage_Configurations;
      if ( *(_QWORD *)a4 == DEVPKEY_DriverPackage_Configurations )
        v60 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
      if ( v60 )
      {
LABEL_5:
        if ( v13 != 30 )
        {
          if ( v13 == 32 )
          {
            v66 = *(_QWORD *)a4 - DEVPKEY_DriverPackage_DriverPackageId;
            if ( *(_QWORD *)a4 == DEVPKEY_DriverPackage_DriverPackageId )
              v66 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
            if ( !v66 )
            {
              *v8 = 18;
              v67 = -1LL;
              do
                ++v67;
              while ( a2[v67] );
              v68 = pszDest;
              v69 = 2 * v67 + 2;
              *v10 = v69;
              if ( v68 && a7 >= v69 )
                memmove(v68, a2, v69);
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
              v41 = *(_QWORD *)a4 - DEVPKEY_DriverPackage_Primitive;
              if ( *(_QWORD *)a4 == DEVPKEY_DriverPackage_Primitive )
                v41 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
              if ( !v41 )
              {
                if ( !a3 )
                {
                  DriverPackageMappedProperty = DrvDbOpenDriverPackageRegKey(
                                                  (_DWORD)a1,
                                                  (_DWORD)a2,
                                                  1,
                                                  0,
                                                  (__int64)v77,
                                                  0LL);
                  if ( DriverPackageMappedProperty < 0 )
                    goto LABEL_27;
                  LODWORD(a3) = v77[0];
                  LODWORD(v14) = (_DWORD)a1;
                }
                v42 = DrvDbGetDriverPackageMappedProperty(
                        (int)v14,
                        (int)a2,
                        (int)a3,
                        (int)&DEVPKEY_DriverPackage_PrimitiveFlags,
                        (__int64)v8,
                        v78,
                        4,
                        (__int64)v10);
                DriverPackageMappedProperty = v42;
                if ( v42 != -1073741789 )
                {
                  if ( v42 == -1073741275 )
                  {
                    v8 = a5;
                    DriverPackageMappedProperty = 0;
                  }
                  else
                  {
                    if ( v42 < 0 )
                      goto LABEL_27;
                    v8 = a5;
                    if ( *a5 == 7 && *v10 == 4 )
                    {
                      v40 = *(_DWORD *)v78;
                      goto LABEL_79;
                    }
                  }
                  v40 = -1;
                  *(_DWORD *)v78 = -1;
LABEL_79:
                  v21 = (unsigned __int64)pszDest;
                  *v8 = 17;
                  *v10 = 1;
                  if ( v21 && a7 )
                  {
                    *(_BYTE *)v21 = (v40 != 0) - 1;
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
          v70 = *(_QWORD *)a4 - DEVPKEY_DriverPackage_Integrated;
          if ( *(_QWORD *)a4 == DEVPKEY_DriverPackage_Integrated )
            v70 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
          if ( v70 )
            break;
          if ( !a3 )
          {
            DriverPackageMappedProperty = DrvDbOpenObjectRegKey(
                                            (_DWORD)a1,
                                            0,
                                            2,
                                            (_DWORD)a2,
                                            1,
                                            0,
                                            (__int64)v77,
                                            0LL,
                                            (__int64)&v83);
            if ( DriverPackageMappedProperty < 0 )
              goto LABEL_27;
            LODWORD(a3) = v77[0];
            LODWORD(v14) = (_DWORD)a1;
          }
          v71 = DrvDbGetDriverPackageMappedProperty(
                  (int)v14,
                  (int)a2,
                  (int)a3,
                  (int)&DEVPKEY_DriverPackage_Inbox,
                  (__int64)v8,
                  &v91,
                  1,
                  (__int64)v10);
          DriverPackageMappedProperty = v71;
          if ( v71 == -1073741789 )
            goto LABEL_99;
          if ( v71 == -1073741275 )
          {
            v72 = a5;
            v73 = 0;
            DriverPackageMappedProperty = 0;
          }
          else
          {
            if ( v71 < 0 )
              goto LABEL_27;
            v72 = a5;
            if ( *a5 == 17 && *v10 == 1 )
            {
              v74 = v91;
            }
            else
            {
              v74 = -1;
              LOBYTE(v91) = -1;
            }
            if ( !v74 )
              goto LABEL_199;
            if ( !*(_QWORD *)v77 )
            {
              DriverPackageMappedProperty = DrvDbOpenObjectRegKey(
                                              (_DWORD)a1,
                                              0,
                                              2,
                                              (_DWORD)a2,
                                              1,
                                              0,
                                              (__int64)v77,
                                              0LL,
                                              (__int64)&v83);
              if ( DriverPackageMappedProperty < 0 )
                goto LABEL_27;
              v74 = v91;
            }
            v73 = v74;
            if ( (*(_BYTE *)(v83 + 56) & 0x10) != 0 )
              v73 = 0;
          }
          LOBYTE(v91) = v73;
          v74 = v73;
LABEL_199:
          v75 = pszDest;
          *v72 = 17;
          *v10 = 1;
          if ( v75 && a7 )
          {
            *(_BYTE *)v75 = v74;
            goto LABEL_27;
          }
          goto LABEL_101;
        }
        v61 = *(_QWORD *)a4 - DEVPKEY_DriverPackage_ConfigurationScopes;
        if ( *(_QWORD *)a4 == DEVPKEY_DriverPackage_ConfigurationScopes )
          v61 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
        if ( v61 )
          break;
      }
      if ( !a3 )
      {
        DriverPackageMappedProperty = DrvDbOpenDriverPackageRegKey((_DWORD)a1, (_DWORD)a2, 1, 0, (__int64)v77, 0LL);
        if ( DriverPackageMappedProperty < 0 )
          goto LABEL_27;
        LODWORD(a3) = v77[0];
        v14 = a1;
      }
      DriverPackageMappedProperty = PnpCtxRegOpenKey(
                                      *v14,
                                      (_DWORD)a3,
                                      (unsigned int)L"Configurations",
                                      0,
                                      9,
                                      (__int64)&v87);
      if ( DriverPackageMappedProperty == -1073741772 )
        DriverPackageMappedProperty = -1073741275;
      if ( DriverPackageMappedProperty >= 0 )
      {
        v62 = *(_DWORD *)(a4 + 16) == 30;
        *(_QWORD *)&v84 = pszDest;
        *(_WORD *)((char *)&v85 + 1) = 0;
        BYTE3(v85) = 0;
        HIDWORD(v84) = 0;
        HIDWORD(v85) = 0;
        if ( !v62 )
          goto LABEL_156;
        v63 = *(_QWORD *)a4 - DEVPKEY_DriverPackage_ConfigurationScopes;
        if ( *(_QWORD *)a4 == DEVPKEY_DriverPackage_ConfigurationScopes )
          v63 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
        LOBYTE(v85) = 1;
        if ( v63 )
LABEL_156:
          LOBYTE(v85) = 0;
        if ( pszDest )
          DWORD2(v84) = a7 >> 1;
        else
          DWORD2(v84) = 0;
        DriverPackageMappedProperty = PnpCtxRegEnumKeyWithCallback(*a1, v87, DrvDbGetConfigurationSubKeyCallback, &v84);
        if ( DriverPackageMappedProperty >= 0 )
        {
          if ( HIDWORD(v84) )
          {
            v65 = v84;
            DriverPackageMappedProperty = HIDWORD(v85);
            v64 = ++HIDWORD(v84);
            *a5 = 8210;
            *v10 = 2 * v64;
            if ( v65 && (v21 = 2LL * v64, v21 <= a7) )
              *(_WORD *)(v65 + 2LL * (v64 - 1)) = 0;
            else
              DriverPackageMappedProperty = -1073741789;
          }
          else
          {
            DriverPackageMappedProperty = -1073741275;
          }
        }
        else if ( v85 < 0 )
        {
          DriverPackageMappedProperty = HIDWORD(v85);
        }
      }
      goto LABEL_27;
    default:
      goto LABEL_5;
  }
  v16 = 0;
  for ( i = &off_1400040B0; ; i += 5 )
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
  v20 = &off_1400040B0 + 5 * v16;
  a8 = v20;
  if ( !v20 )
    return (unsigned int)-1073741802;
  if ( a3 )
  {
    v22 = v88;
  }
  else
  {
    DriverPackageMappedProperty = DrvDbOpenDriverPackageRegKey((_DWORD)v14, (_DWORD)a2, 1, 0, (__int64)v77, 0LL);
    if ( DriverPackageMappedProperty < 0 )
      goto LABEL_27;
    v22 = *(void **)v77;
  }
  if ( *((_DWORD *)v20 + 8) )
  {
    LODWORD(a5) = 48;
    v28 = (char *)ExAllocatePoolWithTag(PagedPool, 0x30uLL, 0x42444450u);
    if ( v28 )
    {
      v29 = *(void **)v77;
      if ( a3 )
        v29 = a3;
      Value = PnpCtxRegQueryValue(v21, v29, (__int64)L"Version", (__int64)&v79, (__int64)v28, (__int64)&a5);
      DriverPackageMappedProperty = Value;
      if ( Value == -1073741772 )
      {
        DriverPackageMappedProperty = -1073741275;
      }
      else if ( Value == -1073741789 )
      {
        DriverPackageMappedProperty = -1073741595;
      }
      else if ( Value >= 0 )
      {
        if ( v79 == 3 && (_DWORD)a5 == 48 )
        {
          v31 = (__int64)a8;
          v21 = (unsigned __int64)pszDest;
          *v8 = *((_DWORD *)a8 + 2);
          v32 = *(_DWORD *)(v31 + 32);
          *v10 = v32;
          if ( v21 && a7 >= v32 )
            memmove((void *)v21, &v28[*(unsigned int *)(v31 + 28)], *(unsigned int *)(v31 + 32));
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
  v23 = a7;
  if ( a3 )
    v22 = a3;
  RegValueMappedProperty = DrvDbGetRegValueMappedProperty((__int64)v22, v22, (__int64)v20, v8, pszDest, a7, v10);
  DriverPackageMappedProperty = RegValueMappedProperty;
  if ( RegValueMappedProperty == -1073741275 )
  {
    v25 = a5;
  }
  else
  {
    if ( RegValueMappedProperty && RegValueMappedProperty != -1073741789 )
      goto LABEL_27;
    v25 = a5;
    if ( *a5 != 18 || *v10 != 2 )
      goto LABEL_27;
  }
  if ( *(_DWORD *)(a4 + 16) != 7 )
    goto LABEL_27;
  v33 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_DriverPackage_SignerName;
  if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_DriverPackage_SignerName )
    v33 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
  if ( v33 )
    goto LABEL_27;
  v34 = *(void **)v77;
  if ( a3 )
    v34 = a3;
  if ( (int)DrvDbGetDriverPackageSignerScore(a1, a2, v34, &v82) < 0 || v82 != 218103811 )
    goto LABEL_27;
  v35 = pszDest;
  DriverPackageMappedProperty = 0;
  *v25 = 18;
  *v10 = 36;
  if ( v35 && (unsigned int)v23 >= 0x24 )
  {
    RtlStringCchCopyExW(v35, v23 >> 1, L"Microsoft Windows", 0LL, 0LL, 0x800u);
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
  if ( v87 )
    PnpCtxRegCloseKey(v21, v87);
  if ( *(_QWORD *)v77 )
    PnpCtxRegCloseKey(v21, *(void **)v77);
  return (unsigned int)DriverPackageMappedProperty;
}
