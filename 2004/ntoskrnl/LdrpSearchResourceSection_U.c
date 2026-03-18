/*
 * XREFs of LdrpSearchResourceSection_U @ 0x140712CF4
 * Callers:
 *     LdrpGetRcConfig @ 0x140362384 (LdrpGetRcConfig.c)
 *     LdrpLoadResourceFromAlternativeModule @ 0x1403624C8 (LdrpLoadResourceFromAlternativeModule.c)
 *     RtlFindMessage @ 0x140712910 (RtlFindMessage.c)
 *     LdrFindResource_U @ 0x1407B34E0 (LdrFindResource_U.c)
 *     LdrFindResourceDirectory_U @ 0x14090D710 (LdrFindResourceDirectory_U.c)
 *     LdrFindResourceEx_U @ 0x14090D730 (LdrFindResourceEx_U.c)
 *     RtlLoadString @ 0x14090E3D0 (RtlLoadString.c)
 * Callees:
 *     RtlImageDirectoryEntryToData @ 0x14027C310 (RtlImageDirectoryEntryToData.c)
 *     LdrIsResItemExist @ 0x1403620F0 (LdrIsResItemExist.c)
 *     LdrpLoadResourceFromAlternativeModule @ 0x1403624C8 (LdrpLoadResourceFromAlternativeModule.c)
 *     LdrpGetParentLangId @ 0x140362A1C (LdrpGetParentLangId.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     _wcsicmp @ 0x1403CEAD0 (_wcsicmp.c)
 *     LdrpCompareResourceNamesWithValidation @ 0x1403F2468 (LdrpCompareResourceNamesWithValidation.c)
 */

__int64 __fastcall LdrpSearchResourceSection_U(__int64 a1, __int64 *a2, unsigned int a3, int a4, unsigned int **a5)
{
  int v5; // r15d
  int v6; // esi
  int v8; // edx
  int v9; // eax
  unsigned __int16 v10; // r14
  __int64 v11; // rax
  __int64 v12; // r8
  __int64 result; // rax
  __int64 v14; // rbx
  unsigned int *v15; // r12
  __int64 v16; // rdx
  __int64 v17; // rcx
  int v18; // eax
  char v19; // di
  char v20; // r8
  unsigned int v21; // ecx
  __int64 v22; // rax
  int v23; // r9d
  int v24; // eax
  __int64 v25; // r8
  bool v26; // cl
  int v27; // ebx
  int v28; // eax
  int v29; // eax
  int v30; // eax
  int v31; // eax
  int v32; // eax
  int v33; // eax
  __int16 v34; // ax
  __int16 v35; // cx
  __int64 v36; // rdi
  unsigned int *v37; // rsi
  __int64 v38; // rcx
  unsigned int *v39; // rax
  unsigned __int16 v40; // r12
  __int64 v41; // rax
  char v42; // di
  unsigned int *v43; // r15
  const wchar_t *v44; // r8
  int v45; // eax
  __int64 v46; // rax
  __int64 v47; // rdi
  const wchar_t *v48; // r8
  __int16 v49[2]; // [rsp+30h] [rbp-118h] BYREF
  char v50; // [rsp+34h] [rbp-114h]
  bool v51; // [rsp+35h] [rbp-113h]
  char v52; // [rsp+36h] [rbp-112h]
  int v53; // [rsp+38h] [rbp-110h]
  char v54; // [rsp+3Ch] [rbp-10Ch]
  unsigned int v55; // [rsp+40h] [rbp-108h]
  char v56; // [rsp+44h] [rbp-104h] BYREF
  char v57[3]; // [rsp+45h] [rbp-103h] BYREF
  unsigned int v58; // [rsp+48h] [rbp-100h]
  int v59; // [rsp+4Ch] [rbp-FCh]
  unsigned __int16 v60; // [rsp+50h] [rbp-F8h] BYREF
  int v61; // [rsp+54h] [rbp-F4h]
  unsigned int **v62; // [rsp+58h] [rbp-F0h]
  __int64 v63; // [rsp+60h] [rbp-E8h] BYREF
  unsigned int *v64; // [rsp+68h] [rbp-E0h]
  __int64 v65; // [rsp+70h] [rbp-D8h]
  unsigned int v66; // [rsp+78h] [rbp-D0h]
  bool v67; // [rsp+7Ch] [rbp-CCh]
  char v68; // [rsp+7Dh] [rbp-CBh]
  __int16 v69; // [rsp+80h] [rbp-C8h]
  int v70; // [rsp+84h] [rbp-C4h]
  __int64 v71; // [rsp+88h] [rbp-C0h]
  __int64 v72; // [rsp+90h] [rbp-B8h]
  __int64 v73; // [rsp+98h] [rbp-B0h]
  unsigned int *v74; // [rsp+A0h] [rbp-A8h]
  unsigned int *v75; // [rsp+A8h] [rbp-A0h]
  unsigned int *v76; // [rsp+B0h] [rbp-98h]
  unsigned int *v77; // [rsp+B8h] [rbp-90h]
  int v78; // [rsp+C0h] [rbp-88h]
  __int64 v79; // [rsp+C8h] [rbp-80h]
  __int64 *v80; // [rsp+D0h] [rbp-78h]
  __int64 *v81; // [rsp+D8h] [rbp-70h]
  _QWORD v82[2]; // [rsp+E0h] [rbp-68h] BYREF
  __int64 v83; // [rsp+F0h] [rbp-58h]
  __int64 v84; // [rsp+F8h] [rbp-50h]

  v5 = a4;
  v61 = a4;
  v6 = a3;
  v66 = a3;
  v65 = a1;
  v8 = (int)a5;
  v62 = a5;
  v63 = 0LL;
  v80 = a2;
  v51 = 0;
  v54 = 1;
  v52 = 1;
  if ( a3 < 3 && (a4 & 2) == 0 || a3 > 4 || (a4 & 0x41) != 0 && a3 != 4 || a3 == 4 && (a4 & 0x41) == 0 )
    return 3221225713LL;
  v9 = a3;
  if ( a3 == 4 )
    v9 = 3;
  v58 = v9;
  v59 = v9;
  LOWORD(v55) = 0;
  v10 = 0;
  v49[0] = 0;
  if ( (unsigned __int64)a2 - 1 > 0xFFFFFFFFFFFFFFFDuLL
    || (unsigned __int64)(a1 - 1) > 0xFFFFFFFFFFFFFFFDuLL
    || (unsigned __int64)a5 - 1 > 0xFFFFFFFFFFFFFFFDuLL )
  {
    return 3221225485LL;
  }
  LOBYTE(v8) = 1;
  v11 = RtlImageDirectoryEntryToData(a1, v8, 2, (int)&v60);
  v73 = v11;
  if ( !v11 )
    return 3221225609LL;
  v14 = v11;
  v71 = v11;
  v63 = 61166LL;
  v70 = 0;
  v15 = 0LL;
  v64 = 0LL;
  v74 = 0LL;
  v72 = 0LL;
  v79 = 0LL;
  if ( (~(_BYTE)v5 & 0x10) == 0 || v58 - 1 > 2 || PnPBootDriversInitialized != 1 )
    goto LABEL_30;
  if ( v58 == 3 )
    v16 = *((unsigned __int16 *)a2 + 8);
  else
    v16 = 0LL;
  v55 = v16;
  v69 = v16;
  v17 = *a2;
  if ( ((*a2 - 16) & 0xFFFFFFFFFFFFFFF7uLL) == 0 )
    goto LABEL_25;
  if ( (v17 & 0xFFFFFFFFFFFF0000uLL) != 0 && !wcsicmp((const wchar_t *)v17, L"MUI") )
  {
    v16 = v55;
LABEL_25:
    if ( (~(_BYTE)v5 & 8) != 0 && (v16 & 0xF3FF) == 0 && (_WORD)v16 != 3072 )
    {
      v5 |= 0x10u;
      v61 = v5;
      goto LABEL_31;
    }
  }
  v5 |= LdrIsResItemExist(v65, a2, v12);
  v61 = v5;
LABEL_30:
  v16 = v55;
LABEL_31:
  if ( PnPBootDriversInitialized == 1 && (v18 = ~v5, (~v5 & 0x80000) != 0) && (v18 & 0x20000) != 0 && (v18 & 0x10) != 0 )
  {
    v19 = 1;
    v50 = 1;
  }
  else
  {
    v19 = 0;
    v50 = 0;
  }
  if ( PnPBootDriversInitialized && (v5 & 0x2040000) == 0 )
  {
    v20 = v52;
  }
  else
  {
    v20 = 0;
    v52 = 0;
  }
  if ( !v19 && !v20 )
    goto LABEL_48;
  v82[0] = *a2;
  v21 = v58;
  if ( v58 < 2 )
    v22 = 0LL;
  else
    v22 = a2[1];
  v82[1] = v22;
  if ( v6 == 4 )
    v84 = a2[3];
LABEL_49:
  v23 = v59;
  if ( !v14 || (v24 = v59, v23 = v59 - 1, v59 = v23, v78 = v23, !v24) )
  {
    v25 = v72;
LABEL_63:
    if ( !v15 || (v5 & 2) != 0 )
    {
      if ( !v14 || (v5 & 2) == 0 )
      {
LABEL_70:
        switch ( v21 - v23 )
        {
          case 1u:
            result = 3221225610LL;
            goto LABEL_77;
          case 2u:
            result = 3221225611LL;
            break;
          case 3u:
            result = 3221225988LL;
            v53 = -1073741308;
            if ( !v25 )
              return result;
            v64 = 0LL;
            v74 = 0LL;
            if ( v54 )
            {
              v26 = v51;
LABEL_81:
              v27 = v70;
              while ( 1 )
              {
                v28 = v27++;
                v70 = v27;
                if ( v28 )
                {
                  v29 = v28 - 1;
                  if ( v29 )
                  {
                    v30 = v29 - 1;
                    if ( v30 )
                    {
                      v31 = v30 - 1;
                      if ( !v31 )
                      {
                        if ( PsInstallUILanguageId != PsMachineUILanguageId )
                        {
                          if ( v19 )
                          {
                            v83 = (unsigned __int16)PsInstallUILanguageId;
                            result = LdrpLoadResourceFromAlternativeModule(v65, (__int64)v82, v6, v5, v62);
                            v53 = result;
                            if ( (int)result >= 0 )
                              return result;
                          }
                          v34 = PsInstallUILanguageId;
                          goto LABEL_106;
                        }
LABEL_102:
                        v10 = v63;
                        v49[0] = v63;
                        goto LABEL_129;
                      }
                      v32 = v31 - 1;
                      if ( v32 )
                      {
                        v33 = v32 - 1;
                        if ( v33 )
                        {
                          if ( v33 != 1 )
                            break;
                          v5 |= 0x20u;
                          v61 = v5;
                        }
                        else
                        {
                          v10 = 1033;
                          v49[0] = 1033;
                          if ( PsDefaultSystemLocaleId == 1033
                            || PsInstallUILanguageId == 1033
                            || PsMachineUILanguageId == 1033 )
                          {
                            goto LABEL_102;
                          }
                          if ( v19 )
                          {
                            v83 = 1033LL;
                            result = LdrpLoadResourceFromAlternativeModule(v65, (__int64)v82, v6, v5, v62);
                            v53 = result;
                            if ( (int)result >= 0 )
                              return result;
                          }
                        }
                      }
                      else
                      {
                        v10 = PsDefaultSystemLocaleId;
                        v49[0] = PsDefaultSystemLocaleId;
                        if ( (_WORD)PsDefaultSystemLocaleId == PsInstallUILanguageId
                          || (_WORD)PsDefaultSystemLocaleId == PsMachineUILanguageId )
                        {
                          goto LABEL_102;
                        }
                        if ( v19 )
                        {
                          v83 = (unsigned __int16)PsDefaultSystemLocaleId;
                          result = LdrpLoadResourceFromAlternativeModule(v65, (__int64)v82, v6, v5, v62);
                          v53 = result;
                          if ( (int)result >= 0 )
                            return result;
                        }
                      }
                    }
                    else
                    {
                      if ( !v26 )
                        break;
                      if ( v19 && PsMachineUILanguageId )
                      {
                        v83 = (unsigned __int16)PsMachineUILanguageId;
                        result = LdrpLoadResourceFromAlternativeModule(v65, (__int64)v82, v6, v5, v62);
                        v53 = result;
                        if ( (int)result >= 0 )
                          return result;
                        v34 = PsMachineUILanguageId;
LABEL_106:
                        v10 = v34;
                        v49[0] = v34;
                        goto LABEL_129;
                      }
                      v35 = v63;
                      if ( PsMachineUILanguageId )
                        v35 = PsMachineUILanguageId;
                      v10 = v35;
                      v49[0] = v35;
                    }
                  }
                  else
                  {
                    if ( v10 )
                    {
                      if ( (int)LdrpGetParentLangId(v10, v49) >= 0 )
                      {
                        v10 = v49[0];
                      }
                      else
                      {
                        v10 = 0;
                        v49[0] = 0;
                      }
                    }
                    if ( v19 )
                    {
                      if ( !v10 )
                        goto LABEL_129;
                      v83 = v10;
                      result = LdrpLoadResourceFromAlternativeModule(v65, (__int64)v82, v6, v5, v62);
                      v53 = result;
                      if ( (int)result >= 0 )
                        return result;
                    }
                    if ( v10 )
                      v70 = --v27;
                  }
                }
                else
                {
                  if ( v19 && (_WORD)v16 )
                  {
                    v83 = (unsigned __int16)v16;
                    result = LdrpLoadResourceFromAlternativeModule(v65, (__int64)v82, v6, v5, v62);
                    v53 = result;
                    if ( (int)result >= 0 )
                      return result;
                    v16 = v55;
                  }
                  v10 = v16;
                  v49[0] = v16;
                }
LABEL_129:
                if ( (~(_BYTE)v5 & 0x20) == 0 || v10 != v63 )
                {
                  v63 = v10;
                  a2 = &v63;
                  v81 = &v63;
                  v25 = v72;
                  v14 = v72;
                  v71 = v72;
                  v15 = v64;
                  v23 = v59;
LABEL_133:
                  v36 = *(unsigned __int16 *)(v14 + 12);
                  v60 = v36;
                  v37 = (unsigned int *)(v14 + 16);
                  v76 = (unsigned int *)(v14 + 16);
                  v38 = (unsigned __int16)v36;
                  if ( (*a2 & 0xFFFFFFFFFFFF0000uLL) == 0 )
                  {
                    v37 += 2 * v36;
                    v76 = v37;
                    LOWORD(v36) = *(_WORD *)(v14 + 14);
                    v60 = v36;
                    v38 = (unsigned __int16)v36;
                  }
                  if ( !(_WORD)v38 )
                  {
                    v71 = 0LL;
                    v54 = 0;
                    v68 = 0;
                    v6 = v66;
                    v19 = v50;
                    v16 = v55;
                    v21 = v58;
                    goto LABEL_70;
                  }
                  if ( v25 && (v5 & 0x20) != 0 )
                  {
                    v14 = 0LL;
                    v71 = 0LL;
                    v63 = *v37;
                    v15 = (unsigned int *)(v73 + v37[1]);
                    v74 = v15;
                    v6 = v66;
                    v19 = v50;
                    v16 = v55;
                    v21 = v58;
                    goto LABEL_63;
                  }
                  v14 = 0LL;
                  v71 = 0LL;
                  v39 = &v37[2 * (unsigned __int16)v38 - 2];
                  v77 = v39;
                  while ( 2 )
                  {
                    if ( v37 > v39 )
                      goto LABEL_151;
                    v40 = (unsigned __int16)v38 >> 1;
                    if ( !((unsigned __int16)v38 >> 1) )
                    {
                      if ( (_WORD)v38 )
                      {
                        v48 = (const wchar_t *)*a2;
                        v57[0] = 0;
                        v47 = v73;
                        if ( !(unsigned int)LdrpCompareResourceNamesWithValidation(v38, v16, v48, v73, v37, v57) )
                        {
                          v46 = v37[1];
                          if ( (int)v46 >= 0 )
                          {
                            v15 = (unsigned int *)(v46 + v47);
                            goto LABEL_153;
                          }
LABEL_149:
                          v14 = v47 + (v46 & 0xFFFFFFFF7FFFFFFFuLL);
                          v71 = v14;
                        }
                      }
                      v15 = v64;
                      goto LABEL_151;
                    }
                    v75 = v37;
                    v41 = 2LL * v40;
                    v42 = v36 & 1;
                    if ( v42 )
                      v43 = &v37[v41];
                    else
                      v43 = &v37[v41 - 2];
                    v75 = v43;
                    v44 = (const wchar_t *)*a2;
                    v56 = 0;
                    v45 = LdrpCompareResourceNamesWithValidation(v38, v16, v44, v73, v43, &v56);
                    if ( !v45 )
                    {
                      v46 = v43[1];
                      if ( (int)v46 < 0 )
                      {
                        v47 = v73;
                        goto LABEL_149;
                      }
                      v14 = 0LL;
                      v71 = 0LL;
                      v15 = (unsigned int *)(v46 + v73);
LABEL_153:
                      v64 = v15;
                      v74 = v15;
LABEL_151:
                      v81 = ++a2;
                      v5 = v61;
                      v6 = v66;
                      v19 = v50;
                      v16 = v55;
                      v20 = v52;
LABEL_48:
                      v21 = v58;
                      goto LABEL_49;
                    }
                    if ( v45 >= 0 )
                    {
                      v37 = v43 + 2;
                      v76 = v43 + 2;
                      v60 = v40;
                      v39 = v77;
LABEL_159:
                      v38 = v40;
                      LOBYTE(v36) = v40;
                    }
                    else
                    {
                      v39 = v43 - 2;
                      v77 = v43 - 2;
                      if ( v42 )
                      {
                        v60 = v40;
                        goto LABEL_159;
                      }
                      LOBYTE(v36) = v40 - 1;
                      v60 = v40 - 1;
                      v38 = (unsigned __int16)(v40 - 1);
                    }
                    v15 = v64;
                    continue;
                  }
                }
                v16 = v55;
                v26 = v51;
              }
            }
            result = 3221225988LL;
            break;
          default:
            result = 3221225485LL;
            goto LABEL_77;
        }
        v53 = result;
        return result;
      }
      *v62 = (unsigned int *)v14;
    }
    else
    {
      *v62 = v15;
    }
    result = 0LL;
LABEL_77:
    v53 = result;
    return result;
  }
  if ( v23 )
    goto LABEL_59;
  if ( !v20 )
  {
LABEL_55:
    if ( !v23 )
    {
      v25 = v72;
      if ( v58 == 3 )
        v25 = v14;
      v72 = v25;
      v79 = v25;
      goto LABEL_60;
    }
LABEL_59:
    v25 = v72;
LABEL_60:
    if ( !v25 )
      goto LABEL_133;
    v16 = *((unsigned __int16 *)v80 + 8);
    v55 = v16;
    v69 = v16;
    v26 = (v16 & 0x3FF) == 0;
    v51 = v26;
    v67 = v26;
    goto LABEL_81;
  }
  result = LdrpLoadResourceFromAlternativeModule(v65, (__int64)v82, v6, v5 | 0x1000000u, v62);
  v53 = result;
  if ( (int)result < 0 )
  {
    v23 = v59;
    goto LABEL_55;
  }
  return result;
}
