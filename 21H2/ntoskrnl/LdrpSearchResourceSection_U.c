/*
 * XREFs of LdrpSearchResourceSection_U @ 0x14075717C
 * Callers:
 *     LdrpLoadResourceFromAlternativeModule @ 0x1402D6FB0 (LdrpLoadResourceFromAlternativeModule.c)
 *     LdrpGetRcConfig @ 0x1402D75FC (LdrpGetRcConfig.c)
 *     RtlFindMessage @ 0x140758920 (RtlFindMessage.c)
 *     LdrFindResource_U @ 0x140855100 (LdrFindResource_U.c)
 *     LdrFindResourceDirectory_U @ 0x1409B67B0 (LdrFindResourceDirectory_U.c)
 *     LdrFindResourceEx_U @ 0x1409B67D0 (LdrFindResourceEx_U.c)
 *     RtlLoadString @ 0x1409B7260 (RtlLoadString.c)
 * Callees:
 *     LdrpCompareResourceNamesWithValidation @ 0x14024A520 (LdrpCompareResourceNamesWithValidation.c)
 *     RtlImageDirectoryEntryToData @ 0x1402D6CB0 (RtlImageDirectoryEntryToData.c)
 *     LdrpLoadResourceFromAlternativeModule @ 0x1402D6FB0 (LdrpLoadResourceFromAlternativeModule.c)
 *     LdrIsResItemExist @ 0x1402D7740 (LdrIsResItemExist.c)
 *     LdrpGetParentLangId @ 0x140389D88 (LdrpGetParentLangId.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     _wcsicmp @ 0x1403E1490 (_wcsicmp.c)
 */

__int64 __fastcall LdrpSearchResourceSection_U(__int64 a1, __int64 *a2, unsigned int a3, int a4, unsigned __int64 *a5)
{
  int v5; // r14d
  int v6; // r15d
  int v8; // edx
  int v9; // eax
  unsigned __int16 v10; // r12
  __int64 v11; // rax
  unsigned __int64 v12; // rbx
  unsigned __int64 v13; // rsi
  int v14; // r9d
  __int64 v15; // rcx
  char v16; // di
  char v17; // dl
  unsigned int v18; // ecx
  __int64 v19; // rax
  int v20; // r8d
  int v21; // eax
  __int64 v22; // rdx
  __int64 v23; // rdi
  unsigned int *v24; // rsi
  __int64 v25; // rcx
  unsigned int *v26; // rax
  unsigned __int16 v27; // r15
  const wchar_t *v28; // r8
  __int64 v29; // rdi
  __int64 v30; // rax
  __int64 v31; // rax
  char v32; // di
  unsigned int *v33; // r14
  const wchar_t *v34; // r8
  int v35; // eax
  bool v36; // cl
  int v37; // ebx
  int v38; // eax
  int v39; // eax
  int v40; // eax
  __int64 result; // rax
  __int16 v42; // cx
  int v43; // eax
  int v44; // eax
  int v45; // eax
  __int16 v46; // ax
  __int16 v47[2]; // [rsp+30h] [rbp-118h] BYREF
  char v48; // [rsp+34h] [rbp-114h]
  bool v49; // [rsp+35h] [rbp-113h]
  char v50; // [rsp+36h] [rbp-112h]
  int v51; // [rsp+38h] [rbp-110h]
  char v52; // [rsp+3Ch] [rbp-10Ch]
  int v53; // [rsp+40h] [rbp-108h]
  char v54; // [rsp+44h] [rbp-104h] BYREF
  char v55[3]; // [rsp+45h] [rbp-103h] BYREF
  unsigned int v56; // [rsp+48h] [rbp-100h]
  unsigned __int16 v57; // [rsp+4Ch] [rbp-FCh] BYREF
  int v58; // [rsp+50h] [rbp-F8h]
  int v59; // [rsp+54h] [rbp-F4h]
  unsigned __int64 *v60; // [rsp+58h] [rbp-F0h]
  __int64 v61; // [rsp+60h] [rbp-E8h] BYREF
  __int64 v62; // [rsp+68h] [rbp-E0h]
  unsigned __int64 v63; // [rsp+70h] [rbp-D8h]
  bool v64; // [rsp+78h] [rbp-D0h]
  char v65; // [rsp+79h] [rbp-CFh]
  __int16 v66; // [rsp+7Ch] [rbp-CCh]
  int v67; // [rsp+80h] [rbp-C8h]
  __int64 v68; // [rsp+88h] [rbp-C0h]
  __int64 v69; // [rsp+90h] [rbp-B8h]
  __int64 v70; // [rsp+98h] [rbp-B0h]
  unsigned __int64 v71; // [rsp+A0h] [rbp-A8h]
  unsigned int v72; // [rsp+A8h] [rbp-A0h]
  unsigned int *v73; // [rsp+B0h] [rbp-98h]
  unsigned int *v74; // [rsp+B8h] [rbp-90h]
  unsigned int *v75; // [rsp+C0h] [rbp-88h]
  int v76; // [rsp+C8h] [rbp-80h]
  __int64 v77; // [rsp+D0h] [rbp-78h]
  __int64 *v78; // [rsp+D8h] [rbp-70h]
  __int64 *v79; // [rsp+E0h] [rbp-68h]
  _QWORD v80[2]; // [rsp+E8h] [rbp-60h] BYREF
  __int64 v81; // [rsp+F8h] [rbp-50h]
  __int64 v82; // [rsp+100h] [rbp-48h]

  v5 = a4;
  v59 = a4;
  v6 = a3;
  v72 = a3;
  v62 = a1;
  v8 = (int)a5;
  v60 = a5;
  v61 = 0LL;
  v78 = a2;
  v49 = 0;
  v52 = 1;
  v50 = 1;
  if ( a3 < 3 && (a4 & 2) == 0 || a3 > 4 || (a4 & 0x41) != 0 && a3 != 4 || a3 == 4 && (a4 & 0x41) == 0 )
    return 3221225713LL;
  v9 = 3;
  if ( a3 != 4 )
    v9 = a3;
  v56 = v9;
  v58 = v9;
  LOWORD(v53) = 0;
  v10 = 0;
  v47[0] = 0;
  if ( (unsigned __int64)a2 - 1 > 0xFFFFFFFFFFFFFFFDuLL
    || (unsigned __int64)(a1 - 1) > 0xFFFFFFFFFFFFFFFDuLL
    || (unsigned __int64)a5 - 1 > 0xFFFFFFFFFFFFFFFDuLL )
  {
    return 3221225485LL;
  }
  LOBYTE(v8) = 1;
  v11 = RtlImageDirectoryEntryToData(a1, v8, 2, (int)&v57);
  v70 = v11;
  if ( !v11 )
    return 3221225609LL;
  v12 = v11;
  v68 = v11;
  v61 = 61166LL;
  v67 = 0;
  v13 = 0LL;
  v63 = 0LL;
  v71 = 0LL;
  v69 = 0LL;
  v77 = 0LL;
  if ( (~(_BYTE)v5 & 0x10) == 0 || PnPBootDriversInitialized != 1 || v56 - 1 > 2 )
    goto LABEL_21;
  if ( v56 == 3 )
    v14 = *((unsigned __int16 *)a2 + 8);
  else
    v14 = 0;
  v53 = v14;
  v66 = v14;
  v15 = *a2;
  if ( ((*a2 - 16) & 0xFFFFFFFFFFFFFFF7uLL) != 0 )
  {
    if ( (v15 & 0xFFFFFFFFFFFF0000uLL) == 0 || wcsicmp((const wchar_t *)v15, L"MUI") )
      goto LABEL_20;
    LOWORD(v14) = v53;
  }
  if ( (~(_BYTE)v5 & 8) == 0 || (v14 & 0xF3FF) != 0 || (_WORD)v14 == 3072 )
  {
LABEL_20:
    v5 |= LdrIsResItemExist(v62, a2);
    v59 = v5;
LABEL_21:
    LOWORD(v14) = v53;
    goto LABEL_22;
  }
  v5 |= 0x10u;
  v59 = v5;
LABEL_22:
  if ( PnPBootDriversInitialized == 1 && (~v5 & 0x20000) != 0 && (~v5 & 0x80000) != 0 && (~(_BYTE)v5 & 0x10) != 0 )
  {
    v16 = 1;
    v48 = 1;
  }
  else
  {
    v16 = 0;
    v48 = 0;
  }
  if ( !PnPBootDriversInitialized || (v5 & 0x2000000) != 0 || (v5 & 0x40000) != 0 )
  {
    v17 = 0;
    v50 = 0;
  }
  else
  {
    v17 = v50;
  }
  if ( !v16 && !v17 )
    goto LABEL_52;
  v80[0] = *a2;
  v18 = v56;
  if ( v56 < 2 )
    v19 = 0LL;
  else
    v19 = a2[1];
  v80[1] = v19;
  if ( v6 == 4 )
    v82 = a2[3];
LABEL_34:
  v20 = v58;
  if ( !v12 || (v21 = v58, v20 = v58 - 1, v58 = v20, v76 = v20, !v21) )
  {
    v22 = v69;
    goto LABEL_83;
  }
  if ( v20 )
    goto LABEL_37;
  if ( v17 )
  {
    result = LdrpLoadResourceFromAlternativeModule(v62, (__int64)v80, v6, v5 | 0x1000000u, v60);
    v51 = result;
    if ( (int)result >= 0 )
      return result;
    v20 = v58;
  }
  if ( v20 )
  {
LABEL_37:
    v22 = v69;
  }
  else
  {
    v22 = v69;
    if ( v56 == 3 )
      v22 = v12;
    v69 = v22;
    v77 = v22;
  }
  if ( !v22 )
    goto LABEL_39;
  v14 = *((unsigned __int16 *)v78 + 8);
  v53 = v14;
  v66 = v14;
  v36 = (v14 & 0x3FF) == 0;
  v49 = v36;
  v64 = v36;
  while ( 2 )
  {
    v37 = v67;
    while ( 1 )
    {
      v38 = v37++;
      v67 = v37;
      if ( v38 )
      {
        v39 = v38 - 1;
        if ( v39 )
        {
          v40 = v39 - 1;
          if ( v40 )
          {
            v43 = v40 - 1;
            if ( !v43 )
            {
              if ( PsInstallUILanguageId != PsMachineUILanguageId )
              {
                if ( v16 )
                {
                  v81 = (unsigned __int16)PsInstallUILanguageId;
                  result = LdrpLoadResourceFromAlternativeModule(v62, (__int64)v80, v6, v5, v60);
                  v51 = result;
                  if ( (int)result >= 0 )
                    return result;
                }
                v46 = PsInstallUILanguageId;
                goto LABEL_163;
              }
LABEL_160:
              v10 = v61;
              v47[0] = v61;
              goto LABEL_79;
            }
            v44 = v43 - 1;
            if ( v44 )
            {
              v45 = v44 - 1;
              if ( v45 )
              {
                if ( v45 != 1 )
                  goto LABEL_168;
                v5 |= 0x20u;
                v59 = v5;
              }
              else
              {
                v10 = 1033;
                v47[0] = 1033;
                if ( PsDefaultSystemLocaleId == 1033 || PsInstallUILanguageId == 1033 || PsMachineUILanguageId == 1033 )
                  goto LABEL_160;
                if ( v16 )
                {
                  v81 = 1033LL;
                  result = LdrpLoadResourceFromAlternativeModule(v62, (__int64)v80, v6, v5, v60);
                  v51 = result;
                  if ( (int)result >= 0 )
                    return result;
                }
              }
            }
            else
            {
              v10 = PsDefaultSystemLocaleId;
              v47[0] = PsDefaultSystemLocaleId;
              if ( (_WORD)PsDefaultSystemLocaleId == PsInstallUILanguageId
                || (_WORD)PsDefaultSystemLocaleId == PsMachineUILanguageId )
              {
                goto LABEL_160;
              }
              if ( v16 )
              {
                v81 = (unsigned __int16)PsDefaultSystemLocaleId;
                result = LdrpLoadResourceFromAlternativeModule(v62, (__int64)v80, v6, v5, v60);
                v51 = result;
                if ( (int)result >= 0 )
                  return result;
              }
            }
          }
          else
          {
            if ( !v36 )
              goto LABEL_168;
            if ( v16 && PsMachineUILanguageId )
            {
              v81 = (unsigned __int16)PsMachineUILanguageId;
              result = LdrpLoadResourceFromAlternativeModule(v62, (__int64)v80, v6, v5, v60);
              v51 = result;
              if ( (int)result >= 0 )
                return result;
              v46 = PsMachineUILanguageId;
LABEL_163:
              v10 = v46;
              v47[0] = v46;
              goto LABEL_79;
            }
            v42 = v61;
            if ( PsMachineUILanguageId )
              v42 = PsMachineUILanguageId;
            v10 = v42;
            v47[0] = v42;
          }
        }
        else
        {
          if ( v10 )
          {
            if ( (int)LdrpGetParentLangId(v10, v47) >= 0 )
            {
              v10 = v47[0];
            }
            else
            {
              v10 = 0;
              v47[0] = 0;
            }
          }
          if ( v16 )
          {
            if ( !v10 )
              goto LABEL_79;
            v81 = v10;
            result = LdrpLoadResourceFromAlternativeModule(v62, (__int64)v80, v6, v5, v60);
            v51 = result;
            if ( (int)result >= 0 )
              return result;
          }
          if ( v10 )
            v67 = --v37;
        }
      }
      else
      {
        if ( v16 && (_WORD)v14 )
        {
          v81 = (unsigned __int16)v14;
          result = LdrpLoadResourceFromAlternativeModule(v62, (__int64)v80, v6, v5, v60);
          v51 = result;
          if ( (int)result >= 0 )
            return result;
          LOWORD(v14) = v53;
        }
        v10 = v14;
        v47[0] = v14;
      }
LABEL_79:
      if ( (~(_BYTE)v5 & 0x20) == 0 || v10 != v61 )
        break;
      LOWORD(v14) = v53;
      v36 = v49;
    }
    v61 = v10;
    a2 = &v61;
    v79 = &v61;
    v22 = v69;
    v12 = v69;
    v68 = v69;
    v20 = v58;
LABEL_39:
    v23 = *(unsigned __int16 *)(v12 + 12);
    v57 = v23;
    v24 = (unsigned int *)(v12 + 16);
    v74 = (unsigned int *)(v12 + 16);
    v25 = (unsigned __int16)v23;
    if ( (*a2 & 0xFFFFFFFFFFFF0000uLL) == 0 )
    {
      v24 += 2 * v23;
      v74 = v24;
      LOWORD(v23) = *(_WORD *)(v12 + 14);
      v57 = v23;
      v25 = (unsigned __int16)v23;
    }
    if ( !(_WORD)v25 )
    {
      v68 = 0LL;
      v52 = 0;
      v65 = 0;
      v16 = v48;
      LOWORD(v14) = v53;
      v18 = v56;
      goto LABEL_85;
    }
    if ( !v22 || (v5 & 0x20) == 0 )
    {
      v12 = 0LL;
      v68 = 0LL;
      v26 = &v24[2 * (unsigned __int16)v25 - 2];
      v75 = v26;
      while ( 1 )
      {
        if ( v24 > v26 )
          goto LABEL_50;
        v27 = (unsigned __int16)v25 >> 1;
        if ( !((unsigned __int16)v25 >> 1) )
        {
          if ( !(_WORD)v25 )
            goto LABEL_50;
          v28 = (const wchar_t *)*a2;
          v55[0] = 0;
          v29 = v70;
          if ( (unsigned int)LdrpCompareResourceNamesWithValidation(v25, v22, v28, v70, v24, v55) )
            goto LABEL_50;
          v30 = v24[1];
          if ( (int)v30 < 0 )
            goto LABEL_49;
          v13 = v30 + v29;
          goto LABEL_113;
        }
        v73 = v24;
        v31 = 2LL * v27;
        v32 = v23 & 1;
        if ( v32 )
          v33 = &v24[v31];
        else
          v33 = &v24[v31 - 2];
        v73 = v33;
        v34 = (const wchar_t *)*a2;
        v54 = 0;
        v35 = LdrpCompareResourceNamesWithValidation(v25, v22, v34, v70, v33, &v54);
        if ( !v35 )
        {
          v30 = v33[1];
          if ( (int)v30 < 0 )
          {
            v29 = v70;
LABEL_49:
            v12 = v29 + (v30 & 0xFFFFFFFF7FFFFFFFuLL);
            v68 = v12;
LABEL_50:
            v13 = v63;
            goto LABEL_51;
          }
          v12 = 0LL;
          v68 = 0LL;
          v13 = v30 + v70;
LABEL_113:
          v63 = v13;
          v71 = v13;
LABEL_51:
          v79 = ++a2;
          v5 = v59;
          v6 = v72;
          v16 = v48;
          LOWORD(v14) = v53;
          v17 = v50;
LABEL_52:
          v18 = v56;
          goto LABEL_34;
        }
        if ( v35 >= 0 )
          break;
        v26 = v33 - 2;
        v75 = v33 - 2;
        if ( v32 )
        {
          v57 = v27;
LABEL_120:
          v25 = v27;
          LOBYTE(v23) = v27;
        }
        else
        {
          LOBYTE(v23) = v27 - 1;
          v57 = v27 - 1;
          v25 = (unsigned __int16)(v27 - 1);
        }
      }
      v24 = v33 + 2;
      v74 = v33 + 2;
      v57 = v27;
      v26 = v75;
      goto LABEL_120;
    }
    v12 = 0LL;
    v68 = 0LL;
    v61 = *v24;
    v13 = v70 + v24[1];
    v71 = v13;
    v16 = v48;
    LOWORD(v14) = v53;
    v18 = v56;
LABEL_83:
    if ( v13 && (v5 & 2) == 0 )
    {
      *v60 = v13;
      goto LABEL_94;
    }
    if ( !v12 || (v5 & 2) == 0 )
    {
LABEL_85:
      switch ( v18 - v20 )
      {
        case 1u:
          result = 3221225610LL;
          goto LABEL_95;
        case 2u:
          result = 3221225611LL;
          break;
        case 3u:
          result = 3221225988LL;
          v51 = -1073741308;
          if ( !v22 )
            return result;
          v63 = 0LL;
          v71 = 0LL;
          if ( v52 )
          {
            v36 = v49;
            continue;
          }
LABEL_168:
          result = 3221225988LL;
          break;
        default:
          result = 3221225485LL;
          goto LABEL_95;
      }
      v51 = result;
      return result;
    }
    break;
  }
  *v60 = v12;
LABEL_94:
  result = 0LL;
LABEL_95:
  v51 = result;
  return result;
}
