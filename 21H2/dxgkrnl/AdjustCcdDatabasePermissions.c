/*
 * XREFs of AdjustCcdDatabasePermissions @ 0x1C02EFD10
 * Callers:
 *     AdjustCcdDatabasePermissions @ 0x1C02EFD10 (AdjustCcdDatabasePermissions.c)
 *     DxgkPrepareCcdDatabaseForAccess @ 0x1C02F07A8 (DxgkPrepareCcdDatabaseForAccess.c)
 * Callees:
 *     ??$invoke@P6AXPEAU_KEY_BASIC_INFORMATION@@@ZAEAPEAU1@@wistd@@YAX$$QEAP6AXPEAU_KEY_BASIC_INFORMATION@@@ZAEAPEAU1@@Z @ 0x1C0028784 (--$invoke@P6AXPEAU_KEY_BASIC_INFORMATION@@@ZAEAPEAU1@@wistd@@YAX$$QEAP6AXPEAU_KEY_BASIC_INFORMAT.c)
 *     memset @ 0x1C0028F00 (memset.c)
 *     ??$?8V?$unique_storage@U?$resource_policy@PEAX$$A6AXPEAX@Z$1?FreePoolWithTag@?$pool_helpers@PEAX$0ELGHHIEE@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@@wil@@YA_NAEBV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAX$$A6AXPEAX@Z$1?FreePoolWithTag@?$pool_helpers@PEAX$0ELGHHIEE@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@@0@$$T@Z @ 0x1C005DD14 (--$-8V-$unique_storage@U-$resource_policy@PEAX$$A6AXPEAX@Z$1-FreePoolWithTag@-$pool_helpers@PEAX.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_KEY_BASIC_INFORMATION@@$$A6AXPEAU1@@Z$1?FreePoolWithTag@?$pool_helpers@PEAU_KEY_BASIC_INFORMATION@@$0ELGHHIEE@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_KEY_BASIC_INFORMATION@@@Z @ 0x1C005DD58 (-reset@-$unique_storage@U-$resource_policy@PEAU_KEY_BASIC_INFORMATION@@$$A6AXPEAU1@@Z$1-FreePool.c)
 *     _CcdOpenRegistrySubkey @ 0x1C01364B8 (_CcdOpenRegistrySubkey.c)
 *     AdjustCcdDatabasePermissions @ 0x1C02EFD10 (AdjustCcdDatabasePermissions.c)
 */

__int64 __fastcall AdjustCcdDatabasePermissions(__int64 a1, const WCHAR *a2, unsigned int a3, void *a4)
{
  __int64 v6; // rax
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rsi
  __int64 v12; // rax
  ULONG v13; // eax
  PVOID PoolWithTag; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  PSECURITY_DESCRIPTOR v17; // rdi
  __int64 v18; // rax
  NTSTATUS DaclSecurityDescriptor; // eax
  __int64 v20; // rdx
  PACL v21; // rcx
  ULONG v22; // ebx
  NTSTATUS v23; // eax
  unsigned __int8 v24; // al
  PSECURITY_DESCRIPTOR v25; // rbx
  __int64 v26; // rax
  ULONG v27; // eax
  ULONG v28; // esi
  struct _ACL *v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  struct _ACL *v32; // r14
  __int64 v33; // rax
  NTSTATUS Acl; // eax
  __int64 v35; // rdx
  __int64 v36; // rcx
  NTSTATUS v37; // eax
  NTSTATUS v38; // eax
  NTSTATUS v39; // eax
  NTSTATUS v40; // eax
  NTSTATUS v41; // eax
  __int64 v42; // rdx
  __int64 v43; // rcx
  ULONG v44; // eax
  PVOID v45; // rax
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // rax
  NTSTATUS v49; // eax
  NTSTATUS v50; // eax
  unsigned int v51; // r15d
  unsigned int *v52; // rbx
  ULONG i; // r14d
  PVOID v54; // rax
  __int64 v55; // rdx
  __int64 v56; // rcx
  NTSTATUS v57; // eax
  __int64 v58; // rdx
  __int64 v59; // rsi
  __int64 v60; // rax
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+38h] [rbp-39h] BYREF
  unsigned __int8 DaclDefaulted[8]; // [rsp+40h] [rbp-31h] BYREF
  __int64 (__fastcall *v63)(_QWORD); // [rsp+48h] [rbp-29h] BYREF
  size_t Size; // [rsp+50h] [rbp-21h] BYREF
  PVOID Ace; // [rsp+58h] [rbp-19h] BYREF
  ULONG Length; // [rsp+60h] [rbp-11h] BYREF
  PACL Dacl; // [rsp+68h] [rbp-9h] BYREF
  HANDLE Handle; // [rsp+70h] [rbp-1h] BYREF
  ULONG v69; // [rsp+78h] [rbp+7h] BYREF
  _OWORD AbsoluteSecurityDescriptor[2]; // [rsp+80h] [rbp+Fh] BYREF
  __int64 v71; // [rsp+A0h] [rbp+2Fh]
  unsigned __int8 DaclPresent; // [rsp+E8h] [rbp+77h] BYREF

  if ( a3 > 5 )
  {
    v6 = WdLogNewEntry5_WdAssertion(a1, a2);
    WdLogEvent5_WdAssertion(v6);
    return 0LL;
  }
  v69 = 2;
  Handle = 0LL;
  v8 = CcdOpenRegistrySubkey((int)&Handle, 983103, a1, a2, &v69);
  v11 = v8;
  if ( v8 < 0 )
  {
    v12 = WdLogNewEntry5_WdError(v10, v9);
    *(_QWORD *)(v12 + 24) = v11;
    WdLogEvent5_WdError(v12);
    goto LABEL_72;
  }
  v13 = 336;
  SecurityDescriptor = 0LL;
  for ( Length = 336; ; v13 = Length )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, v13, 0x4B677844u);
    wil::details::unique_storage<wil::details::resource_policy<_KEY_BASIC_INFORMATION *,void (_KEY_BASIC_INFORMATION *),&public: static void wil::details::pool_helpers<_KEY_BASIC_INFORMATION *,1265072196>::FreePoolWithTag(_KEY_BASIC_INFORMATION *),wistd::integral_constant<unsigned __int64,0>,_KEY_BASIC_INFORMATION *,_KEY_BASIC_INFORMATION *,0,std::nullptr_t>>::reset(
      &SecurityDescriptor,
      PoolWithTag);
    v17 = SecurityDescriptor;
    if ( !SecurityDescriptor )
      break;
    LODWORD(v11) = ZwQuerySecurityObject(Handle, 4u, SecurityDescriptor, Length, &Length);
    if ( (_DWORD)v11 != -1073741789 )
      goto LABEL_10;
  }
  LODWORD(v11) = -1073741801;
LABEL_10:
  if ( (int)v11 < 0 )
  {
    v18 = WdLogNewEntry5_WdError(v16, v15);
    *(_QWORD *)(v18 + 24) = (int)v11;
LABEL_69:
    WdLogEvent5_WdError(v18);
    goto LABEL_70;
  }
  DaclPresent = 0;
  DaclDefaulted[0] = 0;
  Dacl = 0LL;
  DaclSecurityDescriptor = RtlGetDaclSecurityDescriptor(v17, &DaclPresent, &Dacl, DaclDefaulted);
  v11 = DaclSecurityDescriptor;
  if ( DaclSecurityDescriptor < 0 )
  {
LABEL_13:
    v18 = WdLogNewEntry5_WdError(v21, v20);
LABEL_68:
    *(_QWORD *)(v18 + 24) = v11;
    goto LABEL_69;
  }
  if ( !DaclPresent || (v21 = Dacl) == 0LL )
  {
    v18 = WdLogNewEntry5_WdError(v21, v20);
    v11 = -1073741275LL;
    goto LABEL_68;
  }
  DaclPresent = 0;
  v22 = 0;
  if ( !Dacl->AceCount )
    goto LABEL_24;
  while ( 1 )
  {
    SecurityDescriptor = 0LL;
    v23 = RtlGetAce(v21, v22, &SecurityDescriptor);
    v11 = v23;
    if ( v23 < 0 )
      goto LABEL_13;
    if ( !*(_BYTE *)SecurityDescriptor
      && (*((_DWORD *)SecurityDescriptor + 1) & 0x2001F) == 0x2001F
      && RtlEqualSid((char *)SecurityDescriptor + 8, a4) )
    {
      break;
    }
    v21 = Dacl;
    if ( ++v22 >= Dacl->AceCount )
    {
      v24 = DaclPresent;
      goto LABEL_23;
    }
  }
  v21 = Dacl;
  v24 = 1;
  DaclPresent = 1;
LABEL_23:
  if ( !v24 )
  {
LABEL_24:
    v71 = 0LL;
    v25 = 0LL;
    SecurityDescriptor = 0LL;
    memset(AbsoluteSecurityDescriptor, 0, sizeof(AbsoluteSecurityDescriptor));
    if ( v21->AclSize < 8u )
    {
      v26 = WdLogNewEntry5_WdAssertion(v21, v20);
      *(_QWORD *)(v26 + 24) = 2528LL;
      WdLogEvent5_WdAssertion(v26);
    }
    v27 = RtlLengthSid(a4);
    v28 = v27 + Dacl->AclSize + 8;
    v29 = (struct _ACL *)ExAllocatePoolWithTag(PagedPool, v28, 0x4B677844u);
    v32 = v29;
    if ( !v29 )
    {
      v33 = WdLogNewEntry5_WdError(v31, v30);
      v11 = -1073741670LL;
LABEL_43:
      *(_QWORD *)(v33 + 24) = v11;
      WdLogEvent5_WdError(v33);
      goto LABEL_44;
    }
    Acl = RtlCreateAcl(v29, v28, 2u);
    v11 = Acl;
    if ( Acl < 0 )
      goto LABEL_42;
    Ace = 0LL;
    v37 = RtlGetAce(Dacl, 0, &Ace);
    v11 = v37;
    if ( v37 < 0 )
      goto LABEL_42;
    v38 = RtlAddAce(v32, 2u, 0, Ace, Dacl->AclSize - 8);
    v11 = v38;
    if ( v38 < 0 )
      goto LABEL_42;
    v39 = RtlAddAccessAllowedAceEx(v32, 2u, 2u, 0x2001Fu, a4);
    v11 = v39;
    if ( v39 < 0 )
      goto LABEL_42;
    v40 = RtlCreateSecurityDescriptor(AbsoluteSecurityDescriptor, 1u);
    v11 = v40;
    if ( v40 < 0 )
      goto LABEL_42;
    v41 = RtlSetDaclSecurityDescriptor(AbsoluteSecurityDescriptor, 1u, v32, 0);
    v11 = v41;
    if ( v41 < 0 )
      goto LABEL_42;
    if ( !RtlValidSecurityDescriptor(AbsoluteSecurityDescriptor)
      || (v44 = RtlLengthSecurityDescriptor(AbsoluteSecurityDescriptor), LODWORD(Size) = v44, v44 < 0x28) )
    {
      v33 = WdLogNewEntry5_WdError(v43, v42);
      v11 = -1073741595LL;
      goto LABEL_43;
    }
    v45 = ExAllocatePoolWithTag(PagedPool, v44, 0x4B677844u);
    wil::details::unique_storage<wil::details::resource_policy<_KEY_BASIC_INFORMATION *,void (_KEY_BASIC_INFORMATION *),&public: static void wil::details::pool_helpers<_KEY_BASIC_INFORMATION *,1265072196>::FreePoolWithTag(_KEY_BASIC_INFORMATION *),wistd::integral_constant<unsigned __int64,0>,_KEY_BASIC_INFORMATION *,_KEY_BASIC_INFORMATION *,0,std::nullptr_t>>::reset(
      &SecurityDescriptor,
      v45);
    if ( wil::operator==<wil::details::unique_storage<wil::details::resource_policy<void *,void (void *),&public: static void wil::details::pool_helpers<void *,1265072196>::FreePoolWithTag(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>>(&SecurityDescriptor) )
    {
      v48 = WdLogNewEntry5_WdError(v47, v46);
      LODWORD(v11) = -1073741670;
      *(_QWORD *)(v48 + 24) = -1073741670LL;
      WdLogEvent5_WdError(v48);
      v25 = SecurityDescriptor;
LABEL_44:
      if ( v25 )
      {
        SecurityDescriptor = v25;
        v63 = (__int64 (__fastcall *)(_QWORD))wil::details::pool_helpers<_ACL *,1265072196>::FreePoolWithTag;
        wistd::invoke<void (*)(_KEY_BASIC_INFORMATION *),_KEY_BASIC_INFORMATION * &>(&v63, &SecurityDescriptor);
      }
      if ( v32 )
      {
        v63 = (__int64 (__fastcall *)(_QWORD))v32;
        SecurityDescriptor = wil::details::pool_helpers<_ACL *,1265072196>::FreePoolWithTag;
        wistd::invoke<void (*)(_KEY_BASIC_INFORMATION *),_KEY_BASIC_INFORMATION * &>(
          (__int64 (__fastcall **)(_QWORD))&SecurityDescriptor,
          &v63);
      }
      goto LABEL_70;
    }
    v25 = SecurityDescriptor;
    memset(SecurityDescriptor, 0, (unsigned int)Size);
    v49 = RtlAbsoluteToSelfRelativeSD(AbsoluteSecurityDescriptor, v25, (PULONG)&Size);
    v11 = v49;
    if ( v49 < 0 || (v50 = ZwSetSecurityObject(Handle, 4u, v25), v11 = v50, v50 < 0) )
    {
LABEL_42:
      v33 = WdLogNewEntry5_WdError(v36, v35);
      goto LABEL_43;
    }
    if ( v25 )
    {
      v63 = (__int64 (__fastcall *)(_QWORD))v25;
      SecurityDescriptor = wil::details::pool_helpers<_ACL *,1265072196>::FreePoolWithTag;
      wistd::invoke<void (*)(_KEY_BASIC_INFORMATION *),_KEY_BASIC_INFORMATION * &>(
        (__int64 (__fastcall **)(_QWORD))&SecurityDescriptor,
        &v63);
    }
    v63 = (__int64 (__fastcall *)(_QWORD))v32;
    SecurityDescriptor = wil::details::pool_helpers<_ACL *,1265072196>::FreePoolWithTag;
    wistd::invoke<void (*)(_KEY_BASIC_INFORMATION *),_KEY_BASIC_INFORMATION * &>(
      (__int64 (__fastcall **)(_QWORD))&SecurityDescriptor,
      &v63);
  }
  v51 = 544;
  v52 = 0LL;
  SecurityDescriptor = 0LL;
  for ( i = 0; ; ++i )
  {
    do
    {
      if ( !v52 )
      {
        v54 = ExAllocatePoolWithTag(PagedPool, v51, 0x4B677844u);
        wil::details::unique_storage<wil::details::resource_policy<_KEY_BASIC_INFORMATION *,void (_KEY_BASIC_INFORMATION *),&public: static void wil::details::pool_helpers<_KEY_BASIC_INFORMATION *,1265072196>::FreePoolWithTag(_KEY_BASIC_INFORMATION *),wistd::integral_constant<unsigned __int64,0>,_KEY_BASIC_INFORMATION *,_KEY_BASIC_INFORMATION *,0,std::nullptr_t>>::reset(
          &SecurityDescriptor,
          v54);
        v52 = (unsigned int *)SecurityDescriptor;
        if ( !SecurityDescriptor )
        {
          v18 = WdLogNewEntry5_WdError(v56, v55);
          v11 = -1073741670LL;
          goto LABEL_68;
        }
      }
      LODWORD(Size) = 0;
      v57 = ZwEnumerateKey(Handle, i, KeyBasicInformation, v52, v51 - 2, (PULONG)&Size);
      v59 = v57;
      if ( v57 == -2147483643 || v57 == -1073741789 )
      {
        v51 = Size + 2;
        wil::details::unique_storage<wil::details::resource_policy<_KEY_BASIC_INFORMATION *,void (_KEY_BASIC_INFORMATION *),&public: static void wil::details::pool_helpers<_KEY_BASIC_INFORMATION *,1265072196>::FreePoolWithTag(_KEY_BASIC_INFORMATION *),wistd::integral_constant<unsigned __int64,0>,_KEY_BASIC_INFORMATION *,_KEY_BASIC_INFORMATION *,0,std::nullptr_t>>::reset(
          &SecurityDescriptor,
          0LL);
        v52 = (unsigned int *)SecurityDescriptor;
      }
    }
    while ( (_DWORD)v59 == -2147483643 || (_DWORD)v59 == -1073741789 );
    if ( (int)v59 >= 0 )
    {
      *((_WORD *)v52 + ((unsigned __int64)v52[3] >> 1) + 8) = 0;
      AdjustCcdDatabasePermissions(Handle, v52 + 4, a3 + 1, a4);
      continue;
    }
    if ( (_DWORD)v59 == -2147483622 )
      break;
    v60 = WdLogNewEntry5_WdAssertion(0LL, v58);
    *(_QWORD *)(v60 + 24) = v59;
    WdLogEvent5_WdAssertion(v60);
  }
  LODWORD(v11) = 0;
  if ( v52 )
  {
    v63 = (__int64 (__fastcall *)(_QWORD))v52;
    Ace = wil::details::pool_helpers<_ACL *,1265072196>::FreePoolWithTag;
    wistd::invoke<void (*)(_KEY_BASIC_INFORMATION *),_KEY_BASIC_INFORMATION * &>(
      (__int64 (__fastcall **)(_QWORD))&Ace,
      &v63);
  }
LABEL_70:
  if ( v17 )
  {
    v63 = (__int64 (__fastcall *)(_QWORD))v17;
    Ace = wil::details::pool_helpers<_ACL *,1265072196>::FreePoolWithTag;
    wistd::invoke<void (*)(_KEY_BASIC_INFORMATION *),_KEY_BASIC_INFORMATION * &>(
      (__int64 (__fastcall **)(_QWORD))&Ace,
      &v63);
  }
LABEL_72:
  if ( Handle )
  {
    v63 = (__int64 (__fastcall *)(_QWORD))Handle;
    Ace = ZwClose;
    wistd::invoke<void (*)(_KEY_BASIC_INFORMATION *),_KEY_BASIC_INFORMATION * &>(
      (__int64 (__fastcall **)(_QWORD))&Ace,
      &v63);
  }
  return (unsigned int)v11;
}
