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
  DWORD v10; // [esp+1Ch] [ebp-DCh] BYREF
  PDWORD v11; // [esp+20h] [ebp-D8h]
  int v12; // [esp+24h] [ebp-D4h] BYREF
  unsigned int v13; // [esp+28h] [ebp-D0h] BYREF
  _BYTE v14[16]; // [esp+2Ch] [ebp-CCh] BYREF
  char v15; // [esp+3Ch] [ebp-BCh] BYREF

  v5 = 0;
  v11 = ReturnedProductType;
  v12 = 0;
  v13 = 0;
  v10 = 0;
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
      if ( (int)NtQueryLicenseValue(&dword_4B28143C, &v12, &v10, 4, &v13) < 0 || v12 != 4 || v13 != 4 )
      {
        *v11 = -1412584499;
        goto LABEL_8;
      }
      if ( (int)NtQueryLicenseValue(&dword_4B281434, &v12, v14, 200, &v13) < 0 )
      {
LABEL_7:
        *v11 = v10;
LABEL_8:
        LOBYTE(v5) = 1;
        return v5;
      }
      if ( v12 == 3 && v13 >= 0x14 && !(v13 % 0x14) )
      {
        if ( v13 / 0x14 )
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
