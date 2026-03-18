/*
 * XREFs of AdtpBuildAccessReasonAuditString @ 0x14064B46C
 * Callers:
 *     AdtpPackageParameters @ 0x1403CC5E8 (AdtpPackageParameters.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     AdtpBuildAccessReasonAuditStringInternal @ 0x14064B9D8 (AdtpBuildAccessReasonAuditStringInternal.c)
 *     AdtpBuildContextFromSecurityDescriptor @ 0x14064C418 (AdtpBuildContextFromSecurityDescriptor.c)
 *     AdtpBuildStagingReasonAuditStringInternal @ 0x14064C4AC (AdtpBuildStagingReasonAuditStringInternal.c)
 *     AdtpIsSDValidSelfRelative @ 0x14064C900 (AdtpIsSDValidSelfRelative.c)
 *     AdtpEtwBuildDashString @ 0x1406EB810 (AdtpEtwBuildDashString.c)
 *     RtlLengthSecurityDescriptor @ 0x1407254F0 (RtlLengthSecurityDescriptor.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall AdtpBuildAccessReasonAuditString(
        __int64 a1,
        __int64 a2,
        _DWORD *a3,
        char a4,
        int a5,
        __int64 *a6,
        __int64 a7,
        _DWORD *a8,
        char *a9)
{
  int v9; // r10d
  __int64 v11; // r8
  unsigned int v12; // esi
  unsigned int v13; // ebx
  char v14; // di
  unsigned int v15; // ecx
  __int64 v16; // r13
  char v17; // r12
  char *v18; // r14
  _DWORD *v19; // rax
  int v20; // eax
  int IsSDValidSelfRelative; // eax
  int v22; // eax
  int v23; // eax
  char v24; // dl
  __int64 *v25; // r14
  unsigned int v26; // r12d
  unsigned int v27; // ecx
  unsigned __int8 v28; // dl
  unsigned int v29; // eax
  _DWORD *v30; // r8
  unsigned __int16 *v31; // rdi
  int v32; // eax
  int v33; // ecx
  unsigned int v34; // eax
  __int64 v35; // r9
  int *v36; // r12
  int v37; // r14d
  __int64 v38; // rdi
  int v39; // eax
  unsigned int v40; // ebx
  __int64 v41; // rax
  __int64 v42; // rdi
  char v43; // al
  __int64 Pool2; // rax
  unsigned int v45; // r12d
  unsigned __int16 *v46; // r14
  const void *v47; // rdx
  PVOID *v48; // rbx
  __int64 v49; // rdi
  int v51; // [rsp+28h] [rbp-D8h]
  char v53; // [rsp+61h] [rbp-9Fh] BYREF
  char v54; // [rsp+62h] [rbp-9Eh]
  char v55; // [rsp+63h] [rbp-9Dh] BYREF
  unsigned int v56; // [rsp+64h] [rbp-9Ch]
  int v57; // [rsp+68h] [rbp-98h]
  __int64 v58; // [rsp+70h] [rbp-90h]
  __int64 v59; // [rsp+78h] [rbp-88h]
  _DWORD *v60; // [rsp+80h] [rbp-80h]
  _DWORD *v61; // [rsp+88h] [rbp-78h]
  char *v62; // [rsp+90h] [rbp-70h]
  _DWORD *v63; // [rsp+98h] [rbp-68h]
  __int128 v64; // [rsp+A0h] [rbp-60h] BYREF
  PVOID P; // [rsp+B0h] [rbp-50h]
  __int128 v66; // [rsp+B8h] [rbp-48h] BYREF
  PVOID v67; // [rsp+C8h] [rbp-38h]
  __int64 v68; // [rsp+D0h] [rbp-30h]
  _DWORD *v69; // [rsp+D8h] [rbp-28h]
  char *v70; // [rsp+E0h] [rbp-20h]
  _OWORD v71[32]; // [rsp+F0h] [rbp-10h] BYREF

  v9 = 0;
  v59 = a1;
  v11 = (__int64)a8;
  v70 = a9;
  v12 = 0;
  v13 = 0;
  v68 = a7;
  v14 = 1;
  v15 = 0;
  v16 = 0LL;
  v17 = 0;
  v60 = a3;
  v58 = a2;
  v69 = a8;
  v57 = 0;
  v55 = 0;
  v54 = 0;
  v53 = 0;
  v62 = 0LL;
  v64 = 0LL;
  P = 0LL;
  v66 = 0LL;
  v67 = 0LL;
  if ( !*a3 )
  {
LABEL_2:
    if ( a6 )
      AdtpEtwBuildDashString(a6, a2, v11);
    goto LABEL_73;
  }
  v18 = (char *)(a3 + 36);
  v56 = 0;
  v19 = a3 + 1;
  v63 = v19;
  v61 = v19;
  do
  {
    v20 = *v19 & 0xFF0000;
    if ( !v20 )
      goto LABEL_22;
    if ( v20 != 0x10000 && v20 != 0x20000 )
    {
      if ( v20 == 196608 || v20 == 0x40000 )
        goto LABEL_13;
      if ( v20 != 327680 )
      {
        if ( v20 != 393216 )
        {
          v14 = 0;
          goto LABEL_22;
        }
LABEL_13:
        v14 = 0;
        IsSDValidSelfRelative = AdtpIsSDValidSelfRelative(v18, &v53);
        v9 = 0;
        if ( IsSDValidSelfRelative < 0 )
        {
          if ( IsSDValidSelfRelative != -1073741736 )
            goto LABEL_15;
        }
        else if ( !v53 )
        {
          goto LABEL_15;
        }
        v62 = &v18[RtlLengthSecurityDescriptor(v18)];
        v22 = AdtpIsSDValidSelfRelative(v62, 0LL);
        v9 = 0;
        v12 = v22;
        if ( v22 < 0 )
        {
LABEL_15:
          v12 = -1073741811;
          goto LABEL_73;
        }
        v17 = 1;
        v54 = 1;
        goto LABEL_21;
      }
    }
    v14 = 0;
    v23 = AdtpIsSDValidSelfRelative(v18, 0LL);
    v9 = 0;
    if ( v23 < 0 )
      goto LABEL_15;
    v17 = 1;
LABEL_21:
    v15 = v56;
LABEL_22:
    ++v15;
    v19 = v61 + 1;
    v56 = v15;
    ++v61;
  }
  while ( v15 < 0x20 );
  if ( v14 == 1 )
    goto LABEL_2;
  memset(v71, 0, sizeof(v71));
  if ( v17 == 1 )
    AdtpBuildContextFromSecurityDescriptor(v18, &v64);
  if ( v54 == 1 )
    AdtpBuildContextFromSecurityDescriptor(v62, &v66);
  v24 = a4;
  v25 = AdtpStandardAccessTypes;
  v9 = 0;
  v26 = 0;
  while ( 2 )
  {
    v27 = *(_DWORD *)v25;
    if ( v24 == 1 )
    {
      v28 = 0;
      v29 = *(_DWORD *)v25;
      while ( 1 )
      {
        v29 >>= 1;
        if ( !v29 )
          break;
        ++v28;
      }
      v30 = v60;
      if ( (int)v60[v28 + 1] < 0 )
      {
        v31 = (unsigned __int16 *)&v71[(unsigned int)v16];
        v32 = AdtpBuildStagingReasonAuditStringInternal(
                v59,
                v58,
                (unsigned int)&v64,
                (unsigned int)&v66,
                v27,
                v51,
                (__int64)v63,
                (__int64)v31);
        goto LABEL_37;
      }
      goto LABEL_39;
    }
    v30 = v60;
    v33 = *v60 & v27;
    if ( v33 )
    {
      v31 = (unsigned __int16 *)&v71[(unsigned int)v16];
      LOBYTE(v51) = *((_BYTE *)v60 + 136);
      v32 = AdtpBuildAccessReasonAuditStringInternal(
              v59,
              v58,
              v33,
              v51,
              (__int64)(v60 + 1),
              (__int64)v31,
              0,
              0,
              0,
              (__int64)&v55);
LABEL_37:
      v9 = 0;
      v12 = v32;
      if ( v32 < 0 )
        goto LABEL_68;
      v30 = v60;
      v13 += *v31;
      v16 = (unsigned int)(v16 + 1);
      v57 = v16;
LABEL_39:
      v24 = a4;
    }
    ++v26;
    v25 = (__int64 *)((char *)v25 + 4);
    if ( v26 < 7 )
      continue;
    break;
  }
  if ( *(_WORD *)v30 )
  {
    v34 = 0;
    v35 = (__int64)(v30 + 1);
    v56 = 0;
    v36 = v30 + 1;
    v37 = 1;
    while ( v24 == 1 )
    {
      if ( *v36 < 0 )
      {
        v38 = (unsigned int)v16;
        v39 = AdtpBuildStagingReasonAuditStringInternal(
                v59,
                v58,
                (unsigned int)&v64,
                (unsigned int)&v66,
                v37,
                v51,
                v35,
                (__int64)&v71[(unsigned int)v16]);
        goto LABEL_48;
      }
LABEL_51:
      ++v34;
      ++v36;
      v37 *= 2;
      v56 = v34;
      if ( v34 >= 0x10 )
        goto LABEL_52;
    }
    if ( (*v30 & v37) != 0 )
    {
      v38 = (unsigned int)v16;
      LOBYTE(v51) = *((_BYTE *)v30 + 136);
      v39 = AdtpBuildAccessReasonAuditStringInternal(
              v59,
              v58,
              *v30 & (unsigned int)v37,
              v51,
              v35,
              (__int64)&v71[(unsigned int)v16],
              0,
              0,
              0,
              (__int64)&v55);
LABEL_48:
      v9 = 0;
      v12 = v39;
      if ( v39 < 0 )
        goto LABEL_68;
      v30 = v60;
      v35 = (__int64)v63;
      v13 += LOWORD(v71[v38]);
      v34 = v56;
      v16 = (unsigned int)(v16 + 1);
      v57 = v16;
    }
    v24 = a4;
    goto LABEL_51;
  }
LABEL_52:
  v40 = (v13 >> 1) + 1;
  if ( v68 )
  {
    if ( v69 )
    {
      v41 = (unsigned int)*v69;
      if ( (unsigned int)v41 + v40 < 0x400 )
      {
        v42 = v68 + 2 * v41;
        *v69 = v41 + v40;
        v43 = 0;
        goto LABEL_59;
      }
    }
  }
  Pool2 = ExAllocatePool2(256LL, 2LL * v40, 1799447891LL);
  v9 = 0;
  v42 = Pool2;
  if ( Pool2 )
  {
    v43 = 1;
LABEL_59:
    v45 = 0;
    *v70 = v43;
    if ( (_DWORD)v16 )
    {
      v46 = (unsigned __int16 *)v71;
      do
      {
        v47 = (const void *)*((_QWORD *)v46 + 1);
        if ( v47 )
        {
          memmove((void *)(v42 + v45), v47, *v46);
          v45 += *v46;
          v9 = 0;
        }
        v46 += 8;
        --v16;
      }
      while ( v16 );
      LODWORD(v16) = v57;
    }
    *(_WORD *)(v42 + 2LL * (v40 - 1)) = 0;
    if ( a6 )
    {
      *a6 = v42;
      a6[1] = 2 * v40;
    }
    else
    {
      MEMORY[8] = v42;
      MEMORY[2] = 2 * v40;
      MEMORY[0] = 2 * v40 - 2;
    }
  }
  else
  {
    v12 = -1073741801;
  }
LABEL_68:
  if ( (_DWORD)v16 )
  {
    v48 = (PVOID *)v71 + 1;
    v49 = (unsigned int)v16;
    do
    {
      if ( *v48 )
      {
        ExFreePoolWithTag(*v48, 0);
        v9 = 0;
      }
      v48 += 2;
      --v49;
    }
    while ( v49 );
  }
LABEL_73:
  if ( DWORD2(v64) != v9 && P )
  {
    ExFreePoolWithTag(P, 0);
    v9 = 0;
  }
  if ( DWORD2(v66) != v9 && v67 )
    ExFreePoolWithTag(v67, 0);
  return v12;
}
