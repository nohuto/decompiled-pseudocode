/*
 * XREFs of PiDevCfgQueryDriverNode @ 0x14073C9B4
 * Callers:
 *     PiDevCfgFindDeviceDriver @ 0x14073BEC8 (PiDevCfgFindDeviceDriver.c)
 * Callees:
 *     PnpDuplicateUnicodeString @ 0x14036F050 (PnpDuplicateUnicodeString.c)
 *     PnpRegistryValueExists @ 0x140394F68 (PnpRegistryValueExists.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     ZwClose @ 0x1403FA760 (ZwClose.c)
 *     ZwOpenKey @ 0x1403FA7C0 (ZwOpenKey.c)
 *     memset @ 0x140414300 (memset.c)
 *     _PnpOpenObjectRegKey @ 0x14062C674 (_PnpOpenObjectRegKey.c)
 *     RtlpQueryRegistryValues @ 0x140635878 (RtlpQueryRegistryValues.c)
 *     RtlFreeAnsiString @ 0x14063DA40 (RtlFreeAnsiString.c)
 *     RtlCreateUnicodeString @ 0x140669AF0 (RtlCreateUnicodeString.c)
 *     PiDevCfgFreeDriverNode @ 0x14073A5A4 (PiDevCfgFreeDriverNode.c)
 *     PiDevCfgOpenDriverConfiguration @ 0x14073BAF8 (PiDevCfgOpenDriverConfiguration.c)
 *     PiDevCfgGetDriverPackageId @ 0x14073C3A8 (PiDevCfgGetDriverPackageId.c)
 *     PiDevCfgQueryObjectProperties @ 0x14073D004 (PiDevCfgQueryObjectProperties.c)
 *     PipCheckComputerSupported @ 0x14089B4E8 (PipCheckComputerSupported.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PiDevCfgQueryDriverNode(PCWSTR SourceString, PCWSTR a2, int a3, int a4, char a5, __int64 *a6)
{
  wchar_t *i; // rsi
  int DriverPackageId; // ebx
  int v10; // ecx
  PVOID PoolWithTag; // rax
  __int64 v12; // rdi
  const WCHAR *v13; // rdx
  __int64 v14; // r8
  PVOID *v15; // rsi
  int v16; // eax
  int v17; // ecx
  NTSTATUS v18; // eax
  NTSTATUS v19; // eax
  int v20; // eax
  __int64 v22; // rax
  int v23; // ecx
  char v24; // al
  char v25; // [rsp+40h] [rbp-C0h] BYREF
  char v26; // [rsp+41h] [rbp-BFh] BYREF
  int v27; // [rsp+44h] [rbp-BCh] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-B8h] BYREF
  HANDLE v29; // [rsp+50h] [rbp-B0h] BYREF
  HANDLE v30; // [rsp+58h] [rbp-A8h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+60h] [rbp-A0h] BYREF
  UNICODE_STRING v32; // [rsp+70h] [rbp-90h] BYREF
  int v33; // [rsp+80h] [rbp-80h]
  int v34; // [rsp+84h] [rbp-7Ch]
  HANDLE KeyHandle; // [rsp+88h] [rbp-78h] BYREF
  UNICODE_STRING v36; // [rsp+90h] [rbp-70h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+A0h] [rbp-60h] BYREF
  __int64 *v38; // [rsp+D0h] [rbp-30h]
  _QWORD v39[28]; // [rsp+E0h] [rbp-20h] BYREF

  v38 = a6;
  v33 = a4;
  v27 = -16777216;
  v34 = a3;
  *(_QWORD *)&UnicodeString.Length = 0LL;
  UnicodeString.Buffer = 0LL;
  i = 0LL;
  Handle = 0LL;
  v26 = 0;
  *(_QWORD *)&v36.Length = 0LL;
  v36.Buffer = 0LL;
  v25 = 0;
  v32 = 0LL;
  KeyHandle = 0LL;
  v30 = 0LL;
  v29 = 0LL;
  DriverPackageId = PiDevCfgGetDriverPackageId((__int64)SourceString, (__int64)&UnicodeString);
  if ( DriverPackageId < 0 )
    goto LABEL_43;
  DriverPackageId = PnpOpenObjectRegKey(
                      *(__int64 *)&PiPnpRtlCtx,
                      (__int64)UnicodeString.Buffer,
                      8u,
                      131097,
                      0,
                      (__int64)&Handle);
  if ( DriverPackageId < 0 )
    goto LABEL_43;
  memset(v39, 0, 0xC8uLL);
  v39[0] = DEVPKEY_DriverPackage_Invalidated;
  v39[2] = &v26;
  v39[5] = DEVPKEY_DriverPackage_TargetComputerIds;
  v39[7] = &v36;
  LODWORD(v39[1]) = 17;
  LODWORD(v39[3]) = 1;
  LODWORD(v39[6]) = 8210;
  HIDWORD(v39[8]) = 6;
  DriverPackageId = PiDevCfgQueryObjectProperties(v10, UnicodeString.Buffer, 8, (_DWORD)Handle, (__int64)v39, 2);
  if ( DriverPackageId < 0 )
    goto LABEL_43;
  if ( SLODWORD(v39[4]) >= 0 && v26 == -1 )
  {
    DriverPackageId = -1073741738;
    goto LABEL_43;
  }
  if ( SLODWORD(v39[9]) >= 0 && v36.Buffer && v36.Length > 2u )
  {
    for ( i = v36.Buffer; *i; i += v22 + 1 )
    {
      if ( (unsigned __int8)PipCheckComputerSupported(i) )
        break;
      v22 = -1LL;
      do
        ++v22;
      while ( i[v22] );
    }
    if ( !*i )
      goto LABEL_63;
  }
  if ( (a5 & 8) != 0 && !i )
  {
LABEL_63:
    DriverPackageId = -1073740764;
    goto LABEL_43;
  }
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x1A0uLL, 0x63647050u);
  v12 = (__int64)PoolWithTag;
  if ( !PoolWithTag )
  {
    DriverPackageId = -1073741670;
    goto LABEL_43;
  }
  memset(PoolWithTag, 0, 0x1A0uLL);
  *(_QWORD *)(v12 + 232) = v12 + 224;
  *(_QWORD *)(v12 + 224) = v12 + 224;
  *(_QWORD *)(v12 + 216) = v12 + 208;
  *(_QWORD *)(v12 + 208) = v12 + 208;
  *(_QWORD *)(v12 + 376) = v12 + 368;
  *(_QWORD *)(v12 + 368) = v12 + 368;
  if ( !RtlCreateUnicodeString((PUNICODE_STRING)(v12 + 40), SourceString)
    || !PnpDuplicateUnicodeString(v12 + 56, (__int64)&UnicodeString)
    || !RtlCreateUnicodeString((PUNICODE_STRING)(v12 + 72), a2)
    || i && !RtlCreateUnicodeString((PUNICODE_STRING)(v12 + 128), i) )
  {
    DriverPackageId = -1073741670;
    goto LABEL_41;
  }
  memset(v39, 0, 0xC8uLL);
  v39[0] = DEVPKEY_DriverPackage_DriverDate;
  LODWORD(v39[1]) = 16;
  v39[5] = DEVPKEY_DriverPackage_DriverVersion;
  v39[2] = v12 + 112;
  v39[7] = v12 + 120;
  LODWORD(v39[3]) = 8;
  v39[10] = &DEVPKEY_DriverPackage_SignerScore;
  v15 = (PVOID *)(v12 + 144);
  LODWORD(v39[8]) = 8;
  v39[12] = &v27;
  v39[15] = DEVPKEY_DriverPackage_ExtensionId;
  v39[20] = DEVPKEY_DriverPackage_ExtensionContractIds;
  HIDWORD(v39[23]) = 2;
  LODWORD(v39[6]) = 9;
  LODWORD(v39[11]) = 7;
  LODWORD(v39[13]) = 4;
  LODWORD(v39[16]) = 13;
  v39[17] = v12 + 188;
  LODWORD(v39[18]) = 16;
  LODWORD(v39[21]) = 4109;
  v39[22] = v12 + 144;
  DriverPackageId = PiDevCfgQueryObjectProperties(16, UnicodeString.Buffer, 8, (_DWORD)Handle, (__int64)v39, 5);
  if ( DriverPackageId < 0 )
    goto LABEL_41;
  if ( SLODWORD(v39[4]) < 0 )
    *(_QWORD *)(v12 + 112) = 0LL;
  if ( SLODWORD(v39[9]) < 0 )
    *(_QWORD *)(v12 + 120) = 0LL;
  v16 = v27;
  if ( SLODWORD(v39[14]) < 0 )
    v16 = -16777216;
  v27 = v16;
  if ( SLODWORD(v39[19]) < 0 )
    *(_OWORD *)(v12 + 188) = 0LL;
  if ( SLODWORD(v39[24]) >= 0 )
  {
    if ( (v39[23] & 0xF) != 0 )
    {
      ExFreePoolWithTag(*v15, 0);
      *v15 = 0LL;
    }
    else
    {
      *(_DWORD *)(v12 + 152) = LODWORD(v39[23]) >> 4;
    }
  }
  else
  {
    *v15 = 0LL;
  }
  if ( (a5 & 4) != 0 )
    v17 = -1;
  else
    v17 = (unsigned __int16)v34 | v33 & 0xFF0000 | v27 & ((a5 & 1) != 0 ? -268435456 : -16777216);
  *(_DWORD *)(v12 + 108) = v17;
  if ( (a5 & 2) != 0 )
  {
    memset(v39, 0, 0xC8uLL);
    v39[0] = DEVPKEY_DriverPackage_F6;
    v39[2] = &v25;
    LODWORD(v39[1]) = 17;
    LODWORD(v39[3]) = 1;
    DriverPackageId = PiDevCfgQueryObjectProperties(v23, UnicodeString.Buffer, 8, (_DWORD)Handle, (__int64)v39, 1);
    if ( DriverPackageId < 0 )
      goto LABEL_41;
    v24 = v25;
    if ( SLODWORD(v39[4]) < 0 )
      v24 = 0;
    v25 = v24;
    if ( v24 == -1 )
      *(_DWORD *)(v12 + 184) |= 2u;
  }
  *(_DWORD *)&v32.Length = 1572886;
  v32.Buffer = L"Descriptors";
  ObjectAttributes.RootDirectory = Handle;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  ObjectAttributes.ObjectName = &v32;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v18 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  DriverPackageId = v18;
  if ( v18 == -1073741772 )
    goto LABEL_52;
  if ( v18 < 0 )
    goto LABEL_41;
  ObjectAttributes.RootDirectory = KeyHandle;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)(v12 + 72);
  v19 = ZwOpenKey(&v30, 0x20019u, &ObjectAttributes);
  DriverPackageId = v19;
  if ( v19 == -1073741772 )
  {
LABEL_52:
    DriverPackageId = 0;
  }
  else
  {
    if ( v19 < 0 )
      goto LABEL_41;
    memset(v39, 0, sizeof(v39));
    v39[2] = L"Configuration";
    LODWORD(v39[4]) = 0x1000000;
    v39[3] = v12 + 88;
    LODWORD(v39[1]) = 288;
    DriverPackageId = RtlpQueryRegistryValues(3221225472LL, (const WCHAR *)v30, (__int64)v39, 0LL);
    if ( DriverPackageId < 0 )
      goto LABEL_41;
    if ( !*(_WORD *)(v12 + 88) && *(_QWORD *)(v12 + 96) )
      RtlFreeAnsiString((PUNICODE_STRING)(v12 + 88));
  }
  v13 = *(const WCHAR **)(v12 + 96);
  if ( !v13 )
  {
LABEL_39:
    if ( PnpBootMode )
    {
      *(_DWORD *)&v32.Length = 1572886;
      v32.Buffer = L"ConfigFlags";
      if ( !v29 || !PnpRegistryValueExists(v29, &v32) )
        *(_DWORD *)(v12 + 184) |= 4u;
    }
    *(_QWORD *)(v12 + 16) = Handle;
    *(_QWORD *)(v12 + 24) = v30;
    *(_QWORD *)(v12 + 32) = v29;
    Handle = 0LL;
    v30 = 0LL;
    v29 = 0LL;
    *v38 = v12;
    v12 = 0LL;
    goto LABEL_41;
  }
  v20 = PiDevCfgOpenDriverConfiguration(Handle, v13, &v29);
  DriverPackageId = v20;
  if ( v20 == -1073741772 )
  {
    DriverPackageId = 0;
    goto LABEL_39;
  }
  if ( v20 >= 0 )
  {
    memset(v39, 0, sizeof(v39));
    v39[0] = PiDevCfgQueryDriverVersionValueCallback;
    v39[2] = L"DriverDate";
    v39[7] = PiDevCfgQueryDriverVersionValueCallback;
    v39[9] = L"DriverVersion";
    v39[3] = v12 + 112;
    v39[10] = v12 + 120;
    LODWORD(v39[18]) = 117440512;
    v39[16] = L"ExcludeIds";
    v39[17] = v12 + 160;
    LODWORD(v39[15]) = 304;
    DriverPackageId = RtlpQueryRegistryValues(3221225472LL, (const WCHAR *)v29, (__int64)v39, 0LL);
    if ( DriverPackageId >= 0 )
    {
      if ( *(_WORD *)(v12 + 160) <= 2u && *(_QWORD *)(v12 + 168) )
        RtlFreeAnsiString((PUNICODE_STRING)(v12 + 160));
      goto LABEL_39;
    }
  }
LABEL_41:
  if ( v12 )
    PiDevCfgFreeDriverNode(v12, (__int64)v13, v14);
LABEL_43:
  if ( Handle )
    ZwClose(Handle);
  if ( v30 )
    ZwClose(v30);
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( v29 )
    ZwClose(v29);
  RtlFreeAnsiString(&UnicodeString);
  RtlFreeAnsiString(&v36);
  return (unsigned int)DriverPackageId;
}
