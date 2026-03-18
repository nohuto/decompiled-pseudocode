/*
 * XREFs of VslFreeSecureHibernateResources @ 0x14088C728
 * Callers:
 *     PopFreeHiberContext @ 0x140767A78 (PopFreeHiberContext.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x1402E56B0 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     memset @ 0x14040A280 (memset.c)
 */

NTSTATUS VslFreeSecureHibernateResources()
{
  _BYTE v1[112]; // [rsp+20h] [rbp-88h] BYREF

  memset(v1, 0, 0x68uLL);
  return VslpEnterIumSecureMode(2u, 36, 0, (__int64)v1);
}
