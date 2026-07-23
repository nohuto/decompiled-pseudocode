/*
 * XREFs of LocalGetAclForString @ 0x1407754CC
 * Callers:
 *     LocalConvertStringSDToSD_Rev1 @ 0x1407751D4 (LocalConvertStringSDToSD_Rev1.c)
 * Callees:
 *     RtlGetAce @ 0x14027DB50 (RtlGetAce.c)
 *     RtlLengthSid @ 0x14027DBB0 (RtlLengthSid.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     _wcsnicmp @ 0x1403CEC10 (_wcsnicmp.c)
 *     wcstoul @ 0x1403D0F00 (wcstoul.c)
 *     wcsncpy_s @ 0x1403D4E20 (wcsncpy_s.c)
 *     memmove @ 0x140409FC0 (memmove.c)
 *     RtlCopySid @ 0x140625AA0 (RtlCopySid.c)
 *     LookupAccessMaskInTable @ 0x140642770 (LookupAccessMaskInTable.c)
 *     LookupAceFlagsInTable @ 0x140642930 (LookupAceFlagsInTable.c)
 *     LookupAceTypeInTable @ 0x1406429E0 (LookupAceTypeInTable.c)
 *     SddlpAlloc @ 0x140642A7C (SddlpAlloc.c)
 *     RtlAddAce @ 0x14066A9B0 (RtlAddAce.c)
 *     RtlpAddKnownAce @ 0x14067E5A0 (RtlpAddKnownAce.c)
 *     RtlNtStatusToDosError @ 0x1406DB9E0 (RtlNtStatusToDosError.c)
 *     LocalGetSidForString @ 0x140775A60 (LocalGetSidForString.c)
 *     LocalGetSDDLDeliminator @ 0x140775B48 (LocalGetSDDLDeliminator.c)
 *     LocalGetAceCount @ 0x140775BB4 (LocalGetAceCount.c)
 *     RtlAddAccessAllowedObjectAce @ 0x14090EEA0 (RtlAddAccessAllowedObjectAce.c)
 *     RtlAddAccessDeniedObjectAce @ 0x14090EF00 (RtlAddAccessDeniedObjectAce.c)
 *     RtlAddAuditAccessObjectAce @ 0x14090F1F0 (RtlAddAuditAccessObjectAce.c)
 *     SddlAddAccessFilterAce @ 0x140922BD0 (SddlAddAccessFilterAce.c)
 *     SddlAddMandatoryAce @ 0x140922DE8 (SddlAddMandatoryAce.c)
 *     SddlAddProcessTrustLabelAce @ 0x140922F4C (SddlAddProcessTrustLabelAce.c)
 *     SddlAddScopedPolicyIDAce @ 0x1409230AC (SddlAddScopedPolicyIDAce.c)
 *     SddlpUuidFromString @ 0x140923470 (SddlpUuidFromString.c)
 *     LocalGetConditionForString @ 0x1409248FC (LocalGetConditionForString.c)
 *     LocalGetRelativeAttributeForString @ 0x140924FE8 (LocalGetRelativeAttributeForString.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
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
  ACCESS_MASK v18; // edi
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
  PVOID *v44; // r10
  int v45; // r8d
  ACL *v46; // rcx
  int v47; // eax
  int v48; // r14d
  _WORD *v49; // rax
  wchar_t **v50; // rax
  _BYTE *v51; // rax
  bool v52; // zf
  int v53; // edx
  unsigned int v54; // eax
  bool v55; // cf
  unsigned __int64 v56; // rcx
  unsigned int v57; // edi
  _WORD *v58; // r14
  const void **v59; // rax
  void *v60; // rcx
  ACL *v61; // r10
  int v62; // edx
  _WORD *v63; // r15
  char v64; // al
  size_t v65; // rbx
  int v66; // edi
  char *v67; // rcx
  unsigned int v68; // ebx
  unsigned int v69; // ebx
  unsigned int v70; // ebx
  unsigned int v71; // ebx
  unsigned int v72; // ebx
  int v73; // ecx
  char *v74; // rdi
  ULONG v75; // eax
  size_t v76; // rbx
  ULONG v77; // eax
  PVOID v78; // rdx
  char *v79; // rax
  PSID v80; // rcx
  ULONG v81; // eax
  PGUID ObjectTypeGuid; // [rsp+20h] [rbp-E0h]
  PGUID InheritedObjectTypeGuid; // [rsp+28h] [rbp-D8h]
  UCHAR InheritedObjectTypeGuida; // [rsp+28h] [rbp-D8h]
  PSID Src; // [rsp+30h] [rbp-D0h]
  int AuditSuccess; // [rsp+38h] [rbp-C8h]
  unsigned __int8 v87; // [rsp+50h] [rbp-B0h]
  int v88; // [rsp+54h] [rbp-ACh]
  char v89[8]; // [rsp+58h] [rbp-A8h] BYREF
  PSID Sid; // [rsp+60h] [rbp-A0h] BYREF
  ACCESS_MASK AccessMask; // [rsp+68h] [rbp-98h]
  char v92; // [rsp+6Ch] [rbp-94h]
  size_t v93; // [rsp+70h] [rbp-90h] BYREF
  const void **v94; // [rsp+78h] [rbp-88h]
  PVOID P; // [rsp+80h] [rbp-80h] BYREF
  unsigned int v96; // [rsp+88h] [rbp-78h] BYREF
  _WORD *v97; // [rsp+90h] [rbp-70h] BYREF
  unsigned int Size; // [rsp+98h] [rbp-68h]
  int Size_4; // [rsp+9Ch] [rbp-64h]
  PGUID v100; // [rsp+A0h] [rbp-60h]
  PGUID p_Guid; // [rsp+A8h] [rbp-58h]
  PVOID v102; // [rsp+B0h] [rbp-50h] BYREF
  int v103; // [rsp+B8h] [rbp-48h]
  wchar_t *EndPtr; // [rsp+C0h] [rbp-40h] BYREF
  PVOID Ace; // [rsp+C8h] [rbp-38h] BYREF
  wchar_t **v106; // [rsp+D0h] [rbp-30h]
  int v107; // [rsp+D8h] [rbp-28h]
  unsigned __int16 v108; // [rsp+DCh] [rbp-24h]
  GUID Guid; // [rsp+E0h] [rbp-20h] BYREF
  GUID v110; // [rsp+F0h] [rbp-10h] BYREF
  wchar_t Dst[40]; // [rsp+100h] [rbp+0h] BYREF

  v106 = a4;
  v94 = a3;
  v96 = 0;
  v5 = a3;
  EndPtr = 0LL;
  v89[0] = 0;
  v7 = Str;
  Sid = 0LL;
  AceCount = 0;
  P = 0LL;
  v9 = 0LL;
  v93 = 0LL;
  v102 = 0LL;
  Ace = 0LL;
  v97 = 0LL;
  v107 = 0;
  v108 = 256;
  if ( !Str || !a3 || !a4 )
    return 87LL;
  if ( !wcsnicmp(Str, L"NO_ACCESS_CONTROL", 0x11uLL) )
  {
    *v5 = 0LL;
    *a4 = v7 + 17;
    goto LABEL_87;
  }
  v103 = 2 - (a2 != 0);
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
  AceCount = LocalGetAceCount(v7, v13, &v96);
  if ( AceCount )
    goto LABEL_87;
  v14 = v96;
  if ( !v96 )
  {
    v51 = SddlpAlloc(8uLL);
    *v5 = v51;
    if ( v51 )
    {
      *v51 = 2;
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
  v15 = 84 * v96 + 8;
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
  v88 = 8;
  *((_BYTE *)*v5 + 1) = 0;
  *((_WORD *)*v5 + 1) = v15;
  *((_WORD *)*v5 + 2) = 0;
  *((_WORD *)*v5 + 3) = 0;
  Size_4 = 0;
  if ( !v14 )
    goto LABEL_84;
  while ( 2 )
  {
    v87 = 0;
    AccessMask = 0;
    Guid = 0LL;
    v18 = 0;
    p_Guid = 0LL;
    v110 = 0LL;
    v100 = 0LL;
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
    v22 = v103;
    v23 = LookupAceTypeInTable(v21, 0, v103);
    if ( !v23 )
    {
      AceCount = 1804;
      goto LABEL_83;
    }
    v24 = *((unsigned __int8 *)v23 + 12);
    v25 = *((unsigned int *)v23 + 2);
    v92 = v24;
    v26 = &v21[v25];
    if ( *v26 != 59 && *v26 != 32 )
      goto LABEL_110;
    v27 = v26 + 1;
    if ( (unsigned __int8)(v24 - 5) <= 3u || (_BYTE)v24 == 11 )
      *(_BYTE *)*v5 = 4;
    while ( *v27 == 32 )
      ++v27;
    v28 = v106;
    while ( 1 )
    {
      if ( v27 == *v28 )
        goto LABEL_33;
      if ( *v27 == 59 )
        break;
      for ( ; *v27 == 32; ++v27 )
        ;
      v50 = LookupAceFlagsInTable(v27, 0, v22, v24);
      if ( !v50 )
      {
        AceCount = 1004;
        goto LABEL_83;
      }
      v87 |= *((_BYTE *)v50 + 12);
      v27 += *((unsigned int *)v50 + 2);
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
        AccessMask = v18;
        v27 += v32;
      }
      else
      {
        v18 |= wcstoul(v27, &EndPtr, 0);
        AccessMask = v18;
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
      p_Guid = &Guid;
      goto LABEL_124;
    }
    if ( (unsigned int)SddlpUuidFromString(Dst, &v110) )
    {
      v100 = &v110;
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
    SidForString = LocalGetSidForString(
                     v27,
                     &Sid,
                     &v97,
                     v89,
                     ObjectTypeGuid,
                     InheritedObjectTypeGuid,
                     Src,
                     AuditSuccess);
    v9 = Sid;
    AceCount = SidForString;
    if ( SidForString )
      goto LABEL_83;
    v35 = v97;
    if ( !v97 || !Sid )
    {
LABEL_110:
      AceCount = 1336;
LABEL_83:
      v17 = v88;
      goto LABEL_84;
    }
    for ( i = v97; *i == 32; ++i )
      ;
    if ( (unsigned __int8)v24 > 0x15u || (v37 = 2371072, !_bittest(&v37, v24)) )
    {
      v38 = v93;
      v39 = HIDWORD(v93);
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
        LODWORD(v93) = 0;
        if ( v102 )
        {
          ExFreePoolWithTag(v102, 0);
          v102 = 0LL;
        }
        HIDWORD(v93) = 0;
        if ( (_BYTE)v24 == 18 )
        {
          AceCount = LocalGetRelativeAttributeForString(
                       (_DWORD)i,
                       (unsigned int)&v97,
                       (unsigned int)&v102,
                       (unsigned int)&v93 + 4,
                       0LL,
                       0,
                       0,
                       0);
          if ( AceCount )
          {
LABEL_155:
            v17 = v88;
            goto LABEL_84;
          }
        }
        else
        {
          LOBYTE(AuditSuccess) = 0;
          Src = 0LL;
          InheritedObjectTypeGuid = 0LL;
          ObjectTypeGuid = 0LL;
          AceCount = LocalGetConditionForString(i, &v97, &P, &v93);
        }
        v35 = v97;
      }
      else
      {
        v35 = i;
        v97 = i;
      }
    }
    v38 = v93;
    v39 = HIDWORD(v93);
    if ( !v93 )
      goto LABEL_154;
    if ( AceCount )
      goto LABEL_155;
LABEL_55:
    while ( *v35 == 32 )
      v97 = ++v35;
    if ( *v35 != 41 )
      goto LABEL_154;
    v7 = v35 + 1;
    v40 = v24;
    if ( v24 > 0x11 )
    {
      if ( v24 == 18 )
      {
        v41 = v39 + 12;
        v55 = v39 + 12 < v39;
        goto LABEL_171;
      }
      if ( v24 == 19 || v24 == 20 )
      {
LABEL_60:
        v41 = 12;
        goto LABEL_61;
      }
      v52 = v24 == 21;
LABEL_153:
      if ( v52 )
      {
LABEL_162:
        if ( v38 > 0xFFFFFFFC )
          goto LABEL_163;
        v54 = (v38 + 3) & 0xFFFFFFFC;
        v41 = v54 + 12;
LABEL_161:
        v55 = v41 < v54;
LABEL_171:
        if ( v55 )
        {
          AceCount = 534;
          goto LABEL_83;
        }
LABEL_61:
        v42 = RtlLengthSid(v9);
        v17 = v88;
        v43 = v41 + v42 - 4;
        if ( v43 < v41 )
        {
          AceCount = 534;
        }
        else
        {
          if ( v43 + v88 >= v43 )
          {
            if ( v43 + v88 > Size )
            {
              v56 = v43 * (unsigned __int64)(v96 - Size_4);
              if ( v56 > 0xFFFFFFFF || (v57 = v56 + Size, (unsigned int)v56 + Size < (unsigned int)v56) )
              {
                v9 = Sid;
                AceCount = 534;
                goto LABEL_83;
              }
              v58 = SddlpAlloc(v57);
              v59 = v94;
              v60 = (void *)*v94;
              if ( !v58 )
              {
                if ( v60 )
                {
                  ExFreePoolWithTag(v60, 0);
                  v59 = v94;
                }
                v52 = v89[0] == 1;
                *v59 = 0LL;
                if ( v52 )
                {
                  if ( Sid )
                    ExFreePoolWithTag(Sid, 0);
                  v9 = 0LL;
                  v89[0] = 0;
                }
                else
                {
                  v9 = Sid;
                }
                AceCount = 8;
                goto LABEL_83;
              }
              memmove(v58, *v94, Size);
              v44 = (PVOID *)v94;
              v58[1] = v57;
              if ( *v44 )
              {
                ExFreePoolWithTag(*v44, 0);
                v44 = (PVOID *)v94;
              }
              *v44 = v58;
              v38 = v93;
              Size = v57;
            }
            else
            {
              v44 = (PVOID *)v94;
            }
            v88 += v43;
            if ( v40 > 0xB )
            {
              v68 = v40 - 13;
              if ( !v68 )
                goto LABEL_229;
              v69 = v68 - 4;
              if ( !v69 )
              {
                v9 = Sid;
                v47 = SddlAddMandatoryAce((PACL)*v44, (int)ObjectTypeGuid, AccessMask);
                goto LABEL_71;
              }
              v70 = v69 - 1;
              if ( v70 )
              {
                v71 = v70 - 1;
                if ( !v71 )
                {
                  v9 = Sid;
                  v47 = SddlAddScopedPolicyIDAce((PACL)*v44, Sid);
                  goto LABEL_71;
                }
                v72 = v71 - 1;
                if ( !v72 )
                {
                  v9 = Sid;
                  v47 = SddlAddProcessTrustLabelAce((PACL)*v44, (int)ObjectTypeGuid, AccessMask);
                  goto LABEL_71;
                }
                if ( v72 != 1 )
                {
LABEL_185:
                  v9 = Sid;
                  v48 = -1073741811;
LABEL_247:
                  AceCount = RtlNtStatusToDosError(v48);
                  goto LABEL_83;
                }
                v9 = Sid;
                if ( v38 < 0xFFFF )
                {
                  v47 = SddlAddAccessFilterAce((PACL)*v44, (int)ObjectTypeGuid, AccessMask, P, v38);
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
                if ( (v87 & 0xE0) == 0 && !AccessMask )
                {
                  v73 = *(_DWORD *)((char *)Sid + 2) - v107;
                  if ( !v73 )
                    v73 = *((unsigned __int16 *)Sid + 3) - v108;
                  if ( !v73 && *((_BYTE *)Sid + 1) == 1 && !*((_DWORD *)Sid + 2) )
                  {
                    v74 = (char *)SddlpAlloc(v43);
                    if ( v74 )
                    {
                      *v74 = v92;
                      v74[1] = v87;
                      *((_WORD *)v74 + 1) = v43;
                      *((_DWORD *)v74 + 1) = 0;
                      v75 = RtlLengthSid(v9);
                      RtlCopySid(v75, v74 + 8, v9);
                      if ( HIDWORD(v93) )
                      {
                        v76 = HIDWORD(v93);
                        v77 = RtlLengthSid(v9);
                        v78 = v102;
LABEL_233:
                        memmove(&v74[v77 + 8], v78, v76);
                      }
LABEL_234:
                      v48 = RtlAddAce((PACL)*v94, 2u, 0xFFFFFFFF, v74, v43);
                      ExFreePoolWithTag(v74, 0);
                      goto LABEL_72;
                    }
LABEL_227:
                    v48 = -1073741801;
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
                    InheritedObjectTypeGuida = 0;
LABEL_69:
                    v45 = v87;
                    v46 = (ACL *)*v44;
LABEL_70:
                    v9 = Sid;
                    v47 = RtlpAddKnownAce(v46, 2u, v45, AccessMask, (unsigned __int8 *)Sid, InheritedObjectTypeGuida);
LABEL_71:
                    v48 = v47;
                    goto LABEL_72;
                  case 1u:
                    InheritedObjectTypeGuida = 1;
                    goto LABEL_69;
                  case 2u:
                    v61 = (ACL *)*v44;
                    InheritedObjectTypeGuida = 2;
                    v62 = v87 & 0x3F | 0x40;
                    if ( (v87 & 0x40) == 0 )
                      v62 = v87 & 0x3F;
                    v46 = v61;
                    v45 = v62 | 0x80;
                    if ( (v87 & 0x80u) == 0 )
                      v45 = v62;
                    goto LABEL_70;
                  case 5u:
                    v9 = Sid;
                    v47 = RtlAddAccessAllowedObjectAce((PACL)*v44, 4u, v87, AccessMask, p_Guid, v100, Sid);
                    goto LABEL_71;
                  case 6u:
                    v9 = Sid;
                    v47 = RtlAddAccessDeniedObjectAce((PACL)*v44, 4u, v87, AccessMask, p_Guid, v100, Sid);
                    goto LABEL_71;
                  case 7u:
                    v9 = Sid;
                    v47 = RtlAddAuditAccessObjectAce(
                            (PACL)*v44,
                            4u,
                            v87,
                            AccessMask,
                            p_Guid,
                            v100,
                            Sid,
                            v87 & 0x40,
                            v87 & 0x80);
                    goto LABEL_71;
                }
                if ( v40 <= 8 )
                  goto LABEL_185;
LABEL_229:
                if ( v43 < 0xFFFF )
                {
                  v79 = (char *)SddlpAlloc(v43);
                  v9 = Sid;
                  v74 = v79;
                  if ( v79 )
                  {
                    v80 = Sid;
                    *v79 = v92;
                    *((_DWORD *)v79 + 1) = AccessMask;
                    v79[1] = v87;
                    *((_WORD *)v79 + 1) = v43;
                    v81 = RtlLengthSid(v80);
                    RtlCopySid(v81, v74 + 8, v9);
                    if ( (_DWORD)v93 )
                    {
                      v76 = (unsigned int)v93;
                      v77 = RtlLengthSid(v9);
                      v78 = P;
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
                v48 = RtlAddAccessAllowedObjectAce((PACL)*v44, 4u, v87, AccessMask, p_Guid, v100, Sid);
                if ( v48 < 0 )
                  goto LABEL_247;
                v48 = RtlGetAce((PACL)*v94, *((unsigned __int16 *)*v94 + 2) - 1, &Ace);
                if ( v48 < 0 )
                  goto LABEL_247;
                v63 = Ace;
                v64 = 9;
                if ( *(_BYTE *)Ace == 5 )
                  v64 = 11;
                *(_BYTE *)Ace = v64;
                v63[1] = v43;
                if ( (_DWORD)v93 )
                {
                  v65 = (unsigned int)v93;
                  if ( *(_BYTE *)v63 == 11 )
                  {
                    v66 = *((_DWORD *)v63 + 2);
                    v67 = (char *)&v63[8 * (v66 & 1) + 6 + 4 * (v66 & 2)] + RtlLengthSid(Sid);
                  }
                  else
                  {
                    v67 = (char *)v63 + RtlLengthSid(Sid) + 8;
                  }
                  memmove(v67, P, v65);
                }
                v9 = Sid;
LABEL_72:
                if ( v48 >= 0 )
                {
                  if ( v89[0] == 1 )
                    ExFreePoolWithTag(v9, 0);
                  v9 = 0LL;
                  Sid = 0LL;
                  if ( P )
                  {
                    ExFreePoolWithTag(P, 0);
                    P = 0LL;
                  }
                  LODWORD(v93) = 0;
                  if ( v102 )
                  {
                    ExFreePoolWithTag(v102, 0);
                    v102 = 0LL;
                  }
                  HIDWORD(v93) = 0;
                  if ( *v7 == 40 )
                    ++v7;
                  if ( ++Size_4 < v96 )
                  {
                    v5 = v94;
                    continue;
                  }
                  goto LABEL_83;
                }
                goto LABEL_247;
              }
            }
LABEL_246:
            v48 = -1073741705;
            goto LABEL_247;
          }
          v9 = Sid;
          AceCount = 534;
        }
LABEL_84:
        v49 = *v94;
        if ( AceCount )
        {
          if ( v49 )
            ExFreePoolWithTag((PVOID)*v94, 0);
          *v94 = 0LL;
        }
        else
        {
          v49[1] = v17;
        }
        if ( v89[0] && v9 )
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
    v41 = p_Guid != 0LL ? 32 : 16;
    if ( v100 )
      v41 = p_Guid != 0LL ? 48 : 32;
    goto LABEL_61;
  }
  if ( v24 <= 0xA )
    goto LABEL_162;
  if ( v24 != 11 )
  {
    v52 = v24 == 13;
    goto LABEL_153;
  }
  v53 = p_Guid != 0LL ? 48 : 32;
  if ( !v100 )
    v53 = p_Guid != 0LL ? 32 : 16;
  if ( v38 <= 0xFFFFFFFC )
  {
    v54 = (v38 + 3) & 0xFFFFFFFC;
    v41 = v54 + v53;
    goto LABEL_161;
  }
LABEL_163:
  AceCount = 534;
LABEL_87:
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( v102 )
    ExFreePoolWithTag(v102, 0);
  return AceCount;
}
