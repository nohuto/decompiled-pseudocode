/*
 * XREFs of RtlValidRelativeSecurityDescriptor @ 0x14063E960
 * Callers:
 *     CmpVerifyCreateOrDeleteKeyLogRecord @ 0x1405C78A0 (CmpVerifyCreateOrDeleteKeyLogRecord.c)
 *     CmpVerifySetSecurityDescriptorLogRecord @ 0x1405C7A68 (CmpVerifySetSecurityDescriptorLogRecord.c)
 *     _PnpValidatePropertyData @ 0x1405D11A8 (_PnpValidatePropertyData.c)
 *     ExpWnfLookupPermanentName @ 0x14063CBD0 (ExpWnfLookupPermanentName.c)
 *     CmpValidateHiveSecurityDescriptors @ 0x14063E2BC (CmpValidateHiveSecurityDescriptors.c)
 *     _CmSetDeviceRegPropWorker @ 0x140724648 (_CmSetDeviceRegPropWorker.c)
 *     PipGetRegistrySecurityWithFallback @ 0x14074B1C0 (PipGetRegistrySecurityWithFallback.c)
 *     _CmSetInstallerClassRegPropWorker @ 0x140972568 (_CmSetInstallerClassRegPropWorker.c)
 * Callees:
 *     RtlpValidateSDOffsetAndSize @ 0x14063EABC (RtlpValidateSDOffsetAndSize.c)
 *     RtlValidAcl @ 0x14067E700 (RtlValidAcl.c)
 */

BOOLEAN __stdcall RtlValidRelativeSecurityDescriptor(
        PSECURITY_DESCRIPTOR SecurityDescriptorInput,
        ULONG SecurityDescriptorLength,
        SECURITY_INFORMATION RequiredInformation)
{
  char v3; // r10
  __int16 v6; // r11
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rcx
  int v10; // ecx
  __int64 v11; // rcx
  __int64 v12; // rcx
  int v13; // ecx
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v17; // rcx
  __int64 v18; // rcx
  unsigned int v19; // [rsp+20h] [rbp-10h] BYREF
  unsigned int v20[3]; // [rsp+24h] [rbp-Ch] BYREF
  unsigned int v21; // [rsp+58h] [rbp+28h] BYREF
  unsigned int v22; // [rsp+68h] [rbp+38h] BYREF

  v3 = RequiredInformation;
  v21 = 0;
  v22 = 0;
  v19 = 0;
  v20[0] = 0;
  if ( SecurityDescriptorLength < 0x14 )
    return 0;
  if ( *(_BYTE *)SecurityDescriptorInput != 1 )
    return 0;
  v6 = *((_WORD *)SecurityDescriptorInput + 1);
  if ( v6 >= 0 )
    return 0;
  v7 = *((unsigned int *)SecurityDescriptorInput + 1);
  v8 = 12LL;
  if ( (_DWORD)v7 )
  {
    if ( !(unsigned __int8)RtlpValidateSDOffsetAndSize(v7, SecurityDescriptorLength, 12LL, &v21) )
      return 0;
    if ( *((_BYTE *)SecurityDescriptorInput + v9) != 1 )
      return 0;
    v10 = *((unsigned __int8 *)SecurityDescriptorInput + v9 + 1);
    if ( (unsigned __int8)v10 > 0xFu || v21 < 4 * v10 + 8 )
      return 0;
  }
  else if ( (v3 & 1) != 0 )
  {
    return 0;
  }
  v11 = *((unsigned int *)SecurityDescriptorInput + 2);
  if ( (_DWORD)v11 )
  {
    if ( !(unsigned __int8)RtlpValidateSDOffsetAndSize(v11, SecurityDescriptorLength, v8, &v22) )
      return 0;
    if ( *((_BYTE *)SecurityDescriptorInput + v12) != 1 )
      return 0;
    v13 = *((unsigned __int8 *)SecurityDescriptorInput + v12 + 1);
    if ( (unsigned __int8)v13 > 0xFu || v22 < 4 * v13 + 8 )
      return 0;
  }
  else if ( (v3 & 2) != 0 )
  {
    return 0;
  }
  if ( (v6 & 4) == 0
    || (v14 = *((unsigned int *)SecurityDescriptorInput + 4), !(_DWORD)v14)
    || (unsigned __int8)RtlpValidateSDOffsetAndSize(v14, SecurityDescriptorLength, 8LL, &v19)
    && v19 >= *(unsigned __int16 *)((char *)SecurityDescriptorInput + v15 + 2)
    && (unsigned __int8)RtlValidAcl() )
  {
    if ( (*((_BYTE *)SecurityDescriptorInput + 2) & 0x10) == 0 )
      return 1;
    v17 = *((unsigned int *)SecurityDescriptorInput + 3);
    if ( !(_DWORD)v17
      || (unsigned __int8)RtlpValidateSDOffsetAndSize(v17, SecurityDescriptorLength, 8LL, v20)
      && v20[0] >= *(unsigned __int16 *)((char *)SecurityDescriptorInput + v18 + 2)
      && (unsigned __int8)RtlValidAcl() )
    {
      return 1;
    }
  }
  return 0;
}
