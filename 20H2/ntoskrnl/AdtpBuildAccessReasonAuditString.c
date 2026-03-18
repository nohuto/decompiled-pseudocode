/*
 * XREFs of AdtpBuildAccessReasonAuditString @ 0x1405C0ADC
 * Callers:
 *     AdtpPackageParameters @ 0x1403BFE64 (AdtpPackageParameters.c)
 * Callees:
 *     ExFreeHeapPool @ 0x1402176E0 (ExFreeHeapPool.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     AdtpIsSDValidSelfRelative @ 0x1403F77B0 (AdtpIsSDValidSelfRelative.c)
 *     Feature_Servicing_AdtpBuildAccessReasonAuditString_CrashFix__private_IsEnabled @ 0x1403F7828 (Feature_Servicing_AdtpBuildAccessReasonAuditString_CrashFix__private_IsEnabled.c)
 *     memmove @ 0x140411040 (memmove.c)
 *     memset @ 0x140411300 (memset.c)
 *     AdtpBuildAccessReasonAuditStringInternal @ 0x1405C10BC (AdtpBuildAccessReasonAuditStringInternal.c)
 *     AdtpBuildContextFromSecurityDescriptor @ 0x1405C1A88 (AdtpBuildContextFromSecurityDescriptor.c)
 *     AdtpBuildStagingReasonAuditStringInternal @ 0x1405C1B1C (AdtpBuildStagingReasonAuditStringInternal.c)
 *     RtlLengthSecurityDescriptor @ 0x1405F6330 (RtlLengthSecurityDescriptor.c)
 *     AdtpEtwBuildDashString @ 0x1406E4100 (AdtpEtwBuildDashString.c)
 *     ExAllocatePoolWithTag @ 0x1409B7010 (ExAllocatePoolWithTag.c)
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
  int v11; // edi
  unsigned int v12; // ebx
  char v13; // si
  __int64 v14; // r13
  char v15; // r15
  int IsEnabled; // eax
  char *v17; // r14
  _DWORD *v18; // rcx
  int v19; // ecx
  int v20; // eax
  int v21; // eax
  int v22; // eax
  int IsSDValidSelfRelative; // eax
  char *v24; // rcx
  char *v25; // rcx
  ULONG v26; // eax
  char v27; // r10
  __int64 *v28; // r14
  unsigned int v29; // r15d
  unsigned int v30; // edx
  unsigned __int8 v31; // cl
  unsigned int v32; // eax
  _DWORD *v33; // r8
  unsigned __int16 *v34; // rsi
  int v35; // eax
  unsigned int v36; // eax
  __int64 v37; // r9
  int *v38; // r15
  int v39; // r14d
  __int64 v40; // rsi
  int v41; // eax
  unsigned int v42; // ebx
  __int64 v43; // rax
  _WORD *v44; // rsi
  char v45; // al
  _WORD *PoolWithTag; // rax
  unsigned int v47; // r15d
  unsigned __int16 *v48; // r14
  const void *v49; // rdx
  ULONG_PTR *v50; // rbx
  __int64 v51; // rsi
  int v53; // [rsp+28h] [rbp-D8h]
  bool v55; // [rsp+61h] [rbp-9Fh] BYREF
  char v56; // [rsp+62h] [rbp-9Eh]
  char v57; // [rsp+63h] [rbp-9Dh] BYREF
  unsigned int v58; // [rsp+64h] [rbp-9Ch]
  int v59; // [rsp+68h] [rbp-98h]
  _DWORD *v60; // [rsp+70h] [rbp-90h]
  __int64 v61; // [rsp+78h] [rbp-88h]
  __int64 v62; // [rsp+80h] [rbp-80h]
  PSECURITY_DESCRIPTOR SecurityDescriptor[2]; // [rsp+88h] [rbp-78h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+98h] [rbp-68h]
  __int128 v65; // [rsp+A0h] [rbp-60h] BYREF
  ULONG_PTR v66; // [rsp+B0h] [rbp-50h]
  _DWORD *v67; // [rsp+B8h] [rbp-48h]
  char *v68; // [rsp+C0h] [rbp-40h]
  _DWORD *v69; // [rsp+C8h] [rbp-38h]
  __int64 v70; // [rsp+D0h] [rbp-30h]
  _DWORD *v71; // [rsp+D8h] [rbp-28h]
  char *v72; // [rsp+E0h] [rbp-20h]
  _OWORD v73[32]; // [rsp+F0h] [rbp-10h] BYREF

  v9 = 0;
  v72 = a9;
  v70 = a7;
  v11 = 0;
  v12 = 0;
  v71 = a8;
  v13 = 1;
  v14 = 0LL;
  v15 = 0;
  v60 = a3;
  v61 = a2;
  v62 = a1;
  v59 = 0;
  v57 = 0;
  v56 = 0;
  v55 = 0;
  v68 = 0LL;
  *(_OWORD *)SecurityDescriptor = 0LL;
  BugCheckParameter2 = 0LL;
  v65 = 0LL;
  v66 = 0LL;
  if ( !*a3 )
  {
LABEL_2:
    if ( a6 )
      AdtpEtwBuildDashString(a6, a2, a3);
    goto LABEL_78;
  }
  IsEnabled = Feature_Servicing_AdtpBuildAccessReasonAuditString_CrashFix__private_IsEnabled();
  v9 = 0;
  LODWORD(a2) = 0;
  v58 = 0;
  v17 = (char *)((unsigned __int64)(a3 + 36) & -(__int64)(IsEnabled != 0));
  v69 = v60 + 1;
  v18 = v60 + 1;
  v67 = v60 + 1;
  do
  {
    v19 = *v18 & 0xFF0000;
    if ( !v19 )
      goto LABEL_23;
    if ( ((v19 - 0x10000) & 0xFFFEFFFF) == 0 )
    {
LABEL_19:
      v13 = 0;
      v22 = Feature_Servicing_AdtpBuildAccessReasonAuditString_CrashFix__private_IsEnabled();
      v9 = 0;
      if ( v22 )
      {
        IsSDValidSelfRelative = AdtpIsSDValidSelfRelative(v17, 0LL);
        v9 = 0;
        if ( IsSDValidSelfRelative < 0 )
        {
LABEL_14:
          v11 = -1073741811;
          goto LABEL_78;
        }
      }
      v15 = 1;
      goto LABEL_22;
    }
    if ( ((v19 - 196608) & 0xFFFEFFFF) != 0 )
    {
      if ( v19 == 327680 )
        goto LABEL_19;
      if ( v19 != 393216 )
      {
        v13 = 0;
        goto LABEL_23;
      }
    }
    v13 = 0;
    v20 = Feature_Servicing_AdtpBuildAccessReasonAuditString_CrashFix__private_IsEnabled();
    v9 = 0;
    if ( v20 )
    {
      v21 = AdtpIsSDValidSelfRelative(v17, &v55);
      v9 = 0;
      v11 = v21;
      if ( v21 < 0 )
      {
        if ( v21 != -1073741736 )
          goto LABEL_17;
      }
      else if ( !v55 )
      {
        goto LABEL_14;
      }
      v68 = &v17[RtlLengthSecurityDescriptor(v17)];
      v11 = AdtpIsSDValidSelfRelative(v68, 0LL);
      v9 = 0;
LABEL_17:
      if ( v11 < 0 )
        goto LABEL_14;
    }
    v15 = 1;
    v56 = 1;
LABEL_22:
    LODWORD(a2) = v58;
LABEL_23:
    a2 = (unsigned int)(a2 + 1);
    v18 = v67 + 1;
    v58 = a2;
    ++v67;
  }
  while ( (unsigned int)a2 < 0x20 );
  if ( v13 == 1 )
    goto LABEL_2;
  memset(v73, 0, sizeof(v73));
  if ( v15 == 1 )
  {
    if ( (unsigned int)Feature_Servicing_AdtpBuildAccessReasonAuditString_CrashFix__private_IsEnabled() )
      v24 = v17;
    else
      v24 = (char *)(v60 + 36);
    AdtpBuildContextFromSecurityDescriptor(v24, SecurityDescriptor);
  }
  if ( v56 == 1 )
  {
    if ( (unsigned int)Feature_Servicing_AdtpBuildAccessReasonAuditString_CrashFix__private_IsEnabled() )
    {
      v25 = v68;
    }
    else
    {
      v26 = RtlLengthSecurityDescriptor(SecurityDescriptor[0]);
      v25 = (char *)SecurityDescriptor[0] + v26;
    }
    AdtpBuildContextFromSecurityDescriptor(v25, &v65);
  }
  v27 = a4;
  v28 = AdtpStandardAccessTypes;
  v9 = 0;
  v29 = 0;
  while ( 2 )
  {
    v30 = *(_DWORD *)v28;
    if ( v27 == 1 )
    {
      v31 = 0;
      v32 = *(_DWORD *)v28;
      while ( 1 )
      {
        v32 >>= 1;
        if ( !v32 )
          break;
        ++v31;
      }
      v33 = v60;
      if ( (int)v60[v31 + 1] < 0 )
      {
        v34 = (unsigned __int16 *)&v73[(unsigned int)v14];
        v35 = AdtpBuildStagingReasonAuditStringInternal(
                v62,
                v61,
                (unsigned int)SecurityDescriptor,
                (unsigned int)&v65,
                v30,
                v53,
                (__int64)v69,
                (__int64)v34);
        goto LABEL_44;
      }
    }
    else
    {
      v33 = v60;
      if ( (v30 & *v60) != 0 )
      {
        v34 = (unsigned __int16 *)&v73[(unsigned int)v14];
        LOBYTE(v53) = *((_BYTE *)v60 + 136);
        v35 = AdtpBuildAccessReasonAuditStringInternal(
                v62,
                v30 & *v60,
                v53,
                (__int64)(v60 + 1),
                (__int64)v34,
                0,
                0,
                0,
                (__int64)&v57);
LABEL_44:
        v9 = 0;
        v11 = v35;
        if ( v35 < 0 )
          goto LABEL_73;
        v33 = v60;
        v12 += *v34;
        v27 = a4;
        v14 = (unsigned int)(v14 + 1);
        v59 = v14;
      }
    }
    ++v29;
    v28 = (__int64 *)((char *)v28 + 4);
    if ( v29 < 7 )
      continue;
    break;
  }
  if ( *(_WORD *)v33 )
  {
    v36 = 0;
    v37 = (__int64)(v33 + 1);
    v58 = 0;
    v38 = v33 + 1;
    v39 = 1;
    do
    {
      if ( v27 == 1 )
      {
        if ( *v38 < 0 )
        {
          v40 = (unsigned int)v14;
          v41 = AdtpBuildStagingReasonAuditStringInternal(
                  v62,
                  v61,
                  (unsigned int)SecurityDescriptor,
                  (unsigned int)&v65,
                  v39,
                  v53,
                  v37,
                  (__int64)&v73[(unsigned int)v14]);
LABEL_54:
          v9 = 0;
          v11 = v41;
          if ( v41 < 0 )
            goto LABEL_73;
          v33 = v60;
          v37 = (__int64)v69;
          v27 = a4;
          v12 += LOWORD(v73[v40]);
          v36 = v58;
          v14 = (unsigned int)(v14 + 1);
          v59 = v14;
        }
      }
      else if ( (v39 & *v33) != 0 )
      {
        v40 = (unsigned int)v14;
        LOBYTE(v53) = *((_BYTE *)v33 + 136);
        v41 = AdtpBuildAccessReasonAuditStringInternal(
                v62,
                (unsigned int)v39 & *v33,
                v53,
                v37,
                (__int64)&v73[(unsigned int)v14],
                0,
                0,
                0,
                (__int64)&v57);
        goto LABEL_54;
      }
      ++v36;
      ++v38;
      v39 *= 2;
      v58 = v36;
    }
    while ( v36 < 0x10 );
  }
  v42 = (v12 >> 1) + 1;
  if ( v70 )
  {
    if ( v71 )
    {
      v43 = (unsigned int)*v71;
      if ( (unsigned int)v43 + v42 < 0x400 )
      {
        v44 = (_WORD *)(v70 + 2 * v43);
        *v71 = v43 + v42;
        v45 = 0;
        goto LABEL_64;
      }
    }
  }
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 2LL * v42, 0x6B416553u);
  v9 = 0;
  v44 = PoolWithTag;
  if ( PoolWithTag )
  {
    v45 = 1;
LABEL_64:
    v47 = 0;
    *v72 = v45;
    if ( (_DWORD)v14 )
    {
      v48 = (unsigned __int16 *)v73;
      do
      {
        v49 = (const void *)*((_QWORD *)v48 + 1);
        if ( v49 )
        {
          memmove((char *)v44 + v47, v49, *v48);
          v47 += *v48;
          v9 = 0;
        }
        v48 += 8;
        --v14;
      }
      while ( v14 );
      LODWORD(v14) = v59;
    }
    v44[v42 - 1] = 0;
    if ( a6 )
    {
      *a6 = v44;
      a6[1] = 2 * v42;
    }
    else
    {
      MEMORY[8] = v44;
      MEMORY[2] = 2 * v42;
      MEMORY[0] = 2 * v42 - 2;
    }
  }
  else
  {
    v11 = -1073741801;
  }
LABEL_73:
  if ( (_DWORD)v14 )
  {
    v50 = (ULONG_PTR *)v73 + 1;
    v51 = (unsigned int)v14;
    do
    {
      if ( *v50 )
      {
        ExFreeHeapPool(*v50);
        v9 = 0;
      }
      v50 += 2;
      --v51;
    }
    while ( v51 );
  }
LABEL_78:
  if ( LODWORD(SecurityDescriptor[1]) != v9 && BugCheckParameter2 )
  {
    ExFreeHeapPool(BugCheckParameter2);
    v9 = 0;
  }
  if ( DWORD2(v65) != v9 && v66 )
    ExFreeHeapPool(v66);
  return (unsigned int)v11;
}
