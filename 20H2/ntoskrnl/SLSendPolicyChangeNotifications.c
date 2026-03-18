/*
 * XREFs of SLSendPolicyChangeNotifications @ 0x140950A98
 * Callers:
 *     SLUpdateLicenseDataInternal @ 0x140950AC0 (SLUpdateLicenseDataInternal.c)
 * Callees:
 *     ExNotifyCallback @ 0x14030FBB0 (ExNotifyCallback.c)
 */

void __fastcall SLSendPolicyChangeNotifications(__int64 a1)
{
  void *v1; // rcx

  v1 = *(void **)(a1 + 46848);
  if ( v1 )
    ExNotifyCallback(v1, 0LL, 0LL);
}
