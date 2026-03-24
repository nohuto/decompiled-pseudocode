/*
 * XREFs of XilUsbDevice_IsSecureUsbDevice @ 0x1C004573C
 * Callers:
 *     TR_Create @ 0x1C006AD7C (TR_Create.c)
 * Callees:
 *     <none>
 */

char __fastcall XilUsbDevice_IsSecureUsbDevice(__int64 a1)
{
  return *(_BYTE *)(a1 + 656);
}
