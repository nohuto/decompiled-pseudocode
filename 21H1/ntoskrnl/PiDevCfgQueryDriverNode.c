/*
 * XREFs of PiDevCfgQueryDriverNode @ 0x140721F14
 * Callers:
 *     PiDevCfgFindDeviceDriver @ 0x140721430 (PiDevCfgFindDeviceDriver.c)
 * Callees:
 *     PnpDuplicateUnicodeString @ 0x14036A7D0 (PnpDuplicateUnicodeString.c)
 *     PnpRegistryValueExists @ 0x140391938 (PnpRegistryValueExists.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     ZwClose @ 0x1403F2510 (ZwClose.c)
 *     ZwOpenKey @ 0x1403F2570 (ZwOpenKey.c)
 *     memset @ 0x140408F80 (memset.c)
 *     RtlFreeAnsiString @ 0x1405D8770 (RtlFreeAnsiString.c)
 *     RtlpQueryRegistryValues @ 0x1406823A0 (RtlpQueryRegistryValues.c)
 *     RtlCreateUnicodeString @ 0x140690CB0 (RtlCreateUnicodeString.c)
 *     _PnpOpenObjectRegKey @ 0x1406A97E4 (_PnpOpenObjectRegKey.c)
 *     PiDevCfgGetDriverPackageId @ 0x140721910 (PiDevCfgGetDriverPackageId.c)
 *     PiDevCfgQueryObjectProperties @ 0x140722564 (PiDevCfgQueryObjectProperties.c)
 *     PiDevCfgFreeDriverNode @ 0x140735388 (PiDevCfgFreeDriverNode.c)
 *     PiDevCfgOpenDriverConfiguration @ 0x14075B38C (PiDevCfgOpenDriverConfiguration.c)
 *     PipCheckComputerSupported @ 0x140896F68 (PipCheckComputerSupported.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1030 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PiDevCfgQueryDriverNode(PCWSTR SourceString, PCWSTR a2, int a3, int a4, char a5, _QWORD *a6)
{
  wchar_t *i; // rsi
  int DriverPackageId; // ebx
  int v10; // ecx
  char *PoolWithTag; // rax
  char *v12; // rdi
  PVOID *v13; // rsi
  int v14; // eax
  int v15; // ecx
  NTSTATUS v16; // eax
  NTSTATUS v17; // eax
  __int64 v18; // rdx
  int v19; // eax
  __int64 v21; // rax
  int v22; // ecx
  char v23; // al
  char v24; // [rsp+40h] [rbp-C0h] BYREF
  char v25; // [rsp+41h] [rbp-BFh] BYREF
  int v26; // [rsp+44h] [rbp-BCh] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-B8h] BYREF
  HANDLE v28; // [rsp+50h] [rbp-B0h] BYREF
  HANDLE v29; // [rsp+58h] [rbp-A8h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+60h] [rbp-A0h] BYREF
  UNICODE_STRING v31; // [rsp+70h] [rbp-90h] BYREF
  int v32; // [rsp+80h] [rbp-80h]
  int v33; // [rsp+84h] [rbp-7Ch]
  HANDLE KeyHandle; // [rsp+88h] [rbp-78h] BYREF
  UNICODE_STRING v35; // [rsp+90h] [rbp-70h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+A0h] [rbp-60h] BYREF
  _QWORD *v37; // [rsp+D0h] [rbp-30h]
  _QWORD v38[28]; // [rsp+E0h] [rbp-20h] BYREF

  v37 = a6;
  v32 = a4;
  v26 = -16777216;
  v33 = a3;
  *(_QWORD *)&UnicodeString.Length = 0LL;
  UnicodeString.Buffer = 0LL;
  i = 0LL;
  Handle = 0LL;
  v25 = 0;
  *(_QWORD *)&v35.Length = 0LL;
  v35.Buffer = 0LL;
  v24 = 0;
  v31 = 0LL;
  KeyHandle = 0LL;
  v29 = 0LL;
  v28 = 0LL;
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
  memset(v38, 0, 0xC8uLL);
  v38[0] = DEVPKEY_DriverPackage_Invalidated;
  v38[2] = &v25;
  v38[5] = DEVPKEY_DriverPackage_TargetComputerIds;
  v38[7] = &v35;
  LODWORD(v38[1]) = 17;
  LODWORD(v38[3]) = 1;
  LODWORD(v38[6]) = 8210;
  HIDWORD(v38[8]) = 6;
  DriverPackageId = PiDevCfgQueryObjectProperties(v10, UnicodeString.Buffer, 8, (_DWORD)Handle, (__int64)v38, 2);
  if ( DriverPackageId < 0 )
    goto LABEL_43;
  if ( SLODWORD(v38[4]) >= 0 && v25 == -1 )
  {
    DriverPackageId = -1073741738;
    goto LABEL_43;
  }
  if ( SLODWORD(v38[9]) >= 0 && v35.Buffer && v35.Length > 2u )
  {
    for ( i = v35.Buffer; *i; i += v21 + 1 )
    {
      if ( (unsigned __int8)PipCheckComputerSupported(i) )
        break;
      v21 = -1LL;
      do
        ++v21;
      while ( i[v21] );
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
  PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, 0x1A0uLL, 0x63647050u);
  v12 = PoolWithTag;
  if ( !PoolWithTag )
  {
    DriverPackageId = -1073741670;
    goto LABEL_43;
  }
  memset(PoolWithTag, 0, 0x1A0uLL);
  *((_QWORD *)v12 + 29) = v12 + 224;
  *((_QWORD *)v12 + 28) = v12 + 224;
  *((_QWORD *)v12 + 27) = v12 + 208;
  *((_QWORD *)v12 + 26) = v12 + 208;
  *((_QWORD *)v12 + 47) = v12 + 368;
  *((_QWORD *)v12 + 46) = v12 + 368;
  if ( !RtlCreateUnicodeString((PUNICODE_STRING)(v12 + 40), SourceString)
    || !PnpDuplicateUnicodeString((__int64)(v12 + 56), (__int64)&UnicodeString)
    || !RtlCreateUnicodeString((PUNICODE_STRING)(v12 + 72), a2)
    || i && !RtlCreateUnicodeString((PUNICODE_STRING)v12 + 8, i) )
  {
    DriverPackageId = -1073741670;
    goto LABEL_41;
  }
  memset(v38, 0, 0xC8uLL);
  v38[0] = DEVPKEY_DriverPackage_DriverDate;
  LODWORD(v38[1]) = 16;
  v38[5] = DEVPKEY_DriverPackage_DriverVersion;
  v38[2] = v12 + 112;
  v38[7] = v12 + 120;
  LODWORD(v38[3]) = 8;
  v38[10] = &DEVPKEY_DriverPackage_SignerScore;
  v13 = (PVOID *)(v12 + 144);
  LODWORD(v38[8]) = 8;
  v38[12] = &v26;
  v38[15] = DEVPKEY_DriverPackage_ExtensionId;
  v38[20] = DEVPKEY_DriverPackage_ExtensionContractIds;
  HIDWORD(v38[23]) = 2;
  LODWORD(v38[6]) = 9;
  LODWORD(v38[11]) = 7;
  LODWORD(v38[13]) = 4;
  LODWORD(v38[16]) = 13;
  v38[17] = v12 + 188;
  LODWORD(v38[18]) = 16;
  LODWORD(v38[21]) = 4109;
  v38[22] = v12 + 144;
  DriverPackageId = PiDevCfgQueryObjectProperties(16, UnicodeString.Buffer, 8, (_DWORD)Handle, (__int64)v38, 5);
  if ( DriverPackageId < 0 )
    goto LABEL_41;
  if ( SLODWORD(v38[4]) < 0 )
    *((_QWORD *)v12 + 14) = 0LL;
  if ( SLODWORD(v38[9]) < 0 )
    *((_QWORD *)v12 + 15) = 0LL;
  v14 = v26;
  if ( SLODWORD(v38[14]) < 0 )
    v14 = -16777216;
  v26 = v14;
  if ( SLODWORD(v38[19]) < 0 )
    *(_OWORD *)(v12 + 188) = 0LL;
  if ( SLODWORD(v38[24]) >= 0 )
  {
    if ( (v38[23] & 0xF) != 0 )
    {
      ExFreePoolWithTag(*v13, 0);
      *v13 = 0LL;
    }
    else
    {
      *((_DWORD *)v12 + 38) = LODWORD(v38[23]) >> 4;
    }
  }
  else
  {
    *v13 = 0LL;
  }
  if ( (a5 & 4) != 0 )
    v15 = -1;
  else
    v15 = (unsigned __int16)v33 | v32 & 0xFF0000 | v26 & ((a5 & 1) != 0 ? -268435456 : -16777216);
  *((_DWORD *)v12 + 27) = v15;
  if ( (a5 & 2) != 0 )
  {
    memset(v38, 0, 0xC8uLL);
    v38[0] = DEVPKEY_DriverPackage_F6;
    v38[2] = &v24;
    LODWORD(v38[1]) = 17;
    LODWORD(v38[3]) = 1;
    DriverPackageId = PiDevCfgQueryObjectProperties(v22, UnicodeString.Buffer, 8, (_DWORD)Handle, (__int64)v38, 1);
    if ( DriverPackageId < 0 )
      goto LABEL_41;
    v23 = v24;
    if ( SLODWORD(v38[4]) < 0 )
      v23 = 0;
    v24 = v23;
    if ( v23 == -1 )
      *((_DWORD *)v12 + 46) |= 2u;
  }
  *(_DWORD *)&v31.Length = 1572886;
  v31.Buffer = L"Descriptors";
  ObjectAttributes.RootDirectory = Handle;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  ObjectAttributes.ObjectName = &v31;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v16 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  DriverPackageId = v16;
  if ( v16 == -1073741772 )
    goto LABEL_52;
  if ( v16 < 0 )
    goto LABEL_41;
  ObjectAttributes.RootDirectory = KeyHandle;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)(v12 + 72);
  v17 = ZwOpenKey(&v29, 0x20019u, &ObjectAttributes);
  DriverPackageId = v17;
  if ( v17 == -1073741772 )
  {
LABEL_52:
    DriverPackageId = 0;
  }
  else
  {
    if ( v17 < 0 )
      goto LABEL_41;
    memset(v38, 0, sizeof(v38));
    v38[2] = L"Configuration";
    LODWORD(v38[4]) = 0x1000000;
    v38[3] = v12 + 88;
    LODWORD(v38[1]) = 288;
    DriverPackageId = RtlpQueryRegistryValues(-1073741824, (const WCHAR *)v29, (__int64)v38, 0LL);
    if ( DriverPackageId < 0 )
      goto LABEL_41;
    if ( !*((_WORD *)v12 + 44) && *((_QWORD *)v12 + 12) )
      RtlFreeAnsiString((PUNICODE_STRING)(v12 + 88));
  }
  v18 = *((_QWORD *)v12 + 12);
  if ( !v18 )
  {
LABEL_39:
    if ( PnpBootMode )
    {
      *(_DWORD *)&v31.Length = 1572886;
      v31.Buffer = L"ConfigFlags";
      if ( !v28 || !PnpRegistryValueExists(v28, &v31) )
        *((_DWORD *)v12 + 46) |= 4u;
    }
    *((_QWORD *)v12 + 2) = Handle;
    *((_QWORD *)v12 + 3) = v29;
    *((_QWORD *)v12 + 4) = v28;
    Handle = 0LL;
    v29 = 0LL;
    v28 = 0LL;
    *v37 = v12;
    v12 = 0LL;
    goto LABEL_41;
  }
  v19 = PiDevCfgOpenDriverConfiguration(Handle, v18, &v28);
  DriverPackageId = v19;
  if ( v19 == -1073741772 )
  {
    DriverPackageId = 0;
    goto LABEL_39;
  }
  if ( v19 >= 0 )
  {
    memset(v38, 0, sizeof(v38));
    v38[0] = PiDevCfgQueryDriverVersionValueCallback;
    v38[2] = L"DriverDate";
    v38[7] = PiDevCfgQueryDriverVersionValueCallback;
    v38[9] = L"DriverVersion";
    v38[3] = v12 + 112;
    v38[10] = v12 + 120;
    LODWORD(v38[18]) = 117440512;
    v38[16] = L"ExcludeIds";
    v38[17] = v12 + 160;
    LODWORD(v38[15]) = 304;
    DriverPackageId = RtlpQueryRegistryValues(-1073741824, (const WCHAR *)v28, (__int64)v38, 0LL);
    if ( DriverPackageId >= 0 )
    {
      if ( *((_WORD *)v12 + 80) <= 2u && *((_QWORD *)v12 + 21) )
        RtlFreeAnsiString((PUNICODE_STRING)v12 + 10);
      goto LABEL_39;
    }
  }
LABEL_41:
  if ( v12 )
    PiDevCfgFreeDriverNode(v12);
LABEL_43:
  if ( Handle )
    ZwClose(Handle);
  if ( v29 )
    ZwClose(v29);
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( v28 )
    ZwClose(v28);
  RtlFreeAnsiString(&UnicodeString);
  RtlFreeAnsiString(&v35);
  return (unsigned int)DriverPackageId;
}
