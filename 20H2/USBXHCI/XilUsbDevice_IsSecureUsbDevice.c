/*
 * XREFs of XilUsbDevice_IsSecureUsbDevice @ 0x1C004639C
 * Callers:
 *     TR_Create @ 0x1C006BF6C (TR_Create.c)
 * Callees:
 *     <none>
 */

char __fastcall XilUsbDevice_IsSecureUsbDevice(__int64 a1)
{
  return *(_BYTE *)(a1 + 656);
}
