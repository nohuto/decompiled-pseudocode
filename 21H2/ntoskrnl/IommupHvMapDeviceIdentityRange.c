/*
 * XREFs of IommupHvMapDeviceIdentityRange @ 0x140527900
 * Callers:
 *     HalpIommuDomainMapIdentityRange @ 0x14051AA64 (HalpIommuDomainMapIdentityRange.c)
 * Callees:
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall IommupHvMapDeviceIdentityRange(ULONG_PTR BugCheckParameter3, __int64 a2, __int64 a3, _QWORD *a4)
{
  int v8; // esi
  int v9; // eax
  __int64 v10; // [rsp+40h] [rbp+8h] BYREF

  v10 = 0LL;
  if ( *(_BYTE *)(BugCheckParameter3 + 52) )
    return 3221225485LL;
  LODWORD(v10) = *(_DWORD *)(BugCheckParameter3 + 48);
  BYTE4(v10) = 0;
  v8 = ((__int64 (__fastcall *)(__int64 *))qword_140C4C620)(&v10);
  if ( v8 < 0 )
  {
    v9 = ((__int64 (__fastcall *)(__int64 *, __int64, _QWORD *))qword_140C4C628)(&v10, a3, a4);
    if ( v9 < 0 )
      KeBugCheckEx(0x1D9u, 1uLL, v9, BugCheckParameter3, 0LL);
    *a4 = 0LL;
  }
  return (unsigned int)v8;
}
