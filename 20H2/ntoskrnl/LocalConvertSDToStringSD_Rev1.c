/*
 * XREFs of LocalConvertSDToStringSD_Rev1 @ 0x1406FB214
 * Callers:
 *     SeConvertSecurityDescriptorToStringSecurityDescriptor @ 0x140340880 (SeConvertSecurityDescriptorToStringSecurityDescriptor.c)
 * Callees:
 *     RtlGetDaclSecurityDescriptor @ 0x140244CE0 (RtlGetDaclSecurityDescriptor.c)
 *     swprintf_s @ 0x1403D5F80 (swprintf_s.c)
 *     wcscpy_s @ 0x1403D7900 (wcscpy_s.c)
 *     RtlGetSaclSecurityDescriptor @ 0x140652650 (RtlGetSaclSecurityDescriptor.c)
 *     RtlNtStatusToDosError @ 0x1406B2FF0 (RtlNtStatusToDosError.c)
 *     RtlGetControlSecurityDescriptor @ 0x1406FB1F0 (RtlGetControlSecurityDescriptor.c)
 *     LocalGetStringForControl @ 0x1406FB584 (LocalGetStringForControl.c)
 *     LocalConvertAclToString @ 0x1406FCD64 (LocalConvertAclToString.c)
 *     SddlpAlloc @ 0x1406FDB18 (SddlpAlloc.c)
 *     RtlGetOwnerSecurityDescriptor @ 0x1407119B0 (RtlGetOwnerSecurityDescriptor.c)
 *     RtlGetGroupSecurityDescriptor @ 0x14075B760 (RtlGetGroupSecurityDescriptor.c)
 *     LocalGetStringForSid @ 0x140928910 (LocalGetStringForSid.c)
 *     SddlFilterSacl @ 0x140929038 (SddlFilterSacl.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

ULONG __fastcall LocalConvertSDToStringSD_Rev1(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        void *a4,
        __int16 a5,
        wchar_t **a6,
        unsigned int *a7)
{
  int StringForSid; // r13d
  int OwnerSecurityDescriptor; // eax
  unsigned int v10; // esi
  PSID v11; // r15
  PSID v12; // r12
  PACL v13; // rdi
  __int16 v14; // bx
  unsigned int v15; // ebx
  int SaclSecurityDescriptor; // eax
  int v17; // edx
  int v18; // r8d
  WORD v19; // bx
  char v20; // r14
  BOOLEAN v21; // cl
  PVOID v22; // rbx
  __int64 v23; // r15
  PVOID v24; // rdi
  PVOID v25; // r12
  __int64 v26; // rax
  wchar_t *v27; // rcx
  size_t v28; // r14
  __int64 v29; // rdi
  size_t v30; // rdx
  wchar_t *v31; // rcx
  wchar_t **v32; // r12
  __int64 v33; // rax
  __int64 v34; // rax
  void *v36; // rax
  ULONG v37; // ebx
  int v38; // eax
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rax
  size_t v43; // rdx
  wchar_t *v44; // rcx
  __int64 v45; // rdi
  __int64 v46; // [rsp+20h] [rbp-91h]
  size_t Size; // [rsp+50h] [rbp-61h] BYREF
  PVOID v48; // [rsp+58h] [rbp-59h]
  PVOID v49; // [rsp+60h] [rbp-51h] BYREF
  PVOID P; // [rsp+68h] [rbp-49h] BYREF
  PVOID v51; // [rsp+70h] [rbp-41h]
  PACL Sacl; // [rsp+78h] [rbp-39h] BYREF
  PVOID v53; // [rsp+80h] [rbp-31h]
  PVOID v54; // [rsp+88h] [rbp-29h] BYREF
  wchar_t *Src; // [rsp+90h] [rbp-21h] BYREF
  PSID Owner; // [rsp+98h] [rbp-19h] BYREF
  PSID Group; // [rsp+A0h] [rbp-11h] BYREF
  PACL Dacl; // [rsp+A8h] [rbp-9h] BYREF
  ULONG DaclDefaulted; // [rsp+100h] [rbp+4Fh] BYREF
  __int64 SaclPresent; // [rsp+108h] [rbp+57h] BYREF
  BOOLEAN DaclPresent; // [rsp+110h] [rbp+5Fh] BYREF
  WORD Control; // [rsp+118h] [rbp+67h] BYREF

  SaclPresent = a2;
  LODWORD(Size) = 0;
  StringForSid = 0;
  Owner = 0LL;
  OwnerSecurityDescriptor = 0;
  Group = 0LL;
  v10 = 0;
  Dacl = 0LL;
  v11 = 0LL;
  Sacl = 0LL;
  v12 = 0LL;
  v51 = 0LL;
  LODWORD(v13) = 0;
  LOBYTE(SaclPresent) = 0;
  DaclPresent = 0;
  v53 = 0LL;
  v48 = 0LL;
  v54 = 0LL;
  Src = 0LL;
  Control = 0;
  P = 0LL;
  v49 = 0LL;
  if ( !a4 || !a6 )
    return 87;
  v14 = a5;
  if ( (a5 & 1) != 0 )
  {
    OwnerSecurityDescriptor = RtlGetOwnerSecurityDescriptor(a4, &Owner, (PBOOLEAN)&DaclDefaulted);
    if ( OwnerSecurityDescriptor < 0 )
      goto LABEL_68;
    v11 = Owner;
  }
  if ( (v14 & 2) != 0 )
  {
    OwnerSecurityDescriptor = RtlGetGroupSecurityDescriptor(a4, &Group, (PBOOLEAN)&DaclDefaulted);
    v12 = Group;
  }
  if ( OwnerSecurityDescriptor < 0 )
    goto LABEL_68;
  if ( (v14 & 4) != 0 )
    OwnerSecurityDescriptor = RtlGetDaclSecurityDescriptor(a4, &DaclPresent, &Dacl, (PBOOLEAN)&DaclDefaulted);
  if ( OwnerSecurityDescriptor < 0 )
    goto LABEL_68;
  v15 = v14 & 0x1F8;
  if ( v15 )
  {
    SaclSecurityDescriptor = RtlGetSaclSecurityDescriptor(a4, (PBOOLEAN)&SaclPresent, &Sacl, (PBOOLEAN)&DaclDefaulted);
    if ( SaclSecurityDescriptor < 0 )
      return RtlNtStatusToDosError(SaclSecurityDescriptor);
    v13 = Sacl;
    if ( (_BYTE)SaclPresent )
    {
      if ( Sacl )
      {
        SddlFilterSacl(Sacl, 0LL, &Size, v15);
        v36 = (void *)SddlpAlloc((unsigned int)Size);
        v51 = v36;
        if ( !v36 )
        {
          OwnerSecurityDescriptor = -1073741801;
          goto LABEL_68;
        }
        SddlFilterSacl(v13, v36, &Size, v15);
        LODWORD(v13) = (_DWORD)v51;
      }
    }
  }
  OwnerSecurityDescriptor = RtlGetControlSecurityDescriptor(a4, &Control, &DaclDefaulted);
  if ( OwnerSecurityDescriptor < 0 )
  {
LABEL_68:
    v37 = RtlNtStatusToDosError(OwnerSecurityDescriptor);
    if ( v51 )
      ExFreePoolWithTag(v51, 0);
    return v37;
  }
  if ( v11 )
  {
    StringForSid = LocalGetStringForSid(v11, v46, 1);
    if ( StringForSid )
      goto LABEL_46;
  }
  if ( v12 )
  {
    v38 = LocalGetStringForSid(v12, v46, 1);
    v12 = 0LL;
    StringForSid = v38;
    if ( v38 )
      goto LABEL_46;
  }
  v19 = Control;
  if ( Control )
  {
    StringForSid = LocalGetStringForControl(Control, 1LL, &P);
    if ( StringForSid )
      goto LABEL_46;
    StringForSid = LocalGetStringForControl(v19, 2LL, &v49);
    if ( StringForSid )
      goto LABEL_46;
  }
  v20 = SaclPresent;
  if ( (_BYTE)SaclPresent )
  {
    LOBYTE(v17) = SaclPresent;
    StringForSid = LocalConvertAclToString(
                     (_DWORD)v13,
                     v17,
                     0,
                     (unsigned int)&v54,
                     (__int64)&Size,
                     (__int64)v12,
                     (__int64)v12,
                     (_DWORD)v12,
                     1);
    if ( StringForSid )
      goto LABEL_46;
    v10 = Size;
  }
  v21 = DaclPresent;
  if ( DaclPresent )
  {
    LOBYTE(v17) = DaclPresent;
    LOBYTE(v18) = 1;
    StringForSid = LocalConvertAclToString(
                     (_DWORD)Dacl,
                     v17,
                     v18,
                     (unsigned int)&Src,
                     (__int64)&Size,
                     (__int64)v12,
                     (__int64)v12,
                     (_DWORD)v12,
                     1);
    if ( StringForSid )
      goto LABEL_46;
    v10 += Size;
    v21 = DaclPresent;
  }
  v22 = v53;
  v23 = -1LL;
  if ( v53 )
  {
    v39 = -1LL;
    do
      ++v39;
    while ( *((_WORD *)v53 + v39) != (_WORD)v12 );
    v10 += 2 * v39 + 4;
  }
  v24 = v48;
  if ( v48 )
  {
    v40 = -1LL;
    do
      ++v40;
    while ( *((_WORD *)v48 + v40) != (_WORD)v12 );
    v10 += 2 * v40 + 4;
  }
  v25 = P;
  if ( v21 )
  {
    v10 += 4;
    if ( P )
    {
      v26 = -1LL;
      do
        ++v26;
      while ( *((_WORD *)P + v26) );
      v10 += 2 * v26;
    }
  }
  if ( v20 )
  {
    v10 += 4;
    if ( v49 )
    {
      v41 = -1LL;
      do
        ++v41;
      while ( *((_WORD *)v49 + v41) );
      v10 += 2 * v41;
    }
  }
  v27 = (wchar_t *)SddlpAlloc(v10 + 2LL);
  *a6 = v27;
  if ( !v27 )
  {
    StringForSid = 8;
    goto LABEL_47;
  }
  v28 = ((unsigned __int64)v10 + 2) >> 1;
  LODWORD(v29) = 0;
  if ( v22 )
  {
    LODWORD(v46) = 58;
    swprintf_s(v27, v28, L"%ws%wc%ws", L"O", v46, v22);
    v29 = -1LL;
    v27 = *a6;
    do
      ++v29;
    while ( v27[v29] );
  }
  if ( v48 )
  {
    LODWORD(v46) = 58;
    swprintf_s(&v27[(unsigned int)v29], v28 - (unsigned int)v29, L"%ws%wc%ws", L"G", v46, v48);
    v27 = *a6;
    v42 = -1LL;
    do
      ++v42;
    while ( (*a6)[(unsigned int)v29 + v42] );
    LODWORD(v29) = v42 + v29;
  }
  if ( DaclPresent )
  {
    v30 = v28 - (unsigned int)v29;
    v31 = &v27[(unsigned int)v29];
    LODWORD(v46) = 58;
    if ( v25 )
      swprintf_s(v31, v30, L"%ws%wc%ws", L"D", v46, v25);
    else
      swprintf_s(v31, v30, L"%ws%wc", L"D", v46);
    v32 = a6;
    v33 = -1LL;
    v27 = *a6;
    do
      ++v33;
    while ( (*a6)[(unsigned int)v29 + v33] );
    v29 = (unsigned int)(v33 + v29);
    if ( Src )
    {
      wcscpy_s(&v27[v29], v28 - (unsigned int)v29, Src);
      v27 = *v32;
      v34 = -1LL;
      do
        ++v34;
      while ( (*v32)[v29 + v34] );
      LODWORD(v29) = v34 + v29;
    }
  }
  else
  {
    v32 = a6;
  }
  if ( (_BYTE)SaclPresent )
  {
    v43 = v28 - (unsigned int)v29;
    v44 = &v27[(unsigned int)v29];
    LODWORD(v46) = 58;
    if ( v49 )
      swprintf_s(v44, v43, L"%ws%wc%ws", L"S", v46, v49);
    else
      swprintf_s(v44, v43, L"%ws%wc", L"S", v46);
    do
      ++v23;
    while ( (*v32)[(unsigned int)v29 + v23] );
    v45 = (unsigned int)(v23 + v29);
    if ( v54 )
      wcscpy_s(&(*v32)[v45], v28 - (unsigned int)v45, (const wchar_t *)v54);
  }
  if ( a7 )
    *a7 = v10 >> 1;
LABEL_46:
  v24 = v48;
LABEL_47:
  if ( v53 )
    ExFreePoolWithTag(v53, 0);
  if ( v24 )
    ExFreePoolWithTag(v24, 0);
  if ( v54 )
    ExFreePoolWithTag(v54, 0);
  if ( Src )
    ExFreePoolWithTag(Src, 0);
  if ( v49 )
    ExFreePoolWithTag(v49, 0);
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( v51 )
    ExFreePoolWithTag(v51, 0);
  return StringForSid;
}
