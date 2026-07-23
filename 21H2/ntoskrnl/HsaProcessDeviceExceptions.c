/*
 * XREFs of HsaProcessDeviceExceptions @ 0x1404E41EC
 * Callers:
 *     HsaInitializeIommu @ 0x1409AB520 (HsaInitializeIommu.c)
 * Callees:
 *     memset @ 0x140414300 (memset.c)
 *     HalpHsapInitializeReservedDomain @ 0x1404E1934 (HalpHsapInitializeReservedDomain.c)
 *     HsaUpdateDeviceTableEntry @ 0x1404E4638 (HsaUpdateDeviceTableEntry.c)
 */

__int64 __fastcall HsaProcessDeviceExceptions(__int64 a1)
{
  _DWORD *v2; // rdx
  int v3; // esi
  int v4; // ebx
  __int64 i; // rbx
  unsigned int v6; // eax
  int v7; // r9d
  __int64 v9; // [rsp+50h] [rbp-68h] BYREF
  int v10; // [rsp+58h] [rbp-60h]
  _DWORD v11[20]; // [rsp+60h] [rbp-58h] BYREF

  memset(v11, 0, sizeof(v11));
  v2 = *(_DWORD **)(a1 + 216);
  v3 = 0;
  v9 = 0LL;
  v4 = 0;
  v10 = 0;
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
        memset(v11, 0, sizeof(v11));
        v6 = *(_DWORD *)(i + 24);
        LOBYTE(v7) = 1;
        v11[1] = 0;
        v10 = 0;
        v9 = v6 | 0x100000000LL;
        v11[0] = 1;
        HsaUpdateDeviceTableEntry(a1, (unsigned int)&v9, 0, v7, (__int64)v11, 1, 1);
      }
    }
  }
  return (unsigned int)v3;
}
