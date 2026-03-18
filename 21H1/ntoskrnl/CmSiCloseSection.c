/*
 * XREFs of CmSiCloseSection @ 0x140318BA0
 * Callers:
 *     HvpViewMapCleanup @ 0x1406E0E88 (HvpViewMapCleanup.c)
 *     BiDeleteKey @ 0x140764FC0 (BiDeleteKey.c)
 *     BiDeleteRegistryValue @ 0x14076D9F4 (BiDeleteRegistryValue.c)
 *     BiCreateKey @ 0x14076F420 (BiCreateKey.c)
 *     BiGetRegistryValue @ 0x14076F608 (BiGetRegistryValue.c)
 *     BiOpenKey @ 0x14076FC14 (BiOpenKey.c)
 *     BiCloseKey @ 0x14076FD9C (BiCloseKey.c)
 * Callees:
 *     ZwClose @ 0x1403F2510 (ZwClose.c)
 */

NTSTATUS __fastcall CmSiCloseSection(void *a1)
{
  return ZwClose(a1);
}
