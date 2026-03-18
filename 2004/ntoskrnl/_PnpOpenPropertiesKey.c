/*
 * XREFs of _PnpOpenPropertiesKey @ 0x1406C1550
 * Callers:
 *     _CmGetInterfaceClassMappedPropertyFromRegValue @ 0x1406C1168 (_CmGetInterfaceClassMappedPropertyFromRegValue.c)
 *     _PnpGetGenericStoreProperty @ 0x1406C130C (_PnpGetGenericStoreProperty.c)
 *     _CmSetInstallerClassMappedPropertyFromRegValue @ 0x14071EEC0 (_CmSetInstallerClassMappedPropertyFromRegValue.c)
 *     _PnpSetPropertyWorker @ 0x140726CB0 (_PnpSetPropertyWorker.c)
 *     _CmGetInstallerClassRegPropWorker @ 0x14074C32C (_CmGetInstallerClassRegPropWorker.c)
 *     _CmGetInstallerClassMappedPropertyFromRegValue @ 0x14074C5BC (_CmGetInstallerClassMappedPropertyFromRegValue.c)
 *     _PnpGetGenericStorePropertyKeys @ 0x140755D50 (_PnpGetGenericStorePropertyKeys.c)
 *     _PnpDeletePropertyWorker @ 0x14075A89C (_PnpDeletePropertyWorker.c)
 *     _CmSetInstallerClassRegPropWorker @ 0x140972568 (_CmSetInstallerClassRegPropWorker.c)
 *     _PnpGetGenericStorePropertyLocales @ 0x140975D54 (_PnpGetGenericStorePropertyLocales.c)
 *     _CmDeleteInstallerClassMappedPropertyFromRegValue @ 0x140976270 (_CmDeleteInstallerClassMappedPropertyFromRegValue.c)
 *     _CmDeleteInterfaceClassMappedPropertyFromRegValue @ 0x140976440 (_CmDeleteInterfaceClassMappedPropertyFromRegValue.c)
 *     _CmSetInterfaceClassMappedPropertyFromRegValue @ 0x140978A34 (_CmSetInterfaceClassMappedPropertyFromRegValue.c)
 * Callees:
 *     RtlStringCchPrintfExW @ 0x1402029D8 (RtlStringCchPrintfExW.c)
 *     RtlUnalignedStringCchLengthW @ 0x140202C64 (RtlUnalignedStringCchLengthW.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     ZwClose @ 0x1403F37A0 (ZwClose.c)
 *     _SysCtxRegOpenKey @ 0x1405E1CE0 (_SysCtxRegOpenKey.c)
 *     _PnpCtxRegCreateKey @ 0x1406C3680 (_PnpCtxRegCreateKey.c)
 *     _PnpCtxRegCreateTree @ 0x1406C46C0 (_PnpCtxRegCreateTree.c)
 *     RtlValidSecurityDescriptor @ 0x1406DC910 (RtlValidSecurityDescriptor.c)
 *     _PnpGetPropertiesSecurityDescriptor @ 0x140756004 (_PnpGetPropertiesSecurityDescriptor.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PnpOpenPropertiesKey(
        __int64 a1,
        __int64 a2,
        const wchar_t *a3,
        unsigned int a4,
        char a5,
        __int64 a6,
        void **a7)
{
  NTSTATUS v7; // ebx
  void *v9; // rbp
  wchar_t *PoolWithTag; // rsi
  void *v11; // r12
  unsigned int v12; // eax
  unsigned int v14; // ebx
  __int64 v15; // rcx
  NTSTATUS v16; // eax
  __int64 v18; // rcx
  int Key; // eax
  void *PropertiesSecurityDescriptor; // rax
  unsigned int v21; // edx
  int Tree; // eax
  __int64 v24; // [rsp+48h] [rbp-E0h]
  size_t pcchLength[2]; // [rsp+50h] [rbp-D8h] BYREF
  wchar_t pszDest[64]; // [rsp+60h] [rbp-C8h] BYREF

  v7 = 0;
  pcchLength[0] = 0LL;
  v9 = 0LL;
  v24 = a2;
  PoolWithTag = 0LL;
  *a7 = 0LL;
  v11 = 0LL;
  v12 = a4;
  if ( a3 )
  {
    v7 = RtlUnalignedStringCchLengthW(a3, 0x200uLL, pcchLength);
    if ( v7 < 0 )
      return (unsigned int)v7;
    if ( pcchLength[0] >= 0x30 )
    {
      v14 = LODWORD(pcchLength[0]) + 12;
      PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(
                                 PagedPool,
                                 2LL * (unsigned int)(LODWORD(pcchLength[0]) + 12),
                                 0x52504E50u);
      if ( !PoolWithTag )
        return (unsigned int)-1073741801;
    }
    else
    {
      PoolWithTag = pszDest;
      v14 = 59;
    }
    v7 = RtlStringCchPrintfExW(PoolWithTag, v14, 0LL, 0LL, 0x800u, L"%s\\%s", L"Properties", a3);
    if ( v7 < 0 )
      goto LABEL_11;
    if ( a1 )
      v15 = *(_QWORD *)(a1 + 224);
    else
      v15 = 0LL;
    v16 = SysCtxRegOpenKey(v15, v24, (__int64)PoolWithTag, 0, a4, (__int64)a7);
    if ( v16 == -1073741444 )
    {
      v7 = -1073741772;
      goto LABEL_11;
    }
    if ( !a5 || v16 != -1073741772 )
    {
      v7 = v16;
      goto LABEL_11;
    }
    v12 = a4;
    a2 = v24;
  }
  if ( a1 )
    v18 = *(_QWORD *)(a1 + 224);
  else
    v18 = 0LL;
  Key = SysCtxRegOpenKey(v18, a2, (__int64)L"Properties", 0, v12, (__int64)a7);
  if ( Key != -1073741772 )
    goto LABEL_29;
  if ( !a5 )
  {
LABEL_21:
    v7 = Key;
    goto LABEL_22;
  }
  PropertiesSecurityDescriptor = (void *)PnpGetPropertiesSecurityDescriptor();
  v9 = PropertiesSecurityDescriptor;
  if ( PropertiesSecurityDescriptor )
  {
    if ( !RtlValidSecurityDescriptor(PropertiesSecurityDescriptor) )
    {
      v7 = -1073741595;
      goto LABEL_22;
    }
    Key = PnpCtxRegCreateKey(a1, v24, (unsigned int)L"Properties", 0, a4, (__int64)v9, (__int64)a7, 0LL);
LABEL_29:
    if ( Key != -1073741444 )
    {
      if ( Key < 0 )
        goto LABEL_21;
      if ( !a3 )
      {
LABEL_22:
        if ( v9 )
          ExFreePoolWithTag(v9, 0);
        goto LABEL_11;
      }
      v11 = *a7;
      v21 = (unsigned int)*a7;
      *a7 = 0LL;
      Tree = PnpCtxRegCreateTree(a1, v21, (_DWORD)a3, 0, a4, 0LL, (__int64)a7, 0LL);
      if ( Tree != -1073741444 )
      {
        if ( Tree < 0 )
          v7 = Tree;
        goto LABEL_22;
      }
    }
    v7 = -1073741772;
    goto LABEL_22;
  }
  v7 = -1073741595;
LABEL_11:
  if ( PoolWithTag && PoolWithTag != pszDest )
    ExFreePoolWithTag(PoolWithTag, 0);
  if ( v11 )
    ZwClose(v11);
  return (unsigned int)v7;
}
