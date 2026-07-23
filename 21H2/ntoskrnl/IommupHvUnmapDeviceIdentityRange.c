/*
 * XREFs of IommupHvUnmapDeviceIdentityRange @ 0x1404DA5B8
 * Callers:
 *     IommuMapIdentityRange @ 0x1404DAA10 (IommuMapIdentityRange.c)
 *     IommuUnmapIdentityRange @ 0x1404DAEA0 (IommuUnmapIdentityRange.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 */

__int64 __fastcall IommupHvUnmapDeviceIdentityRange(__int64 a1)
{
  __int64 v2; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0LL;
  if ( *(_BYTE *)(a1 + 40) )
    return 3221225485LL;
  LODWORD(v2) = *(_DWORD *)(a1 + 32);
  BYTE4(v2) = 0;
  return ((__int64 (__fastcall *)(__int64 *))qword_140C4A368)(&v2);
}
