/*
 * XREFs of LocalGetAclForString @ 0x140675DA8
 * Callers:
 *     LocalConvertStringSDToSD_Rev1 @ 0x140743E60 (LocalConvertStringSDToSD_Rev1.c)
 * Callees:
 *     RtlLengthSid @ 0x1402A4730 (RtlLengthSid.c)
 *     RtlGetAce @ 0x1402A4750 (RtlGetAce.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     _wcsnicmp @ 0x1403E15D0 (_wcsnicmp.c)
 *     wcstoul @ 0x1403E3880 (wcstoul.c)
 *     wcsncpy_s @ 0x1403E7870 (wcsncpy_s.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     RtlCopySid @ 0x14066A4E0 (RtlCopySid.c)
 *     LocalGetSidForString @ 0x140675CC0 (LocalGetSidForString.c)
 *     LookupAccessMaskInTable @ 0x1406773CC (LookupAccessMaskInTable.c)
 *     LookupAceTypeInTable @ 0x1406774E8 (LookupAceTypeInTable.c)
 *     SddlpAlloc @ 0x14067757C (SddlpAlloc.c)
 *     LookupAceFlagsInTable @ 0x140677764 (LookupAceFlagsInTable.c)
 *     RtlNtStatusToDosError @ 0x14069E070 (RtlNtStatusToDosError.c)
 *     LocalGetSDDLDeliminator @ 0x1406C4594 (LocalGetSDDLDeliminator.c)
 *     LocalGetAceCount @ 0x1406C4600 (LocalGetAceCount.c)
 *     RtlAddAce @ 0x140724BB0 (RtlAddAce.c)
 *     RtlpAddKnownAce @ 0x1407B4900 (RtlpAddKnownAce.c)
 *     SddlAddMandatoryAce @ 0x140882C7A (SddlAddMandatoryAce.c)
 *     RtlAddAccessAllowedObjectAce @ 0x1409B7D90 (RtlAddAccessAllowedObjectAce.c)
 *     RtlAddAccessDeniedObjectAce @ 0x1409B7DF0 (RtlAddAccessDeniedObjectAce.c)
 *     RtlAddAuditAccessObjectAce @ 0x1409B80E0 (RtlAddAuditAccessObjectAce.c)
 *     SddlAddAccessFilterAce @ 0x1409CF980 (SddlAddAccessFilterAce.c)
 *     SddlAddProcessTrustLabelAce @ 0x1409CFB98 (SddlAddProcessTrustLabelAce.c)
 *     SddlAddScopedPolicyIDAce @ 0x1409CFCF8 (SddlAddScopedPolicyIDAce.c)
 *     SddlpUuidFromString @ 0x1409CFF00 (SddlpUuidFromString.c)
 *     LocalGetConditionForString @ 0x1409D1D04 (LocalGetConditionForString.c)
 *     LocalGetRelativeAttributeForString @ 0x1409D23E8 (LocalGetRelativeAttributeForString.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall LocalGetAclForString(wchar_t *Str, char a2, PACL *a3, wchar_t **a4)
{
  wchar_t *v7; // r12
  unsigned int AceCount; // esi
  __int64 result; // rax
  wchar_t *v10; // rax
  __int64 v11; // rax
  wchar_t *v12; // rdx
  unsigned int v13; // r15d
  unsigned int v14; // edi
  ACL *v15; // rax
  __int16 v16; // cx
  PACL v17; // rax
  PVOID v18; // r13
  int v19; // edi
  __int64 v20; // rax
  unsigned int v21; // r15d
  __int64 v22; // rax
  wchar_t *v23; // rbx
  wchar_t *v24; // rbx
  wchar_t **v25; // r12
  wchar_t v26; // ax
  __int64 v27; // rax
  __int64 v28; // rax
  unsigned int v29; // edi
  __int64 i; // rdi
  unsigned int SidForString; // eax
  _WORD *v32; // rcx
  _WORD *j; // rbx
  int v34; // edx
  unsigned int v35; // r15d
  unsigned int v36; // edx
  unsigned int v37; // ebx
  unsigned int v38; // edi
  ULONG AceListLength; // r13d
  ULONG v40; // eax
  __int64 v41; // rdx
  int v42; // r8d
  int v43; // eax
  int v44; // ebx
  PVOID v45; // rdi
  PACL v46; // rax
  __int64 v47; // rax
  ACL *v48; // rax
  bool v49; // zf
  unsigned int v50; // eax
  bool v51; // cf
  int v52; // edx
  unsigned __int64 v53; // rcx
  unsigned int v54; // edi
  ACL *v55; // rax
  PACL v56; // rcx
  ACL *v57; // r15
  int v58; // edx
  _WORD *v59; // r15
  char v60; // al
  size_t v61; // rbx
  int v62; // edi
  ULONG v63; // eax
  ULONG v64; // eax
  unsigned int v65; // ebx
  unsigned int v66; // ebx
  unsigned int v67; // ebx
  unsigned int v68; // ebx
  unsigned int v69; // ebx
  PVOID v70; // r15
  int v71; // ecx
  __int64 v72; // rax
  __int64 v73; // rdi
  ULONG v74; // eax
  size_t v75; // rbx
  ULONG v76; // eax
  PVOID v77; // rdx
  __int64 v78; // rax
  PVOID v79; // r15
  PVOID v80; // rcx
  ULONG v81; // eax
  ULONG v82; // eax
  char v83; // [rsp+28h] [rbp-D8h]
  int v84; // [rsp+38h] [rbp-C8h]
  int v85; // [rsp+40h] [rbp-C0h]
  unsigned __int8 v86; // [rsp+50h] [rbp-B0h]
  char v87; // [rsp+51h] [rbp-AFh] BYREF
  unsigned __int8 v88; // [rsp+52h] [rbp-AEh]
  int v89; // [rsp+54h] [rbp-ACh]
  PVOID P; // [rsp+58h] [rbp-A8h]
  size_t v91; // [rsp+60h] [rbp-A0h] BYREF
  int v92; // [rsp+68h] [rbp-98h]
  PVOID Src; // [rsp+70h] [rbp-90h] BYREF
  unsigned int v94; // [rsp+78h] [rbp-88h] BYREF
  __int64 v95; // [rsp+80h] [rbp-80h]
  _WORD *v96; // [rsp+88h] [rbp-78h] BYREF
  char v97[8]; // [rsp+90h] [rbp-70h]
  int v98; // [rsp+98h] [rbp-68h]
  unsigned int Size; // [rsp+9Ch] [rbp-64h]
  int Size_4; // [rsp+A0h] [rbp-60h]
  PVOID v101; // [rsp+A8h] [rbp-58h] BYREF
  PSID Sid; // [rsp+B0h] [rbp-50h] BYREF
  wchar_t *EndPtr; // [rsp+B8h] [rbp-48h] BYREF
  PVOID Ace; // [rsp+C0h] [rbp-40h] BYREF
  wchar_t **v105; // [rsp+C8h] [rbp-38h]
  int v106; // [rsp+D0h] [rbp-30h]
  unsigned __int16 v107; // [rsp+D4h] [rbp-2Ch]
  GUID Guid; // [rsp+D8h] [rbp-28h] BYREF
  GUID v109; // [rsp+E8h] [rbp-18h] BYREF
  wchar_t Dst[40]; // [rsp+100h] [rbp+0h] BYREF

  v105 = a4;
  v94 = 0;
  EndPtr = 0LL;
  v87 = 0;
  P = 0LL;
  v7 = Str;
  Sid = 0LL;
  AceCount = 0;
  Src = 0LL;
  v91 = 0LL;
  v101 = 0LL;
  Ace = 0LL;
  v96 = 0LL;
  v106 = 0;
  v107 = 256;
  if ( !Str || !a3 || !a4 )
    return 87LL;
  if ( !wcsnicmp(Str, L"NO_ACCESS_CONTROL", 0x11uLL) )
  {
    *a3 = 0LL;
    *a4 = v7 + 17;
    goto LABEL_79;
  }
  v98 = 2 - (a2 != 0);
  result = LocalGetSDDLDeliminator(v7);
  if ( (_DWORD)result )
    return result;
  v10 = *a4;
  if ( *a4 == v7 )
    return 87LL;
  if ( v10 )
  {
    v12 = v10 - 1;
  }
  else
  {
    v11 = -1LL;
    do
      ++v11;
    while ( v7[v11] );
    v12 = &v7[v11];
  }
  *a4 = v12;
  AceCount = LocalGetAceCount(v7, v12, &v94);
  if ( AceCount )
    goto LABEL_79;
  v13 = v94;
  if ( !v94 )
  {
    v48 = (ACL *)SddlpAlloc(8uLL);
    *a3 = v48;
    if ( v48 )
    {
      v48->AclRevision = 2;
      (*a3)->Sbz1 = 0;
      (*a3)->AclSize = 8;
      (*a3)->AceCount = 0;
      (*a3)->Sbz2 = 0;
    }
    else
    {
      return 8;
    }
    return AceCount;
  }
  v14 = 84 * v94 + 8;
  if ( v14 > 0xFFFF )
    v14 = 0xFFFF;
  Size = v14;
  v15 = (ACL *)SddlpAlloc(v14);
  *a3 = v15;
  if ( !v15 )
  {
    AceCount = 8;
    goto LABEL_79;
  }
  v15->AclRevision = 2;
  v16 = 8;
  v17 = *a3;
  Size_4 = 0;
  v92 = 8;
  v17->Sbz1 = 0;
  (*a3)->AclSize = v14;
  (*a3)->AceCount = 0;
  (*a3)->Sbz2 = 0;
  v18 = P;
  if ( !v13 )
  {
LABEL_76:
    v46 = *a3;
    if ( AceCount )
      goto LABEL_121;
    v46->AclSize = v16;
    goto LABEL_78;
  }
  while ( 1 )
  {
    v86 = 0;
    v89 = 0;
    Guid = 0LL;
    v19 = 0;
    *(_QWORD *)v97 = 0LL;
    v109 = 0LL;
    v95 = 0LL;
    while ( *v7 == 32 )
      ++v7;
    if ( *v7 == 40 )
    {
      v49 = v7[1] == 32;
      ++v7;
      if ( v49 )
      {
        do
          ++v7;
        while ( *v7 == 32 );
      }
    }
    v20 = LookupAceTypeInTable(v7);
    if ( !v20 )
    {
      AceCount = 1804;
      goto LABEL_228;
    }
    v21 = *(unsigned __int8 *)(v20 + 12);
    v22 = *(unsigned int *)(v20 + 8);
    v88 = v21;
    v23 = &v7[v22];
    if ( *v23 != 59 && *v23 != 32 )
    {
LABEL_102:
      AceCount = 1336;
LABEL_228:
      v46 = *a3;
      goto LABEL_121;
    }
    v24 = v23 + 1;
    if ( (unsigned __int8)(v21 - 5) <= 3u || (_BYTE)v21 == 11 )
      (*a3)->AclRevision = 4;
    while ( *v24 == 32 )
      ++v24;
    v25 = v105;
    while ( v24 != *v25 )
    {
      if ( *v24 == 59 )
        goto LABEL_29;
      for ( ; *v24 == 32; ++v24 )
        ;
      v47 = LookupAceFlagsInTable(v24);
      if ( !v47 )
      {
        AceCount = 1004;
        goto LABEL_228;
      }
      v86 |= *(_BYTE *)(v47 + 12);
      v24 += *(unsigned int *)(v47 + 8);
    }
    while ( 1 )
    {
      v26 = *v24;
      if ( *v24 != 32 )
        break;
LABEL_29:
      ++v24;
    }
    while ( v26 != 59 )
    {
      if ( v26 == 32 )
      {
        do
          ++v24;
        while ( *v24 == 32 );
      }
      v27 = LookupAccessMaskInTable(v24);
      if ( v27 )
      {
        v19 |= *(_DWORD *)(v27 + 12);
        v28 = *(unsigned int *)(v27 + 8);
        v89 = v19;
        v24 += v28;
      }
      else
      {
        v19 |= wcstoul(v24, &EndPtr, 0);
        v89 = v19;
        if ( EndPtr == v24 )
          goto LABEL_230;
        v24 = EndPtr;
      }
      v26 = *v24;
    }
    v29 = 0;
LABEL_37:
    ++v24;
    do
    {
      if ( *v24 != 59 )
      {
        if ( *v24 == 32 )
          goto LABEL_37;
        if ( (unsigned __int8)(v21 - 5) > 3u && (_BYTE)v21 != 11 )
          goto LABEL_230;
        wcsncpy_s(Dst, 0x25uLL, v24, 0x24uLL);
        Dst[36] = 0;
        if ( v29 )
        {
          if ( !(unsigned int)SddlpUuidFromString(Dst, &v109) )
            goto LABEL_119;
          v95 = (__int64)&v109;
        }
        else
        {
          if ( !(unsigned int)SddlpUuidFromString(Dst, &Guid) )
            goto LABEL_119;
          *(_QWORD *)v97 = &Guid;
        }
        v24 += 36;
        if ( *v24 != 59 && *v24 != 32 )
        {
LABEL_119:
          AceCount = 1705;
          goto LABEL_120;
        }
      }
      ++v24;
      ++v29;
    }
    while ( v29 < 2 );
    for ( i = *(_QWORD *)v97; *v24 == 32; ++v24 )
      ;
    SidForString = LocalGetSidForString(v24, &Sid, &v96, &v87);
    v18 = Sid;
    AceCount = SidForString;
    if ( SidForString )
      goto LABEL_75;
    v32 = v96;
    if ( !v96 )
      goto LABEL_230;
    P = Sid;
    if ( !Sid )
      goto LABEL_230;
    for ( j = v96; *j == 32; ++j )
      ;
    if ( (unsigned __int8)v21 > 0x15u || (v34 = 2371072, !_bittest(&v34, v21)) )
    {
      v35 = v91;
      v36 = HIDWORD(v91);
      goto LABEL_48;
    }
    if ( *j == 59 )
    {
      do
        ++j;
      while ( *j == 32 );
      if ( *j == 40 )
      {
        if ( Src )
        {
          ExFreePoolWithTag(Src, 0);
          Src = 0LL;
        }
        LODWORD(v91) = 0;
        if ( v101 )
        {
          ExFreePoolWithTag(v101, 0);
          v101 = 0LL;
        }
        HIDWORD(v91) = 0;
        if ( (_BYTE)v21 == 18 )
        {
          AceCount = LocalGetRelativeAttributeForString(
                       (_DWORD)j,
                       (unsigned int)&v96,
                       (unsigned int)&v101,
                       (unsigned int)&v91 + 4,
                       0LL,
                       0,
                       0,
                       0);
          if ( AceCount )
            goto LABEL_120;
        }
        else
        {
          LOBYTE(v85) = 0;
          LOBYTE(v84) = 0;
          AceCount = LocalGetConditionForString(j, &v96, &Src, &v91, 0LL, 0LL, 0LL, v84, v85);
        }
        v32 = v96;
      }
      else
      {
        v32 = j;
        v96 = j;
      }
    }
    v35 = v91;
    v36 = HIDWORD(v91);
    if ( !v91 )
      goto LABEL_230;
    if ( AceCount )
      goto LABEL_120;
LABEL_48:
    while ( *v32 == 32 )
      v96 = ++v32;
    if ( *v32 != 41 )
    {
LABEL_230:
      AceCount = 1336;
      goto LABEL_120;
    }
    v37 = v88;
    v7 = v32 + 1;
    if ( v88 <= 0x11u )
    {
      if ( v88 == 17 || v88 <= 3u )
        goto LABEL_53;
      if ( v88 <= 4u )
        goto LABEL_102;
      if ( v88 <= 8u )
      {
        v38 = i != 0 ? 32 : 16;
        if ( v95 )
          v38 += 16;
        goto LABEL_54;
      }
      if ( v88 <= 0xAu )
        goto LABEL_151;
      if ( v88 == 11 )
      {
        v52 = i != 0 ? 48 : 32;
        if ( !v95 )
          v52 = i != 0 ? 32 : 16;
        if ( v35 > 0xFFFFFFFC )
        {
LABEL_231:
          AceCount = 534;
          goto LABEL_79;
        }
        v50 = (v35 + 3) & 0xFFFFFFFC;
        v38 = v52 + v50;
        goto LABEL_153;
      }
      v49 = v88 == 13;
LABEL_150:
      if ( !v49 )
        goto LABEL_102;
LABEL_151:
      if ( v35 > 0xFFFFFFFC )
        goto LABEL_231;
      v50 = (v35 + 3) & 0xFFFFFFFC;
      v38 = v50 + 12;
LABEL_153:
      v51 = v38 < v50;
      goto LABEL_165;
    }
    if ( v88 != 18 )
    {
      if ( v88 == 19 || v88 == 20 )
      {
LABEL_53:
        v38 = 12;
        goto LABEL_54;
      }
      v49 = v88 == 21;
      goto LABEL_150;
    }
    v38 = v36 + 12;
    v51 = v36 + 12 < v36;
LABEL_165:
    if ( v51 )
    {
      AceCount = 534;
      goto LABEL_228;
    }
LABEL_54:
    AceListLength = v38 + RtlLengthSid(v18) - 4;
    if ( AceListLength < v38 || (v40 = AceListLength + v92, v92 = v40, v40 < AceListLength) )
    {
LABEL_227:
      v18 = P;
      AceCount = 534;
      goto LABEL_228;
    }
    v41 = Size;
    if ( v40 > Size )
      break;
LABEL_57:
    if ( v37 > 0xB )
    {
      v65 = v37 - 13;
      if ( v65 )
      {
        v66 = v65 - 4;
        if ( !v66 )
        {
          v43 = SddlAddMandatoryAce(*a3, v41, v86, P);
          goto LABEL_63;
        }
        v67 = v66 - 1;
        if ( v67 )
        {
          v68 = v67 - 1;
          if ( !v68 )
          {
            v43 = SddlAddScopedPolicyIDAce((int)*a3, v41, v86, v89, P);
            goto LABEL_63;
          }
          v69 = v68 - 1;
          if ( !v69 )
          {
            v43 = SddlAddProcessTrustLabelAce(*a3, v41, v86, P);
            goto LABEL_63;
          }
          if ( v69 == 1 )
          {
            if ( v35 >= 0xFFFF )
              goto LABEL_241;
            BYTE1(v84) = BYTE1(v35);
            v43 = SddlAddAccessFilterAce(*a3, v41, v86, P);
            goto LABEL_63;
          }
LABEL_179:
          v44 = -1073741811;
        }
        else
        {
          if ( AceListLength < 0xFFFF && (v86 & 0xE0) == 0 && !v89 )
          {
            v70 = P;
            v71 = *(_DWORD *)((char *)P + 2) - v106;
            if ( !v71 )
              v71 = *((unsigned __int16 *)P + 3) - v107;
            if ( !v71 && *((_BYTE *)P + 1) == 1 && !*((_DWORD *)P + 2) )
            {
              v72 = SddlpAlloc(AceListLength);
              v73 = v72;
              if ( !v72 )
              {
                v44 = -1073741801;
                goto LABEL_64;
              }
              *(_BYTE *)v72 = v88;
              *(_DWORD *)(v72 + 4) = 0;
              *(_BYTE *)(v72 + 1) = v86;
              *(_WORD *)(v72 + 2) = AceListLength;
              v74 = RtlLengthSid(v70);
              RtlCopySid(v74, (PSID)(v73 + 8), v70);
              if ( HIDWORD(v91) )
              {
                v75 = HIDWORD(v91);
                v76 = RtlLengthSid(v70);
                v77 = v101;
LABEL_225:
                memmove((void *)(v73 + v76 + 8LL), v77, v75);
              }
LABEL_226:
              v44 = RtlAddAce(*a3, 2u, 0xFFFFFFFF, (PVOID)v73, AceListLength);
              ExFreePoolWithTag((PVOID)v73, 0);
LABEL_64:
              if ( v44 < 0 )
                goto LABEL_242;
LABEL_65:
              v45 = P;
              goto LABEL_66;
            }
          }
LABEL_241:
          v44 = -1073741705;
        }
LABEL_242:
        v82 = RtlNtStatusToDosError(v44);
        v18 = P;
        AceCount = v82;
LABEL_75:
        v16 = v92;
        goto LABEL_76;
      }
LABEL_221:
      if ( AceListLength >= 0xFFFF )
        goto LABEL_241;
      v78 = SddlpAlloc(AceListLength);
      v73 = v78;
      if ( v78 )
      {
        v79 = P;
        v80 = P;
        *(_BYTE *)v78 = v88;
        *(_DWORD *)(v78 + 4) = v89;
        *(_BYTE *)(v78 + 1) = v86;
        *(_WORD *)(v78 + 2) = AceListLength;
        v81 = RtlLengthSid(v80);
        RtlCopySid(v81, (PSID)(v73 + 8), v79);
        if ( (_DWORD)v91 )
        {
          v75 = (unsigned int)v91;
          v76 = RtlLengthSid(v79);
          v77 = Src;
          goto LABEL_225;
        }
        goto LABEL_226;
      }
      v44 = -1073741801;
      goto LABEL_242;
    }
    if ( v37 != 11 )
    {
      switch ( v37 )
      {
        case 0u:
          v83 = 0;
LABEL_61:
          v42 = v86;
LABEL_62:
          v43 = RtlpAddKnownAce((int)*a3, 2, v42, v89, P, v83);
LABEL_63:
          v44 = v43;
          goto LABEL_64;
        case 1u:
          v83 = 1;
          goto LABEL_61;
        case 2u:
          v83 = 2;
          v58 = v86 & 0x3F | 0x40;
          if ( (v86 & 0x40) == 0 )
            v58 = v86 & 0x3F;
          v42 = v58 | 0x80;
          if ( (v86 & 0x80u) == 0 )
            v42 = v58;
          goto LABEL_62;
        case 5u:
          v43 = RtlAddAccessAllowedObjectAce((int)*a3, 4, v86, v89, v97[0], v95, P);
          goto LABEL_63;
        case 6u:
          v43 = RtlAddAccessDeniedObjectAce((int)*a3, 4, v86, v89, *(__int64 *)v97, v95, P);
          goto LABEL_63;
        case 7u:
          v43 = RtlAddAuditAccessObjectAce((int)*a3, *(__int64 *)v97, v95, P, v86 & 0x40, v86 & 0x80);
          goto LABEL_63;
      }
      if ( v37 <= 8 )
        goto LABEL_179;
      goto LABEL_221;
    }
    if ( AceListLength >= 0xFFFF )
      goto LABEL_241;
    v45 = P;
    v44 = RtlAddAccessAllowedObjectAce((int)*a3, 4, v86, v89, v97[0], v95, P);
    if ( v44 < 0 )
      goto LABEL_242;
    v44 = RtlGetAce(*a3, (*a3)->AceCount - 1, &Ace);
    if ( v44 < 0 )
      goto LABEL_242;
    v59 = Ace;
    v60 = 9;
    if ( *(_BYTE *)Ace == 5 )
      v60 = 11;
    *(_BYTE *)Ace = v60;
    v59[1] = AceListLength;
    if ( (_DWORD)v91 )
    {
      v61 = (unsigned int)v91;
      if ( *(_BYTE *)v59 != 11 )
      {
        v64 = RtlLengthSid(v45);
        memmove((char *)v59 + v64 + 8, Src, v61);
        goto LABEL_66;
      }
      v62 = *((_DWORD *)v59 + 2);
      v63 = RtlLengthSid(P);
      memmove((char *)&v59[8 * (v62 & 1) + 6 + 4 * (v62 & 2)] + v63, Src, (unsigned int)v61);
      goto LABEL_65;
    }
LABEL_66:
    if ( v87 == 1 )
      ExFreePoolWithTag(v45, 0);
    v18 = 0LL;
    Sid = 0LL;
    if ( Src )
    {
      ExFreePoolWithTag(Src, 0);
      Src = 0LL;
    }
    LODWORD(v91) = 0;
    if ( v101 )
    {
      ExFreePoolWithTag(v101, 0);
      v101 = 0LL;
    }
    HIDWORD(v91) = 0;
    if ( *v7 == 40 )
      ++v7;
    if ( ++Size_4 >= v94 )
      goto LABEL_75;
  }
  v53 = AceListLength * (unsigned __int64)(v94 - Size_4);
  if ( v53 > 0xFFFFFFFF )
    goto LABEL_227;
  v54 = v53 + Size;
  if ( (unsigned int)v53 + Size < (unsigned int)v53 )
    goto LABEL_227;
  v55 = (ACL *)SddlpAlloc(v54);
  v56 = *a3;
  v57 = v55;
  if ( v55 )
  {
    memmove(v55, *a3, Size);
    v57->AclSize = v54;
    if ( *a3 )
      ExFreePoolWithTag(*a3, 0);
    *a3 = v57;
    v35 = v91;
    Size = v54;
    goto LABEL_57;
  }
  if ( v56 )
    ExFreePoolWithTag(v56, 0);
  v49 = v87 == 1;
  *a3 = 0LL;
  if ( v49 )
  {
    if ( P )
      ExFreePoolWithTag(P, 0);
    v18 = 0LL;
    v87 = 0;
  }
  else
  {
    v18 = P;
  }
  AceCount = 8;
LABEL_120:
  v46 = *a3;
LABEL_121:
  if ( v46 )
    ExFreePoolWithTag(v46, 0);
  *a3 = 0LL;
LABEL_78:
  if ( v87 && v18 )
    ExFreePoolWithTag(v18, 0);
LABEL_79:
  if ( Src )
    ExFreePoolWithTag(Src, 0);
  if ( v101 )
    ExFreePoolWithTag(v101, 0);
  return AceCount;
}
