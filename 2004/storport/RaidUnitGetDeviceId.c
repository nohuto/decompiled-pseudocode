/*
 * XREFs of RaidUnitGetDeviceId @ 0x1C0019CC4
 * Callers:
 *     RaUnitQueryIdIrp @ 0x1C0073CBC (RaUnitQueryIdIrp.c)
 * Callees:
 *     RaidAllocatePool @ 0x1C0008278 (RaidAllocatePool.c)
 *     StorGetIdentityVendorId @ 0x1C0019B88 (StorGetIdentityVendorId.c)
 *     StorGetIdentityProductId @ 0x1C0019BB8 (StorGetIdentityProductId.c)
 *     RtlStringCchPrintfW @ 0x1C0019C6C (RtlStringCchPrintfW.c)
 *     __security_check_cookie @ 0x1C001BE70 (__security_check_cookie.c)
 *     PortGetDeviceType @ 0x1C0072394 (PortGetDeviceType.c)
 *     RaFixupIds @ 0x1C0073EDC (RaFixupIds.c)
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
