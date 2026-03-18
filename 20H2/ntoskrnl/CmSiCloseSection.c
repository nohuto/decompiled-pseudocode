/*
 * XREFs of CmSiCloseSection @ 0x140326FE0
 * Callers:
 *     HvpViewMapCleanup @ 0x1406D6DF4 (HvpViewMapCleanup.c)
 *     BiDeleteKey @ 0x1407759B0 (BiDeleteKey.c)
 *     BiDeleteRegistryValue @ 0x14077E404 (BiDeleteRegistryValue.c)
 *     BiCreateKey @ 0x14077FE30 (BiCreateKey.c)
 *     BiGetRegistryValue @ 0x140780018 (BiGetRegistryValue.c)
 *     BiOpenKey @ 0x140780624 (BiOpenKey.c)
 *     BiCloseKey @ 0x1407807AC (BiCloseKey.c)
 * Callees:
 *     ZwClose @ 0x1403F8350 (ZwClose.c)
 */

NTSTATUS __fastcall CmSiCloseSection(void *a1)
{
  return ZwClose(a1);
}
