/*
 * XREFs of NVMeDisableThrottling @ 0x1C000D32C
 * Callers:
 *     NVMeControllerRemove @ 0x1C000CE54 (NVMeControllerRemove.c)
 *     NVMeControllerStop @ 0x1C000D258 (NVMeControllerStop.c)
 * Callees:
 *     NVMeDeRegisterThrottling @ 0x1C0012C94 (NVMeDeRegisterThrottling.c)
 */

__int64 __fastcall NVMeDisableThrottling(__int64 a1)
{
  NVMeDeRegisterThrottling(a1, 0LL);
  NVMeDeRegisterThrottling(a1, 1LL);
  NVMeDeRegisterThrottling(a1, 2LL);
  NVMeDeRegisterThrottling(a1, 3LL);
  NVMeDeRegisterThrottling(a1, 4LL);
  return NVMeDeRegisterThrottling(a1, 5LL);
}
