/*
 * XREFs of VslAbortLiveDump @ 0x1404FA1F0
 * Callers:
 *     IopLiveDumpFreeDumpBuffers @ 0x14089AA50 (IopLiveDumpFreeDumpBuffers.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x1402E51E8 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     memset @ 0x140411300 (memset.c)
 */

NTSTATUS VslAbortLiveDump()
{
  _BYTE v1[112]; // [rsp+20h] [rbp-88h] BYREF

  memset(v1, 0, 0x68uLL);
  return VslpEnterIumSecureMode(2u, 58, 0, (__int64)v1);
}
