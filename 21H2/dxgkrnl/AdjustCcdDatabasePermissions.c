/*
 * XREFs of AdjustCcdDatabasePermissions @ 0x1C03AF1BC
 * Callers:
 *     AdjustCcdDatabasePermissions @ 0x1C03AF1BC (AdjustCcdDatabasePermissions.c)
 *     DxgkPrepareCcdDatabaseForAccess @ 0x1C03AFB4C (DxgkPrepareCcdDatabaseForAccess.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6AJPEAX@Z$1?ZwClose@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x1C001C71C (--1-$unique_storage@U-$resource_policy@PEAXP6AJPEAX@Z$1-ZwClose@@YAJ0@ZU-$integral_constant@_K$0.c)
 *     memset @ 0x1C002CFC0 (memset.c)
 *     ??$?8V?$unique_storage@U?$resource_policy@PEAX$$A6AXPEAX@_E$1?FreePoolWithTag@?$pool_helpers@PEAX$0ELGHHIEE@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@@wil@@YA_NAEBV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAX$$A6AXPEAX@_E$1?FreePoolWithTag@?$pool_helpers@PEAX$0ELGHHIEE@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@@0@$$T@Z @ 0x1C006B0A0 (--$-8V-$unique_storage@U-$resource_policy@PEAX$$A6AXPEAX@_E$1-FreePoolWithTag@-$pool_helpers@PEA.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_ACL@@$$A6AXPEAU1@@_E$1?FreePoolWithTag@?$pool_helpers@PEAU_ACL@@$0ELGHHIEE@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x1C006B0B0 (--1-$unique_storage@U-$resource_policy@PEAU_ACL@@$$A6AXPEAU1@@_E$1-FreePoolWithTag@-$pool_helper.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_KEY_BASIC_INFORMATION@@$$A6AXPEAU1@@_E$1?FreePoolWithTag@?$pool_helpers@PEAU_KEY_BASIC_INFORMATION@@$0ELGHHIEE@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_KEY_BASIC_INFORMATION@@@Z @ 0x1C006B11C (-reset@-$unique_storage@U-$resource_policy@PEAU_KEY_BASIC_INFORMATION@@$$A6AXPEAU1@@_E$1-FreePoo.c)
 *     _CcdOpenRegistrySubkey @ 0x1C01B78F8 (_CcdOpenRegistrySubkey.c)
 *     AdjustCcdDatabasePermissions @ 0x1C03AF1BC (AdjustCcdDatabasePermissions.c)
 */

__int64 __fastcall AdjustCcdDatabasePermissions(int a1, const WCHAR *a2, unsigned int a3, void *a4)
{
  ULONG v7; // r14d
  int v8; // eax
  __int64 v9; // r9
  __int64 v10; // rdi
  ULONG v11; // eax
  void *Pool2; // rax
  PSECURITY_DESCRIPTOR v13; // rbx
  NTSTATUS v14; // eax
  NTSTATUS DaclSecurityDescriptor; // eax
  __int64 v16; // rdx
  PACL v17; // rcx
  ULONG v18; // ebx
  NTSTATUS v19; // eax
  __int64 v20; // r9
  unsigned __int8 v21; // al
  ULONG v22; // eax
  ULONG v23; // edi
  __int64 v24; // r9
  struct _ACL *v25; // rax
  struct _ACL *v26; // rbx
  NTSTATUS Acl; // eax
  NTSTATUS v28; // eax
  NTSTATUS v29; // eax
  NTSTATUS v30; // eax
  NTSTATUS v31; // eax
  NTSTATUS v32; // eax
  ULONG v33; // eax
  __int64 v34; // r9
  void *v35; // rax
  PVOID v36; // rbx
  NTSTATUS v37; // eax
  NTSTATUS v38; // eax
  unsigned int *v39; // rbx
  unsigned int v40; // r15d
  void *v41; // rax
  NTSTATUS v42; // eax
  __int64 v43; // rdi
  unsigned __int8 DaclDefaulted[8]; // [rsp+50h] [rbp-39h] BYREF
  PVOID Ace; // [rsp+58h] [rbp-31h] BYREF
  ULONG Size; // [rsp+60h] [rbp-29h] BYREF
  ULONG Size_4; // [rsp+64h] [rbp-25h] BYREF
  PACL Dacl; // [rsp+68h] [rbp-21h] BYREF
  HANDLE Handle; // [rsp+70h] [rbp-19h] BYREF
  int v50; // [rsp+78h] [rbp-11h] BYREF
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+80h] [rbp-9h] BYREF
  PVOID AceList; // [rsp+88h] [rbp-1h] BYREF
  struct _ACL *v53; // [rsp+90h] [rbp+7h] BYREF
  _OWORD AbsoluteSecurityDescriptor[2]; // [rsp+98h] [rbp+Fh] BYREF
  __int64 v55; // [rsp+B8h] [rbp+2Fh]
  unsigned __int8 DaclPresent; // [rsp+100h] [rbp+77h] BYREF

  if ( a3 > 5 )
  {
    WdLogSingleEntry0(1LL);
    return 0LL;
  }
  v7 = 0;
  v50 = 2;
  Handle = 0LL;
  v8 = CcdOpenRegistrySubkey((int)&Handle, 983103, a1, a2, (__int64)&v50);
  LODWORD(v10) = v8;
  if ( v8 < 0 )
  {
    WdLogSingleEntry1(2LL, v8);
    goto LABEL_61;
  }
  v11 = 336;
  SecurityDescriptor = 0LL;
  for ( Size_4 = 336; ; v11 = Size_4 )
  {
    Pool2 = (void *)ExAllocatePool2(256LL, v11, 1265072196LL, v9);
    _reset___unique_storage_U__resource_policy_PEAU_KEY_BASIC_INFORMATION____A6AXPEAU1___E_1_FreePoolWithTag___pool_helpers_PEAU_KEY_BASIC_INFORMATION___0ELGHHIEE__details_wil__SAX0_ZU__integral_constant__K_0A__wistd__PEAU1_PEAU1__0A___T_details_wil___details_wil__QEAAXPEAU_KEY_BASIC_INFORMATION___Z(
      &SecurityDescriptor,
      Pool2);
    v13 = SecurityDescriptor;
    if ( !SecurityDescriptor )
    {
      LODWORD(v10) = -1073741801;
      goto LABEL_58;
    }
    v14 = ZwQuerySecurityObject(Handle, 4u, SecurityDescriptor, Size_4, &Size_4);
    LODWORD(v10) = v14;
    if ( v14 != -1073741789 )
      break;
  }
  if ( v14 < 0 )
  {
LABEL_58:
    v16 = (int)v10;
    goto LABEL_59;
  }
  DaclPresent = 0;
  DaclDefaulted[0] = 0;
  Dacl = 0LL;
  DaclSecurityDescriptor = RtlGetDaclSecurityDescriptor(v13, &DaclPresent, &Dacl, DaclDefaulted);
  v10 = DaclSecurityDescriptor;
  if ( DaclSecurityDescriptor < 0 )
    goto LABEL_11;
  if ( !DaclPresent || (v17 = Dacl) == 0LL )
  {
    v10 = -1073741275LL;
LABEL_11:
    v16 = v10;
LABEL_59:
    WdLogSingleEntry1(2LL, v16);
    goto LABEL_60;
  }
  DaclPresent = 0;
  v18 = 0;
  if ( !Dacl->AceCount )
    goto LABEL_22;
  while ( 1 )
  {
    Ace = 0LL;
    v19 = RtlGetAce(v17, v18, &Ace);
    v10 = v19;
    if ( v19 < 0 )
      goto LABEL_11;
    if ( !*(_BYTE *)Ace && (*((_DWORD *)Ace + 1) & 0x2001F) == 0x2001F && RtlEqualSid((char *)Ace + 8, a4) )
      break;
    v17 = Dacl;
    if ( ++v18 >= Dacl->AceCount )
    {
      v21 = DaclPresent;
      goto LABEL_21;
    }
  }
  v17 = Dacl;
  v21 = 1;
  DaclPresent = 1;
LABEL_21:
  if ( !v21 )
  {
LABEL_22:
    Ace = 0LL;
    v55 = 0LL;
    memset(AbsoluteSecurityDescriptor, 0, sizeof(AbsoluteSecurityDescriptor));
    if ( v17->AclSize < 8u )
    {
      WdLogSingleEntry1(1LL, 2567LL);
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"Dacl->AclSize >= sizeof(ACL)", 2567LL, 0LL, 0LL, 0LL, 0LL);
    }
    v22 = RtlLengthSid(a4);
    v23 = v22 + Dacl->AclSize + 8;
    v25 = (struct _ACL *)ExAllocatePool2(256LL, v23, 1265072196LL, v24);
    v53 = v25;
    v26 = v25;
    if ( v25 )
    {
      Acl = RtlCreateAcl(v25, v23, 2u);
      v10 = Acl;
      if ( Acl < 0 )
        goto LABEL_55;
      AceList = 0LL;
      v28 = RtlGetAce(Dacl, 0, &AceList);
      v10 = v28;
      if ( v28 < 0 )
        goto LABEL_55;
      v29 = RtlAddAce(v26, 2u, 0, AceList, Dacl->AclSize - 8);
      v10 = v29;
      if ( v29 < 0 )
        goto LABEL_55;
      v30 = RtlAddAccessAllowedAceEx(v26, 2u, 2u, 0x2001Fu, a4);
      v10 = v30;
      if ( v30 < 0 )
        goto LABEL_55;
      v31 = RtlCreateSecurityDescriptor(AbsoluteSecurityDescriptor, 1u);
      v10 = v31;
      if ( v31 < 0 )
        goto LABEL_55;
      v32 = RtlSetDaclSecurityDescriptor(AbsoluteSecurityDescriptor, 1u, v26, 0);
      v10 = v32;
      if ( v32 < 0 )
        goto LABEL_55;
      if ( !RtlValidSecurityDescriptor(AbsoluteSecurityDescriptor)
        || (v33 = RtlLengthSecurityDescriptor(AbsoluteSecurityDescriptor), Size = v33, v33 < 0x28) )
      {
        v10 = -1073741595LL;
        goto LABEL_55;
      }
      v35 = (void *)ExAllocatePool2(256LL, v33, 1265072196LL, v34);
      _reset___unique_storage_U__resource_policy_PEAU_KEY_BASIC_INFORMATION____A6AXPEAU1___E_1_FreePoolWithTag___pool_helpers_PEAU_KEY_BASIC_INFORMATION___0ELGHHIEE__details_wil__SAX0_ZU__integral_constant__K_0A__wistd__PEAU1_PEAU1__0A___T_details_wil___details_wil__QEAAXPEAU_KEY_BASIC_INFORMATION___Z(
        &Ace,
        v35);
      if ( !____8V__unique_storage_U__resource_policy_PEAX__A6AXPEAX__E_1_FreePoolWithTag___pool_helpers_PEAX_0ELGHHIEE__details_wil__SAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil___wil__YA_NAEBV__unique_any_t_V__unique_storage_U__resource_policy_PEAX__A6AXPEAX__E_1_FreePoolWithTag___pool_helpers_PEAX_0ELGHHIEE__details_wil__SAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil___0___T_Z(&Ace) )
      {
        v36 = Ace;
        memset(Ace, 0, Size);
        v37 = RtlAbsoluteToSelfRelativeSD(AbsoluteSecurityDescriptor, v36, &Size);
        v10 = v37;
        if ( v37 >= 0 )
        {
          v38 = ZwSetSecurityObject(Handle, 4u, v36);
          v10 = v38;
          if ( v38 >= 0 )
          {
            __1__unique_storage_U__resource_policy_PEAU_ACL____A6AXPEAU1___E_1_FreePoolWithTag___pool_helpers_PEAU_ACL___0ELGHHIEE__details_wil__SAX0_ZU__integral_constant__K_0A__wistd__PEAU1_PEAU1__0A___T_details_wil___details_wil__IEAA_XZ(&Ace);
            __1__unique_storage_U__resource_policy_PEAU_ACL____A6AXPEAU1___E_1_FreePoolWithTag___pool_helpers_PEAU_ACL___0ELGHHIEE__details_wil__SAX0_ZU__integral_constant__K_0A__wistd__PEAU1_PEAU1__0A___T_details_wil___details_wil__IEAA_XZ(&v53);
            goto LABEL_39;
          }
        }
LABEL_55:
        WdLogSingleEntry1(2LL, v10);
        __1__unique_storage_U__resource_policy_PEAU_ACL____A6AXPEAU1___E_1_FreePoolWithTag___pool_helpers_PEAU_ACL___0ELGHHIEE__details_wil__SAX0_ZU__integral_constant__K_0A__wistd__PEAU1_PEAU1__0A___T_details_wil___details_wil__IEAA_XZ(&Ace);
        __1__unique_storage_U__resource_policy_PEAU_ACL____A6AXPEAU1___E_1_FreePoolWithTag___pool_helpers_PEAU_ACL___0ELGHHIEE__details_wil__SAX0_ZU__integral_constant__K_0A__wistd__PEAU1_PEAU1__0A___T_details_wil___details_wil__IEAA_XZ(&v53);
        goto LABEL_60;
      }
    }
    v10 = -1073741670LL;
    goto LABEL_55;
  }
LABEL_39:
  v39 = 0LL;
  v40 = 544;
  Ace = 0LL;
  do
  {
LABEL_40:
    if ( !v39 )
    {
      v41 = (void *)ExAllocatePool2(256LL, v40, 1265072196LL, v20);
      _reset___unique_storage_U__resource_policy_PEAU_KEY_BASIC_INFORMATION____A6AXPEAU1___E_1_FreePoolWithTag___pool_helpers_PEAU_KEY_BASIC_INFORMATION___0ELGHHIEE__details_wil__SAX0_ZU__integral_constant__K_0A__wistd__PEAU1_PEAU1__0A___T_details_wil___details_wil__QEAAXPEAU_KEY_BASIC_INFORMATION___Z(
        &Ace,
        v41);
      v39 = (unsigned int *)Ace;
      if ( !Ace )
      {
        LODWORD(v10) = -1073741670;
        WdLogSingleEntry1(2LL, -1073741670LL);
        goto LABEL_53;
      }
    }
    Size = 0;
    v42 = ZwEnumerateKey(Handle, v7, KeyBasicInformation, v39, v40 - 2, &Size);
    v43 = v42;
    if ( v42 != -2147483643 && v42 != -1073741789 )
      break;
    v40 = Size + 2;
    _reset___unique_storage_U__resource_policy_PEAU_KEY_BASIC_INFORMATION____A6AXPEAU1___E_1_FreePoolWithTag___pool_helpers_PEAU_KEY_BASIC_INFORMATION___0ELGHHIEE__details_wil__SAX0_ZU__integral_constant__K_0A__wistd__PEAU1_PEAU1__0A___T_details_wil___details_wil__QEAAXPEAU_KEY_BASIC_INFORMATION___Z(
      &Ace,
      0LL);
    v39 = (unsigned int *)Ace;
  }
  while ( (_DWORD)v43 == -2147483643 || (_DWORD)v43 == -1073741789 );
  if ( (int)v43 >= 0 )
  {
    *((_WORD *)v39 + ((unsigned __int64)v39[3] >> 1) + 8) = 0;
    AdjustCcdDatabasePermissions(Handle, v39 + 4, a3 + 1, a4);
LABEL_50:
    ++v7;
    goto LABEL_40;
  }
  if ( (_DWORD)v43 != -2147483622 )
  {
    WdLogSingleEntry1(1LL, v43);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"Failed to enumerate key with status 0x%I64x",
      v43,
      0LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_50;
  }
  LODWORD(v10) = 0;
LABEL_53:
  __1__unique_storage_U__resource_policy_PEAU_ACL____A6AXPEAU1___E_1_FreePoolWithTag___pool_helpers_PEAU_ACL___0ELGHHIEE__details_wil__SAX0_ZU__integral_constant__K_0A__wistd__PEAU1_PEAU1__0A___T_details_wil___details_wil__IEAA_XZ(&Ace);
LABEL_60:
  __1__unique_storage_U__resource_policy_PEAU_ACL____A6AXPEAU1___E_1_FreePoolWithTag___pool_helpers_PEAU_ACL___0ELGHHIEE__details_wil__SAX0_ZU__integral_constant__K_0A__wistd__PEAU1_PEAU1__0A___T_details_wil___details_wil__IEAA_XZ(&SecurityDescriptor);
LABEL_61:
  wil::details::unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(&Handle);
  return (unsigned int)v10;
}
