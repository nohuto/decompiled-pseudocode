/*
 * XREFs of SLSendPolicyChangeNotifications @ 0x14094ACD8
 * Callers:
 *     SLUpdateLicenseDataInternal @ 0x14094AD00 (SLUpdateLicenseDataInternal.c)
 * Callees:
 *     ExNotifyCallback @ 0x14033CED0 (ExNotifyCallback.c)
 */

void __fastcall SLSendPolicyChangeNotifications(__int64 a1)
{
  void *v1; // rcx

  v1 = *(void **)(a1 + 37472);
  if ( v1 )
    ExNotifyCallback(v1, 0LL, 0LL);
}
