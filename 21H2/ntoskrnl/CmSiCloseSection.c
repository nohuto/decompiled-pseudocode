/*
 * XREFs of CmSiCloseSection @ 0x140250FF0
 * Callers:
 *     HvpViewMapCleanup @ 0x1406D8150 (HvpViewMapCleanup.c)
 *     BiCreateKey @ 0x1408036C8 (BiCreateKey.c)
 *     BiDeleteKey @ 0x14080422C (BiDeleteKey.c)
 *     BiDeleteRegistryValue @ 0x140812318 (BiDeleteRegistryValue.c)
 *     BiGetRegistryValue @ 0x140812F84 (BiGetRegistryValue.c)
 *     BiOpenKey @ 0x140813164 (BiOpenKey.c)
 *     BiCloseKey @ 0x1408132F0 (BiCloseKey.c)
 * Callees:
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 */

NTSTATUS __fastcall CmSiCloseSection(void *a1)
{
  return ZwClose(a1);
}
