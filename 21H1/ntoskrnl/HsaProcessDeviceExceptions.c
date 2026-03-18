/*
 * XREFs of HsaProcessDeviceExceptions @ 0x1404DE9A8
 * Callers:
 *     HsaInitializeIommu @ 0x1409A6950 (HsaInitializeIommu.c)
 * Callees:
 *     memset @ 0x140408F80 (memset.c)
 *     HalpHsapInitializeReservedDomain @ 0x1404DC204 (HalpHsapInitializeReservedDomain.c)
 *     HsaUpdateDeviceTableEntry @ 0x1404DEDC8 (HsaUpdateDeviceTableEntry.c)
 */

__int64 __fastcall HsaProcessDeviceExceptions(__int64 a1)
{
  _DWORD *v2; // rdx
  int v3; // esi
  int v4; // ebx
  __int64 i; // rbx
  int v6; // r9d
  int v7; // edx
  _DWORD v9[20]; // [rsp+50h] [rbp-58h] BYREF

  memset(v9, 0, sizeof(v9));
  v2 = *(_DWORD **)(a1 + 216);
  v3 = 0;
  v4 = 0;
  if ( *v2 )
  {
    while ( 1 )
    {
      v3 = HalpHsapInitializeReservedDomain(a1, (__int64)&v2[4 * v4 + 2]);
      if ( v3 < 0 )
        break;
      v2 = *(_DWORD **)(a1 + 216);
      if ( (unsigned int)++v4 >= *v2 )
        goto LABEL_4;
    }
  }
  else
  {
LABEL_4:
    for ( i = HalpIommuExceptionList; (__int64 *)i != &HalpIommuExceptionList; i = *(_QWORD *)i )
    {
      if ( *(_DWORD *)(i + 16) == *(_DWORD *)(a1 + 160) )
      {
        memset(v9, 0, sizeof(v9));
        v9[1] = 0;
        LOBYTE(v6) = 1;
        v7 = *(_DWORD *)(i + 24);
        v9[0] = 1;
        HsaUpdateDeviceTableEntry(a1, v7, 0, v6, (__int64)v9, 1, 1);
      }
    }
  }
  return (unsigned int)v3;
}
