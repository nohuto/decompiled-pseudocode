/*
 * XREFs of EtwpApplyPayloadFilterInternal @ 0x1405B0FB8
 * Callers:
 *     EtwpApplyEventIdPayloadFilter @ 0x1402810A0 (EtwpApplyEventIdPayloadFilter.c)
 * Callees:
 *     IoGetStackLimits @ 0x14035B170 (IoGetStackLimits.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     _alloca_probe @ 0x140408680 (_alloca_probe.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     EtwpApplyPredicate @ 0x1405B1834 (EtwpApplyPredicate.c)
 *     EtwpGetFieldValue @ 0x1405B1D9C (EtwpGetFieldValue.c)
 *     RtlLengthRequiredSid @ 0x1406CB9E0 (RtlLengthRequiredSid.c)
 *     ExRaiseDatatypeMisalignment @ 0x14077BFB0 (ExRaiseDatatypeMisalignment.c)
 *     ExSystemExceptionFilter @ 0x1407D5080 (ExSystemExceptionFilter.c)
 */

__int64 __fastcall EtwpApplyPayloadFilterInternal(
        unsigned __int16 *a1,
        unsigned int a2,
        char *a3,
        char a4,
        char a5,
        __int64 a6,
        _BYTE *a7)
{
  char v10; // r11
  __int64 v11; // rax
  __int64 v12; // r13
  unsigned int v13; // r8d
  unsigned int v14; // r9d
  unsigned int v15; // edx
  unsigned int v16; // ecx
  bool v17; // zf
  unsigned int v18; // eax
  __int64 v19; // rbx
  __int64 v20; // rsi
  __int64 v22; // rcx
  unsigned __int64 v23; // rcx
  void *v24; // rsp
  void *v25; // rsp
  __int64 v26; // rax
  void *v27; // rsp
  unsigned int v28; // r15d
  int v29; // ecx
  __int64 v30; // rax
  char *v31; // r10
  unsigned int v32; // edx
  __int64 v33; // rax
  __int64 v34; // rdx
  unsigned __int64 v35; // r8
  unsigned __int64 v36; // rdx
  __int64 v37; // r12
  unsigned int v38; // r9d
  unsigned int v39; // edi
  unsigned __int64 v40; // rsi
  char *v41; // r13
  char *v42; // r8
  char *v43; // r11
  unsigned int v44; // eax
  char v45; // al
  __int64 v46; // rbx
  __int64 v47; // r15
  int v48; // r8d
  char v49; // al
  unsigned int v50; // edx
  _WORD *v51; // r8
  unsigned int v52; // edx
  unsigned int v53; // r9d
  unsigned int j; // eax
  _WORD *v55; // rcx
  unsigned int v56; // r8d
  _BYTE *v57; // rdx
  unsigned int v58; // r8d
  unsigned int v59; // r9d
  unsigned int i; // eax
  unsigned int v61; // ebx
  unsigned int v62; // ecx
  __int64 v63; // r13
  unsigned __int64 v64; // r9
  __int64 v65; // r8
  unsigned __int16 *v66; // rsi
  char v67; // di
  char v68; // bl
  unsigned int v69; // r12d
  char *v70; // r8
  char v71; // r13
  char v72; // cl
  __int16 v73; // dx
  __int64 v74; // rax
  char v75; // al
  char v76; // [rsp+30h] [rbp+0h] BYREF
  char v77; // [rsp+31h] [rbp+1h]
  char v78; // [rsp+32h] [rbp+2h]
  unsigned int v79; // [rsp+34h] [rbp+4h]
  unsigned int v80; // [rsp+38h] [rbp+8h]
  int v81; // [rsp+3Ch] [rbp+Ch]
  unsigned int v82; // [rsp+40h] [rbp+10h]
  char *v83; // [rsp+48h] [rbp+18h]
  char *v84; // [rsp+50h] [rbp+20h]
  char v85; // [rsp+58h] [rbp+28h]
  ULONG SubAuthorityCount[2]; // [rsp+60h] [rbp+30h] BYREF
  int v87; // [rsp+68h] [rbp+38h]
  unsigned int v88; // [rsp+6Ch] [rbp+3Ch]
  char *v89; // [rsp+70h] [rbp+40h]
  unsigned __int64 LowLimit; // [rsp+78h] [rbp+48h] BYREF
  unsigned __int16 v91; // [rsp+80h] [rbp+50h]
  unsigned int v92; // [rsp+84h] [rbp+54h]
  __int64 v93; // [rsp+88h] [rbp+58h]
  unsigned __int64 HighLimit; // [rsp+90h] [rbp+60h] BYREF
  _WORD *v95; // [rsp+98h] [rbp+68h]
  _BYTE *v96; // [rsp+A0h] [rbp+70h]

  v79 = a2;
  v96 = 0LL;
  v95 = 0LL;
  v88 = 0;
  v87 = 0;
  *(_QWORD *)SubAuthorityCount = 0LL;
  v76 = 0;
  v81 = -1073741811;
  if ( a2 > 0x80 )
    return 3221225485LL;
  v91 = *a1;
  v10 = *((_BYTE *)a1 + 2);
  v85 = v10;
  v11 = *(_QWORD *)(a6 + 8);
  if ( !_bittest64(&v11, v91 % 0x3Fu) )
    goto LABEL_127;
  v80 = 0;
  v12 = a6 + *(unsigned __int16 *)(a6 + 32);
  v13 = 0;
  v14 = 0;
  v15 = *(unsigned __int16 *)(a6 + 34) / 0xCu;
  while ( 1 )
  {
    v93 = v12;
    v16 = v13;
    v17 = v14 == v15;
    if ( v14 >= v15 )
      break;
    if ( *(_WORD *)v12 == v91 && *(_BYTE *)(v12 + 2) == v10 )
    {
      v17 = v14 == v15;
      break;
    }
    v18 = *(unsigned __int8 *)(v12 + 3);
    if ( (unsigned __int16)v18 >= *(_WORD *)(v12 + 6) )
      return 3221225485LL;
    v13 = *(unsigned __int8 *)(v12 + 3);
    v12 += 12LL;
    ++v14;
    if ( v16 >= v18 )
      v13 = v16;
  }
  if ( v17 )
  {
LABEL_127:
    *a7 = 1;
    return 0LL;
  }
  v84 = 0LL;
  v19 = 16 * a2;
  v92 = *(unsigned __int8 *)(v12 + 3) + 1;
  v20 = 4 * v92;
  HighLimit = 0LL;
  LowLimit = 0LL;
  IoGetStackLimits(&LowLimit, &HighLimit);
  if ( (unsigned __int64)&HighLimit - LowLimit < (unsigned int)(v20 + v19 + 4096) )
    return 3221225626LL;
  v22 = v20 + 15;
  if ( v20 + 15 <= (unsigned __int64)(unsigned int)v20 )
    v22 = 0xFFFFFFFFFFFFFF0LL;
  v23 = v22 & 0xFFFFFFFFFFFFFFF0uLL;
  v24 = alloca(v23);
  v25 = alloca(v23);
  v83 = &v76;
  if ( a4 )
  {
    v26 = v19 + 15;
    if ( v19 + 15 <= (unsigned __int64)(unsigned int)v19 )
      v26 = 0xFFFFFFFFFFFFFF0LL;
    v27 = alloca(v26 & 0xFFFFFFFFFFFFFFF0uLL);
    v84 = &v76;
    v28 = 0;
    if ( (_DWORD)v19 )
    {
      if ( ((unsigned __int8)a3 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( (unsigned __int64)&a3[v19] > 0x7FFFFFFF0000LL || &a3[v19] < a3 )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
    memmove(&v76, a3, (unsigned int)v19);
    v29 = 0;
    v30 = 0LL;
    v31 = v84;
    while ( 1 )
    {
      v87 = v29;
      v32 = v79;
      if ( (unsigned int)v30 >= v79 )
        break;
      v33 = 2 * v30;
      v34 = *(unsigned int *)&v84[8 * v33 + 8];
      if ( (_DWORD)v34 )
      {
        v35 = *(_QWORD *)&v84[8 * v33];
        v36 = v35 + v34;
        if ( v36 > 0x7FFFFFFF0000LL || v36 < v35 )
          MEMORY[0x7FFFFFFF0000] = 0;
      }
      v30 = (unsigned int)++v29;
    }
  }
  else
  {
    v31 = a3;
    v84 = a3;
    v32 = v79;
    v28 = 0;
  }
  v37 = a6 + *(unsigned __int16 *)(a6 + 36);
  v38 = 0;
  v81 = 0;
  v39 = 0;
  v40 = (unsigned __int64)v31;
  v41 = (char *)(v37 + 4LL * *(unsigned __int16 *)(v12 + 4));
  v42 = v83;
  v43 = v83;
  v89 = v83;
  v44 = 0;
  while ( 1 )
  {
    v82 = v44;
    if ( v44 >= v92 )
      break;
    if ( v38 == v32 )
      return 3221225990LL;
    v45 = *v41 & 0xF;
    if ( v45 == 7 )
    {
      if ( *((_WORD *)v41 + 1) )
        return 3221225520LL;
      v43[3] = v38;
      *(_DWORD *)v43 = *(_DWORD *)v43 & 0xFF000000 | ((v39 & 0xFFF) << 12);
      v32 = v79;
    }
    else
    {
      v46 = *((unsigned __int16 *)v41 + 1);
      if ( v45 == 8 )
        v46 = a5 != 0 ? 8 : 4;
      if ( (*v41 & 0x10) != 0 )
      {
        if ( (unsigned int)v46 >= v82 )
          return 3221225520LL;
        if ( (unsigned __int8)((*(_BYTE *)(v37 + 4 * v46) & 0xF) - 1) > 1u )
          return 3221225520LL;
        if ( (*(_BYTE *)(v37 + 4 * v46) & 0x30) != 0 )
          return 3221225520LL;
        if ( *(_WORD *)(v37 + 4 * v46 + 2) > 8u )
          return 3221225520LL;
        if ( *(_BYTE *)(v37 + 4 * v46 + 1) != 1 )
          return 3221225520LL;
        _mm_lfence();
        if ( !(unsigned __int8)EtwpGetFieldValue(
                                 *(_QWORD *)&v31[16 * (unsigned __int8)v42[4 * v46 + 3]]
                               + ((*(_DWORD *)&v42[4 * v46] >> 12) & 0xFFF),
                                 *(unsigned __int16 *)(v37 + 4 * v46 + 2),
                                 SubAuthorityCount) )
          return 3221225520LL;
        LODWORD(v46) = SubAuthorityCount[0];
        if ( SubAuthorityCount[0] != *(_QWORD *)SubAuthorityCount )
          return 3221225520LL;
        v31 = v84;
        v42 = v83;
      }
      v47 = (unsigned __int8)v41[1];
      if ( (*v41 & 0x20) != 0 )
      {
        if ( (unsigned int)v47 >= v82 )
          return 3221225520LL;
        if ( (unsigned __int8)((*(_BYTE *)(v37 + 4 * v47) & 0xF) - 1) > 1u )
          return 3221225520LL;
        if ( (*(_BYTE *)(v37 + 4 * v47) & 0x30) != 0 )
          return 3221225520LL;
        if ( *(_WORD *)(v37 + 4 * v47 + 2) > 8u )
          return 3221225520LL;
        if ( *(_BYTE *)(v37 + 4 * v47 + 1) != 1 )
          return 3221225520LL;
        _mm_lfence();
        if ( !(unsigned __int8)EtwpGetFieldValue(
                                 *(_QWORD *)&v31[16 * (unsigned __int8)v42[4 * v47 + 3]]
                               + ((*(_DWORD *)&v42[4 * v47] >> 12) & 0xFFF),
                                 *(unsigned __int16 *)(v37 + 4 * v47 + 2),
                                 SubAuthorityCount) )
          return 3221225520LL;
        LODWORD(v47) = SubAuthorityCount[0];
        if ( SubAuthorityCount[0] != *(_QWORD *)SubAuthorityCount )
          return 3221225520LL;
      }
      v48 = 0;
      if ( !(_DWORD)v46 )
      {
        v49 = *v41;
        if ( (*v41 & 0x10) != 0 || (_DWORD)v47 != 1 )
          return 3221225520LL;
        switch ( v49 & 0xF )
        {
          case 3:
            v56 = *(_DWORD *)(v40 + 8);
            if ( v39 >= v56 )
              return 3221225485LL;
            v57 = (_BYTE *)(*(_QWORD *)v40 + v39);
            v58 = v56 - v39;
            v59 = 0;
            for ( i = 0; i < v58 && *v57; ++i )
            {
              v59 = i + 1;
              v88 = i + 1;
              v96 = ++v57;
            }
            if ( v59 == v58 )
            {
              v80 = 1;
              v48 = 0;
            }
            else
            {
              v48 = 1;
            }
            LODWORD(v46) = v59;
            break;
          case 4:
            v50 = *(_DWORD *)(v40 + 8) - v39;
            if ( v50 < 2 )
              return 3221225485LL;
            v51 = (_WORD *)(*(_QWORD *)v40 + v39);
            v52 = v50 >> 1;
            v53 = 0;
            for ( j = 0; ; ++j )
            {
              v55 = v51;
              if ( j >= v52 || !*v51 )
                break;
              v53 = j + 1;
              v88 = j + 1;
              ++v51;
              v95 = v55 + 1;
            }
            if ( v53 == v52 )
            {
              v80 = 2;
              v48 = 0;
            }
            else
            {
              v48 = 2;
            }
            if ( v53 == v52 && v39 + 2LL * v52 != *(_DWORD *)(v40 + 8) )
              return 3221225485LL;
            LODWORD(v46) = 2 * v53;
            break;
          case 6:
            if ( *(_DWORD *)(v40 + 8) - v39 < 2 )
              return 3221225485LL;
            if ( !(unsigned __int8)EtwpGetFieldValue(*(_QWORD *)v40 + v39 + 1LL, 1LL, SubAuthorityCount) )
              return 3221225485LL;
            LODWORD(v46) = RtlLengthRequiredSid(SubAuthorityCount[0]);
            if ( (_DWORD)v46 == -1 )
              return 3221225485LL;
            v48 = 0;
            break;
          default:
            return 3221225520LL;
        }
      }
      v61 = v47 * v46;
      if ( *(_DWORD *)(v40 + 8) - v39 < v61 )
        return 3221225990LL;
      v38 = v81;
      v43 = v89;
      v89[3] = v81;
      v62 = v61 & 0xFFF | *(_DWORD *)v43 & 0xFF000000 | ((v39 & 0xFFF) << 12);
      *(_DWORD *)v43 = v62;
      if ( (unsigned __int8)v43[3] != v38 || ((v62 >> 12) & 0xFFF) != v39 || (v62 & 0xFFF) != v61 )
        return 3221225990LL;
      v39 += v48 + v61;
      if ( v39 > *(_DWORD *)(v40 + 8) )
        return 3221225473LL;
      v31 = v84;
      if ( v39 != *(_DWORD *)(v40 + 8) )
      {
        v32 = v79;
        v28 = 0;
LABEL_106:
        v42 = v83;
        goto LABEL_107;
      }
      v81 = ++v38;
      v32 = v79;
      v28 = 0;
      if ( v38 >= v79 )
        goto LABEL_106;
      v39 = 0;
      v40 += 16LL;
      if ( v40 >= (unsigned __int64)&v84[16 * v79] )
        return 3221225473LL;
      if ( v80 )
      {
        if ( *(_DWORD *)(v40 + 8) < v80 )
          return 3221225990LL;
        v39 = v80;
      }
      v80 = 0;
      if ( v39 != *(_DWORD *)(v40 + 8) )
        goto LABEL_106;
      v81 = ++v38;
      v42 = v83;
      if ( v38 < v79 )
      {
        v39 = 0;
        v40 += 16LL;
      }
    }
LABEL_107:
    v44 = v82 + 1;
    v41 += 4;
    v43 += 4;
    v89 = v43;
  }
  if ( v80 )
    return 3221225990LL;
  v63 = v93;
  v64 = v37 + 4LL * *(unsigned __int16 *)(v93 + 4);
  LowLimit = v64;
  v65 = a6;
  v66 = (unsigned __int16 *)(a6 + *(unsigned __int16 *)(a6 + 40) + 4LL * *(unsigned __int16 *)(v93 + 8));
  v67 = 0;
  v68 = 0;
  v78 = 1;
  v69 = 0;
  while ( v69 < *(unsigned __int16 *)(v63 + 10) )
  {
    v70 = (char *)(v65 + 24LL * v66[1] + 56);
    v71 = 1;
    v72 = 0;
    while ( 1 )
    {
      v77 = v72;
      v89 = v70;
      v73 = *v66;
      if ( v28 >= ((*v66 >> 2) & 0x3Fu) )
        break;
      v74 = *(unsigned __int16 *)v70;
      if ( !(unsigned __int8)EtwpApplyPredicate(
                               a6,
                               *(_BYTE *)(v64 + 4 * v74) & 0xF,
                               v70,
                               *(_QWORD *)&v31[16 * (unsigned __int8)v83[4 * v74 + 3]]
                             + (((unsigned __int64)*(unsigned int *)&v83[4 * v74] >> 12) & 0xFFF),
                               *(_DWORD *)&v83[4 * v74] & 0xFFF,
                               &v76) )
        return 3221225520LL;
      v71 &= v76;
      v72 = v76 | v77;
      ++v28;
      v70 = v89 + 24;
      v64 = LowLimit;
      v31 = v84;
    }
    if ( (v73 & 2) == 0 )
      v72 = v71;
    if ( (v73 & 1) != 0 )
    {
      v75 = v67 & v72;
      v67 = v72;
      v28 = 0;
      if ( !v78 )
        v67 = v75;
      v78 = 0;
    }
    else
    {
      v68 |= v72;
      if ( v68 == 1 )
        break;
      v28 = 0;
    }
    ++v69;
    v66 += 2;
    v63 = v93;
    v65 = a6;
  }
  *a7 = v67 | v68;
  return 0LL;
}
