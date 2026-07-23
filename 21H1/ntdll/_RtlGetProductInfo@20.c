/*
 * XREFs of _RtlGetProductInfo@20 @ 0x4B2ED220
 * Callers:
 *     <none>
 * Callees:
 *     CompareVersions @ 0x4B2ED33E (CompareVersions.c)
 *     _NtQueryLicenseValue@20 @ 0x4B2F3EB0 (_NtQueryLicenseValue@20.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 */

BOOLEAN __stdcall RtlGetProductInfo(
        DWORD OSMajorVersion,
        DWORD OSMinorVersion,
        DWORD SpMajorVersion,
        DWORD SpMinorVersion,
        PDWORD ReturnedProductType)
{
  DWORD v5; // ebx
  char *v7; // ecx
  int v8; // edx
  _DWORD *v9; // ecx
  DWORD Data; // [esp+1Ch] [ebp-DCh] BYREF
  PDWORD v11; // [esp+20h] [ebp-D8h]
  ULONG Type; // [esp+24h] [ebp-D4h] BYREF
  ULONG ResultDataSize; // [esp+28h] [ebp-D0h] BYREF
  _BYTE v14[16]; // [esp+2Ch] [ebp-CCh] BYREF
  char v15; // [esp+3Ch] [ebp-BCh] BYREF

  v5 = 0;
  v11 = ReturnedProductType;
  Type = 0;
  ResultDataSize = 0;
  Data = 0;
  if ( ReturnedProductType )
  {
    *ReturnedProductType = 0;
    if ( (int)CompareVersions(
                OSMajorVersion,
                OSMinorVersion,
                SpMajorVersion,
                SpMinorVersion,
                6,
                dword_4B2873B8[1],
                dword_4B2873B8[2],
                dword_4B2873B8[3]) >= 0 )
    {
      if ( NtQueryLicenseValue((PUNICODE_STRING)&stru_4B28143C, &Type, &Data, 4u, &ResultDataSize) < 0
        || Type != 4
        || ResultDataSize != 4 )
      {
        *v11 = -1412584499;
        goto LABEL_8;
      }
      if ( NtQueryLicenseValue((PUNICODE_STRING)&stru_4B281434, &Type, v14, 0xC8u, &ResultDataSize) < 0 )
      {
LABEL_7:
        *v11 = Data;
LABEL_8:
        LOBYTE(v5) = 1;
        return v5;
      }
      if ( Type == 3 && ResultDataSize >= 0x14 && !(ResultDataSize % 0x14) )
      {
        if ( ResultDataSize / 0x14 )
        {
          v7 = &v15;
          do
          {
            if ( (int)CompareVersions(
                        OSMajorVersion,
                        OSMinorVersion,
                        SpMajorVersion,
                        SpMinorVersion,
                        *((_DWORD *)v7 - 4),
                        *((_DWORD *)v7 - 3),
                        *((_DWORD *)v7 - 2),
                        *((_DWORD *)v7 - 1)) < 0 )
              v5 = *v9;
            v7 = (char *)(v9 + 5);
          }
          while ( v8 != 1 );
          if ( v5 )
          {
            *v11 = v5;
            goto LABEL_8;
          }
        }
        goto LABEL_7;
      }
    }
  }
  return v5;
}
