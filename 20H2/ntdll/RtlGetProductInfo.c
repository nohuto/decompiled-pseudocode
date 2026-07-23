/*
 * XREFs of RtlGetProductInfo @ 0x18007DE30
 * Callers:
 *     <none>
 * Callees:
 *     CompareVersions @ 0x18007DF70 (CompareVersions.c)
 *     __security_check_cookie @ 0x18008C340 (__security_check_cookie.c)
 *     ZwQueryLicenseValue @ 0x18009FB00 (ZwQueryLicenseValue.c)
 */

BOOLEAN __stdcall RtlGetProductInfo(
        DWORD OSMajorVersion,
        DWORD OSMinorVersion,
        DWORD SpMajorVersion,
        DWORD SpMinorVersion,
        PDWORD ReturnedProductType)
{
  DWORD v5; // esi
  BOOLEAN v6; // bl
  unsigned __int64 v8; // rax
  int v9; // r8d
  unsigned __int64 v10; // r9
  __int64 v11; // r10
  ULONG ResultDataSize; // [rsp+38h] [rbp-D0h] BYREF
  ULONG Type; // [rsp+3Ch] [rbp-CCh] BYREF
  DWORD Data; // [rsp+40h] [rbp-C8h] BYREF
  _DWORD Data_8[4]; // [rsp+48h] [rbp-C0h] BYREF
  _DWORD v16[4]; // [rsp+58h] [rbp-B0h] BYREF
  __int128 v17; // [rsp+68h] [rbp-A0h] BYREF
  _DWORD v18[52]; // [rsp+78h] [rbp-90h] BYREF

  v5 = 0;
  Type = 0;
  v6 = 1;
  ResultDataSize = 0;
  Data = 0;
  Data_8[0] = OSMajorVersion;
  Data_8[1] = OSMinorVersion;
  Data_8[2] = SpMajorVersion;
  Data_8[3] = SpMinorVersion;
  if ( !ReturnedProductType )
    return 0;
  *ReturnedProductType = 0;
  v16[0] = OSMajorVersion;
  v16[1] = OSMinorVersion;
  v17 = xmmword_180128140;
  v16[2] = SpMajorVersion;
  v16[3] = SpMinorVersion;
  if ( (int)CompareVersions(v16, &v17) < 0 )
    return 0;
  if ( ZwQueryLicenseValue((PUNICODE_STRING)&stru_18011D7C0, &Type, &Data, 4u, &ResultDataSize) < 0
    || Type != 4
    || ResultDataSize != 4 )
  {
    *ReturnedProductType = -1412584499;
    return v6;
  }
  if ( ZwQueryLicenseValue((PUNICODE_STRING)&stru_18011D7B0, &Type, v18, 0xC8u, &ResultDataSize) < 0 )
    goto LABEL_7;
  if ( Type != 3 || ResultDataSize < 0x14 || ResultDataSize != 20 * (ResultDataSize / 0x14uLL) )
    return 0;
  if ( ResultDataSize / 0x14uLL )
  {
    v8 = 0LL;
    do
    {
      v17 = *(_OWORD *)&v18[5 * v8];
      if ( (int)CompareVersions(Data_8, &v17) < 0 )
        v5 = v18[v11 + 4];
      v8 = (unsigned int)(v9 + 1);
    }
    while ( v8 < v10 );
    if ( v5 )
    {
      *ReturnedProductType = v5;
      return v6;
    }
  }
LABEL_7:
  *ReturnedProductType = Data;
  return v6;
}
