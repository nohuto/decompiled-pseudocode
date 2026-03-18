/*
 * XREFs of AdtpBuildAccessReasonAuditString @ 0x1405BCF7C
 * Callers:
 *     AdtpPackageParameters @ 0x1403BD944 (AdtpPackageParameters.c)
 * Callees:
 *     ExFreeHeapPool @ 0x140289030 (ExFreeHeapPool.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     memmove @ 0x140409FC0 (memmove.c)
 *     memset @ 0x14040A280 (memset.c)
 *     AdtpBuildAccessReasonAuditStringInternal @ 0x1405BD444 (AdtpBuildAccessReasonAuditStringInternal.c)
 *     AdtpBuildContextFromSecurityDescriptor @ 0x1405BDE10 (AdtpBuildContextFromSecurityDescriptor.c)
 *     AdtpBuildStagingReasonAuditStringInternal @ 0x1405BDEA4 (AdtpBuildStagingReasonAuditStringInternal.c)
 *     RtlLengthSecurityDescriptor @ 0x140669A30 (RtlLengthSecurityDescriptor.c)
 *     AdtpEtwBuildDashString @ 0x1407115C0 (AdtpEtwBuildDashString.c)
 *     ExAllocatePoolWithTag @ 0x1409B1160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall AdtpBuildAccessReasonAuditString(
        __int64 a1,
        __int64 a2,
        _DWORD *a3,
        char a4,
        int a5,
        _QWORD *a6,
        __int64 a7,
        _DWORD *a8,
        char *a9)
{
  int v9; // r10d
  _DWORD *v10; // rdi
  unsigned int v11; // r15d
  unsigned int v12; // ebx
  char v13; // si
  char v14; // r12
  ULONG_PTR v15; // rdx
  char v16; // cl
  unsigned int v17; // esi
  __int64 v18; // r13
  __int64 v19; // r9
  int v20; // eax
  ULONG v21; // eax
  char v22; // dl
  __int64 *v23; // rsi
  unsigned int v24; // r12d
  unsigned int v25; // ecx
  unsigned __int8 v26; // dl
  unsigned int v27; // eax
  unsigned __int16 *v28; // rdi
  int v29; // eax
  int v30; // ecx
  int v31; // eax
  __int64 v32; // r8
  unsigned int v33; // r13d
  int *v34; // r12
  int v35; // esi
  __int64 v36; // rdi
  int v37; // eax
  int v38; // edx
  int v39; // eax
  unsigned int v40; // ebx
  __int64 v41; // rax
  _WORD *v42; // rdi
  char v43; // al
  _WORD *PoolWithTag; // rax
  unsigned int v45; // r12d
  unsigned __int16 *v46; // rsi
  __int64 v47; // r13
  const void *v48; // rdx
  ULONG_PTR *v49; // rbx
  __int64 v50; // rdi
  int v52; // [rsp+28h] [rbp-D8h]
  unsigned int v54; // [rsp+64h] [rbp-9Ch]
  char v55[8]; // [rsp+68h] [rbp-98h] BYREF
  __int64 v56; // [rsp+70h] [rbp-90h]
  __int64 v57; // [rsp+78h] [rbp-88h]
  _DWORD *v58; // [rsp+80h] [rbp-80h]
  PSECURITY_DESCRIPTOR SecurityDescriptor[2]; // [rsp+88h] [rbp-78h] BYREF
  ULONG_PTR v60; // [rsp+98h] [rbp-68h]
  __int128 v61; // [rsp+A0h] [rbp-60h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+B0h] [rbp-50h]
  _DWORD *v63; // [rsp+B8h] [rbp-48h]
  __int64 v64; // [rsp+C0h] [rbp-40h]
  _DWORD *v65; // [rsp+C8h] [rbp-38h]
  char *v66; // [rsp+D0h] [rbp-30h]
  _OWORD v67[32]; // [rsp+E0h] [rbp-20h] BYREF

  v9 = 0;
  v66 = a9;
  v10 = a3;
  v11 = 0;
  v64 = a7;
  v12 = 0;
  v13 = 0;
  v65 = a8;
  v14 = 0;
  v56 = a2;
  v15 = 0LL;
  v57 = a1;
  v16 = 1;
  v58 = a3;
  v54 = 0;
  v55[0] = 0;
  *(_OWORD *)SecurityDescriptor = 0LL;
  v60 = 0LL;
  v61 = 0LL;
  BugCheckParameter2 = 0LL;
  if ( !*a3 )
  {
    if ( a6 )
      goto LABEL_3;
    v17 = 0;
    goto LABEL_71;
  }
  v18 = (__int64)(a3 + 1);
  v19 = 32LL;
  v63 = ++a3;
  do
  {
    v20 = *a3 & 0xFF0000;
    switch ( v20 )
    {
      case 0:
        goto LABEL_16;
      case 65536:
      case 131072:
LABEL_14:
        v13 = 1;
        break;
      case 196608:
      case 262144:
        goto LABEL_13;
      case 327680:
        goto LABEL_14;
      case 393216:
LABEL_13:
        v13 = 1;
        v14 = 1;
        break;
    }
    v16 = 0;
LABEL_16:
    ++a3;
    --v19;
  }
  while ( v19 );
  if ( v16 != 1 )
  {
    memset(v67, 0, sizeof(v67));
    if ( v13 == 1 )
      AdtpBuildContextFromSecurityDescriptor(v10 + 36, SecurityDescriptor);
    if ( v14 == 1 )
    {
      v21 = RtlLengthSecurityDescriptor(SecurityDescriptor[0]);
      AdtpBuildContextFromSecurityDescriptor((char *)SecurityDescriptor[0] + v21, &v61);
    }
    v22 = a4;
    v23 = AdtpStandardAccessTypes;
    v9 = 0;
    v24 = 0;
    while ( 1 )
    {
      v25 = *(_DWORD *)v23;
      if ( v22 == 1 )
        break;
      v30 = *v10 & v25;
      if ( v30 )
      {
        v28 = (unsigned __int16 *)&v67[v11];
        LOBYTE(v52) = *((_BYTE *)v58 + 136);
        v29 = AdtpBuildAccessReasonAuditStringInternal(v57, v30, v52, v18, (__int64)v28, 0, 0, 0, (__int64)v55);
LABEL_33:
        v9 = 0;
        v54 = v29;
        if ( v29 < 0 )
        {
LABEL_63:
          v17 = v54;
          goto LABEL_64;
        }
        v31 = *v28;
        v10 = v58;
        v12 += v31;
        ++v11;
LABEL_35:
        v22 = a4;
      }
      ++v24;
      v23 = (__int64 *)((char *)v23 + 4);
      if ( v24 >= 7 )
      {
        if ( *(_WORD *)v10 )
        {
          v32 = (__int64)(v10 + 1);
          v33 = 0;
          v34 = v10 + 1;
          v35 = 1;
          while ( v22 == 1 )
          {
            if ( *v34 < 0 )
            {
              v36 = v11;
              v37 = AdtpBuildStagingReasonAuditStringInternal(
                      v57,
                      v56,
                      (unsigned int)SecurityDescriptor,
                      (unsigned int)&v61,
                      v35,
                      v52,
                      v32,
                      (__int64)&v67[v11]);
              goto LABEL_44;
            }
LABEL_47:
            ++v33;
            ++v34;
            v35 *= 2;
            if ( v33 >= 0x10 )
              goto LABEL_48;
          }
          v38 = v35 & *v10;
          if ( v38 )
          {
            v36 = v11;
            LOBYTE(v52) = *((_BYTE *)v58 + 136);
            v37 = AdtpBuildAccessReasonAuditStringInternal(
                    v57,
                    v38,
                    v52,
                    v32,
                    (__int64)&v67[v11],
                    0,
                    0,
                    0,
                    (__int64)v55);
LABEL_44:
            v9 = 0;
            v54 = v37;
            if ( v37 < 0 )
              goto LABEL_63;
            v32 = (__int64)v63;
            v39 = LOWORD(v67[v36]);
            v10 = v58;
            v12 += v39;
            ++v11;
          }
          v22 = a4;
          goto LABEL_47;
        }
LABEL_48:
        v40 = (v12 >> 1) + 1;
        if ( v64 )
        {
          if ( v65 )
          {
            v41 = (unsigned int)*v65;
            if ( (unsigned int)v41 + v40 < 0x400 )
            {
              v42 = (_WORD *)(v64 + 2 * v41);
              *v65 = v41 + v40;
              v43 = 0;
              goto LABEL_55;
            }
          }
        }
        PoolWithTag = ExAllocatePoolWithTag(PagedPool, 2LL * v40, 0x6B416553u);
        v9 = 0;
        v42 = PoolWithTag;
        if ( PoolWithTag )
        {
          v43 = 1;
LABEL_55:
          v45 = 0;
          *v66 = v43;
          if ( v11 )
          {
            v46 = (unsigned __int16 *)v67;
            v47 = v11;
            do
            {
              v48 = (const void *)*((_QWORD *)v46 + 1);
              if ( v48 )
              {
                memmove((char *)v42 + v45, v48, *v46);
                v45 += *v46;
                v9 = 0;
              }
              v46 += 8;
              --v47;
            }
            while ( v47 );
          }
          v17 = v54;
          v42[v40 - 1] = 0;
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
          v17 = -1073741801;
        }
LABEL_64:
        if ( v11 )
        {
          v49 = (ULONG_PTR *)v67 + 1;
          v50 = v11;
          do
          {
            if ( *v49 )
            {
              ExFreeHeapPool(*v49);
              v9 = 0;
            }
            v49 += 2;
            --v50;
          }
          while ( v50 );
        }
        v15 = v60;
        goto LABEL_71;
      }
    }
    v26 = 0;
    v27 = *(_DWORD *)v23;
    while ( 1 )
    {
      v27 >>= 1;
      if ( !v27 )
        break;
      ++v26;
    }
    if ( (int)v10[v26 + 1] < 0 )
    {
      v28 = (unsigned __int16 *)&v67[v11];
      v29 = AdtpBuildStagingReasonAuditStringInternal(
              v57,
              v56,
              (unsigned int)SecurityDescriptor,
              (unsigned int)&v61,
              v25,
              v52,
              v18,
              (__int64)v28);
      goto LABEL_33;
    }
    goto LABEL_35;
  }
  if ( a6 )
LABEL_3:
    AdtpEtwBuildDashString(a6, 0LL, a3);
  v17 = v15;
LABEL_71:
  if ( LODWORD(SecurityDescriptor[1]) != v9 && v15 )
  {
    ExFreeHeapPool(v15);
    v9 = 0;
  }
  if ( DWORD2(v61) != v9 && BugCheckParameter2 )
    ExFreeHeapPool(BugCheckParameter2);
  return v17;
}
