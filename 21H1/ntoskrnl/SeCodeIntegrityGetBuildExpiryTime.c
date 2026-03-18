/*
 * XREFs of SeCodeIntegrityGetBuildExpiryTime @ 0x1407BDBE0
 * Callers:
 *     ExpKernelExpirationDateCacheProvider @ 0x1407BDB50 (ExpKernelExpirationDateCacheProvider.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall SeCodeIntegrityGetBuildExpiryTime(_QWORD *a1)
{
  if ( qword_140C1DB18 )
    return qword_140C1DB18();
  *a1 = 0LL;
  return 0LL;
}
