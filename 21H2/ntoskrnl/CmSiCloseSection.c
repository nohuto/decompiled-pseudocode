/*
 * XREFs of CmSiCloseSection @ 0x140246A18
 * Callers:
 *     HvpViewMapCleanup @ 0x140614D78 (HvpViewMapCleanup.c)
 *     BiDeleteKey @ 0x140779B20 (BiDeleteKey.c)
 *     BiDeleteRegistryValue @ 0x1407823A4 (BiDeleteRegistryValue.c)
 *     BiCreateKey @ 0x140783DD0 (BiCreateKey.c)
 *     BiGetRegistryValue @ 0x140783FB8 (BiGetRegistryValue.c)
 *     BiOpenKey @ 0x1407845C4 (BiOpenKey.c)
 *     BiCloseKey @ 0x14078474C (BiCloseKey.c)
 * Callees:
 *     ZwClose @ 0x1403FA760 (ZwClose.c)
 */

NTSTATUS __fastcall CmSiCloseSection(void *a1)
{
  return ZwClose(a1);
}
