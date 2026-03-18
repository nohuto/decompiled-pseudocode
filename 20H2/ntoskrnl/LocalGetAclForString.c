/*
 * XREFs of LocalGetAclForString @ 0x140783ACC
 * Callers:
 *     LocalConvertStringSDToSD_Rev1 @ 0x1407837D4 (LocalConvertStringSDToSD_Rev1.c)
 * Callees:
 *     RtlGetAce @ 0x140209DB0 (RtlGetAce.c)
 *     RtlLengthSid @ 0x140209E10 (RtlLengthSid.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     _wcsnicmp @ 0x1403D18A0 (_wcsnicmp.c)
 *     wcstoul @ 0x1403D3B90 (wcstoul.c)
 *     wcsncpy_s @ 0x1403D7AB0 (wcsncpy_s.c)
 *     memmove @ 0x140411040 (memmove.c)
 *     RtlAddAce @ 0x1405F72B0 (RtlAddAce.c)
 *     RtlpAddKnownAce @ 0x140606130 (RtlpAddKnownAce.c)
 *     RtlCopySid @ 0x140656BB0 (RtlCopySid.c)
 *     RtlNtStatusToDosError @ 0x1406B2FF0 (RtlNtStatusToDosError.c)
 *     LookupAccessMaskInTable @ 0x1406FD558 (LookupAccessMaskInTable.c)
 *     LookupAceFlagsInTable @ 0x1406FD718 (LookupAceFlagsInTable.c)
 *     LookupAceTypeInTable @ 0x1406FD7C8 (LookupAceTypeInTable.c)
 *     SddlpAlloc @ 0x1406FDB18 (SddlpAlloc.c)
 *     LocalGetSidForString @ 0x140784060 (LocalGetSidForString.c)
 *     LocalGetSDDLDeliminator @ 0x140784148 (LocalGetSDDLDeliminator.c)
 *     LocalGetAceCount @ 0x1407841B4 (LocalGetAceCount.c)
 *     RtlAddAccessAllowedObjectAce @ 0x1409149E0 (RtlAddAccessAllowedObjectAce.c)
 *     RtlAddAccessDeniedObjectAce @ 0x140914A40 (RtlAddAccessDeniedObjectAce.c)
 *     RtlAddAuditAccessObjectAce @ 0x140914D30 (RtlAddAuditAccessObjectAce.c)
 *     SddlAddAccessFilterAce @ 0x1409289F8 (SddlAddAccessFilterAce.c)
 *     SddlAddMandatoryAce @ 0x140928C10 (SddlAddMandatoryAce.c)
 *     SddlAddProcessTrustLabelAce @ 0x140928D74 (SddlAddProcessTrustLabelAce.c)
 *     SddlAddScopedPolicyIDAce @ 0x140928ED4 (SddlAddScopedPolicyIDAce.c)
 *     SddlpUuidFromString @ 0x140929298 (SddlpUuidFromString.c)
 *     LocalGetConditionForString @ 0x14092A724 (LocalGetConditionForString.c)
 *     LocalGetRelativeAttributeForString @ 0x14092AE10 (LocalGetRelativeAttributeForString.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall LocalGetAclForString(wchar_t *Str, char a2, const void **a3, wchar_t **a4)
{
  const void **v5; // r14
  wchar_t *v7; // r13
  ULONG AceCount; // esi
  PSID v9; // r15
  __int64 result; // rax
  wchar_t *v11; // rax
  __int64 v12; // rax
  wchar_t *v13; // rdx
  unsigned int v14; // r12d
  unsigned int v15; // edi
  _BYTE *v16; // rax
  __int16 v17; // cx
  int v18; // edi
  wchar_t v19; // ax
  wchar_t v20; // cx
  wchar_t *v21; // rbx
  int v22; // r13d
  wchar_t **v23; // rax
  unsigned int v24; // r12d
  __int64 v25; // rax
  wchar_t *v26; // rbx
  wchar_t *v27; // rbx
  wchar_t **v28; // r14
  wchar_t v29; // ax
  int v30; // r8d
  wchar_t **v31; // rax
  __int64 v32; // rax
  int v33; // edi
  ULONG SidForString; // eax
  _WORD *v35; // rcx
  _WORD *i; // rbx
  int v37; // edx
  unsigned int v38; // r14d
  unsigned int v39; // edx
  unsigned int v40; // ebx
  unsigned int v41; // edi
  ULONG v42; // eax
  ULONG v43; // r12d
  __int64 v44; // rdx
  PVOID *v45; // r10
  int v46; // r8d
  PVOID v47; // rcx
  int v48; // eax
  int v49; // r14d
  _WORD *v50; // rax
  wchar_t **v51; // rax
  _BYTE *v52; // rax
  bool v53; // zf
  int v54; // edx
  unsigned int v55; // eax
  bool v56; // cf
  unsigned __int64 v57; // rcx
  unsigned int v58; // edi
  _WORD *v59; // r14
  const void **v60; // rax
  void *v61; // rcx
  PVOID v62; // r10
  int v63; // edx
  _WORD *v64; // r15
  char v65; // al
  size_t v66; // rbx
  int v67; // edi
  char *v68; // rcx
  unsigned int v69; // ebx
  unsigned int v70; // ebx
  unsigned int v71; // ebx
  unsigned int v72; // ebx
  unsigned int v73; // ebx
  int v74; // ecx
  char *v75; // rdi
  ULONG v76; // eax
  size_t v77; // rbx
  ULONG v78; // eax
  PVOID v79; // rdx
  char *v80; // rax
  PSID v81; // rcx
  ULONG v82; // eax
  ULONG AceListLength[2]; // [rsp+20h] [rbp-E0h]
  char v84[8]; // [rsp+28h] [rbp-D8h]
  char v85; // [rsp+28h] [rbp-D8h]
  PVOID v86; // [rsp+30h] [rbp-D0h]
  int v87; // [rsp+38h] [rbp-C8h]
  unsigned __int8 v88; // [rsp+50h] [rbp-B0h]
  int v89; // [rsp+54h] [rbp-ACh]
  char v90[8]; // [rsp+58h] [rbp-A8h] BYREF
  PSID Sid; // [rsp+60h] [rbp-A0h] BYREF
  int v92; // [rsp+68h] [rbp-98h]
  char v93; // [rsp+6Ch] [rbp-94h]
  size_t v94; // [rsp+70h] [rbp-90h] BYREF
  const void **v95; // [rsp+78h] [rbp-88h]
  PVOID P; // [rsp+80h] [rbp-80h] BYREF
  unsigned int v97; // [rsp+88h] [rbp-78h] BYREF
  _WORD *v98; // [rsp+90h] [rbp-70h] BYREF
  unsigned int Size; // [rsp+98h] [rbp-68h]
  int Size_4; // [rsp+9Ch] [rbp-64h]
  __int64 v101; // [rsp+A0h] [rbp-60h]
  char v102[8]; // [rsp+A8h] [rbp-58h]
  PVOID v103; // [rsp+B0h] [rbp-50h] BYREF
  int v104; // [rsp+B8h] [rbp-48h]
  wchar_t *EndPtr; // [rsp+C0h] [rbp-40h] BYREF
  PVOID Ace; // [rsp+C8h] [rbp-38h] BYREF
  wchar_t **v107; // [rsp+D0h] [rbp-30h]
  int v108; // [rsp+D8h] [rbp-28h]
  unsigned __int16 v109; // [rsp+DCh] [rbp-24h]
  GUID Guid; // [rsp+E0h] [rbp-20h] BYREF
  GUID v111; // [rsp+F0h] [rbp-10h] BYREF
  wchar_t Dst[40]; // [rsp+100h] [rbp+0h] BYREF

  v107 = a4;
  v95 = a3;
  v97 = 0;
  v5 = a3;
  EndPtr = 0LL;
  v90[0] = 0;
  v7 = Str;
  Sid = 0LL;
  AceCount = 0;
  P = 0LL;
  v9 = 0LL;
  v94 = 0LL;
  v103 = 0LL;
  Ace = 0LL;
  v98 = 0LL;
  v108 = 0;
  v109 = 256;
  if ( !Str || !a3 || !a4 )
    return 87LL;
  if ( !wcsnicmp(Str, L"NO_ACCESS_CONTROL", 0x11uLL) )
  {
    *v5 = 0LL;
    *a4 = v7 + 17;
    goto LABEL_87;
  }
  v104 = 2 - (a2 != 0);
  result = LocalGetSDDLDeliminator(v7);
  if ( (_DWORD)result )
    return result;
  v11 = *a4;
  if ( *a4 == v7 )
    return 87LL;
  if ( v11 )
  {
    v13 = v11 - 1;
  }
  else
  {
    v12 = -1LL;
    do
      ++v12;
    while ( v7[v12] );
    v13 = &v7[v12];
  }
  *a4 = v13;
  AceCount = LocalGetAceCount(v7, v13, &v97);
  if ( AceCount )
    goto LABEL_87;
  v14 = v97;
  if ( !v97 )
  {
    v52 = SddlpAlloc(8uLL);
    *v5 = v52;
    if ( v52 )
    {
      *v52 = 2;
      *((_BYTE *)*v5 + 1) = 0;
      *((_WORD *)*v5 + 1) = 8;
      *((_WORD *)*v5 + 2) = 0;
      *((_WORD *)*v5 + 3) = 0;
    }
    else
    {
      return 8;
    }
    return AceCount;
  }
  v15 = 84 * v97 + 8;
  if ( v15 > 0xFFFF )
    v15 = 0xFFFF;
  Size = v15;
  v16 = SddlpAlloc(v15);
  *v5 = v16;
  if ( !v16 )
  {
    AceCount = 8;
    goto LABEL_87;
  }
  *v16 = 2;
  v17 = 8;
  v89 = 8;
  *((_BYTE *)*v5 + 1) = 0;
  *((_WORD *)*v5 + 1) = v15;
  *((_WORD *)*v5 + 2) = 0;
  *((_WORD *)*v5 + 3) = 0;
  Size_4 = 0;
  if ( !v14 )
    goto LABEL_84;
  while ( 2 )
  {
    v88 = 0;
    v92 = 0;
    Guid = 0LL;
    v18 = 0;
    *(_QWORD *)v102 = 0LL;
    v111 = 0LL;
    v101 = 0LL;
    while ( 1 )
    {
      v19 = *v7;
      if ( *v7 != 32 )
        break;
      ++v7;
    }
    v20 = *v7;
    if ( v19 == 40 )
      v20 = v7[1];
    v21 = v7 + 1;
    if ( v19 != 40 )
      v21 = v7;
    if ( v20 == 32 )
    {
      do
        ++v21;
      while ( *v21 == 32 );
    }
    v22 = v104;
    v23 = LookupAceTypeInTable(v21, 0, v104);
    if ( !v23 )
    {
      AceCount = 1804;
      goto LABEL_83;
    }
    v24 = *((unsigned __int8 *)v23 + 12);
    v25 = *((unsigned int *)v23 + 2);
    v93 = v24;
    v26 = &v21[v25];
    if ( *v26 != 59 && *v26 != 32 )
      goto LABEL_110;
    v27 = v26 + 1;
    if ( (unsigned __int8)(v24 - 5) <= 3u || (_BYTE)v24 == 11 )
      *(_BYTE *)*v5 = 4;
    while ( *v27 == 32 )
      ++v27;
    v28 = v107;
    while ( 1 )
    {
      if ( v27 == *v28 )
        goto LABEL_33;
      if ( *v27 == 59 )
        break;
      for ( ; *v27 == 32; ++v27 )
        ;
      v51 = LookupAceFlagsInTable(v27, 0, v22, v24);
      if ( !v51 )
      {
        AceCount = 1004;
        goto LABEL_83;
      }
      v88 |= *((_BYTE *)v51 + 12);
      v27 += *((unsigned int *)v51 + 2);
    }
    do
    {
      ++v27;
LABEL_33:
      v29 = *v27;
    }
    while ( *v27 == 32 );
    while ( v29 != 59 )
    {
      if ( v29 == 32 )
      {
        do
          ++v27;
        while ( *v27 == 32 );
      }
      v30 = v22;
      if ( (_BYTE)v24 == 17 )
        v30 = 4;
      v31 = LookupAccessMaskInTable(v27, 0, v30);
      if ( v31 )
      {
        v18 |= *((_DWORD *)v31 + 3);
        v32 = *((unsigned int *)v31 + 2);
        v92 = v18;
        v27 += v32;
      }
      else
      {
        v18 |= wcstoul(v27, &EndPtr, 0);
        v92 = v18;
        if ( EndPtr == v27 )
          goto LABEL_110;
        v27 = EndPtr;
      }
      v29 = *v27;
    }
    v33 = 0;
LABEL_42:
    ++v27;
    while ( 1 )
    {
      if ( *v27 == 32 )
        goto LABEL_42;
      if ( *v27 != 59 )
        break;
LABEL_45:
      ++v27;
      if ( (unsigned int)++v33 >= 2 )
        goto LABEL_46;
    }
    if ( (unsigned __int8)(v24 - 5) > 3u && (_BYTE)v24 != 11 )
      goto LABEL_110;
    wcsncpy_s(Dst, 0x25uLL, v27, 0x24uLL);
    Dst[36] = 0;
    if ( !v33 )
    {
      if ( !(unsigned int)SddlpUuidFromString(Dst, &Guid) )
        goto LABEL_126;
      *(_QWORD *)v102 = &Guid;
      goto LABEL_124;
    }
    if ( (unsigned int)SddlpUuidFromString(Dst, &v111) )
    {
      v101 = (__int64)&v111;
LABEL_124:
      v27 += 36;
      if ( *v27 != 59 && *v27 != 32 )
      {
LABEL_126:
        AceCount = 1705;
        goto LABEL_83;
      }
      goto LABEL_45;
    }
    AceCount = 1705;
LABEL_46:
    if ( AceCount )
      goto LABEL_83;
    while ( *v27 == 32 )
      ++v27;
    SidForString = LocalGetSidForString(v27, &Sid, &v98, v90, *(_QWORD *)AceListLength, *(_QWORD *)v84, v86, v87);
    v9 = Sid;
    AceCount = SidForString;
    if ( SidForString )
      goto LABEL_83;
    v35 = v98;
    if ( !v98 || !Sid )
    {
LABEL_110:
      AceCount = 1336;
LABEL_83:
      v17 = v89;
      goto LABEL_84;
    }
    for ( i = v98; *i == 32; ++i )
      ;
    if ( (unsigned __int8)v24 > 0x15u || (v37 = 2371072, !_bittest(&v37, v24)) )
    {
      v38 = v94;
      v39 = HIDWORD(v94);
      goto LABEL_55;
    }
    if ( *i == 59 )
    {
      do
        ++i;
      while ( *i == 32 );
      if ( *i == 40 )
      {
        if ( P )
        {
          ExFreePoolWithTag(P, 0);
          P = 0LL;
        }
        LODWORD(v94) = 0;
        if ( v103 )
        {
          ExFreePoolWithTag(v103, 0);
          v103 = 0LL;
        }
        HIDWORD(v94) = 0;
        if ( (_BYTE)v24 == 18 )
        {
          AceCount = LocalGetRelativeAttributeForString(
                       (_DWORD)i,
                       (unsigned int)&v98,
                       (unsigned int)&v103,
                       (unsigned int)&v94 + 4,
                       0LL,
                       0,
                       0,
                       0);
          if ( AceCount )
          {
LABEL_155:
            v17 = v89;
            goto LABEL_84;
          }
        }
        else
        {
          LOBYTE(v87) = 0;
          v86 = 0LL;
          *(_QWORD *)v84 = 0LL;
          *(_QWORD *)AceListLength = 0LL;
          AceCount = LocalGetConditionForString(i, &v98, &P, &v94);
        }
        v35 = v98;
      }
      else
      {
        v35 = i;
        v98 = i;
      }
    }
    v38 = v94;
    v39 = HIDWORD(v94);
    if ( !v94 )
      goto LABEL_154;
    if ( AceCount )
      goto LABEL_155;
LABEL_55:
    while ( *v35 == 32 )
      v98 = ++v35;
    if ( *v35 != 41 )
      goto LABEL_154;
    v7 = v35 + 1;
    v40 = v24;
    if ( v24 > 0x11 )
    {
      if ( v24 == 18 )
      {
        v41 = v39 + 12;
        v56 = v39 + 12 < v39;
        goto LABEL_171;
      }
      if ( v24 == 19 || v24 == 20 )
      {
LABEL_60:
        v41 = 12;
        goto LABEL_61;
      }
      v53 = v24 == 21;
LABEL_153:
      if ( v53 )
      {
LABEL_162:
        if ( v38 > 0xFFFFFFFC )
          goto LABEL_163;
        v55 = (v38 + 3) & 0xFFFFFFFC;
        v41 = v55 + 12;
LABEL_161:
        v56 = v41 < v55;
LABEL_171:
        if ( v56 )
        {
          AceCount = 534;
          goto LABEL_83;
        }
LABEL_61:
        v42 = RtlLengthSid(v9);
        v17 = v89;
        v43 = v41 + v42 - 4;
        if ( v43 < v41 )
        {
          AceCount = 534;
        }
        else
        {
          if ( v43 + v89 >= v43 )
          {
            v44 = Size;
            if ( v43 + v89 > Size )
            {
              v57 = v43 * (unsigned __int64)(v97 - Size_4);
              if ( v57 > 0xFFFFFFFF || (v58 = v57 + Size, (unsigned int)v57 + Size < (unsigned int)v57) )
              {
                v9 = Sid;
                AceCount = 534;
                goto LABEL_83;
              }
              v59 = SddlpAlloc(v58);
              v60 = v95;
              v61 = (void *)*v95;
              if ( !v59 )
              {
                if ( v61 )
                {
                  ExFreePoolWithTag(v61, 0);
                  v60 = v95;
                }
                v53 = v90[0] == 1;
                *v60 = 0LL;
                if ( v53 )
                {
                  if ( Sid )
                    ExFreePoolWithTag(Sid, 0);
                  v9 = 0LL;
                  v90[0] = 0;
                }
                else
                {
                  v9 = Sid;
                }
                AceCount = 8;
                goto LABEL_83;
              }
              memmove(v59, *v95, Size);
              v45 = (PVOID *)v95;
              v59[1] = v58;
              if ( *v45 )
              {
                ExFreePoolWithTag(*v45, 0);
                v45 = (PVOID *)v95;
              }
              *v45 = v59;
              v38 = v94;
              Size = v58;
            }
            else
            {
              v45 = (PVOID *)v95;
            }
            v89 += v43;
            if ( v40 > 0xB )
            {
              v69 = v40 - 13;
              if ( !v69 )
                goto LABEL_229;
              v70 = v69 - 4;
              if ( !v70 )
              {
                v9 = Sid;
                *(_DWORD *)v84 = v92;
                v48 = SddlAddMandatoryAce(*v45, v44, v88, Sid);
                goto LABEL_71;
              }
              v71 = v70 - 1;
              if ( v71 )
              {
                v72 = v71 - 1;
                if ( !v72 )
                {
                  v9 = Sid;
                  v48 = SddlAddScopedPolicyIDAce((int)*v45, v44, v88, v92, Sid);
                  goto LABEL_71;
                }
                v73 = v72 - 1;
                if ( !v73 )
                {
                  v9 = Sid;
                  *(_DWORD *)v84 = v92;
                  v48 = SddlAddProcessTrustLabelAce(*v45, v44, v88, Sid);
                  goto LABEL_71;
                }
                if ( v73 != 1 )
                {
LABEL_185:
                  v9 = Sid;
                  v49 = -1073741811;
LABEL_247:
                  AceCount = RtlNtStatusToDosError(v49);
                  goto LABEL_83;
                }
                v9 = Sid;
                if ( v38 < 0xFFFF )
                {
                  LOWORD(v87) = v38;
                  v86 = P;
                  *(_DWORD *)v84 = v92;
                  v48 = SddlAddAccessFilterAce(*v45, v44, v88, Sid);
                  goto LABEL_71;
                }
              }
              else
              {
                if ( v43 >= 0xFFFF )
                {
LABEL_245:
                  v9 = Sid;
                  goto LABEL_246;
                }
                v9 = Sid;
                if ( (v88 & 0xE0) == 0 && !v92 )
                {
                  v74 = *(_DWORD *)((char *)Sid + 2) - v108;
                  if ( !v74 )
                    v74 = *((unsigned __int16 *)Sid + 3) - v109;
                  if ( !v74 && *((_BYTE *)Sid + 1) == 1 && !*((_DWORD *)Sid + 2) )
                  {
                    v75 = (char *)SddlpAlloc(v43);
                    if ( v75 )
                    {
                      *v75 = v93;
                      v75[1] = v88;
                      *((_WORD *)v75 + 1) = v43;
                      *((_DWORD *)v75 + 1) = 0;
                      v76 = RtlLengthSid(v9);
                      RtlCopySid(v76, v75 + 8, v9);
                      if ( HIDWORD(v94) )
                      {
                        v77 = HIDWORD(v94);
                        v78 = RtlLengthSid(v9);
                        v79 = v103;
LABEL_233:
                        memmove(&v75[v78 + 8], v79, v77);
                      }
LABEL_234:
                      v49 = RtlAddAce((PACL)*v95, 2u, 0xFFFFFFFF, v75, v43);
                      ExFreePoolWithTag(v75, 0);
                      goto LABEL_72;
                    }
LABEL_227:
                    v49 = -1073741801;
                    goto LABEL_72;
                  }
                }
              }
            }
            else
            {
              if ( v40 != 11 )
              {
                switch ( v40 )
                {
                  case 0u:
                    v85 = 0;
LABEL_69:
                    v46 = v88;
                    v47 = *v45;
LABEL_70:
                    v9 = Sid;
                    v48 = RtlpAddKnownAce((__int64)v47, 2u, v46, v92, (unsigned __int8 *)Sid, v85);
LABEL_71:
                    v49 = v48;
                    goto LABEL_72;
                  case 1u:
                    v85 = 1;
                    goto LABEL_69;
                  case 2u:
                    v62 = *v45;
                    v85 = 2;
                    v63 = v88 & 0x3F | 0x40;
                    if ( (v88 & 0x40) == 0 )
                      v63 = v88 & 0x3F;
                    v47 = v62;
                    v46 = v63 | 0x80;
                    if ( (v88 & 0x80u) == 0 )
                      v46 = v63;
                    goto LABEL_70;
                  case 5u:
                    v9 = Sid;
                    v48 = RtlAddAccessAllowedObjectAce((int)*v45, 4, v88, v92, v102[0], v101, Sid);
                    goto LABEL_71;
                  case 6u:
                    v9 = Sid;
                    v48 = RtlAddAccessDeniedObjectAce((int)*v45, 4, v88, v92, *(__int64 *)v102, v101, Sid);
                    goto LABEL_71;
                  case 7u:
                    v9 = Sid;
                    v48 = RtlAddAuditAccessObjectAce((int)*v45, *(__int64 *)v102, v101, Sid, v88 & 0x40, v88 & 0x80);
                    goto LABEL_71;
                }
                if ( v40 <= 8 )
                  goto LABEL_185;
LABEL_229:
                if ( v43 < 0xFFFF )
                {
                  v80 = (char *)SddlpAlloc(v43);
                  v9 = Sid;
                  v75 = v80;
                  if ( v80 )
                  {
                    v81 = Sid;
                    *v80 = v93;
                    *((_DWORD *)v80 + 1) = v92;
                    v80[1] = v88;
                    *((_WORD *)v80 + 1) = v43;
                    v82 = RtlLengthSid(v81);
                    RtlCopySid(v82, v75 + 8, v9);
                    if ( (_DWORD)v94 )
                    {
                      v77 = (unsigned int)v94;
                      v78 = RtlLengthSid(v9);
                      v79 = P;
                      goto LABEL_233;
                    }
                    goto LABEL_234;
                  }
                  goto LABEL_227;
                }
                goto LABEL_245;
              }
              v9 = Sid;
              if ( v43 < 0xFFFF )
              {
                v49 = RtlAddAccessAllowedObjectAce((int)*v45, 4, v88, v92, v102[0], v101, Sid);
                if ( v49 < 0 )
                  goto LABEL_247;
                v49 = RtlGetAce((PACL)*v95, *((unsigned __int16 *)*v95 + 2) - 1, &Ace);
                if ( v49 < 0 )
                  goto LABEL_247;
                v64 = Ace;
                v65 = 9;
                if ( *(_BYTE *)Ace == 5 )
                  v65 = 11;
                *(_BYTE *)Ace = v65;
                v64[1] = v43;
                if ( (_DWORD)v94 )
                {
                  v66 = (unsigned int)v94;
                  if ( *(_BYTE *)v64 == 11 )
                  {
                    v67 = *((_DWORD *)v64 + 2);
                    v68 = (char *)&v64[8 * (v67 & 1) + 6 + 4 * (v67 & 2)] + RtlLengthSid(Sid);
                  }
                  else
                  {
                    v68 = (char *)v64 + RtlLengthSid(Sid) + 8;
                  }
                  memmove(v68, P, v66);
                }
                v9 = Sid;
LABEL_72:
                if ( v49 >= 0 )
                {
                  if ( v90[0] == 1 )
                    ExFreePoolWithTag(v9, 0);
                  v9 = 0LL;
                  Sid = 0LL;
                  if ( P )
                  {
                    ExFreePoolWithTag(P, 0);
                    P = 0LL;
                  }
                  LODWORD(v94) = 0;
                  if ( v103 )
                  {
                    ExFreePoolWithTag(v103, 0);
                    v103 = 0LL;
                  }
                  HIDWORD(v94) = 0;
                  if ( *v7 == 40 )
                    ++v7;
                  if ( ++Size_4 < v97 )
                  {
                    v5 = v95;
                    continue;
                  }
                  goto LABEL_83;
                }
                goto LABEL_247;
              }
            }
LABEL_246:
            v49 = -1073741705;
            goto LABEL_247;
          }
          v9 = Sid;
          AceCount = 534;
        }
LABEL_84:
        v50 = *v95;
        if ( AceCount )
        {
          if ( v50 )
            ExFreePoolWithTag((PVOID)*v95, 0);
          *v95 = 0LL;
        }
        else
        {
          v50[1] = v17;
        }
        if ( v90[0] && v9 )
          ExFreePoolWithTag(v9, 0);
        goto LABEL_87;
      }
LABEL_154:
      AceCount = 1336;
      goto LABEL_155;
    }
    break;
  }
  if ( v24 == 17 || v24 <= 3 )
    goto LABEL_60;
  if ( v24 <= 4 )
    goto LABEL_154;
  if ( v24 <= 8 )
  {
    v41 = *(_QWORD *)v102 != 0LL ? 32 : 16;
    if ( v101 )
      v41 = *(_QWORD *)v102 != 0LL ? 48 : 32;
    goto LABEL_61;
  }
  if ( v24 <= 0xA )
    goto LABEL_162;
  if ( v24 != 11 )
  {
    v53 = v24 == 13;
    goto LABEL_153;
  }
  v54 = *(_QWORD *)v102 != 0LL ? 48 : 32;
  if ( !v101 )
    v54 = *(_QWORD *)v102 != 0LL ? 32 : 16;
  if ( v38 <= 0xFFFFFFFC )
  {
    v55 = (v38 + 3) & 0xFFFFFFFC;
    v41 = v55 + v54;
    goto LABEL_161;
  }
LABEL_163:
  AceCount = 534;
LABEL_87:
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( v103 )
    ExFreePoolWithTag(v103, 0);
  return AceCount;
}
