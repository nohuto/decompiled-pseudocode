/*
 * XREFs of ?ndisNDKHandleWmiChangeRequest@@YAJPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C012067C
 * Callers:
 *     ?ndisWmiChangeSingleInstance@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@QEAUtagWNODE_SINGLE_INSTANCE@@@Z @ 0x1C008C630 (-ndisWmiChangeSingleInstance@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@QEAUtagWNODE_SINGLE_I.c)
 * Callees:
 *     ?ndisQuerySetMiniport@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_REQUEST@@EPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C000AE64 (-ndisQuerySetMiniport@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_REQ.c)
 *     NdisWriteConfiguration @ 0x1C00272F0 (NdisWriteConfiguration.c)
 *     NdisCloseConfiguration @ 0x1C0028580 (NdisCloseConfiguration.c)
 *     NdisOpenConfiguration @ 0x1C0028A80 (NdisOpenConfiguration.c)
 *     __security_check_cookie @ 0x1C003D700 (__security_check_cookie.c)
 *     memset @ 0x1C003FE40 (memset.c)
 */

__int64 __fastcall ndisNDKHandleWmiChangeRequest(struct _NDIS_MINIPORT_BLOCK *a1, char a2)
{
  void *v2; // r8
  unsigned int v5; // eax
  bool v6; // zf
  const WCHAR *v7; // rdx
  unsigned int v8; // ecx
  char v10; // [rsp+30h] [rbp-D0h] BYREF
  int Status; // [rsp+38h] [rbp-C8h] BYREF
  PVOID ConfigurationHandle; // [rsp+40h] [rbp-C0h] BYREF
  UNICODE_STRING Keyword; // [rsp+48h] [rbp-B8h] BYREF
  struct _NDIS_CONFIGURATION_PARAMETER DestinationString; // [rsp+58h] [rbp-A8h] BYREF
  struct _NDIS_OID_REQUEST v15; // [rsp+70h] [rbp-90h] BYREF

  v2 = a1->ConfigurationHandle;
  ConfigurationHandle = 0LL;
  Status = 0;
  v10 = a2;
  Keyword.Buffer = L"*NetworkDirect";
  *(_QWORD *)&Keyword.Length = 1966108LL;
  memset(&DestinationString, 0, sizeof(DestinationString));
  NdisOpenConfiguration(&Status, &ConfigurationHandle, v2);
  v5 = Status;
  v6 = Status == 0;
  if ( Status >= 0 )
  {
    DestinationString.ParameterType = NdisParameterString;
    v7 = (const WCHAR *)L"1";
    if ( !a2 )
      v7 = L"0";
    RtlInitUnicodeString((PUNICODE_STRING)&DestinationString.ParameterData, v7);
    NdisWriteConfiguration(&Status, ConfigurationHandle, &Keyword, &DestinationString);
    NdisCloseConfiguration(ConfigurationHandle);
    v5 = Status;
    v6 = Status == 0;
    if ( Status >= 0 )
    {
      memset(&v15, 0, 0xF8uLL);
      *(_DWORD *)&v15.NdisReserved[16] |= 8u;
      v15.PortNumber = 0;
      *(_QWORD *)&v15.NdisReserved[32] = &ndisIntReqWmi;
      v15.RequestType = NdisRequestSetInformation;
      v15.DATA.QUERY_INFORMATION.InformationBufferLength = 1;
      v15.DATA.QUERY_INFORMATION.InformationBuffer = &v10;
      v15.Header = (NDIS_OBJECT_HEADER)15466902;
      v15.DATA.QUERY_INFORMATION.Oid = -66846207;
      v5 = ndisQuerySetMiniport(a1, 0LL, &v15, 0, 0LL);
      v6 = v5 == 0;
    }
  }
  if ( v6 )
    return v5;
  if ( v5 == 259 )
    return v5;
  if ( v5 == -2147483643 )
    return v5;
  v8 = -1073741823;
  switch ( v5 )
  {
    case 0xC0000001:
    case 0xC000009A:
    case 0xC00000BB:
      return v5;
    case 0xC0010016:
      return (unsigned int)-1073741789;
    case 0xC0010014:
      return (unsigned int)-1073741306;
    case 0xC0010015:
      return (unsigned int)-1073741811;
  }
  return v8;
}
