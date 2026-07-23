/*
 * XREFs of SepNormalAccessCheck @ 0x1402089D0
 * Callers:
 *     SepAccessCheck @ 0x14020A9F0 (SepAccessCheck.c)
 * Callees:
 *     SepSidInToken @ 0x140204C10 (SepSidInToken.c)
 *     SepMatchPackage @ 0x14020521C (SepMatchPackage.c)
 *     SepIsCapabilitySid @ 0x140205C40 (SepIsCapabilitySid.c)
 *     SepIsPackageSid @ 0x140205C9C (SepIsPackageSid.c)
 *     RtlEqualSid @ 0x140206340 (RtlEqualSid.c)
 *     AuthzBasepEvaluateAceCondition @ 0x1402B88D0 (AuthzBasepEvaluateAceCondition.c)
 *     AuthzBasepAddAccessTypeList @ 0x1402F5D38 (AuthzBasepAddAccessTypeList.c)
 *     AuthzBasepInitializeResourceClaimsFromSacl @ 0x140303DA8 (AuthzBasepInitializeResourceClaimsFromSacl.c)
 *     SepMatchCapability @ 0x140306DFC (SepMatchCapability.c)
 *     memcmp @ 0x1403CE5A0 (memcmp.c)
 *     RtlCompareMemory @ 0x1403FE5E0 (RtlCompareMemory.c)
 *     AuthzBasepObjectInTypeList @ 0x1405BBB90 (AuthzBasepObjectInTypeList.c)
 */

__int64 __fastcall SepNormalAccessCheck(
        int a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        _QWORD *a6,
        unsigned __int8 *a7,
        unsigned int a8,
        __int64 a9,
        int a10,
        char a11,
        char a12,
        __int64 a13,
        char a14)
{
  __int64 v14; // r11
  unsigned int v15; // r14d
  int v16; // r12d
  __int64 result; // rax
  __int64 v18; // rbp
  int v20; // r15d
  _DWORD *v21; // rax
  __int64 v22; // rcx
  char v23; // r13
  __int64 v24; // rsi
  __int64 v25; // rdx
  char v26; // al
  int v27; // ebx
  __int64 v28; // r14
  __int64 v29; // r14
  unsigned __int8 *v30; // rbp
  int v31; // eax
  unsigned __int8 v32; // r8
  unsigned int v33; // r10d
  unsigned __int64 v34; // r15
  int v35; // r13d
  __int64 v36; // rcx
  int v37; // edx
  __int64 v38; // rbx
  int v39; // eax
  unsigned int v40; // r15d
  __int64 v41; // rbx
  __int64 v42; // rbx
  _DWORD *v43; // rbx
  int v44; // eax
  unsigned __int16 v45; // cx
  unsigned int v46; // ebx
  _QWORD *v47; // rax
  __int64 v48; // r8
  __int64 v49; // r9
  __int64 v50; // r10
  __int64 v51; // rax
  unsigned int v52; // r13d
  int v53; // eax
  __int64 v54; // rbx
  __int64 v55; // rcx
  unsigned int v56; // [rsp+60h] [rbp-78h]
  int v57; // [rsp+64h] [rbp-74h]
  unsigned int v58; // [rsp+68h] [rbp-70h] BYREF
  int v59; // [rsp+6Ch] [rbp-6Ch]
  unsigned int v60; // [rsp+70h] [rbp-68h]
  int v61; // [rsp+74h] [rbp-64h]
  int v62; // [rsp+78h] [rbp-60h] BYREF
  unsigned int v63; // [rsp+7Ch] [rbp-5Ch]
  int v64; // [rsp+80h] [rbp-58h]
  int v65; // [rsp+84h] [rbp-54h]
  __int64 v66; // [rsp+88h] [rbp-50h]
  __int64 v67; // [rsp+90h] [rbp-48h]
  unsigned __int8 v70; // [rsp+F8h] [rbp+20h]
  __int64 v71; // [rsp+F8h] [rbp+20h]

  LODWORD(v14) = 0;
  v15 = a8;
  v16 = *(_DWORD *)(a2 + 200) & 0x2000;
  result = *(unsigned __int16 *)(a4 + 4);
  v18 = a2;
  v58 = 0;
  v20 = 0;
  v57 = 0;
  v62 = -1;
  v63 = result;
  if ( a8 )
  {
    v21 = (_DWORD *)(a9 + 24);
    v22 = a8;
    do
    {
      *v21 = a1;
      v21 += 12;
      --v22;
    }
    while ( v22 );
    result = v63;
  }
  v23 = a11;
  if ( !v16 && !a11 )
  {
    v20 = a1 | *(_DWORD *)a13;
    v57 = v20;
  }
  v59 = v20;
  v24 = a4 + 8;
  v56 = 0;
  if ( !(_DWORD)result )
    return result;
  v25 = (__int64)a7;
  do
  {
    result = *(unsigned int *)(a9 + 24);
    if ( !(_DWORD)result && !v20 )
      return result;
    if ( (*(_BYTE *)(v24 + 1) & 8) != 0 )
      goto LABEL_34;
    if ( (_DWORD)result )
      goto LABEL_11;
    if ( *(_BYTE *)v24 )
    {
      if ( *(_BYTE *)v24 != 9 )
        goto LABEL_34;
LABEL_11:
      v26 = *(_BYTE *)v24;
      if ( !*(_BYTE *)v24 )
        goto LABEL_12;
      switch ( v26 )
      {
        case 5:
          v53 = *(_DWORD *)(v24 + 8);
          v54 = v24 + 12;
          if ( (v53 & 1) == 0 )
            v54 = 0LL;
          if ( v54 )
          {
            if ( a10 )
            {
              if ( (unsigned __int8)SepSidInToken(
                                      v18,
                                      v25,
                                      v24 + ((8LL * (v53 & 2)) | 0xC) + 16LL * (v53 & 1),
                                      0LL,
                                      v23,
                                      a12,
                                      a14)
                && (unsigned __int8)AuthzBasepObjectInTypeList(v54, a9, v15, &v58) )
              {
                AuthzBasepAddAccessTypeList(a9, v15, v58, v56, *(_DWORD *)(v24 + 4), 0);
              }
              goto LABEL_32;
            }
            goto LABEL_34;
          }
          if ( !(unsigned __int8)SepSidInToken(
                                   v18,
                                   v25,
                                   v24 + ((8LL * (v53 & 2)) | 0xC) + 16LL * (v53 & 1),
                                   0LL,
                                   v23,
                                   a12,
                                   a14) )
            goto LABEL_32;
          v39 = *(_DWORD *)(v24 + 4);
          if ( v15 == 1 )
          {
            *(_DWORD *)(a9 + 24) &= ~v39;
            goto LABEL_32;
          }
          goto LABEL_86;
        case 4:
          if ( !(unsigned __int8)SepSidInToken(
                                   v18,
                                   v25,
                                   v24 + 4 * (*(unsigned __int8 *)(v24 + 13) + 5LL),
                                   0LL,
                                   v23,
                                   a12,
                                   a14)
            || !(unsigned __int8)SepSidInToken(a3, 0LL, v24 + 12, 0LL, v23, a12, a14) )
          {
            goto LABEL_32;
          }
          v39 = *(_DWORD *)(v24 + 4);
          if ( v15 == 1 )
          {
            *(_DWORD *)(a9 + 24) &= ~v39;
            goto LABEL_32;
          }
          goto LABEL_86;
        case 1:
          LOBYTE(a4) = 1;
          if ( !(unsigned __int8)SepSidInToken(v18, v25, v24 + 8, a4, v23, a12, 0) )
            goto LABEL_32;
          result = *(unsigned int *)(v24 + 4);
          if ( ((unsigned int)result & *(_DWORD *)(a9 + 24)) == 0 )
            goto LABEL_32;
          return result;
        case 6:
          LOBYTE(a4) = 1;
          if ( !(unsigned __int8)SepSidInToken(
                                   v18,
                                   v25,
                                   v24 + ((8LL * (*(_DWORD *)(v24 + 8) & 2)) | 0xC) + 16LL * (*(_DWORD *)(v24 + 8) & 1),
                                   a4,
                                   v23,
                                   a12,
                                   0) )
            goto LABEL_32;
          v55 = v24 + 12;
          LODWORD(v14) = 0;
          if ( (*(_DWORD *)(v24 + 8) & 1) == 0 )
            v55 = 0LL;
          if ( v55 && a10 )
          {
            if ( !(unsigned __int8)AuthzBasepObjectInTypeList(v55, a9, v15, &v58) )
              goto LABEL_32;
            result = *(unsigned int *)(a9 + 48LL * v58 + 24);
            if ( ((unsigned int)result & *(_DWORD *)(v24 + 4)) == 0 )
              goto LABEL_32;
          }
          else
          {
            result = *(unsigned int *)(v24 + 4);
            if ( ((unsigned int)result & *(_DWORD *)(a9 + 24)) == 0 )
              goto LABEL_33;
          }
          return result;
      }
      if ( v26 != 9 )
        goto LABEL_34;
      v45 = *(_WORD *)(v24 + 2);
      v46 = 4 * *(unsigned __int8 *)(v24 + 9) + 8;
      if ( v45 - v46 == 8 )
        goto LABEL_34;
      if ( a5 && !*a6 )
      {
        AuthzBasepInitializeResourceClaimsFromSacl(a5, a6);
        v45 = *(_WORD *)(v24 + 2);
        LODWORD(v14) = 0;
      }
      v47 = *(_QWORD **)(v18 + 1096);
      if ( v47 )
      {
        v48 = v47[75];
        v49 = v47[73];
        v50 = v47[74];
        v14 = v47[72];
      }
      else
      {
        v48 = 0LL;
        v49 = 0LL;
        v50 = 0LL;
      }
      AuthzBasepEvaluateAceCondition(
        v18,
        *(_QWORD *)(v18 + 776),
        *a6,
        v14,
        v50,
        v49,
        v48,
        v24 + v46 + 8LL,
        v45 - v46 - 8,
        0,
        v23,
        (__int64)&v62);
      if ( v62 != 1 )
        goto LABEL_32;
      if ( !v16 && !v23 && v20 )
      {
        if ( SepIsPackageSid(v24 + 8) )
        {
LABEL_63:
          v43 = (_DWORD *)(a13 + 4);
          SepMatchPackage(
            a2,
            v59,
            v24 + 8,
            *(_DWORD *)(v24 + 4),
            (_BYTE *)(a13 + 21),
            (_DWORD *)(a13 + 4),
            (_BYTE *)(a13 + 20),
            (_DWORD *)(a13 + 16),
            (_BYTE *)(a13 + 24));
        }
        else
        {
          if ( !SepIsCapabilitySid(v24 + 8) )
          {
            v18 = a2;
            goto LABEL_83;
          }
LABEL_88:
          v43 = (_DWORD *)(a13 + 8);
          SepMatchCapability(a2, v59, v24 + 8, *(_DWORD *)(v24 + 4), a13 + 22, a13 + 8);
        }
        v44 = ~*v43;
        v57 = v44 & v20;
        *(_DWORD *)a13 &= v44;
        goto LABEL_32;
      }
LABEL_83:
      if ( !*(_DWORD *)(a9 + 24) )
        goto LABEL_32;
      if ( !(unsigned __int8)SepSidInToken(v18, (__int64)a7, v24 + 8, 0LL, v23, a12, a14) )
      {
        v25 = (__int64)a7;
LABEL_134:
        LODWORD(v14) = 0;
        goto LABEL_34;
      }
      v39 = *(_DWORD *)(v24 + 4);
LABEL_86:
      AuthzBasepAddAccessTypeList(a9, v15, 0, v56, v39, 0);
      goto LABEL_32;
    }
LABEL_12:
    if ( !v16 && !v23 && v20 )
    {
      v41 = SePackagePrefixSid;
      if ( *(_BYTE *)(v24 + 9) >= 2u
        && *(_BYTE *)(v24 + 8) == *(_BYTE *)SePackagePrefixSid
        && RtlCompareMemory((const void *)(v24 + 10), (const void *)(SePackagePrefixSid + 2), 6uLL) == 6
        && *(_DWORD *)(v24 + 16) == *(_DWORD *)(v41 + 8) )
      {
        goto LABEL_63;
      }
      v42 = SeCapabilityPrefixSid;
      if ( *(_BYTE *)(v24 + 9) >= 2u
        && *(_BYTE *)(v24 + 8) == *(_BYTE *)SeCapabilityPrefixSid
        && RtlCompareMemory((const void *)(v24 + 10), (const void *)(SeCapabilityPrefixSid + 2), 6uLL) == 6
        && *(_DWORD *)(v24 + 16) == *(_DWORD *)(v42 + 8) )
      {
        goto LABEL_88;
      }
      v18 = a2;
    }
    v27 = *(_DWORD *)(a9 + 24);
    v61 = v27;
    if ( !v27 )
      goto LABEL_32;
    v28 = 504LL;
    if ( !v23 )
      v28 = 232LL;
    v29 = v18 + v28;
    v30 = (unsigned __int8 *)(v24 + 8);
    if ( a14 && v24 != -8 && RtlEqualSid(SeAliasAdminsSid, (PSID)(v24 + 8)) )
      goto LABEL_39;
    if ( a7 && RtlEqualSid(SePrincipalSelfSid, (PSID)(v24 + 8)) )
      v30 = a7;
    if ( a12
      && *(_WORD *)SeOwnerRightsSid == *(_WORD *)v30
      && !memcmp(SeOwnerRightsSid, v30, 4 * ((unsigned __int64)*(unsigned __int16 *)SeOwnerRightsSid >> 8) + 8) )
    {
LABEL_30:
      v15 = a8;
      v39 = *(_DWORD *)(v24 + 4);
      if ( a8 == 1 )
      {
        *(_DWORD *)(a9 + 24) = v27 & ~v39;
        goto LABEL_32;
      }
      goto LABEL_86;
    }
    if ( !v29 )
    {
      v15 = a8;
      v25 = (__int64)a7;
      goto LABEL_134;
    }
    if ( !v30 )
    {
      v15 = a8;
      v25 = (__int64)a7;
      LODWORD(v14) = 0;
      goto LABEL_34;
    }
    v31 = v30[1];
    v32 = 0;
    a4 = *(unsigned __int16 *)v30;
    v66 = a4;
    v70 = 0;
    v33 = 4 * v31 + 8;
    v60 = v33;
    v34 = *(_QWORD *)(v29 + 8LL * (v30[4 * ((unsigned __int64)(unsigned int)a4 >> 8) + 4] & 0xF) + 16) & *(_QWORD *)(v29 + 8 * ((unsigned __int64)v30[4 * ((unsigned __int64)(unsigned int)a4 >> 8) + 4] >> 4) + 144);
    if ( !v34 )
    {
LABEL_38:
      v40 = *(_DWORD *)v29;
      if ( *(_DWORD *)v29 <= 0x40u )
        goto LABEL_39;
      v51 = *(_QWORD *)(v29 + 8);
      v52 = 64;
      v71 = v51;
      do
      {
        v38 = v51 + 16LL * v52;
        if ( **(_WORD **)v38 == (_WORD)a4 )
        {
          if ( !memcmp(v30, *(const void **)v38, v33) )
            goto LABEL_26;
          v51 = v71;
          a4 = v66;
          v33 = v60;
        }
        ++v52;
      }
      while ( v52 < v40 );
      v15 = a8;
      v23 = a11;
      goto LABEL_32;
    }
    while ( 1 )
    {
      LOBYTE(v35) = v34;
      if ( (_BYTE)v34 )
        break;
LABEL_54:
      v32 += 8;
      v34 >>= 8;
      v70 = v32;
      if ( !v34 )
      {
        v23 = a11;
        goto LABEL_38;
      }
    }
    v36 = *(_QWORD *)(v29 + 8);
    v37 = v32;
    v67 = v36;
    v65 = v32;
    while ( 1 )
    {
      v64 = *((unsigned __int8 *)SidHashByteToIndexLookupTable + (unsigned __int8)v35);
      v38 = v36 + 16LL * (unsigned int)(v37 + v64);
      if ( **(_WORD **)v38 == (_WORD)a4 )
        break;
LABEL_60:
      v37 = v65;
      v35 = (unsigned __int8)v35 ^ (1 << v64);
      if ( !(_BYTE)v35 )
      {
        v32 = v70;
        goto LABEL_54;
      }
    }
    if ( memcmp(v30, *(const void **)v38, v33) )
    {
      v36 = v67;
      a4 = v66;
      v33 = v60;
      goto LABEL_60;
    }
LABEL_26:
    v23 = a11;
    if ( !a11 && v38 == *(_QWORD *)(v29 + 8) && (*(_DWORD *)(v38 + 8) & 0x10) == 0 || (*(_DWORD *)(v38 + 8) & 4) != 0 )
    {
      v27 = v61;
      goto LABEL_30;
    }
LABEL_39:
    v15 = a8;
LABEL_32:
    LODWORD(v14) = 0;
LABEL_33:
    v25 = (__int64)a7;
LABEL_34:
    result = *(unsigned __int16 *)(v24 + 2);
    v20 = v57;
    v24 += result;
    v18 = a2;
    ++v56;
  }
  while ( v56 < v63 );
  return result;
}
