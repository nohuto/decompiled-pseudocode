/*
 * XREFs of SeCodeIntegrityGetBuildExpiryTime @ 0x1407C0E00
 * Callers:
 *     ExpKernelExpirationDateCacheProvider @ 0x1407C0D70 (ExpKernelExpirationDateCacheProvider.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall SeCodeIntegrityGetBuildExpiryTime(_QWORD *a1)
{
  if ( qword_140C1D958 )
    return qword_140C1D958();
  *a1 = 0LL;
  return 0LL;
}
