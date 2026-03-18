/*
 * XREFs of SLSendPolicyChangeNotifications @ 0x140949938
 * Callers:
 *     SLUpdateLicenseDataInternal @ 0x140949960 (SLUpdateLicenseDataInternal.c)
 * Callees:
 *     ExNotifyCallback @ 0x1403005D0 (ExNotifyCallback.c)
 */

void __fastcall SLSendPolicyChangeNotifications(__int64 a1)
{
  void *v1; // rcx

  v1 = *(void **)(a1 + 37472);
  if ( v1 )
    ExNotifyCallback(v1, 0LL, 0LL);
}
