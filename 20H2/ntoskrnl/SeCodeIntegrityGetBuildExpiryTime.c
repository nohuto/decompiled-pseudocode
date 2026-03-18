/*
 * XREFs of SeCodeIntegrityGetBuildExpiryTime @ 0x1407CF690
 * Callers:
 *     ExpKernelExpirationDateCacheProvider @ 0x1407CF600 (ExpKernelExpirationDateCacheProvider.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 */

__int64 __fastcall SeCodeIntegrityGetBuildExpiryTime(_QWORD *a1)
{
  if ( qword_140C1D9F8 )
    return qword_140C1D9F8();
  *a1 = 0LL;
  return 0LL;
}
