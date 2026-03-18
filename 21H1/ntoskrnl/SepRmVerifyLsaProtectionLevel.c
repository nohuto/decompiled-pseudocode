/*
 * XREFs of SepRmVerifyLsaProtectionLevel @ 0x1407957C8
 * Callers:
 *     SepRmLsaConnectRequest @ 0x140795520 (SepRmLsaConnectRequest.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140206450 (RtlInitUnicodeString.c)
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     ZwQuerySystemEnvironmentValueEx @ 0x1403F4F30 (ZwQuerySystemEnvironmentValueEx.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 *     ObReferenceObjectByHandle @ 0x14062B200 (ObReferenceObjectByHandle.c)
 */

void SepRmVerifyLsaProtectionLevel()
{
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-30h] BYREF
  _DWORD v1[4]; // [rsp+50h] [rbp-20h] BYREF

  v1[0] = 2012912317;
  v1[1] = 1295123289;
  DestinationString = 0LL;
  v1[2] = -198680387;
  v1[3] = 1266192359;
  RtlInitUnicodeString(&DestinationString, L"Kernel_Lsa_Ppl_Config");
  ZwQuerySystemEnvironmentValueEx((__int64)&DestinationString, (__int64)v1);
}
