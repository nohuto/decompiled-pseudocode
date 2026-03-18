/*
 * XREFs of HUBPSM30_IssuingAttachDeviceToDsm @ 0x1C0011C50
 * Callers:
 *     <none>
 * Callees:
 *     HUBMISC_AttachDevice @ 0x1C002DE1C (HUBMISC_AttachDevice.c)
 */

__int64 __fastcall HUBPSM30_IssuingAttachDeviceToDsm(__int64 a1)
{
  *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 960) + 1328LL) + 1456LL) |= 0x20800u;
  return HUBMISC_AttachDevice();
}
