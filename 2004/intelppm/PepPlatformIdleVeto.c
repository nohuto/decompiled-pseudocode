/*
 * XREFs of PepPlatformIdleVeto @ 0x1C000F884
 * Callers:
 *     PepDevicePowerControlCallback @ 0x1C0010630 (PepDevicePowerControlCallback.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0004280 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00044E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PepPlatformIdleVeto(__int64 a1, int *a2)
{
  int v3; // eax
  __int128 v4; // [rsp+20h] [rbp-28h] BYREF

  if ( !Src && !qword_1C001C9B8 && !qword_1C001C9C0 )
    return 3221225659LL;
  v3 = *a2;
  v4 = 0LL;
  DWORD1(v4) = v3;
  DWORD2(v4) = a2[1];
  BYTE12(v4) = *((_BYTE *)a2 + 8);
  LODWORD(v4) = 62;
  return ((__int64 (__fastcall *)(__int128 *))qword_1C001C680)(&v4);
}
