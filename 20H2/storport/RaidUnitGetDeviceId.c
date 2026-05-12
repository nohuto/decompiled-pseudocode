/*
 * XREFs of RaidUnitGetDeviceId @ 0x1C001A810
 * Callers:
 *     RaUnitQueryIdIrp @ 0x1C0074BC0 (RaUnitQueryIdIrp.c)
 * Callees:
 *     RaidAllocatePool @ 0x1C000BD70 (RaidAllocatePool.c)
 *     StorGetIdentityVendorId @ 0x1C001A66C (StorGetIdentityVendorId.c)
 *     StorGetIdentityProductId @ 0x1C001A69C (StorGetIdentityProductId.c)
 *     RtlStringCchPrintfW @ 0x1C001A750 (RtlStringCchPrintfW.c)
 *     __security_check_cookie @ 0x1C001CB10 (__security_check_cookie.c)
 *     PortGetDeviceType @ 0x1C0074134 (PortGetDeviceType.c)
 *     RaFixupIds @ 0x1C0074DE0 (RaFixupIds.c)
 */

__int64 __fastcall RaidUnitGetDeviceId(__int64 a1, wchar_t **a2)
{
  unsigned int v4; // edi
  wchar_t *Pool; // rbx
  _QWORD *DeviceType; // rax
  _BYTE v8[16]; // [rsp+30h] [rbp-48h] BYREF
  _BYTE v9[24]; // [rsp+40h] [rbp-38h] BYREF

  v4 = 0;
  Pool = (wchar_t *)RaidAllocatePool(PagedPool, 0x80uLL, 0x49446152u, *(_QWORD *)(a1 + 8));
  if ( Pool )
  {
    StorGetIdentityVendorId((_QWORD *)(a1 + 104), (__int64)v8);
    StorGetIdentityProductId((_QWORD *)(a1 + 104), (__int64)v9);
    if ( (*(_DWORD *)(a1 + 1824) & 1) != 0 )
    {
      RtlStringCchPrintfW(Pool, 0x40uLL, L"SCSI\\VMLUN&Ven_%hs&Prod_%hs", v8, v9);
    }
    else
    {
      DeviceType = (_QWORD *)PortGetDeviceType(**(_BYTE **)(a1 + 104) & 0x1F);
      RtlStringCchPrintfW(Pool, 0x40uLL, L"SCSI\\%hs&Ven_%hs&Prod_%hs", *DeviceType, v8, v9);
    }
    RaFixupIds(Pool, 0LL, 64LL);
  }
  else
  {
    v4 = -1073741801;
  }
  *a2 = Pool;
  return v4;
}
