/*
 * XREFs of sub_18000B7C0 @ 0x18000B7C0
 * Callers:
 *     sub_180006B7C @ 0x180006B7C (sub_180006B7C.c)
 *     sub_18000B63C @ 0x18000B63C (sub_18000B63C.c)
 *     PsmHostStateNotification2 @ 0x18000B680 (PsmHostStateNotification2.c)
 *     sub_180022888 @ 0x180022888 (sub_180022888.c)
 *     sub_1800327C0 @ 0x1800327C0 (sub_1800327C0.c)
 * Callees:
 *     <none>
 */

_BOOL8 sub_18000B7C0()
{
  return dwTlsIndex != -1 && TlsGetValue(dwTlsIndex) != 0LL;
}
