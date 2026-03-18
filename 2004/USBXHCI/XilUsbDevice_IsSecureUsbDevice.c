/*
 * XREFs of XilUsbDevice_IsSecureUsbDevice @ 0x1C0044EAC
 * Callers:
 *     TR_Create @ 0x1C006AA48 (TR_Create.c)
 * Callees:
 *     <none>
 */

char __fastcall XilUsbDevice_IsSecureUsbDevice(__int64 a1)
{
  return *(_BYTE *)(a1 + 656);
}
