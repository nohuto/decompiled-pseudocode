/*
 * XREFs of AdtpBuildAccessReasonAuditString @ 0x1405C25AC
 * Callers:
 *     AdtpPackageParameters @ 0x1403C0AE4 (AdtpPackageParameters.c)
 * Callees:
 *     ExFreeHeapPool @ 0x14034C810 (ExFreeHeapPool.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     AdtpIsSDValidSelfRelative @ 0x1403F9C24 (AdtpIsSDValidSelfRelative.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     memset @ 0x140414300 (memset.c)
 *     AdtpBuildAccessReasonAuditStringInternal @ 0x1405C2B24 (AdtpBuildAccessReasonAuditStringInternal.c)
 *     AdtpBuildContextFromSecurityDescriptor @ 0x1405C34F0 (AdtpBuildContextFromSecurityDescriptor.c)
 *     AdtpBuildStagingReasonAuditStringInternal @ 0x1405C3584 (AdtpBuildStagingReasonAuditStringInternal.c)
 *     AdtpEtwBuildDashString @ 0x140622980 (AdtpEtwBuildDashString.c)
 *     RtlLengthSecurityDescriptor @ 0x140654EF0 (RtlLengthSecurityDescriptor.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
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
  __int64 v32; // r9
  int *v33; // r12
  int v34; // r14d
  __int64 v35; // rsi
  int v36; // eax
  unsigned int v37; // ebx
  __int64 v38; // rax
  _WORD *v39; // rsi
  char v40; // al
  _WORD *PoolWithTag; // rax
  unsigned int v42; // r12d
  unsigned __int16 *v43; // r14
  const void *v44; // rdx
  ULONG_PTR *v45; // rbx
  __int64 v46; // rsi
  int v48; // [rsp+28h] [rbp-D8h]
  bool v50; // [rsp+61h] [rbp-9Fh] BYREF
  char v51; // [rsp+62h] [rbp-9Eh]
  char v52; // [rsp+63h] [rbp-9Dh] BYREF
  unsigned int v53; // [rsp+64h] [rbp-9Ch]
  int v54; // [rsp+68h] [rbp-98h]
  __int64 v55; // [rsp+70h] [rbp-90h]
  __int64 v56; // [rsp+78h] [rbp-88h]
  _DWORD *v57; // [rsp+80h] [rbp-80h]
  _DWORD *v58; // [rsp+88h] [rbp-78h]
  char *v59; // [rsp+90h] [rbp-70h]
  _DWORD *v60; // [rsp+98h] [rbp-68h]
  __int128 v61; // [rsp+A0h] [rbp-60h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+B0h] [rbp-50h]
  __int128 v63; // [rsp+B8h] [rbp-48h] BYREF
  ULONG_PTR v64; // [rsp+C8h] [rbp-38h]
  __int64 v65; // [rsp+D0h] [rbp-30h]
  _DWORD *v66; // [rsp+D8h] [rbp-28h]
  char *v67; // [rsp+E0h] [rbp-20h]
  _OWORD v68[32]; // [rsp+F0h] [rbp-10h] BYREF

  v9 = 0;
  v56 = a1;
  v11 = (__int64)a8;
  v67 = a9;
  v12 = 0;
  v13 = 0;
  v65 = a7;
  v14 = 1;
  v15 = 0LL;
  v16 = 0;
  v57 = a3;
  v55 = a2;
  v66 = a8;
  v54 = 0;
  v52 = 0;
  v51 = 0;
  v50 = 0;
  v59 = 0LL;
  v61 = 0LL;
  BugCheckParameter2 = 0LL;
  v63 = 0LL;
  v64 = 0LL;
  if ( !*a3 )
  {
LABEL_2:
    if ( a6 )
      AdtpEtwBuildDashString(a6, a2, v11);
    goto LABEL_70;
  }
  v17 = (char *)(a3 + 36);
  LODWORD(a2) = 0;
  v53 = 0;
  v60 = a3 + 1;
  v18 = a3 + 1;
  v58 = a3 + 1;
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
    v20 = AdtpIsSDValidSelfRelative(v17, &v50);
    v9 = 0;
    v12 = v20;
    if ( v20 >= 0 )
    {
      if ( !v50 )
        goto LABEL_13;
LABEL_15:
      v59 = &v17[RtlLengthSecurityDescriptor(v17)];
      v12 = AdtpIsSDValidSelfRelative(v59, 0LL);
      v9 = 0;
      goto LABEL_16;
    }
    if ( v20 == -1073741736 )
      goto LABEL_15;
LABEL_16:
    if ( v12 < 0 )
      goto LABEL_13;
    v16 = 1;
    v51 = 1;
LABEL_20:
    LODWORD(a2) = v53;
LABEL_21:
    a2 = (unsigned int)(a2 + 1);
    v18 = v58 + 1;
    v53 = a2;
    ++v58;
  }
  while ( (unsigned int)a2 < 0x20 );
  if ( v14 == 1 )
    goto LABEL_2;
  memset(v68, 0, sizeof(v68));
  if ( v16 == 1 )
    AdtpBuildContextFromSecurityDescriptor(v17, &v61);
  if ( v51 == 1 )
    AdtpBuildContextFromSecurityDescriptor(v59, &v63);
  v22 = a4;
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
      v28 = v57;
      if ( (int)v57[v26 + 1] < 0 )
      {
        v29 = (unsigned __int16 *)&v68[(unsigned int)v15];
        v30 = AdtpBuildStagingReasonAuditStringInternal(
                v56,
                v55,
                (unsigned int)&v61,
                (unsigned int)&v63,
                v25,
                v48,
                (__int64)v60,
                (__int64)v29);
        goto LABEL_36;
      }
    }
    else
    {
      v28 = v57;
      if ( (v25 & *v57) != 0 )
      {
        v29 = (unsigned __int16 *)&v68[(unsigned int)v15];
        LOBYTE(v48) = *((_BYTE *)v57 + 136);
        v30 = AdtpBuildAccessReasonAuditStringInternal(
                v56,
                v25 & *v57,
                v48,
                (__int64)(v57 + 1),
                (__int64)v29,
                0,
                0,
                0,
                (__int64)&v52);
LABEL_36:
        v9 = 0;
        v12 = v30;
        if ( v30 < 0 )
          goto LABEL_65;
        v28 = v57;
        v13 += *v29;
        v22 = a4;
        v15 = (unsigned int)(v15 + 1);
        v54 = v15;
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
    v32 = (__int64)(v28 + 1);
    v53 = 0;
    v33 = v28 + 1;
    v34 = 1;
    do
    {
      if ( v22 == 1 )
      {
        if ( *v33 < 0 )
        {
          v35 = (unsigned int)v15;
          v36 = AdtpBuildStagingReasonAuditStringInternal(
                  v56,
                  v55,
                  (unsigned int)&v61,
                  (unsigned int)&v63,
                  v34,
                  v48,
                  v32,
                  (__int64)&v68[(unsigned int)v15]);
LABEL_46:
          v9 = 0;
          v12 = v36;
          if ( v36 < 0 )
            goto LABEL_65;
          v28 = v57;
          v32 = (__int64)v60;
          v22 = a4;
          v13 += LOWORD(v68[v35]);
          v31 = v53;
          v15 = (unsigned int)(v15 + 1);
          v54 = v15;
        }
      }
      else if ( (v34 & *v28) != 0 )
      {
        v35 = (unsigned int)v15;
        LOBYTE(v48) = *((_BYTE *)v28 + 136);
        v36 = AdtpBuildAccessReasonAuditStringInternal(
                v56,
                (unsigned int)v34 & *v28,
                v48,
                v32,
                (__int64)&v68[(unsigned int)v15],
                0,
                0,
                0,
                (__int64)&v52);
        goto LABEL_46;
      }
      ++v31;
      ++v33;
      v34 *= 2;
      v53 = v31;
    }
    while ( v31 < 0x10 );
  }
  v37 = (v13 >> 1) + 1;
  if ( v65 )
  {
    if ( v66 )
    {
      v38 = (unsigned int)*v66;
      if ( (unsigned int)v38 + v37 < 0x400 )
      {
        v39 = (_WORD *)(v65 + 2 * v38);
        *v66 = v38 + v37;
        v40 = 0;
        goto LABEL_56;
      }
    }
  }
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 2LL * v37, 0x6B416553u);
  v9 = 0;
  v39 = PoolWithTag;
  if ( PoolWithTag )
  {
    v40 = 1;
LABEL_56:
    v42 = 0;
    *v67 = v40;
    if ( (_DWORD)v15 )
    {
      v43 = (unsigned __int16 *)v68;
      do
      {
        v44 = (const void *)*((_QWORD *)v43 + 1);
        if ( v44 )
        {
          memmove((char *)v39 + v42, v44, *v43);
          v42 += *v43;
          v9 = 0;
        }
        v43 += 8;
        --v15;
      }
      while ( v15 );
      LODWORD(v15) = v54;
    }
    v39[v37 - 1] = 0;
    if ( a6 )
    {
      *a6 = v39;
      a6[1] = 2 * v37;
    }
    else
    {
      MEMORY[8] = v39;
      MEMORY[2] = 2 * v37;
      MEMORY[0] = 2 * v37 - 2;
    }
  }
  else
  {
    v12 = -1073741801;
  }
LABEL_65:
  if ( (_DWORD)v15 )
  {
    v45 = (ULONG_PTR *)v68 + 1;
    v46 = (unsigned int)v15;
    do
    {
      if ( *v45 )
      {
        ExFreeHeapPool(*v45);
        v9 = 0;
      }
      v45 += 2;
      --v46;
    }
    while ( v46 );
  }
LABEL_70:
  if ( DWORD2(v61) != v9 && BugCheckParameter2 )
  {
    ExFreeHeapPool(BugCheckParameter2);
    v9 = 0;
  }
  if ( DWORD2(v63) != v9 && v64 )
    ExFreeHeapPool(v64);
  return (unsigned int)v12;
}
