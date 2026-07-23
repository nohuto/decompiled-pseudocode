/*
 * XREFs of _RtlValidRelativeSecurityDescriptor@12 @ 0x4B2EB6E0
 * Callers:
 *     <none>
 * Callees:
 *     _RtlValidAcl@4 @ 0x4B2D3740 (_RtlValidAcl@4.c)
 *     _RtlpValidateSDOffsetAndSize@16 @ 0x4B2EB825 (_RtlpValidateSDOffsetAndSize@16.c)
 */

BOOLEAN __cdecl RtlValidRelativeSecurityDescriptor(
        PSECURITY_DESCRIPTOR SecurityDescriptorInput,
        ULONG SecurityDescriptorLength,
        SECURITY_INFORMATION RequiredInformation)
{
  __int16 v3; // bx
  int v4; // ecx
  unsigned __int8 v5; // al
  int v6; // ecx
  unsigned __int8 v7; // al
  int v8; // ecx
  ACL *v9; // ecx
  int v10; // ecx
  unsigned int v12; // [esp+Ch] [ebp-4h] BYREF

  if ( SecurityDescriptorLength < 0x14 )
    return 0;
  if ( *(_BYTE *)SecurityDescriptorInput != 1 )
    return 0;
  v3 = *((_WORD *)SecurityDescriptorInput + 1);
  if ( v3 >= 0 )
    return 0;
  if ( *((_DWORD *)SecurityDescriptorInput + 1) )
  {
    if ( !(unsigned __int8)RtlpValidateSDOffsetAndSize(12, &v12) )
      return 0;
    if ( *((_BYTE *)SecurityDescriptorInput + v4) != 1 )
      return 0;
    v5 = *((_BYTE *)SecurityDescriptorInput + v4 + 1);
    if ( v5 > 0xFu || v12 < 4 * (unsigned int)v5 + 8 )
      return 0;
  }
  else if ( (RequiredInformation & 1) != 0 )
  {
    return 0;
  }
  if ( *((_DWORD *)SecurityDescriptorInput + 2) )
  {
    if ( !(unsigned __int8)RtlpValidateSDOffsetAndSize(12, &v12) )
      return 0;
    if ( *((_BYTE *)SecurityDescriptorInput + v6) != 1 )
      return 0;
    v7 = *((_BYTE *)SecurityDescriptorInput + v6 + 1);
    if ( v7 > 0xFu || v12 < 4 * (unsigned int)v7 + 8 )
      return 0;
  }
  else if ( (RequiredInformation & 2) != 0 )
  {
    return 0;
  }
  if ( (v3 & 4) == 0
    || !*((_DWORD *)SecurityDescriptorInput + 4)
    || (unsigned __int8)RtlpValidateSDOffsetAndSize(8, &v12)
    && (v9 = (ACL *)((char *)SecurityDescriptorInput + v8), v12 >= v9->AclSize)
    && RtlValidAcl(v9) )
  {
    if ( (*((_BYTE *)SecurityDescriptorInput + 2) & 0x10) == 0
      || !*((_DWORD *)SecurityDescriptorInput + 3)
      || (unsigned __int8)RtlpValidateSDOffsetAndSize(8, &v12)
      && v12 >= *(unsigned __int16 *)((char *)SecurityDescriptorInput + v10 + 2)
      && RtlValidAcl((PACL)((char *)SecurityDescriptorInput + v10)) )
    {
      return 1;
    }
  }
  return 0;
}
