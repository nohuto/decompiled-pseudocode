/*
 * XREFs of CmSiCloseSection @ 0x1402C81B8
 * Callers:
 *     HvpViewMapCleanup @ 0x1406B58BC (HvpViewMapCleanup.c)
 *     BiDeleteKey @ 0x140779960 (BiDeleteKey.c)
 *     BiDeleteRegistryValue @ 0x1407821E4 (BiDeleteRegistryValue.c)
 *     BiCreateKey @ 0x140783C10 (BiCreateKey.c)
 *     BiGetRegistryValue @ 0x140783DF8 (BiGetRegistryValue.c)
 *     BiOpenKey @ 0x140784404 (BiOpenKey.c)
 *     BiCloseKey @ 0x14078458C (BiCloseKey.c)
 * Callees:
 *     ZwClose @ 0x1403FA580 (ZwClose.c)
 */

NTSTATUS __fastcall CmSiCloseSection(void *a1)
{
  return ZwClose(a1);
}
