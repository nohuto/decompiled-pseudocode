/*
 * XREFs of AdtpBuildAccessReasonAuditStringInternal @ 0x1405C2B24
 * Callers:
 *     AdtpBuildAccessReasonAuditString @ 0x1405C25AC (AdtpBuildAccessReasonAuditString.c)
 * Callees:
 *     StringCchPrintfW @ 0x1402490A8 (StringCchPrintfW.c)
 *     RtlAppendUnicodeToString @ 0x1402539E0 (RtlAppendUnicodeToString.c)
 *     RtlGetAce @ 0x14026C9B0 (RtlGetAce.c)
 *     RtlStringCbPrintfW @ 0x14026CAF0 (RtlStringCbPrintfW.c)
 *     RtlAppendUnicodeStringToString @ 0x14026D4E0 (RtlAppendUnicodeStringToString.c)
 *     SeConvertSecurityDescriptorToStringSecurityDescriptor @ 0x14026DA40 (SeConvertSecurityDescriptorToStringSecurityDescriptor.c)
 *     RtlGetDaclSecurityDescriptor @ 0x140285CC0 (RtlGetDaclSecurityDescriptor.c)
 *     ExFreeHeapPool @ 0x14034C810 (ExFreeHeapPool.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     AdtpFormatPrefix @ 0x1405C392C (AdtpFormatPrefix.c)
 *     StringCchPrintfExW @ 0x1405C3A10 (StringCchPrintfExW.c)
 *     RtlIntegerToUnicodeString @ 0x14060F3A0 (RtlIntegerToUnicodeString.c)
 *     RtlAddAce @ 0x140653F50 (RtlAddAce.c)
 *     RtlSetDaclSecurityDescriptor @ 0x140655320 (RtlSetDaclSecurityDescriptor.c)
 *     RtlCreateAcl @ 0x140655390 (RtlCreateAcl.c)
 *     RtlCreateSecurityDescriptor @ 0x1406F2C90 (RtlCreateSecurityDescriptor.c)
 *     AdtpBuildPrivilegeAuditString @ 0x14096D5A4 (AdtpBuildPrivilegeAuditString.c)
 *     AdtpBuildAccessesString @ 0x14096E498 (AdtpBuildAccessesString.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
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
  NTSTATUS DaclSecurityDescriptor; // ebx
  size_t v20; // r12
  int v21; // edx
  int v22; // edi
  unsigned __int16 v23; // bx
  unsigned int v24; // eax
  __int64 v25; // rax
  unsigned int v26; // eax
  unsigned int v27; // ebx
  UNICODE_STRING *p_Source; // rdx
  const UNICODE_STRING *v29; // rdx
  ULONG v30; // r14d
  ULONG v31; // edx
  unsigned __int8 *v32; // r14
  unsigned __int16 *v33; // r15
  ULONG v34; // ebx
  ACL *v35; // rax
  ACL *v36; // rsi
  int v37; // eax
  UNICODE_STRING *v38; // rbx
  __int64 v39; // r14
  __int64 v40; // rcx
  unsigned int v41; // ecx
  __int16 v42; // r14
  UNICODE_STRING *v43; // rdx
  unsigned int v44; // ebx
  UNICODE_STRING *v45; // rdx
  ULONG v46; // ebx
  NTSTATUS appended; // eax
  size_t Length; // r14
  unsigned int v49; // edi
  char *PoolWithTag; // rsi
  __int64 v51; // rcx
  __int16 v52; // di
  __int64 v54; // [rsp+30h] [rbp-D0h]
  BOOLEAN DaclPresent[8]; // [rsp+50h] [rbp-B0h] BYREF
  UNICODE_STRING Destination; // [rsp+58h] [rbp-A8h] BYREF
  size_t pcchRemaining; // [rsp+68h] [rbp-98h] BYREF
  PVOID Ace[2]; // [rsp+70h] [rbp-90h] BYREF
  BOOLEAN DaclDefaulted[4]; // [rsp+80h] [rbp-80h] BYREF
  int v60; // [rsp+84h] [rbp-7Ch]
  UNICODE_STRING v61; // [rsp+88h] [rbp-78h] BYREF
  UNICODE_STRING v62; // [rsp+98h] [rbp-68h] BYREF
  UNICODE_STRING v63; // [rsp+A8h] [rbp-58h] BYREF
  UNICODE_STRING Source; // [rsp+B8h] [rbp-48h] BYREF
  UNICODE_STRING v65; // [rsp+C8h] [rbp-38h] BYREF
  UNICODE_STRING v66; // [rsp+D8h] [rbp-28h] BYREF
  UNICODE_STRING v67; // [rsp+E8h] [rbp-18h] BYREF
  UNICODE_STRING v68; // [rsp+F8h] [rbp-8h] BYREF
  void *Src[2]; // [rsp+108h] [rbp+8h] BYREF
  _BYTE *v70; // [rsp+118h] [rbp+18h]
  __int64 v71; // [rsp+120h] [rbp+20h]
  wchar_t pszFormat[8]; // [rsp+128h] [rbp+28h] BYREF
  UNICODE_STRING v73; // [rsp+138h] [rbp+38h] BYREF
  int v74; // [rsp+148h] [rbp+48h]
  wchar_t pszDest[8]; // [rsp+158h] [rbp+58h] BYREF
  __int128 v76; // [rsp+168h] [rbp+68h]
  __int64 v77; // [rsp+178h] [rbp+78h]
  char v78; // [rsp+180h] [rbp+80h] BYREF
  char v79; // [rsp+198h] [rbp+98h] BYREF
  char v80; // [rsp+1B8h] [rbp+B8h] BYREF
  char v81; // [rsp+1D8h] [rbp+D8h] BYREF
  char v82; // [rsp+1F8h] [rbp+F8h] BYREF
  char v83; // [rsp+218h] [rbp+118h] BYREF
  char v84; // [rsp+238h] [rbp+138h] BYREF
  char v85; // [rsp+258h] [rbp+158h] BYREF

  v70 = a12;
  Ace[0] = a2;
  pcchRemaining = a7;
  v15 = 0LL;
  v71 = a8;
  v16 = 0;
  DaclPresent[0] = 0;
  v17 = 0;
  v18 = 1;
  *(_DWORD *)(&v61.MaximumLength + 1) = 0;
  *(_DWORD *)(&v65.MaximumLength + 1) = 0;
  *(_DWORD *)(&v66.MaximumLength + 1) = 0;
  *(_DWORD *)(&v67.MaximumLength + 1) = 0;
  *(_DWORD *)(&v68.MaximumLength + 1) = 0;
  *(_DWORD *)(&v63.MaximumLength + 1) = 0;
  *(_DWORD *)(&Source.MaximumLength + 1) = 0;
  *(_DWORD *)(&v73.MaximumLength + 1) = 0;
  *(_QWORD *)pszFormat = 0LL;
  *(_OWORD *)Src = 0LL;
  Destination = 0LL;
  v62 = 0LL;
  while ( (v18 & a5) == 0 )
  {
    ++v16;
    v18 *= 2;
    if ( v16 >= 0x20 )
      goto LABEL_6;
  }
  v17 = v16;
LABEL_6:
  *(_DWORD *)&v73.Length = 1310720;
  v73.Buffer = (wchar_t *)&v78;
  *(_DWORD *)&v61.Length = 1966080;
  v61.Buffer = (wchar_t *)&v79;
  DaclSecurityDescriptor = AdtpFormatPrefix(&v61, 0x709u);
  if ( DaclSecurityDescriptor < 0 )
    goto LABEL_129;
  *(_DWORD *)&v65.Length = 1966080;
  v65.Buffer = (wchar_t *)&v80;
  DaclSecurityDescriptor = AdtpFormatPrefix(&v65, 0x70Au);
  if ( DaclSecurityDescriptor < 0 )
    goto LABEL_129;
  *(_DWORD *)&v66.Length = 1966080;
  v66.Buffer = (wchar_t *)&v81;
  DaclSecurityDescriptor = AdtpFormatPrefix(&v66, 0x713u);
  if ( DaclSecurityDescriptor < 0 )
    goto LABEL_129;
  *(_DWORD *)&v67.Length = 1966080;
  v67.Buffer = (wchar_t *)&v82;
  DaclSecurityDescriptor = AdtpFormatPrefix(&v67, 0x714u);
  if ( DaclSecurityDescriptor < 0 )
    goto LABEL_129;
  *(_DWORD *)&v68.Length = 1966080;
  v68.Buffer = (wchar_t *)&v83;
  DaclSecurityDescriptor = AdtpFormatPrefix(&v68, 0x712u);
  if ( DaclSecurityDescriptor < 0 )
    goto LABEL_129;
  *(_DWORD *)&v63.Length = 1966080;
  v63.Buffer = (wchar_t *)&v84;
  DaclSecurityDescriptor = AdtpFormatPrefix(&v63, 0x716u);
  if ( DaclSecurityDescriptor < 0 )
    goto LABEL_129;
  *(_DWORD *)&Source.Length = 1966080;
  Source.Buffer = (wchar_t *)&v85;
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
  v20 = LOWORD(Src[0]);
  v60 = LOWORD(Src[0]) >> 1;
  v21 = *(_DWORD *)(pcchRemaining + 4LL * v17);
  v22 = v21 & 0xFF0000;
  if ( (v21 & 0xFF0000u) > 0x200000 )
  {
    if ( v22 != 3145728
      && v22 != 0x400000
      && v22 != 5242880
      && v22 != 6291456
      && v22 != 7340032
      && v22 != 0x800000
      && v22 != 9437184
      && v22 != 10485760 )
    {
      goto LABEL_117;
    }
LABEL_92:
    v46 = pcchRemaining;
LABEL_94:
    if ( v22 == 3145728 )
      v46 = 1803;
    if ( v22 == 0x400000 )
      v46 = 1804;
    if ( v22 == 5242880 )
      v46 = 1806;
    if ( v22 == 6291456 )
      v46 = 1807;
    if ( v22 == 7340032 )
      v46 = 1808;
    if ( !v22 )
      v46 = 1809;
    if ( v22 == 0x800000 )
      v46 = 1805;
    if ( v22 == 9437184 )
      v46 = 1841;
    if ( v22 == 10485760 )
      v46 = 1856;
    Destination.Buffer = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 0x4EuLL, 0x6B416553u);
    if ( !Destination.Buffer )
      goto LABEL_113;
    *(_DWORD *)&Destination.Length = 5111808;
    RtlAppendUnicodeToString(&Destination, L"%%");
    DaclSecurityDescriptor = RtlIntegerToUnicodeString(v46, 0xAu, &v73);
    if ( DaclSecurityDescriptor < 0 )
      goto LABEL_129;
    v29 = &v73;
LABEL_116:
    RtlAppendUnicodeStringToString(&Destination, v29);
LABEL_117:
    appended = RtlAppendUnicodeToString(&Destination, L"\r\n\t\t\t\t");
    Length = Destination.Length;
    DaclSecurityDescriptor = appended;
    v49 = v60 + 1 + (Destination.Length >> 1);
    PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, 2LL * v49, 0x6B416553u);
    if ( PoolWithTag )
    {
      *v70 = 1;
      if ( (_WORD)v20 )
        memmove(PoolWithTag, Src[1], v20);
      if ( (_WORD)Length )
        memmove(&PoolWithTag[v20], Destination.Buffer, Length);
      v51 = v71;
      *(_WORD *)&PoolWithTag[2 * v49 - 2] = 0;
      v52 = 2 * v49;
      *(_WORD *)(v51 + 2) = v52;
      *(_QWORD *)(v51 + 8) = PoolWithTag;
      *(_WORD *)v51 = v52 - 2;
    }
    else
    {
      DaclSecurityDescriptor = -1073741801;
    }
    v36 = 0LL;
    goto LABEL_125;
  }
  if ( v22 == 0x200000 )
  {
LABEL_77:
    *(_QWORD *)pszFormat = (unsigned __int16)v21;
    v73.Buffer = (wchar_t *)(unsigned __int16)v21;
    wcscpy(&v73.Length, L"\x01");
    *(_DWORD *)(&v73.MaximumLength + 1) = 1;
    v74 = 0;
    DaclSecurityDescriptor = AdtpBuildPrivilegeAuditString(&v73, &v62, 0LL, 0LL);
    if ( DaclSecurityDescriptor < 0 )
      goto LABEL_129;
    v44 = (v62.Length >> 1) + 27;
    Destination.Buffer = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 2LL * v44, 0x6B416553u);
    if ( Destination.Buffer )
    {
      Destination.Length = 0;
      Destination.MaximumLength = 2 * v44;
      if ( v22 == 0x200000 )
        v45 = &v61;
      else
        v45 = &v68;
      RtlAppendUnicodeStringToString(&Destination, v45);
      RtlAppendUnicodeStringToString(&Destination, &v62);
      if ( v62.Buffer )
      {
        ExFreeHeapPool((ULONG_PTR)v62.Buffer);
        v62.Buffer = 0LL;
      }
      goto LABEL_117;
    }
LABEL_113:
    DaclSecurityDescriptor = -1073741801;
    goto LABEL_129;
  }
  if ( !v22 )
    goto LABEL_92;
  if ( v22 != 0x10000 && v22 != 0x20000 && v22 != 196608 && v22 != 0x40000 )
  {
    if ( v22 != 327680 && v22 != 393216 )
    {
      if ( v22 != 458752 )
      {
        if ( v22 != 0x100000 )
          goto LABEL_117;
        goto LABEL_77;
      }
      v46 = 1830;
      goto LABEL_94;
    }
    v23 = 2;
    wcscpy(pszFormat, L"# %d");
    Ace[0] = (PVOID)131074;
    Ace[1] = (PVOID)L"-";
    if ( v22 == 393216 )
    {
      v26 = *(_DWORD *)(a4 + 8);
      if ( !v26 )
        goto LABEL_35;
      if ( (unsigned __int16)v21 < v26 )
      {
        v25 = *(_QWORD *)(a4 + 16);
        goto LABEL_34;
      }
    }
    else
    {
      v24 = *(_DWORD *)(a3 + 8);
      if ( !v24 )
        goto LABEL_35;
      if ( (unsigned __int16)v21 < v24 )
      {
        v25 = *(_QWORD *)(a3 + 16);
LABEL_34:
        *(_OWORD *)Ace = *(_OWORD *)(v25 + 16LL * (unsigned __int16)v21);
        v23 = (unsigned __int16)Ace[0];
LABEL_35:
        if ( v23 <= 2u )
        {
          LODWORD(v54) = (unsigned __int16)v21;
          pcchRemaining = 0LL;
          if ( StringCchPrintfExW(pszDest, 0x14uLL, 0LL, &pcchRemaining, 0, pszFormat, v54) >= 0 )
          {
            WORD1(Ace[0]) = 40;
            v23 = 2 * (20 - pcchRemaining);
            LOWORD(Ace[0]) = v23;
            Ace[1] = pszDest;
          }
        }
        v27 = v23 + 54;
        Destination.Buffer = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v27, 0x6B416553u);
        if ( !Destination.Buffer )
          goto LABEL_113;
        Destination.Length = 0;
        Destination.MaximumLength = 2 * v27;
        if ( v22 == 327680 )
          p_Source = &v63;
        else
          p_Source = &Source;
        RtlAppendUnicodeStringToString(&Destination, p_Source);
        v29 = (const UNICODE_STRING *)Ace;
        goto LABEL_116;
      }
    }
    DaclSecurityDescriptor = -1073741811;
    goto LABEL_129;
  }
  pcchRemaining = 0LL;
  v77 = 0LL;
  DaclPresent[0] = 0;
  Ace[0] = 0LL;
  v30 = (unsigned __int16)v21;
  *(_OWORD *)pszDest = 0LL;
  if ( ((v22 - 0x10000) & 0xFFFEFFFF) != 0 )
    a3 = a4;
  v76 = 0LL;
  DaclSecurityDescriptor = RtlGetDaclSecurityDescriptor(
                             *(PSECURITY_DESCRIPTOR *)a3,
                             DaclPresent,
                             (PACL *)&pcchRemaining,
                             DaclDefaulted);
  if ( DaclSecurityDescriptor >= 0 )
  {
    if ( DaclPresent[0] )
    {
      v31 = v30;
      v32 = (unsigned __int8 *)pcchRemaining;
      DaclSecurityDescriptor = RtlGetAce((PACL)pcchRemaining, v31, Ace);
      if ( DaclSecurityDescriptor >= 0 )
      {
        v33 = (unsigned __int16 *)Ace[0];
        v34 = *((unsigned __int16 *)Ace[0] + 1) + 8;
        v35 = (ACL *)ExAllocatePoolWithTag(PagedPool, v34, 0x6B416553u);
        v36 = v35;
        if ( !v35 )
          goto LABEL_113;
        DaclSecurityDescriptor = RtlCreateAcl(v35, v34, *v32);
        if ( DaclSecurityDescriptor < 0
          || (DaclSecurityDescriptor = RtlAddAce(v36, *v32, 0, v33, v33[1]), DaclSecurityDescriptor < 0)
          || (DaclSecurityDescriptor = RtlCreateSecurityDescriptor(pszDest, 1u), DaclSecurityDescriptor < 0)
          || (DaclSecurityDescriptor = RtlSetDaclSecurityDescriptor(pszDest, 1u, v36, 0), DaclSecurityDescriptor < 0) )
        {
LABEL_127:
          if ( v36 )
            ExFreeHeapPool((ULONG_PTR)v36);
          goto LABEL_129;
        }
        v37 = SeConvertSecurityDescriptorToStringSecurityDescriptor(
                (__int64)pszDest,
                1LL,
                4LL,
                pszFormat,
                &pcchRemaining);
        v15 = *(_QWORD *)pszFormat;
        DaclSecurityDescriptor = v37;
        if ( v37 < 0 )
        {
          if ( v37 == -1073741801 )
            goto LABEL_125;
          v38 = &v73;
          if ( StringCchPrintfW(&v73.Length, 0x10uLL, L"<0x%08X>", (unsigned int)v37) < 0 )
            v38 = (UNICODE_STRING *)L"-";
        }
        else
        {
          v38 = *(UNICODE_STRING **)pszFormat;
        }
        v39 = -1LL;
        v40 = -1LL;
        do
          ++v40;
        while ( *(&v38->Length + v40) );
        v41 = v40 + 1;
        if ( 2 * (unsigned __int64)v41 > 0xFFFF )
        {
          DaclSecurityDescriptor = RtlStringCbPrintfW(&v73.Length, 0x10uLL, L"%%%%%u", 1828LL);
          if ( DaclSecurityDescriptor < 0 )
            goto LABEL_125;
          v38 = &v73;
          do
            ++v39;
          while ( *(&v73.Length + v39) );
          v41 = v39 + 1;
        }
        v42 = v41 + 27;
        Destination.Buffer = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 2LL * (v41 + 27), 0x6B416553u);
        if ( Destination.Buffer )
        {
          Destination.Length = 0;
          Destination.MaximumLength = 2 * v42;
          switch ( v22 )
          {
            case 65536:
              v43 = &v61;
              break;
            case 131072:
              v43 = &v65;
              break;
            case 196608:
              v43 = &v66;
              break;
            default:
              v43 = &v67;
              break;
          }
          RtlAppendUnicodeStringToString(&Destination, v43);
          RtlAppendUnicodeToString(&Destination, &v38->Length);
          if ( v15 )
          {
            ExFreeHeapPool(v15);
            v15 = 0LL;
          }
          ExFreeHeapPool((ULONG_PTR)v36);
          goto LABEL_117;
        }
        DaclSecurityDescriptor = -1073741801;
LABEL_125:
        if ( v15 )
          ExFreeHeapPool(v15);
        goto LABEL_127;
      }
    }
  }
LABEL_129:
  if ( v62.Buffer )
    ExFreeHeapPool((ULONG_PTR)v62.Buffer);
  if ( Src[1] )
    ExFreeHeapPool((ULONG_PTR)Src[1]);
  if ( Destination.Buffer )
    ExFreeHeapPool((ULONG_PTR)Destination.Buffer);
  return (unsigned int)DaclSecurityDescriptor;
}
