/*
 * XREFs of IommupHvUnmapDeviceIdentityRange @ 0x1404D8968
 * Callers:
 *     IommuMapIdentityRange @ 0x1404D8DC0 (IommuMapIdentityRange.c)
 *     IommuUnmapIdentityRange @ 0x1404D9250 (IommuUnmapIdentityRange.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 */

__int64 __fastcall IommupHvUnmapDeviceIdentityRange(__int64 a1)
{
  __int64 v2; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0LL;
  if ( *(_BYTE *)(a1 + 40) )
    return 3221225485LL;
  LODWORD(v2) = *(_DWORD *)(a1 + 32);
  BYTE4(v2) = 0;
  return ((__int64 (__fastcall *)(__int64 *))qword_140C4A408)(&v2);
}
