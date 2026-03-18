/*
 * XREFs of IoGetConfigurationInformation @ 0x140811D00
 * Callers:
 *     DifIoGetConfigurationInformationWrapper @ 0x14060EFB0 (DifIoGetConfigurationInformationWrapper.c)
 *     IopCreateArcNamesDisk @ 0x140B0E1A8 (IopCreateArcNamesDisk.c)
 *     IopCreateArcNamesCd @ 0x140B0E310 (IopCreateArcNamesCd.c)
 *     IopGetBootDiskInformation @ 0x140B4F04C (IopGetBootDiskInformation.c)
 *     VhdiInitializeBootDisk @ 0x140B54800 (VhdiInitializeBootDisk.c)
 * Callees:
 *     <none>
 */

PCONFIGURATION_INFORMATION IoGetConfigurationInformation(void)
{
  return (PCONFIGURATION_INFORMATION)&dword_140D3B848;
}
