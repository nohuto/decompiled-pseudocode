/*
 * XREFs of CmSiCloseSection @ 0x140356790
 * Callers:
 *     HvpViewMapCleanup @ 0x140703C18 (HvpViewMapCleanup.c)
 *     BiDeleteKey @ 0x140766980 (BiDeleteKey.c)
 *     BiDeleteRegistryValue @ 0x14076FE04 (BiDeleteRegistryValue.c)
 *     BiCreateKey @ 0x140771830 (BiCreateKey.c)
 *     BiGetRegistryValue @ 0x140771A18 (BiGetRegistryValue.c)
 *     BiOpenKey @ 0x140772024 (BiOpenKey.c)
 *     BiCloseKey @ 0x1407721AC (BiCloseKey.c)
 * Callees:
 *     ZwClose @ 0x1403F37A0 (ZwClose.c)
 */

NTSTATUS __fastcall CmSiCloseSection(void *a1)
{
  return ZwClose(a1);
}
