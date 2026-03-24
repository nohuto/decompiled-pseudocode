/*
 * XREFs of AdtpBuildAccessReasonAuditString @ 0x1405C237C
 * Callers:
 *     AdtpPackageParameters @ 0x1403C06B4 (AdtpPackageParameters.c)
 * Callees:
 *     ExFreeHeapPool @ 0x140341AC0 (ExFreeHeapPool.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     AdtpIsSDValidSelfRelative @ 0x1403F9A44 (AdtpIsSDValidSelfRelative.c)
 *     memmove @ 0x140413F40 (memmove.c)
 *     memset @ 0x140414200 (memset.c)
 *     AdtpBuildAccessReasonAuditStringInternal @ 0x1405C28F4 (AdtpBuildAccessReasonAuditStringInternal.c)
 *     AdtpBuildContextFromSecurityDescriptor @ 0x1405C32C0 (AdtpBuildContextFromSecurityDescriptor.c)
 *     AdtpBuildStagingReasonAuditStringInternal @ 0x1405C3354 (AdtpBuildStagingReasonAuditStringInternal.c)
 *     RtlLengthSecurityDescriptor @ 0x1406600D0 (RtlLengthSecurityDescriptor.c)
 *     AdtpEtwBuildDashString @ 0x1406C3DA0 (AdtpEtwBuildDashString.c)
 *     ExAllocatePoolWithTag @ 0x1409B4160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall AdtpBuildAccessReasonAuditString(
        __int64 a1,
        __int64 a2,
        _DWORD *a3,
        _DWORD *a4,
        int a5,
        _QWORD *a6,
        __int64 a7,
        _DWORD *a8,
        char *a9)
{
  int v9; // r11d
  __int64 v11; // r8
  int v12; // edi
  unsigned int v13; // ebx
  char v14; // si
  __int64 v15; // r13
  char v16; // r12
  char *v17; // r14
  _DWORD *v18; // rcx
  int v19; // ecx
  int v20; // eax
  int IsSDValidSelfRelative; // eax
  char v22; // r10
  __int64 *v23; // r14
  unsigned int v24; // r12d
  unsigned int v25; // edx
  unsigned __int8 v26; // cl
  unsigned int v27; // eax
  _DWORD *v28; // r8
  unsigned __int16 *v29; // rsi
  int v30; // eax
  unsigned int v31; // eax
  int *v32; // r12
  int v33; // r14d
  __int64 v34; // rsi
  int v35; // eax
  unsigned int v36; // ebx
  __int64 v37; // rax
  _WORD *v38; // rsi
  char v39; // al
  _WORD *PoolWithTag; // rax
  unsigned int v41; // r12d
  unsigned __int16 *v42; // r14
  ULONG_PTR *v43; // rbx
  __int64 v44; // rsi
  int v46; // [rsp+28h] [rbp-D8h]
  char v47; // [rsp+60h] [rbp-A0h]
  bool v48; // [rsp+61h] [rbp-9Fh] BYREF
  char v49; // [rsp+62h] [rbp-9Eh]
  char v50; // [rsp+63h] [rbp-9Dh] BYREF
  unsigned int v51; // [rsp+64h] [rbp-9Ch]
  int v52; // [rsp+68h] [rbp-98h]
  __int64 v53; // [rsp+70h] [rbp-90h]
  __int64 v54; // [rsp+78h] [rbp-88h]
  _DWORD *v55; // [rsp+80h] [rbp-80h]
  _DWORD *v56; // [rsp+88h] [rbp-78h]
  char *v57; // [rsp+90h] [rbp-70h]
  _DWORD *v58; // [rsp+98h] [rbp-68h]
  __int128 v59; // [rsp+A0h] [rbp-60h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+B0h] [rbp-50h]
  __int128 v61; // [rsp+B8h] [rbp-48h] BYREF
  ULONG_PTR v62; // [rsp+C8h] [rbp-38h]
  __int64 v63; // [rsp+D0h] [rbp-30h]
  _DWORD *v64; // [rsp+D8h] [rbp-28h]
  char *v65; // [rsp+E0h] [rbp-20h]
  _OWORD v66[32]; // [rsp+F0h] [rbp-10h] BYREF

  v9 = 0;
  v54 = a1;
  v11 = (__int64)a8;
  v65 = a9;
  v12 = 0;
  v13 = 0;
  v63 = a7;
  v14 = 1;
  v15 = 0LL;
  v16 = 0;
  v47 = (char)a4;
  v55 = a3;
  v53 = a2;
  v64 = a8;
  v52 = 0;
  v50 = 0;
  v49 = 0;
  v48 = 0;
  v57 = 0LL;
  v59 = 0LL;
  BugCheckParameter2 = 0LL;
  v61 = 0LL;
  v62 = 0LL;
  if ( !*a3 )
  {
LABEL_2:
    if ( a6 )
      AdtpEtwBuildDashString(a6, a2, v11);
    goto LABEL_70;
  }
  v17 = (char *)(a3 + 36);
  LODWORD(a2) = 0;
  v51 = 0;
  v58 = a3 + 1;
  v18 = a3 + 1;
  v56 = a3 + 1;
  do
  {
    v19 = *v18 & 0xFF0000;
    if ( !v19 )
      goto LABEL_21;
    if ( ((v19 - 0x10000) & 0xFFFEFFFF) == 0 )
    {
LABEL_18:
      v14 = 0;
      IsSDValidSelfRelative = AdtpIsSDValidSelfRelative(v17, 0LL);
      v9 = 0;
      if ( IsSDValidSelfRelative < 0 )
      {
LABEL_13:
        v12 = -1073741811;
        goto LABEL_70;
      }
      v16 = 1;
      goto LABEL_20;
    }
    if ( ((v19 - 196608) & 0xFFFEFFFF) != 0 )
    {
      if ( v19 == 327680 )
        goto LABEL_18;
      if ( v19 != 393216 )
      {
        v14 = 0;
        goto LABEL_21;
      }
    }
    v14 = 0;
    v20 = AdtpIsSDValidSelfRelative(v17, &v48);
    v9 = 0;
    v12 = v20;
    if ( v20 >= 0 )
    {
      if ( !v48 )
        goto LABEL_13;
LABEL_15:
      v57 = &v17[RtlLengthSecurityDescriptor(v17)];
      v12 = AdtpIsSDValidSelfRelative(v57, 0LL);
      v9 = 0;
      goto LABEL_16;
    }
    if ( v20 == -1073741736 )
      goto LABEL_15;
LABEL_16:
    if ( v12 < 0 )
      goto LABEL_13;
    v16 = 1;
    v49 = 1;
LABEL_20:
    LODWORD(a2) = v51;
LABEL_21:
    a2 = (unsigned int)(a2 + 1);
    v18 = v56 + 1;
    v51 = a2;
    ++v56;
  }
  while ( (unsigned int)a2 < 0x20 );
  if ( v14 == 1 )
    goto LABEL_2;
  memset(v66, 0, sizeof(v66));
  if ( v16 == 1 )
    AdtpBuildContextFromSecurityDescriptor(v17, &v59);
  if ( v49 == 1 )
    AdtpBuildContextFromSecurityDescriptor(v57, &v61);
  v22 = v47;
  v23 = AdtpStandardAccessTypes;
  v9 = 0;
  v24 = 0;
  while ( 2 )
  {
    v25 = *(_DWORD *)v23;
    if ( v22 == 1 )
    {
      v26 = 0;
      v27 = *(_DWORD *)v23;
      while ( 1 )
      {
        v27 >>= 1;
        if ( !v27 )
          break;
        ++v26;
      }
      v28 = v55;
      if ( (int)v55[v26 + 1] < 0 )
      {
        v29 = (unsigned __int16 *)&v66[(unsigned int)v15];
        v30 = AdtpBuildStagingReasonAuditStringInternal(
                v54,
                v53,
                (unsigned int)&v59,
                (unsigned int)&v61,
                v25,
                v46,
                (__int64)v58,
                (__int64)v29);
        goto LABEL_36;
      }
    }
    else
    {
      v28 = v55;
      if ( (v25 & *v55) != 0 )
      {
        v29 = (unsigned __int16 *)&v66[(unsigned int)v15];
        LOBYTE(v46) = *((_BYTE *)v55 + 136);
        v30 = AdtpBuildAccessReasonAuditStringInternal(
                v54,
                v25 & *v55,
                v46,
                (__int64)(v55 + 1),
                (__int64)v29,
                0,
                0,
                0,
                (__int64)&v50);
LABEL_36:
        v9 = 0;
        v12 = v30;
        if ( v30 < 0 )
          goto LABEL_65;
        v28 = v55;
        v13 += *v29;
        v22 = v47;
        v15 = (unsigned int)(v15 + 1);
        v52 = v15;
      }
    }
    ++v24;
    v23 = (__int64 *)((char *)v23 + 4);
    if ( v24 < 7 )
      continue;
    break;
  }
  if ( *(_WORD *)v28 )
  {
    v31 = 0;
    a4 = v28 + 1;
    v51 = 0;
    v32 = v28 + 1;
    v33 = 1;
    do
    {
      if ( v22 == 1 )
      {
        if ( *v32 < 0 )
        {
          v34 = (unsigned int)v15;
          v35 = AdtpBuildStagingReasonAuditStringInternal(
                  v54,
                  v53,
                  (unsigned int)&v59,
                  (unsigned int)&v61,
                  v33,
                  v46,
                  (__int64)a4,
                  (__int64)&v66[(unsigned int)v15]);
LABEL_46:
          v9 = 0;
          v12 = v35;
          if ( v35 < 0 )
            goto LABEL_65;
          v28 = v55;
          a4 = v58;
          v22 = v47;
          v13 += LOWORD(v66[v34]);
          v31 = v51;
          v15 = (unsigned int)(v15 + 1);
          v52 = v15;
        }
      }
      else if ( (v33 & *v28) != 0 )
      {
        v34 = (unsigned int)v15;
        LOBYTE(v46) = *((_BYTE *)v28 + 136);
        v35 = AdtpBuildAccessReasonAuditStringInternal(
                v54,
                (unsigned int)v33 & *v28,
                v46,
                (__int64)a4,
                (__int64)&v66[(unsigned int)v15],
                0,
                0,
                0,
                (__int64)&v50);
        goto LABEL_46;
      }
      ++v31;
      ++v32;
      v33 *= 2;
      v51 = v31;
    }
    while ( v31 < 0x10 );
  }
  v11 = v63;
  v36 = (v13 >> 1) + 1;
  if ( v63 )
  {
    a2 = (__int64)v64;
    if ( v64 )
    {
      v37 = (unsigned int)*v64;
      if ( (unsigned int)v37 + v36 < 0x400 )
      {
        v38 = (_WORD *)(v63 + 2 * v37);
        *v64 = v37 + v36;
        v39 = 0;
        goto LABEL_56;
      }
    }
  }
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 2LL * v36, 0x6B416553u);
  v9 = 0;
  v38 = PoolWithTag;
  if ( PoolWithTag )
  {
    v39 = 1;
LABEL_56:
    v41 = 0;
    *v65 = v39;
    if ( (_DWORD)v15 )
    {
      v42 = (unsigned __int16 *)v66;
      do
      {
        a2 = *((_QWORD *)v42 + 1);
        if ( a2 )
        {
          memmove((char *)v38 + v41, (const void *)a2, *v42);
          v41 += *v42;
          v9 = 0;
        }
        v42 += 8;
        --v15;
      }
      while ( v15 );
      LODWORD(v15) = v52;
    }
    v38[v36 - 1] = 0;
    if ( a6 )
    {
      *a6 = v38;
      a6[1] = 2 * v36;
    }
    else
    {
      MEMORY[8] = v38;
      MEMORY[2] = 2 * v36;
      MEMORY[0] = 2 * v36 - 2;
    }
  }
  else
  {
    v12 = -1073741801;
  }
LABEL_65:
  if ( (_DWORD)v15 )
  {
    v43 = (ULONG_PTR *)v66 + 1;
    v44 = (unsigned int)v15;
    do
    {
      if ( *v43 )
      {
        ExFreeHeapPool(*v43, a2, v11, a4);
        v9 = 0;
      }
      v43 += 2;
      --v44;
    }
    while ( v44 );
  }
LABEL_70:
  if ( DWORD2(v59) != v9 && BugCheckParameter2 )
  {
    ExFreeHeapPool(BugCheckParameter2, a2, v11, a4);
    v9 = 0;
  }
  if ( DWORD2(v61) != v9 && v62 )
    ExFreeHeapPool(v62, a2, v11, a4);
  return (unsigned int)v12;
}
