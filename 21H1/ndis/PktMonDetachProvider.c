/*
 * XREFs of PktMonDetachProvider @ 0x1C00C6690
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C003F3E0 (_guard_dispatch_icall_nop.c)
 */

__int64 PktMonDetachProvider()
{
  byte_1C00E3EA8 = 0;
  ExWaitForRundownProtectionReleaseCacheAware(RunRefCacheAware);
  *(_OWORD *)&ProviderBindingContext = 0LL;
  if ( qword_1C00E3EB8 )
    qword_1C00E3EB8();
  return 0LL;
}
