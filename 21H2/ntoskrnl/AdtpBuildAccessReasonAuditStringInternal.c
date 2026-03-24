/*
 * XREFs of AdtpBuildAccessReasonAuditStringInternal @ 0x1405C28F4
 * Callers:
 *     AdtpBuildAccessReasonAuditString @ 0x1405C237C (AdtpBuildAccessReasonAuditString.c)
 * Callees:
 *     RtlGetDaclSecurityDescriptor @ 0x140252E50 (RtlGetDaclSecurityDescriptor.c)
 *     RtlAppendUnicodeToString @ 0x140265A40 (RtlAppendUnicodeToString.c)
 *     RtlGetAce @ 0x14027EA10 (RtlGetAce.c)
 *     RtlStringCbPrintfW @ 0x14027EB50 (RtlStringCbPrintfW.c)
 *     RtlAppendUnicodeStringToString @ 0x14027F0B0 (RtlAppendUnicodeStringToString.c)
 *     SeConvertSecurityDescriptorToStringSecurityDescriptor @ 0x14027F790 (SeConvertSecurityDescriptorToStringSecurityDescriptor.c)
 *     StringCchPrintfW @ 0x1402CA7B8 (StringCchPrintfW.c)
 *     ExFreeHeapPool @ 0x140341AC0 (ExFreeHeapPool.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     memmove @ 0x140413F40 (memmove.c)
 *     AdtpFormatPrefix @ 0x1405C36FC (AdtpFormatPrefix.c)
 *     StringCchPrintfExW @ 0x1405C37E0 (StringCchPrintfExW.c)
 *     RtlCreateSecurityDescriptor @ 0x140603560 (RtlCreateSecurityDescriptor.c)
 *     RtlIntegerToUnicodeString @ 0x14062C070 (RtlIntegerToUnicodeString.c)
 *     RtlAddAce @ 0x14065F130 (RtlAddAce.c)
 *     RtlSetDaclSecurityDescriptor @ 0x140660500 (RtlSetDaclSecurityDescriptor.c)
 *     RtlCreateAcl @ 0x140660570 (RtlCreateAcl.c)
 *     AdtpBuildPrivilegeAuditString @ 0x14096D3C4 (AdtpBuildPrivilegeAuditString.c)
 *     AdtpBuildAccessesString @ 0x14096E2B8 (AdtpBuildAccessesString.c)
 *     ExAllocatePoolWithTag @ 0x1409B4160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall AdtpBuildAccessReasonAuditStringInternal(
        int a1,
        void *a2,
        __int64 a3,
        __int64 a4,
        int a5,
        int a6,
        size_t a7,
        __int64 a8,
        int a9,
        int a10,
        int a11,
        _BYTE *a12)
{
  ULONG_PTR v15; // r15
  unsigned int v16; // eax
  unsigned int v17; // r14d
  int v18; // ecx
  __int64 v19; // rdx
  NTSTATUS DaclSecurityDescriptor; // ebx
  __int64 v21; // r8
  __int64 v22; // r9
  size_t v23; // r12
  int v24; // edi
  unsigned __int16 v25; // bx
  unsigned int v26; // eax
  __int64 v27; // rax
  unsigned int v28; // eax
  unsigned int v29; // ebx
  UNICODE_STRING *p_Source; // rdx
  const UNICODE_STRING *v31; // rdx
  ULONG v32; // r14d
  ULONG v33; // edx
  unsigned __int8 *v34; // r14
  unsigned __int16 *v35; // r15
  ULONG v36; // ebx
  ACL *v37; // rax
  ACL *v38; // rsi
  int v39; // eax
  UNICODE_STRING *v40; // rbx
  __int64 v41; // r14
  __int64 v42; // rcx
  unsigned int v43; // ecx
  __int16 v44; // r14
  UNICODE_STRING *v45; // rdx
  __int64 v46; // rdx
  __int64 v47; // r8
  _DWORD *v48; // r9
  unsigned int v49; // ebx
  UNICODE_STRING *v50; // rdx
  __int64 v51; // rdx
  __int64 v52; // r8
  _DWORD *v53; // r9
  ULONG v54; // ebx
  NTSTATUS appended; // eax
  size_t Length; // r14
  unsigned int v57; // edi
  char *PoolWithTag; // rsi
  __int64 v59; // rcx
  __int16 v60; // di
  __int64 v62; // [rsp+30h] [rbp-D0h]
  BOOLEAN DaclPresent[8]; // [rsp+50h] [rbp-B0h] BYREF
  UNICODE_STRING Destination; // [rsp+58h] [rbp-A8h] BYREF
  size_t pcchRemaining; // [rsp+68h] [rbp-98h] BYREF
  PVOID Ace[2]; // [rsp+70h] [rbp-90h] BYREF
  BOOLEAN DaclDefaulted[4]; // [rsp+80h] [rbp-80h] BYREF
  int v68; // [rsp+84h] [rbp-7Ch]
  UNICODE_STRING v69; // [rsp+88h] [rbp-78h] BYREF
  UNICODE_STRING v70; // [rsp+98h] [rbp-68h] BYREF
  UNICODE_STRING v71; // [rsp+A8h] [rbp-58h] BYREF
  UNICODE_STRING Source; // [rsp+B8h] [rbp-48h] BYREF
  UNICODE_STRING v73; // [rsp+C8h] [rbp-38h] BYREF
  UNICODE_STRING v74; // [rsp+D8h] [rbp-28h] BYREF
  UNICODE_STRING v75; // [rsp+E8h] [rbp-18h] BYREF
  UNICODE_STRING v76; // [rsp+F8h] [rbp-8h] BYREF
  void *Src[2]; // [rsp+108h] [rbp+8h] BYREF
  _BYTE *v78; // [rsp+118h] [rbp+18h]
  __int64 v79; // [rsp+120h] [rbp+20h]
  wchar_t pszFormat[8]; // [rsp+128h] [rbp+28h] BYREF
  UNICODE_STRING v81; // [rsp+138h] [rbp+38h] BYREF
  int v82; // [rsp+148h] [rbp+48h]
  wchar_t pszDest[8]; // [rsp+158h] [rbp+58h] BYREF
  __int128 v84; // [rsp+168h] [rbp+68h]
  __int64 v85; // [rsp+178h] [rbp+78h]
  char v86; // [rsp+180h] [rbp+80h] BYREF
  char v87; // [rsp+198h] [rbp+98h] BYREF
  char v88; // [rsp+1B8h] [rbp+B8h] BYREF
  char v89; // [rsp+1D8h] [rbp+D8h] BYREF
  char v90; // [rsp+1F8h] [rbp+F8h] BYREF
  char v91; // [rsp+218h] [rbp+118h] BYREF
  char v92; // [rsp+238h] [rbp+138h] BYREF
  char v93; // [rsp+258h] [rbp+158h] BYREF

  v78 = a12;
  Ace[0] = a2;
  pcchRemaining = a7;
  v15 = 0LL;
  v79 = a8;
  v16 = 0;
  DaclPresent[0] = 0;
  v17 = 0;
  v18 = 1;
  *(_DWORD *)(&v69.MaximumLength + 1) = 0;
  *(_DWORD *)(&v73.MaximumLength + 1) = 0;
  *(_DWORD *)(&v74.MaximumLength + 1) = 0;
  *(_DWORD *)(&v75.MaximumLength + 1) = 0;
  *(_DWORD *)(&v76.MaximumLength + 1) = 0;
  *(_DWORD *)(&v71.MaximumLength + 1) = 0;
  *(_DWORD *)(&Source.MaximumLength + 1) = 0;
  *(_DWORD *)(&v81.MaximumLength + 1) = 0;
  *(_QWORD *)pszFormat = 0LL;
  *(_OWORD *)Src = 0LL;
  Destination = 0LL;
  v70 = 0LL;
  while ( (v18 & a5) == 0 )
  {
    ++v16;
    v18 *= 2;
    if ( v16 >= 0x20 )
      goto LABEL_6;
  }
  v17 = v16;
LABEL_6:
  *(_DWORD *)&v81.Length = 1310720;
  v81.Buffer = (wchar_t *)&v86;
  *(_DWORD *)&v69.Length = 1966080;
  v69.Buffer = (wchar_t *)&v87;
  DaclSecurityDescriptor = AdtpFormatPrefix(&v69, 0x709u);
  if ( DaclSecurityDescriptor < 0 )
    goto LABEL_129;
  *(_DWORD *)&v73.Length = 1966080;
  v73.Buffer = (wchar_t *)&v88;
  DaclSecurityDescriptor = AdtpFormatPrefix(&v73, 0x70Au);
  if ( DaclSecurityDescriptor < 0 )
    goto LABEL_129;
  *(_DWORD *)&v74.Length = 1966080;
  v74.Buffer = (wchar_t *)&v89;
  DaclSecurityDescriptor = AdtpFormatPrefix(&v74, 0x713u);
  if ( DaclSecurityDescriptor < 0 )
    goto LABEL_129;
  *(_DWORD *)&v75.Length = 1966080;
  v75.Buffer = (wchar_t *)&v90;
  DaclSecurityDescriptor = AdtpFormatPrefix(&v75, 0x714u);
  if ( DaclSecurityDescriptor < 0 )
    goto LABEL_129;
  *(_DWORD *)&v76.Length = 1966080;
  v76.Buffer = (wchar_t *)&v91;
  DaclSecurityDescriptor = AdtpFormatPrefix(&v76, 0x712u);
  if ( DaclSecurityDescriptor < 0 )
    goto LABEL_129;
  *(_DWORD *)&v71.Length = 1966080;
  v71.Buffer = (wchar_t *)&v92;
  DaclSecurityDescriptor = AdtpFormatPrefix(&v71, 0x716u);
  if ( DaclSecurityDescriptor < 0 )
    goto LABEL_129;
  *(_DWORD *)&Source.Length = 1966080;
  Source.Buffer = (wchar_t *)&v93;
  DaclSecurityDescriptor = AdtpFormatPrefix(&Source, 0x718u);
  if ( DaclSecurityDescriptor < 0 )
    goto LABEL_129;
  DaclSecurityDescriptor = AdtpBuildAccessesString(
                             a1,
                             (int)Ace[0],
                             a5,
                             2,
                             (PUNICODE_STRING)Src,
                             0LL,
                             0LL,
                             0LL,
                             (__int64)DaclPresent);
  if ( DaclSecurityDescriptor < 0 )
    goto LABEL_129;
  v23 = LOWORD(Src[0]);
  v68 = LOWORD(Src[0]) >> 1;
  LODWORD(v19) = *(_DWORD *)(pcchRemaining + 4LL * v17);
  v24 = v19 & 0xFF0000;
  if ( ((unsigned int)v19 & 0xFF0000) > 0x200000 )
  {
    if ( v24 != 3145728
      && v24 != 0x400000
      && v24 != 5242880
      && v24 != 6291456
      && v24 != 7340032
      && v24 != 0x800000
      && v24 != 9437184
      && v24 != 10485760 )
    {
      goto LABEL_117;
    }
LABEL_92:
    v54 = pcchRemaining;
LABEL_94:
    if ( v24 == 3145728 )
      v54 = 1803;
    if ( v24 == 0x400000 )
      v54 = 1804;
    if ( v24 == 5242880 )
      v54 = 1806;
    if ( v24 == 6291456 )
      v54 = 1807;
    if ( v24 == 7340032 )
      v54 = 1808;
    if ( !v24 )
      v54 = 1809;
    if ( v24 == 0x800000 )
      v54 = 1805;
    if ( v24 == 9437184 )
      v54 = 1841;
    if ( v24 == 10485760 )
      v54 = 1856;
    Destination.Buffer = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 0x4EuLL, 0x6B416553u);
    if ( !Destination.Buffer )
      goto LABEL_113;
    *(_DWORD *)&Destination.Length = 5111808;
    RtlAppendUnicodeToString(&Destination, L"%%");
    DaclSecurityDescriptor = RtlIntegerToUnicodeString(v54, 0xAu, &v81);
    if ( DaclSecurityDescriptor < 0 )
      goto LABEL_129;
    v31 = &v81;
LABEL_116:
    RtlAppendUnicodeStringToString(&Destination, v31);
LABEL_117:
    appended = RtlAppendUnicodeToString(&Destination, L"\r\n\t\t\t\t");
    Length = Destination.Length;
    DaclSecurityDescriptor = appended;
    v57 = v68 + 1 + (Destination.Length >> 1);
    PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, 2LL * v57, 0x6B416553u);
    if ( PoolWithTag )
    {
      *v78 = 1;
      if ( (_WORD)v23 )
        memmove(PoolWithTag, Src[1], v23);
      if ( (_WORD)Length )
        memmove(&PoolWithTag[v23], Destination.Buffer, Length);
      v59 = v79;
      *(_WORD *)&PoolWithTag[2 * v57 - 2] = 0;
      v60 = 2 * v57;
      *(_WORD *)(v59 + 2) = v60;
      *(_QWORD *)(v59 + 8) = PoolWithTag;
      *(_WORD *)v59 = v60 - 2;
    }
    else
    {
      DaclSecurityDescriptor = -1073741801;
    }
    v38 = 0LL;
    goto LABEL_125;
  }
  if ( v24 == 0x200000 )
  {
LABEL_77:
    *(_QWORD *)pszFormat = (unsigned __int16)v19;
    v81.Buffer = (wchar_t *)(unsigned __int16)v19;
    wcscpy(&v81.Length, L"\x01");
    *(_DWORD *)(&v81.MaximumLength + 1) = 1;
    v82 = 0;
    DaclSecurityDescriptor = AdtpBuildPrivilegeAuditString(&v81, &v70, 0LL, 0LL);
    if ( DaclSecurityDescriptor < 0 )
      goto LABEL_129;
    v49 = (v70.Length >> 1) + 27;
    Destination.Buffer = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 2LL * v49, 0x6B416553u);
    if ( Destination.Buffer )
    {
      Destination.Length = 0;
      Destination.MaximumLength = 2 * v49;
      if ( v24 == 0x200000 )
        v50 = &v69;
      else
        v50 = &v76;
      RtlAppendUnicodeStringToString(&Destination, v50);
      RtlAppendUnicodeStringToString(&Destination, &v70);
      if ( v70.Buffer )
      {
        ExFreeHeapPool((ULONG_PTR)v70.Buffer, v51, v52, v53);
        v70.Buffer = 0LL;
      }
      goto LABEL_117;
    }
LABEL_113:
    DaclSecurityDescriptor = -1073741801;
    goto LABEL_129;
  }
  if ( !v24 )
    goto LABEL_92;
  if ( v24 != 0x10000 && v24 != 0x20000 && v24 != 196608 && v24 != 0x40000 )
  {
    v21 = 393216LL;
    if ( v24 != 327680 && v24 != 393216 )
    {
      if ( v24 != 458752 )
      {
        if ( v24 != 0x100000 )
          goto LABEL_117;
        goto LABEL_77;
      }
      v54 = 1830;
      goto LABEL_94;
    }
    v22 = 2LL;
    v25 = 2;
    wcscpy(pszFormat, L"# %d");
    Ace[0] = (PVOID)131074;
    Ace[1] = (PVOID)L"-";
    v19 = (unsigned __int16)v19;
    if ( v24 == 393216 )
    {
      v28 = *(_DWORD *)(a4 + 8);
      if ( !v28 )
        goto LABEL_35;
      if ( (unsigned __int16)v19 < v28 )
      {
        v27 = *(_QWORD *)(a4 + 16);
        goto LABEL_34;
      }
    }
    else
    {
      v26 = *(_DWORD *)(a3 + 8);
      if ( !v26 )
        goto LABEL_35;
      if ( (unsigned __int16)v19 < v26 )
      {
        v27 = *(_QWORD *)(a3 + 16);
LABEL_34:
        *(_OWORD *)Ace = *(_OWORD *)(v27 + 16LL * (unsigned __int16)v19);
        v25 = (unsigned __int16)Ace[0];
LABEL_35:
        if ( v25 <= 2u )
        {
          LODWORD(v62) = (unsigned __int16)v19;
          pcchRemaining = 0LL;
          if ( StringCchPrintfExW(pszDest, 0x14uLL, 0LL, &pcchRemaining, 0, pszFormat, v62) >= 0 )
          {
            WORD1(Ace[0]) = 40;
            v25 = 2 * (20 - pcchRemaining);
            LOWORD(Ace[0]) = v25;
            Ace[1] = pszDest;
          }
        }
        v29 = v25 + 54;
        Destination.Buffer = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v29, 0x6B416553u);
        if ( !Destination.Buffer )
          goto LABEL_113;
        Destination.Length = 0;
        Destination.MaximumLength = 2 * v29;
        if ( v24 == 327680 )
          p_Source = &v71;
        else
          p_Source = &Source;
        RtlAppendUnicodeStringToString(&Destination, p_Source);
        v31 = (const UNICODE_STRING *)Ace;
        goto LABEL_116;
      }
    }
    DaclSecurityDescriptor = -1073741811;
    goto LABEL_129;
  }
  pcchRemaining = 0LL;
  v85 = 0LL;
  DaclPresent[0] = 0;
  Ace[0] = 0LL;
  v32 = (unsigned __int16)v19;
  *(_OWORD *)pszDest = 0LL;
  if ( ((v24 - 0x10000) & 0xFFFEFFFF) != 0 )
    a3 = a4;
  v84 = 0LL;
  DaclSecurityDescriptor = RtlGetDaclSecurityDescriptor(
                             *(PSECURITY_DESCRIPTOR *)a3,
                             DaclPresent,
                             (PACL *)&pcchRemaining,
                             DaclDefaulted);
  if ( DaclSecurityDescriptor >= 0 )
  {
    if ( DaclPresent[0] )
    {
      v33 = v32;
      v34 = (unsigned __int8 *)pcchRemaining;
      DaclSecurityDescriptor = RtlGetAce((PACL)pcchRemaining, v33, Ace);
      if ( DaclSecurityDescriptor >= 0 )
      {
        v35 = (unsigned __int16 *)Ace[0];
        v36 = *((unsigned __int16 *)Ace[0] + 1) + 8;
        v37 = (ACL *)ExAllocatePoolWithTag(PagedPool, v36, 0x6B416553u);
        v38 = v37;
        if ( !v37 )
          goto LABEL_113;
        DaclSecurityDescriptor = RtlCreateAcl(v37, v36, *v34);
        if ( DaclSecurityDescriptor < 0
          || (DaclSecurityDescriptor = RtlAddAce(v38, *v34, 0, v35, v35[1]), DaclSecurityDescriptor < 0)
          || (DaclSecurityDescriptor = RtlCreateSecurityDescriptor(pszDest, 1u), DaclSecurityDescriptor < 0)
          || (DaclSecurityDescriptor = RtlSetDaclSecurityDescriptor(pszDest, 1u, v38, 0), DaclSecurityDescriptor < 0) )
        {
LABEL_127:
          if ( v38 )
            ExFreeHeapPool((ULONG_PTR)v38, v19, v21, (_DWORD *)v22);
          goto LABEL_129;
        }
        v39 = SeConvertSecurityDescriptorToStringSecurityDescriptor(
                (__int64)pszDest,
                1LL,
                4LL,
                pszFormat,
                &pcchRemaining);
        v15 = *(_QWORD *)pszFormat;
        DaclSecurityDescriptor = v39;
        if ( v39 < 0 )
        {
          if ( v39 == -1073741801 )
            goto LABEL_125;
          v40 = &v81;
          if ( StringCchPrintfW(&v81.Length, 0x10uLL, L"<0x%08X>", (unsigned int)v39) < 0 )
            v40 = (UNICODE_STRING *)L"-";
        }
        else
        {
          v40 = *(UNICODE_STRING **)pszFormat;
        }
        v41 = -1LL;
        v42 = -1LL;
        do
          ++v42;
        while ( *(&v40->Length + v42) );
        v43 = v42 + 1;
        if ( 2 * (unsigned __int64)v43 > 0xFFFF )
        {
          DaclSecurityDescriptor = RtlStringCbPrintfW(&v81.Length, 0x10uLL, L"%%%%%u", 1828LL);
          if ( DaclSecurityDescriptor < 0 )
            goto LABEL_125;
          v40 = &v81;
          do
            ++v41;
          while ( *(&v81.Length + v41) );
          v43 = v41 + 1;
        }
        v44 = v43 + 27;
        Destination.Buffer = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 2LL * (v43 + 27), 0x6B416553u);
        if ( Destination.Buffer )
        {
          Destination.Length = 0;
          Destination.MaximumLength = 2 * v44;
          switch ( v24 )
          {
            case 65536:
              v45 = &v69;
              break;
            case 131072:
              v45 = &v73;
              break;
            case 196608:
              v45 = &v74;
              break;
            default:
              v45 = &v75;
              break;
          }
          RtlAppendUnicodeStringToString(&Destination, v45);
          RtlAppendUnicodeToString(&Destination, &v40->Length);
          if ( v15 )
          {
            ExFreeHeapPool(v15, v46, v47, v48);
            v15 = 0LL;
          }
          ExFreeHeapPool((ULONG_PTR)v38, v46, v47, v48);
          goto LABEL_117;
        }
        DaclSecurityDescriptor = -1073741801;
LABEL_125:
        if ( v15 )
          ExFreeHeapPool(v15, v19, v21, (_DWORD *)v22);
        goto LABEL_127;
      }
    }
  }
LABEL_129:
  if ( v70.Buffer )
    ExFreeHeapPool((ULONG_PTR)v70.Buffer, v19, v21, (_DWORD *)v22);
  if ( Src[1] )
    ExFreeHeapPool((ULONG_PTR)Src[1], v19, v21, (_DWORD *)v22);
  if ( Destination.Buffer )
    ExFreeHeapPool((ULONG_PTR)Destination.Buffer, v19, v21, (_DWORD *)v22);
  return (unsigned int)DaclSecurityDescriptor;
}
