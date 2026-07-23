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

int __fastcall LdrpSearchResourceSection_U(char *a1, __int64 *a2, unsigned int a3, ULONG a4, unsigned int **a5)
{
  ULONG v5; // r15d
  int v6; // esi
  __int64 *v7; // r13
  int v8; // eax
  unsigned __int16 v9; // r14
  char *v10; // rax
  int result; // eax
  unsigned int *v12; // rbx
  unsigned int *v13; // r12
  __int64 v14; // rdx
  __int64 v15; // rcx
  int v16; // eax
  char v17; // di
  char v18; // r8
  unsigned int v19; // ecx
  __int64 v20; // rax
  int v21; // r9d
  int v22; // eax
  unsigned int *v23; // r8
  bool v24; // cl
  int v25; // ebx
  int v26; // eax
  int v27; // eax
  int v28; // eax
  int v29; // eax
  int v30; // eax
  int v31; // eax
  __int16 v32; // ax
  __int16 v33; // cx
  __int64 v34; // rdi
  unsigned int *v35; // rsi
  __int64 v36; // rcx
  unsigned int *v37; // rax
  unsigned __int16 v38; // r12
  __int64 v39; // rax
  char v40; // di
  unsigned int *v41; // r15
  const wchar_t *v42; // r8
  int v43; // eax
  __int64 v44; // rax
  __int64 v45; // rdi
  const wchar_t *v46; // r8
  __int16 v47[2]; // [rsp+30h] [rbp-118h] BYREF
  char v48; // [rsp+34h] [rbp-114h]
  bool v49; // [rsp+35h] [rbp-113h]
  char v50; // [rsp+36h] [rbp-112h]
  int v51; // [rsp+38h] [rbp-110h]
  char v52; // [rsp+3Ch] [rbp-10Ch]
  unsigned int v53; // [rsp+40h] [rbp-108h]
  char v54; // [rsp+44h] [rbp-104h] BYREF
  char v55[3]; // [rsp+45h] [rbp-103h] BYREF
  unsigned int v56; // [rsp+48h] [rbp-100h]
  int v57; // [rsp+4Ch] [rbp-FCh]
  ULONG Size; // [rsp+50h] [rbp-F8h] BYREF
  ULONG v59; // [rsp+54h] [rbp-F4h]
  unsigned int **v60; // [rsp+58h] [rbp-F0h]
  __int64 v61; // [rsp+60h] [rbp-E8h] BYREF
  unsigned int *v62; // [rsp+68h] [rbp-E0h]
  void *v63; // [rsp+70h] [rbp-D8h]
  unsigned int v64; // [rsp+78h] [rbp-D0h]
  bool v65; // [rsp+7Ch] [rbp-CCh]
  char v66; // [rsp+7Dh] [rbp-CBh]
  __int16 v67; // [rsp+80h] [rbp-C8h]
  int v68; // [rsp+84h] [rbp-C4h]
  unsigned int *v69; // [rsp+88h] [rbp-C0h]
  unsigned __int16 *v70; // [rsp+90h] [rbp-B8h]
  char *v71; // [rsp+98h] [rbp-B0h]
  unsigned int *v72; // [rsp+A0h] [rbp-A8h]
  unsigned int *v73; // [rsp+A8h] [rbp-A0h]
  unsigned int *v74; // [rsp+B0h] [rbp-98h]
  unsigned int *v75; // [rsp+B8h] [rbp-90h]
  int v76; // [rsp+C0h] [rbp-88h]
  unsigned int *v77; // [rsp+C8h] [rbp-80h]
  __int64 *v78; // [rsp+D0h] [rbp-78h]
  __int64 *v79; // [rsp+D8h] [rbp-70h]
  _QWORD v80[2]; // [rsp+E0h] [rbp-68h] BYREF
  __int64 v81; // [rsp+F0h] [rbp-58h]
  __int64 v82; // [rsp+F8h] [rbp-50h]

  v5 = a4;
  v59 = a4;
  v6 = a3;
  v64 = a3;
  v7 = a2;
  v63 = a1;
  v60 = a5;
  v61 = 0LL;
  v78 = a2;
  v49 = 0;
  v52 = 1;
  v50 = 1;
  if ( a3 < 3 && (a4 & 2) == 0 || a3 > 4 || (a4 & 0x41) != 0 && a3 != 4 || a3 == 4 && (a4 & 0x41) == 0 )
    return -1073741583;
  v8 = a3;
  if ( a3 == 4 )
    v8 = 3;
  v56 = v8;
  v57 = v8;
  LOWORD(v53) = 0;
  v9 = 0;
  v47[0] = 0;
  if ( (unsigned __int64)a2 - 1 > 0xFFFFFFFFFFFFFFFDuLL
    || (unsigned __int64)(a1 - 1) > 0xFFFFFFFFFFFFFFFDuLL
    || (unsigned __int64)a5 - 1 > 0xFFFFFFFFFFFFFFFDuLL )
  {
    return -1073741811;
  }
  v10 = (char *)RtlImageDirectoryEntryToData(a1, 1u, 2u, &Size);
  v71 = v10;
  if ( !v10 )
    return -1073741687;
  v12 = (unsigned int *)v10;
  v69 = (unsigned int *)v10;
  v61 = 61166LL;
  v68 = 0;
  v13 = 0LL;
  v62 = 0LL;
  v72 = 0LL;
  v70 = 0LL;
  v77 = 0LL;
  if ( (~(_BYTE)v5 & 0x10) == 0 || v56 - 1 > 2 || PnPBootDriversInitialized != 1 )
    goto LABEL_30;
  if ( v56 == 3 )
    v14 = *((unsigned __int16 *)v7 + 8);
  else
    v14 = 0LL;
  v53 = v14;
  v67 = v14;
  v15 = *v7;
  if ( ((*v7 - 16) & 0xFFFFFFFFFFFFFFF7uLL) == 0 )
    goto LABEL_25;
  if ( (v15 & 0xFFFFFFFFFFFF0000uLL) != 0 && !wcsicmp((const wchar_t *)v15, L"MUI") )
  {
    v14 = v53;
LABEL_25:
    if ( (~(_BYTE)v5 & 8) != 0 && (v14 & 0xF3FF) == 0 && (_WORD)v14 != 3072 )
    {
      v5 |= 0x10u;
      v59 = v5;
      goto LABEL_31;
    }
  }
  v5 |= LdrIsResItemExist(v63, v7);
  v59 = v5;
LABEL_30:
  v14 = v53;
LABEL_31:
  if ( PnPBootDriversInitialized == 1 && (v16 = ~v5, (~v5 & 0x80000) != 0) && (v16 & 0x20000) != 0 && (v16 & 0x10) != 0 )
  {
    v17 = 1;
    v48 = 1;
  }
  else
  {
    v17 = 0;
    v48 = 0;
  }
  if ( PnPBootDriversInitialized && (v5 & 0x2040000) == 0 )
  {
    v18 = v50;
  }
  else
  {
    v18 = 0;
    v50 = 0;
  }
  if ( !v17 && !v18 )
    goto LABEL_48;
  v80[0] = *v7;
  v19 = v56;
  if ( v56 < 2 )
    v20 = 0LL;
  else
    v20 = v7[1];
  v80[1] = v20;
  if ( v6 == 4 )
    v82 = v7[3];
LABEL_49:
  v21 = v57;
  if ( !v12 || (v22 = v57, v21 = v57 - 1, v57 = v21, v76 = v21, !v22) )
  {
    v23 = (unsigned int *)v70;
LABEL_63:
    if ( !v13 || (v5 & 2) != 0 )
    {
      if ( !v12 || (v5 & 2) == 0 )
      {
LABEL_70:
        switch ( v19 - v21 )
        {
          case 1u:
            result = -1073741686;
            goto LABEL_77;
          case 2u:
            result = -1073741685;
            break;
          case 3u:
            result = -1073741308;
            v51 = -1073741308;
            if ( !v23 )
              return result;
            v62 = 0LL;
            v72 = 0LL;
            if ( v52 )
            {
              v24 = v49;
LABEL_81:
              v25 = v68;
              while ( 1 )
              {
                v26 = v25++;
                v68 = v25;
                if ( v26 )
                {
                  v27 = v26 - 1;
                  if ( v27 )
                  {
                    v28 = v27 - 1;
                    if ( v28 )
                    {
                      v29 = v28 - 1;
                      if ( !v29 )
                      {
                        if ( PsInstallUILanguageId != PsMachineUILanguageId )
                        {
                          if ( v17 )
                          {
                            v81 = (unsigned __int16)PsInstallUILanguageId;
                            result = LdrpLoadResourceFromAlternativeModule(v63, (__int64)v80, v6, v5, v60);
                            v51 = result;
                            if ( result >= 0 )
                              return result;
                          }
                          v32 = PsInstallUILanguageId;
                          goto LABEL_106;
                        }
LABEL_102:
                        v9 = v61;
                        v47[0] = v61;
                        goto LABEL_129;
                      }
                      v30 = v29 - 1;
                      if ( v30 )
                      {
                        v31 = v30 - 1;
                        if ( v31 )
                        {
                          if ( v31 != 1 )
                            break;
                          v5 |= 0x20u;
                          v59 = v5;
                        }
                        else
                        {
                          v9 = 1033;
                          v47[0] = 1033;
                          if ( PsDefaultSystemLocaleId == 1033
                            || PsInstallUILanguageId == 1033
                            || PsMachineUILanguageId == 1033 )
                          {
                            goto LABEL_102;
                          }
                          if ( v17 )
                          {
                            v81 = 1033LL;
                            result = LdrpLoadResourceFromAlternativeModule(v63, (__int64)v80, v6, v5, v60);
                            v51 = result;
                            if ( result >= 0 )
                              return result;
                          }
                        }
                      }
                      else
                      {
                        v9 = PsDefaultSystemLocaleId;
                        v47[0] = PsDefaultSystemLocaleId;
                        if ( (_WORD)PsDefaultSystemLocaleId == PsInstallUILanguageId
                          || (_WORD)PsDefaultSystemLocaleId == PsMachineUILanguageId )
                        {
                          goto LABEL_102;
                        }
                        if ( v17 )
                        {
                          v81 = (unsigned __int16)PsDefaultSystemLocaleId;
                          result = LdrpLoadResourceFromAlternativeModule(v63, (__int64)v80, v6, v5, v60);
                          v51 = result;
                          if ( result >= 0 )
                            return result;
                        }
                      }
                    }
                    else
                    {
                      if ( !v24 )
                        break;
                      if ( v17 && PsMachineUILanguageId )
                      {
                        v81 = (unsigned __int16)PsMachineUILanguageId;
                        result = LdrpLoadResourceFromAlternativeModule(v63, (__int64)v80, v6, v5, v60);
                        v51 = result;
                        if ( result >= 0 )
                          return result;
                        v32 = PsMachineUILanguageId;
LABEL_106:
                        v9 = v32;
                        v47[0] = v32;
                        goto LABEL_129;
                      }
                      v33 = v61;
                      if ( PsMachineUILanguageId )
                        v33 = PsMachineUILanguageId;
                      v9 = v33;
                      v47[0] = v33;
                    }
                  }
                  else
                  {
                    if ( v9 )
                    {
                      if ( (int)LdrpGetParentLangId(v9, v47) >= 0 )
                      {
                        v9 = v47[0];
                      }
                      else
                      {
                        v9 = 0;
                        v47[0] = 0;
                      }
                    }
                    if ( v17 )
                    {
                      if ( !v9 )
                        goto LABEL_129;
                      v81 = v9;
                      result = LdrpLoadResourceFromAlternativeModule(v63, (__int64)v80, v6, v5, v60);
                      v51 = result;
                      if ( result >= 0 )
                        return result;
                    }
                    if ( v9 )
                      v68 = --v25;
                  }
                }
                else
                {
                  if ( v17 && (_WORD)v14 )
                  {
                    v81 = (unsigned __int16)v14;
                    result = LdrpLoadResourceFromAlternativeModule(v63, (__int64)v80, v6, v5, v60);
                    v51 = result;
                    if ( result >= 0 )
                      return result;
                    v14 = v53;
                  }
                  v9 = v14;
                  v47[0] = v14;
                }
LABEL_129:
                if ( (~(_BYTE)v5 & 0x20) == 0 || v9 != v61 )
                {
                  v61 = v9;
                  v7 = &v61;
                  v79 = &v61;
                  v23 = (unsigned int *)v70;
                  v12 = (unsigned int *)v70;
                  v69 = (unsigned int *)v70;
                  v13 = v62;
                  v21 = v57;
LABEL_133:
                  v34 = *((unsigned __int16 *)v12 + 6);
                  LOWORD(Size) = v34;
                  v35 = v12 + 4;
                  v74 = v12 + 4;
                  v36 = (unsigned __int16)v34;
                  if ( (*v7 & 0xFFFFFFFFFFFF0000uLL) == 0 )
                  {
                    v35 += 2 * v34;
                    v74 = v35;
                    LOWORD(v34) = *((_WORD *)v12 + 7);
                    LOWORD(Size) = v34;
                    v36 = (unsigned __int16)v34;
                  }
                  if ( !(_WORD)v36 )
                  {
                    v69 = 0LL;
                    v52 = 0;
                    v66 = 0;
                    v6 = v64;
                    v17 = v48;
                    v14 = v53;
                    v19 = v56;
                    goto LABEL_70;
                  }
                  if ( v23 && (v5 & 0x20) != 0 )
                  {
                    v12 = 0LL;
                    v69 = 0LL;
                    v61 = *v35;
                    v13 = (unsigned int *)&v71[v35[1]];
                    v72 = v13;
                    v6 = v64;
                    v17 = v48;
                    v14 = v53;
                    v19 = v56;
                    goto LABEL_63;
                  }
                  v12 = 0LL;
                  v69 = 0LL;
                  v37 = &v35[2 * (unsigned __int16)v36 - 2];
                  v75 = v37;
                  while ( 2 )
                  {
                    if ( v35 > v37 )
                      goto LABEL_151;
                    v38 = (unsigned __int16)v36 >> 1;
                    if ( !((unsigned __int16)v36 >> 1) )
                    {
                      if ( (_WORD)v36 )
                      {
                        v46 = (const wchar_t *)*v7;
                        v55[0] = 0;
                        v45 = (__int64)v71;
                        if ( !(unsigned int)LdrpCompareResourceNamesWithValidation(
                                              v36,
                                              v14,
                                              v46,
                                              (__int64)v71,
                                              v35,
                                              v55) )
                        {
                          v44 = v35[1];
                          if ( (int)v44 >= 0 )
                          {
                            v13 = (unsigned int *)(v44 + v45);
                            goto LABEL_153;
                          }
LABEL_149:
                          v12 = (unsigned int *)(v45 + (v44 & 0xFFFFFFFF7FFFFFFFuLL));
                          v69 = v12;
                        }
                      }
                      v13 = v62;
                      goto LABEL_151;
                    }
                    v73 = v35;
                    v39 = 2LL * v38;
                    v40 = v34 & 1;
                    if ( v40 )
                      v41 = &v35[v39];
                    else
                      v41 = &v35[v39 - 2];
                    v73 = v41;
                    v42 = (const wchar_t *)*v7;
                    v54 = 0;
                    v43 = LdrpCompareResourceNamesWithValidation(v36, v14, v42, (__int64)v71, v41, &v54);
                    if ( !v43 )
                    {
                      v44 = v41[1];
                      if ( (int)v44 < 0 )
                      {
                        v45 = (__int64)v71;
                        goto LABEL_149;
                      }
                      v12 = 0LL;
                      v69 = 0LL;
                      v13 = (unsigned int *)&v71[v44];
LABEL_153:
                      v62 = v13;
                      v72 = v13;
LABEL_151:
                      v79 = ++v7;
                      v5 = v59;
                      v6 = v64;
                      v17 = v48;
                      v14 = v53;
                      v18 = v50;
LABEL_48:
                      v19 = v56;
                      goto LABEL_49;
                    }
                    if ( v43 >= 0 )
                    {
                      v35 = v41 + 2;
                      v74 = v41 + 2;
                      LOWORD(Size) = v38;
                      v37 = v75;
LABEL_159:
                      v36 = v38;
                      LOBYTE(v34) = v38;
                    }
                    else
                    {
                      v37 = v41 - 2;
                      v75 = v41 - 2;
                      if ( v40 )
                      {
                        LOWORD(Size) = v38;
                        goto LABEL_159;
                      }
                      LOBYTE(v34) = v38 - 1;
                      LOWORD(Size) = v38 - 1;
                      v36 = (unsigned __int16)(v38 - 1);
                    }
                    v13 = v62;
                    continue;
                  }
                }
                v14 = v53;
                v24 = v49;
              }
            }
            result = -1073741308;
            break;
          default:
            result = -1073741811;
            goto LABEL_77;
        }
        v51 = result;
        return result;
      }
      *v60 = v12;
    }
    else
    {
      *v60 = v13;
    }
    result = 0;
LABEL_77:
    v51 = result;
    return result;
  }
  if ( v21 )
    goto LABEL_59;
  if ( !v18 )
  {
LABEL_55:
    if ( !v21 )
    {
      v23 = (unsigned int *)v70;
      if ( v56 == 3 )
        v23 = v12;
      v70 = (unsigned __int16 *)v23;
      v77 = v23;
      goto LABEL_60;
    }
LABEL_59:
    v23 = (unsigned int *)v70;
LABEL_60:
    if ( !v23 )
      goto LABEL_133;
    v14 = *((unsigned __int16 *)v78 + 8);
    v53 = v14;
    v67 = v14;
    v24 = (v14 & 0x3FF) == 0;
    v49 = v24;
    v65 = v24;
    goto LABEL_81;
  }
  result = LdrpLoadResourceFromAlternativeModule(v63, (__int64)v80, v6, v5 | 0x1000000, v60);
  v51 = result;
  if ( result < 0 )
  {
    v21 = v57;
    goto LABEL_55;
  }
  return result;
}
