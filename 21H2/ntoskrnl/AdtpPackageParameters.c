/*
 * XREFs of AdtpPackageParameters @ 0x1403C06B4
 * Callers:
 *     AdtpWriteToEtwEx @ 0x1405C2164 (AdtpWriteToEtwEx.c)
 *     AdtpWriteToEtw @ 0x1407B86D8 (AdtpWriteToEtw.c)
 * Callees:
 *     ExFreeHeapPool @ 0x140341AC0 (ExFreeHeapPool.c)
 *     AdtpIsCorrectlyFormedUnicodeString @ 0x1403C0BE4 (AdtpIsCorrectlyFormedUnicodeString.c)
 *     AdtpBuildMultiSzStringListString @ 0x1403C0C00 (AdtpBuildMultiSzStringListString.c)
 *     AdtpBuildAccessReasonAuditString @ 0x1405C237C (AdtpBuildAccessReasonAuditString.c)
 *     RtlValidSid @ 0x14065C720 (RtlValidSid.c)
 *     AdtpEtwBuildDashString @ 0x1406C3DA0 (AdtpEtwBuildDashString.c)
 *     AdtpEtwBuildString @ 0x1407B8A8C (AdtpEtwBuildString.c)
 *     AdtpSubstituteDriveLetter @ 0x1407B8B54 (AdtpSubstituteDriveLetter.c)
 *     AdtpBuildMessageString @ 0x1407B8C90 (AdtpBuildMessageString.c)
 *     AdtpBuildLogonIdStrings @ 0x1407B8D48 (AdtpBuildLogonIdStrings.c)
 *     AdtpBuildPrivilegeAuditString @ 0x14096D3C4 (AdtpBuildPrivilegeAuditString.c)
 *     AdtpBuildSecurityDescriptorChangeString @ 0x14096D880 (AdtpBuildSecurityDescriptorChangeString.c)
 *     AdtpBuildSecurityDescriptorUnicodeString @ 0x14096D94C (AdtpBuildSecurityDescriptorUnicodeString.c)
 *     AdtpBuildSidListString @ 0x14096DB54 (AdtpBuildSidListString.c)
 *     AdtpBuildSockAddrString @ 0x14096DD88 (AdtpBuildSockAddrString.c)
 *     AdtpBuildStringListString @ 0x14096DE48 (AdtpBuildStringListString.c)
 *     AdtpBuildUlongString @ 0x14096DFB4 (AdtpBuildUlongString.c)
 *     AdtpBuildAccessesString @ 0x14096E2B8 (AdtpBuildAccessesString.c)
 *     AdtpBuildObjectTypeStrings @ 0x14096E768 (AdtpBuildObjectTypeStrings.c)
 *     AdtpBuildUserAccountControlString @ 0x14096EA0C (AdtpBuildUserAccountControlString.c)
 */

__int64 __fastcall AdtpPackageParameters(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        unsigned __int16 *a7,
        __int64 a8)
{
  __int64 v8; // rdi
  UNICODE_STRING *v9; // r9
  unsigned __int16 v10; // si
  unsigned __int16 v11; // r11
  unsigned int v12; // r14d
  unsigned int v13; // eax
  __int64 v14; // r15
  __int64 v15; // r10
  unsigned int v16; // ecx
  __int64 v17; // r13
  __int64 v18; // r8
  void *v19; // rdx
  __int64 v20; // r12
  int v21; // ebx
  UNICODE_STRING *v22; // rdx
  __int64 v23; // rdi
  int v24; // eax
  __int64 v25; // rdx
  _DWORD *v26; // r9
  UNICODE_STRING *v27; // r8
  int v28; // eax
  int v29; // ecx
  __int64 v30; // rax
  __int64 v31; // r10
  __int64 v32; // r9
  unsigned __int16 v33; // r11
  __int64 v34; // rax
  int v35; // edx
  __int64 v36; // rcx
  unsigned __int16 v37; // si
  __int64 v38; // rcx
  __int64 v39; // rax
  int v40; // edx
  __int64 v41; // rax
  __int64 v42; // rbx
  int v43; // edx
  int v44; // eax
  int v46; // ebx
  int v47; // ebx
  int v48; // ebx
  __int64 v49; // rcx
  int v50; // ecx
  int v51; // ecx
  __int64 v52; // rcx
  unsigned __int16 v53; // si
  int v54; // eax
  __int64 v55; // rdx
  __int64 v56; // rdx
  __int64 v57; // rax
  __int64 v58; // rbx
  unsigned int v59; // edi
  BOOLEAN valid; // al
  __int64 v61; // rax
  bool v62; // zf
  unsigned int v63; // eax
  __int64 v64; // rdx
  unsigned int *v65; // r10
  unsigned int v66; // ecx
  unsigned int v67; // eax
  int v68; // ebx
  int v69; // ebx
  void *v70; // rcx
  __int64 v71; // rax
  unsigned int v72; // eax
  __int64 v73; // r10
  unsigned __int16 *v74; // rbx
  __int64 v75; // rdi
  __int64 v76; // rax
  unsigned __int16 v77; // r11
  int v78; // ecx
  __int64 v79; // rbx
  __int16 v80; // r11
  int v81; // ecx
  unsigned int v82; // edx
  __int64 v83; // rcx
  int v84; // ecx
  int v85; // ecx
  int v86; // ecx
  int v87; // eax
  __int64 v88; // rcx
  __int64 v89; // r12
  __int64 v90; // r8
  unsigned __int16 *v91; // rdi
  int v92; // eax
  __int64 v93; // rdx
  __int64 v94; // rdx
  int v95; // eax
  __int64 v96; // r8
  __int64 v97; // r10
  __int64 v98; // rax
  __int64 v99; // rcx
  int v100; // edx
  __int64 v101; // rax
  __int64 v102; // rcx
  __int64 v103; // rdx
  int v104; // ecx
  __int64 v105; // rax
  __int64 v106; // r8
  unsigned int v107; // eax
  __int64 v108; // rdx
  unsigned __int16 *v109; // rdi
  int v110; // eax
  __int64 v111; // rbx
  unsigned int v112; // ecx
  PUNICODE_STRING Destination; // [rsp+20h] [rbp-60h]
  PUNICODE_STRING DestinationString; // [rsp+30h] [rbp-50h]
  char v115; // [rsp+60h] [rbp-20h] BYREF
  __int16 v116; // [rsp+62h] [rbp-1Eh]
  int v117; // [rsp+64h] [rbp-1Ch] BYREF
  unsigned int v118; // [rsp+68h] [rbp-18h]
  unsigned int v119; // [rsp+6Ch] [rbp-14h]
  __int64 v120; // [rsp+70h] [rbp-10h]
  UNICODE_STRING *v121; // [rsp+78h] [rbp-8h] BYREF
  char v122; // [rsp+C0h] [rbp+40h] BYREF
  int v123; // [rsp+D0h] [rbp+50h] BYREF
  __int64 v124; // [rsp+D8h] [rbp+58h]

  v124 = a4;
  v123 = a3;
  v8 = a4;
  v9 = 0LL;
  v116 = 0;
  v10 = 0;
  v117 = 0;
  v11 = 0;
  v12 = 0;
  if ( a1 )
  {
    if ( !a2 )
    {
      v13 = *(_DWORD *)(a1 + 8);
      v14 = a1 + 24;
      goto LABEL_4;
    }
LABEL_68:
    v12 = -1073741811;
    goto LABEL_39;
  }
  if ( !a2 )
    goto LABEL_68;
  v13 = *(_DWORD *)(a2 + 12);
  v14 = a2 + 32;
LABEL_4:
  v15 = 2LL;
  v120 = v14;
  v119 = v13;
  v16 = 2;
  v118 = 2;
  if ( v13 > 2 )
  {
    v17 = a6;
    v18 = 1LL;
    v19 = &AdtpNullSid;
    while ( 1 )
    {
      if ( v10 >= 0x2Au || v11 >= 0xEu )
        goto LABEL_68;
      v20 = 32LL * v16;
      v21 = *(_DWORD *)(v20 + v14);
      if ( v21 > 16 )
        break;
      if ( v21 == 16 )
      {
        v44 = AdtpBuildStringListString(
                *(_QWORD *)(v20 + v14 + 24),
                (_DWORD)v19,
                (unsigned int)v17 + 16 * v10,
                v8,
                (__int64)&v117,
                v10 + a8);
        goto LABEL_35;
      }
      if ( v21 > 8 )
      {
        v46 = v21 - 9;
        if ( v46 )
        {
          v47 = v46 - 1;
          if ( v47 )
          {
            v48 = v47 - 1;
            if ( !v48 )
              goto LABEL_51;
            v68 = v48 - 1;
            if ( !v68 )
              goto LABEL_51;
            v69 = v68 - 1;
            if ( v69 )
            {
              if ( (unsigned int)(v69 - 1) > 1 )
                goto LABEL_68;
LABEL_51:
              v49 = 2LL * v10;
              *(_QWORD *)(v17 + 8 * v49) = v20 + v14 + 8;
              *(_QWORD *)(v17 + 8 * v49 + 8) = 8LL;
            }
            else
            {
              v70 = &AdtpNullGuid;
              if ( *(_QWORD *)(v20 + v14 + 24) )
                v70 = *(void **)(v20 + v14 + 24);
              v71 = 2LL * v10;
              *(_QWORD *)(v17 + 8 * v71) = v70;
              *(_QWORD *)(v17 + 8 * v71 + 8) = 16LL;
            }
          }
          else
          {
LABEL_118:
            v102 = 2LL * v10;
            *(_QWORD *)(v17 + 8 * v102) = v20 + v14 + 8;
            *(_QWORD *)(v17 + 8 * v102 + 8) = 4LL;
          }
LABEL_52:
          v10 += v18;
          goto LABEL_38;
        }
        v72 = *(_DWORD *)(v20 + v14 + 16);
        if ( v72 >= v16 )
          goto LABEL_68;
        v73 = 32LL * v72;
        if ( *(_DWORD *)(v73 + v14) != (_DWORD)v18 )
          goto LABEL_68;
        v74 = (unsigned __int16 *)(a5 + 16LL * v11);
        LODWORD(Destination) = a5 + 16 * v11;
        AdtpBuildObjectTypeStrings(
          *(_QWORD *)(v14 + 56),
          *(_QWORD *)(v73 + v14 + 24),
          *(_QWORD *)(v20 + v14 + 24),
          *(_DWORD *)(v20 + v14 + 4) / 0x18u);
        v75 = 2LL * v10;
        v76 = *((_QWORD *)v74 + 1);
        v15 = 2LL;
        v77 = v116;
        v78 = *v74 + 2;
        v9 = 0LL;
        *(_DWORD *)(v17 + 8 * v75 + 12) = 0;
        *(_QWORD *)(v17 + 8 * v75) = v76;
        v18 = 1LL;
        *(_DWORD *)(v17 + 8 * v75 + 8) = v78;
LABEL_100:
        v11 = v77 + 1;
        ++v10;
LABEL_30:
        v116 = v11;
LABEL_31:
        v8 = v124;
        goto LABEL_37;
      }
      switch ( v21 )
      {
        case 8:
          v65 = *(unsigned int **)(v20 + v14 + 24);
          if ( !v65 )
            goto LABEL_68;
          v66 = *v65;
          v67 = *v65 ? 12 * v66 + 8 : 8;
          if ( *(_DWORD *)(v20 + v14 + 4) < v67 || v66 > 0x42 )
            goto LABEL_68;
          Destination = (PUNICODE_STRING)&v117;
          v44 = AdtpBuildPrivilegeAuditString(*(_QWORD *)(v20 + v14 + 24), 0LL, v17 + 16LL * v10, v8);
          goto LABEL_35;
        case 0:
          AdtpEtwBuildDashString(v17 + 16LL * v10, v19, v18);
          goto LABEL_52;
        case 1:
          if ( !(unsigned __int8)AdtpIsCorrectlyFormedUnicodeString(*(_QWORD *)(v20 + v14 + 24)) )
            goto LABEL_68;
LABEL_34:
          v44 = AdtpEtwBuildString((unsigned int)v17 + 16 * v10, v43, v8, (unsigned int)&v117, v10 + a8);
LABEL_35:
          v9 = 0LL;
          v12 = v44;
          if ( v44 < 0 )
            goto LABEL_39;
          v11 = v116;
          v18 = 1LL;
          ++v10;
          v15 = 2LL;
          goto LABEL_37;
        case 2:
          v42 = *(_QWORD *)(v20 + v14 + 24);
          if ( !(unsigned __int8)AdtpIsCorrectlyFormedUnicodeString(v42) )
            goto LABEL_68;
          AdtpSubstituteDriveLetter();
          v43 = v42;
          goto LABEL_34;
        case 3:
          v44 = AdtpBuildUlongString(*(_DWORD *)(v20 + v14 + 8), (__int64)&v117, v10 + a8);
          goto LABEL_35;
        case 4:
          v58 = *(_QWORD *)(v20 + v14 + 24);
          v59 = 4 * *(unsigned __int8 *)(v58 + 1) + 8;
          if ( *(_DWORD *)(v20 + v14 + 4) < v59 || (valid = RtlValidSid(*(PSID *)(v20 + v14 + 24)), v9 = 0LL, !valid) )
          {
            v12 = -1073741704;
            goto LABEL_39;
          }
          v11 = v116;
          v18 = 1LL;
          v15 = 2LL;
          v61 = 2LL * v10++;
          *(_QWORD *)(v17 + 8 * v61) = v58;
          *(_DWORD *)(v17 + 8 * v61 + 8) = v59;
          *(_DWORD *)(v17 + 8 * v61 + 12) = 0;
          goto LABEL_31;
        case 5:
          goto LABEL_18;
      }
      if ( v21 != 6 )
      {
        if ( v21 != 7 )
          goto LABEL_68;
        v63 = *(_DWORD *)(v20 + v14 + 16);
        if ( v63 >= v118 )
          goto LABEL_68;
        v64 = 32LL * v63;
        if ( *(_DWORD *)(v64 + v14) != (_DWORD)v18 )
          goto LABEL_68;
        v44 = AdtpBuildAccessesString(
                *(_QWORD *)(v14 + 56),
                *(_QWORD *)(v64 + v14 + 24),
                *(_DWORD *)(v20 + v14 + 8),
                0,
                v9,
                v17 + 16LL * v10,
                v8,
                (__int64)&v117,
                v10 + a8);
        goto LABEL_35;
      }
      v52 = 2LL * v10;
      v53 = v18 + v10;
      v54 = 4 * (unsigned __int8)byte_140D2EA71 + 8;
      *(_QWORD *)(v17 + 8 * v52) = v19;
      v55 = v15;
      *(_DWORD *)(v17 + 8 * v52 + 8) = v54;
      *(_DWORD *)(v17 + 8 * v52 + 12) = (_DWORD)v9;
      do
      {
        AdtpEtwBuildDashString(v17 + 16LL * v53, v55, v18);
        v53 += v18;
        v55 = v56 - v18;
      }
      while ( v55 );
      v57 = 2LL * v53;
      v10 = v18 + v53;
      *(_QWORD *)(v17 + 8 * v57) = &AdtpNullLuid;
      *(_QWORD *)(v17 + 8 * v57 + 8) = 8LL;
LABEL_37:
      v19 = &AdtpNullSid;
LABEL_38:
      v16 = v18 + v118;
      v118 = v16;
      if ( v16 >= v119 )
        goto LABEL_39;
    }
    if ( v21 > 27 )
    {
      switch ( v21 )
      {
        case 28:
          LODWORD(Destination) = (_DWORD)v9;
          v109 = (unsigned __int16 *)(a5 + 16LL * v11);
          v110 = AdtpBuildSockAddrString(*(_QWORD *)(v20 + v14 + 24), v109, v10 + a8, 0LL);
          v9 = 0LL;
          v12 = v110;
          if ( v110 < 0 )
            goto LABEL_39;
          v18 = 1LL;
          v15 = 2LL;
          v111 = 2LL * v10;
          v112 = *v109 + 2;
          ++v10;
          v11 = v116 + 1;
          *(_QWORD *)(v17 + 8 * v111) = *((_QWORD *)v109 + 1);
          *(_QWORD *)(v17 + 8 * v111 + 8) = v112;
          goto LABEL_30;
        case 29:
          goto LABEL_129;
        case 30:
          if ( *(UNICODE_STRING **)(v20 + v14 + 8) != v9 || *(UNICODE_STRING **)(v20 + v14 + 16) != v9 )
            goto LABEL_68;
LABEL_129:
          v106 = *(_QWORD *)(v20 + v14 + 24);
          v107 = *(_DWORD *)(v106 + 132);
          if ( v107 >= v118 )
            goto LABEL_68;
          v108 = 32LL * v107;
          if ( *(_DWORD *)(v108 + v14) != 1 )
            goto LABEL_68;
          LOBYTE(v9) = v21 == 30;
          v44 = AdtpBuildAccessReasonAuditString(
                  *(_QWORD *)(v14 + 56),
                  *(_QWORD *)(v108 + v14 + 24),
                  v106,
                  (_DWORD)v9,
                  (_DWORD)Destination,
                  v17 + 16LL * v10,
                  v8,
                  (__int64)&v117,
                  v10 + a8);
          goto LABEL_35;
        case 31:
          if ( *(_DWORD *)(v20 + v14 + 8) != 32 || *(UNICODE_STRING **)(v20 + v14 + 16) != v9 )
            goto LABEL_68;
          v44 = AdtpBuildSecurityDescriptorUnicodeString(
                  32,
                  *(_QWORD *)(v20 + v14 + 24),
                  0,
                  (unsigned int)v17 + 16 * v10,
                  v8,
                  (__int64)&v117,
                  v10 + a8);
          goto LABEL_35;
      }
      v50 = v21 - 31 - v15;
      if ( !v50 )
      {
LABEL_18:
        DestinationString = (PUNICODE_STRING)&v115;
        v22 = (UNICODE_STRING *)&v121;
        v23 = 16LL * v11;
        LOBYTE(v123) = (_BYTE)v9;
        v122 = (char)v9;
        v115 = (char)v9;
        v121 = v9;
        if ( v21 != 35 )
          v22 = v9;
        Destination = (PUNICODE_STRING)&v122;
        v24 = AdtpBuildLogonIdStrings(v14 + 8 + v20, v22, &v123, v23 + a5);
        v12 = v24;
        if ( v21 == 35 )
        {
          LOBYTE(v26) = v123;
          v27 = v121;
        }
        else
        {
          v27 = *(UNICODE_STRING **)(v14 + 24);
          LOBYTE(v26) = 0;
        }
        if ( v24 < 0 )
          goto LABEL_39;
        v28 = *(_DWORD *)(v20 + v14);
        if ( v28 == 5 || v28 == 35 )
        {
          if ( !v27 )
          {
            v27 = (UNICODE_STRING *)&AdtpNullSid;
            LOBYTE(v26) = 0;
          }
          v29 = 4 * HIBYTE(v27->Length) + 8;
          v30 = v17 + 16LL * v10;
          *(_DWORD *)(v30 + 12) = 0;
          *(_QWORD *)v30 = v27;
          *(_DWORD *)(v30 + 8) = v29;
          *(_BYTE *)(v10 + a8) = (_BYTE)v26;
        }
        else
        {
          if ( v21 != 33 )
          {
            if ( (_BYTE)v26 && v27 )
              ExFreeHeapPool((ULONG_PTR)v27, v25, (__int64)v27, v26);
            goto LABEL_28;
          }
          v103 = *(_QWORD *)(v20 + v14 + 24);
          v104 = 4 * *(unsigned __int8 *)(v103 + 1) + 8;
          v105 = v17 + 16LL * v10;
          *(_DWORD *)(v105 + 12) = 0;
          *(_QWORD *)v105 = v103;
          *(_DWORD *)(v105 + 8) = v104;
          *(_BYTE *)(v10 + a8) = (_BYTE)v26;
        }
        ++v10;
LABEL_28:
        v31 = a5;
        v32 = a8;
        v33 = v116;
        v34 = *(_QWORD *)(v23 + a5 + 8);
        v35 = *(unsigned __int16 *)(v23 + a5) + 2;
        v36 = v17 + 16LL * v10;
        *(_DWORD *)(v36 + 12) = 0;
        *(_QWORD *)v36 = v34;
        LOBYTE(v34) = v122;
        *(_DWORD *)(v36 + 8) = v35;
        *(_BYTE *)(v10 + v32) = v34;
        v37 = v10 + 1;
        ++v33;
        v38 = v17 + 16LL * v37;
        v39 = *(_QWORD *)(v31 + 16LL * v33 + 8);
        v40 = *(unsigned __int16 *)(v31 + 16LL * v33) + 2;
        *(_DWORD *)(v38 + 12) = 0;
        *(_QWORD *)v38 = v39;
        LOBYTE(v39) = v115;
        *(_DWORD *)(v38 + 8) = v40;
        *(_BYTE *)(v37 + v32) = v39;
        v18 = 1LL;
        v9 = 0LL;
        ++v37;
        v11 = v33 + 1;
        v41 = 2LL * v37;
        v10 = v37 + 1;
        *(_QWORD *)(v17 + 8 * v41) = v20 + v14 + 8;
        *(_QWORD *)(v17 + 8 * v41 + 8) = 8LL;
LABEL_29:
        v15 = 2LL;
        goto LABEL_30;
      }
      v51 = v50 - 1;
      if ( !v51 )
      {
        v44 = AdtpBuildMultiSzStringListString(*(_QWORD *)(v20 + v14 + 24), v17 + 16LL * v10, v10 + a8);
        goto LABEL_35;
      }
      v62 = v51 == 1;
    }
    else
    {
      switch ( v21 )
      {
        case 27:
          goto LABEL_118;
        case 17:
          v44 = AdtpBuildSidListString(
                  *(_QWORD *)(v20 + v14 + 24),
                  (_DWORD)v19,
                  (unsigned int)v17 + 16 * v10,
                  v8,
                  (__int64)&v117,
                  v10 + a8);
          goto LABEL_35;
        case 18:
          v101 = 2LL * v10;
          *(_QWORD *)(v17 + 8 * v101) = &v122;
          *(_QWORD *)(v17 + 8 * v101 + 8) = 8LL;
          goto LABEL_52;
        case 19:
          v95 = AdtpBuildUserAccountControlString(
                  *(_DWORD *)(v20 + v14 + 8),
                  (PUNICODE_STRING)(a5 + 16LL * ((unsigned int)v11 + 1)),
                  a8 + (unsigned int)v10 + 1,
                  (PUNICODE_STRING)(a5 + 16LL * ((unsigned int)v11 + 2)),
                  a8 + (unsigned int)v10 + 2);
          v9 = 0LL;
          v12 = v95;
          if ( v95 < 0 )
            goto LABEL_39;
          v11 = v116;
          v96 = 3LL;
          v97 = a5;
          do
          {
            v98 = v11++;
            v98 *= 2LL;
            v99 = 2LL * v10++;
            v100 = *(unsigned __int16 *)(v97 + 8 * v98);
            *(_QWORD *)(v17 + 8 * v99) = *(_QWORD *)(v97 + 8 * v98 + 8);
            *(_QWORD *)(v17 + 8 * v99 + 8) = (unsigned int)(v100 + 2);
            --v96;
          }
          while ( v96 );
          v14 = v120;
          v18 = 1LL;
          goto LABEL_29;
        case 20:
          v93 = 3LL;
          do
          {
            AdtpEtwBuildDashString(v17 + 16LL * v10, v93, v18);
            v10 += v18;
            v93 = v94 - v18;
          }
          while ( v93 );
          goto LABEL_37;
        case 21:
          v44 = AdtpBuildMessageString(
                  *(_DWORD *)(v20 + v14 + 8),
                  (_DWORD)v19,
                  (unsigned int)v17 + 16 * v10,
                  v8,
                  (__int64)&v117,
                  v10 + a8);
          goto LABEL_35;
      }
      v84 = v21 - 21 - v15;
      if ( !v84 )
      {
        v88 = *(_QWORD *)(v20 + v14 + 24);
        v89 = a5;
        v90 = v10 + a8;
        v91 = (unsigned __int16 *)(a5 + 16LL * v11);
        LODWORD(Destination) = v90 + 1;
        v92 = AdtpBuildSockAddrString(v88, v91, v90, v91 + 8);
        v9 = 0LL;
        v12 = v92;
        if ( v92 < 0 )
          goto LABEL_39;
        v79 = 2LL * v10;
        v15 = 2LL;
        v80 = v116;
        v81 = *v91 + 2;
        *(_QWORD *)(v17 + 8 * v79) = *((_QWORD *)v91 + 1);
        *(_DWORD *)(v17 + 8 * v79 + 8) = v81;
        v18 = 1LL;
        *(_DWORD *)(v17 + 8 * v79 + 12) = 0;
        v77 = v80 + 1;
        ++v10;
        v82 = *(unsigned __int16 *)(v89 + 16LL * v77) + 2;
        v83 = 2LL * v10;
        *(_QWORD *)(v17 + 8 * v83) = *(_QWORD *)(v89 + 16LL * v77 + 8);
        *(_QWORD *)(v17 + 8 * v83 + 8) = v82;
        goto LABEL_100;
      }
      v85 = v84 - 1;
      if ( !v85 )
      {
        v86 = *(_DWORD *)(v20 + v14 + 8);
        ++v118;
        v8 = v124;
        v87 = AdtpBuildSecurityDescriptorChangeString(
                v86,
                *(_QWORD *)(v20 + v14 + 24),
                *(_QWORD *)(32LL * v118 + v14 + 24),
                (unsigned int)v17 + 16 * (v10 + 1),
                v17 + 16LL * v10,
                v10 + a8,
                (_DWORD)DestinationString,
                v17 + 16 * (v10 + 1LL),
                v10 + 1LL + a8,
                v124,
                (__int64)&v117);
        v9 = 0LL;
        v12 = v87;
        if ( v87 < 0 )
          goto LABEL_39;
        v11 = v116;
        v15 = 2LL;
        v10 += 2;
        v18 = 1LL;
        goto LABEL_37;
      }
      v62 = v85 == (_DWORD)v15;
    }
    if ( !v62 )
      goto LABEL_68;
    goto LABEL_18;
  }
LABEL_39:
  *a7 = v10;
  return v12;
}
