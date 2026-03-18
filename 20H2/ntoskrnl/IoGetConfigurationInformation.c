/*
 * XREFs of IoGetConfigurationInformation @ 0x14077DD30
 * Callers:
 *     ExpQuerySystemInformation @ 0x140608060 (ExpQuerySystemInformation.c)
 *     IopCreateArcNamesDisk @ 0x140A59D74 (IopCreateArcNamesDisk.c)
 *     IopCreateArcNamesCd @ 0x140A59EDC (IopCreateArcNamesCd.c)
 *     IopGetBootDiskInformation @ 0x140A92B7C (IopGetBootDiskInformation.c)
 *     VhdiInitializeBootDisk @ 0x140A97B00 (VhdiInitializeBootDisk.c)
 * Callees:
 *     <none>
 */

PCONFIGURATION_INFORMATION IoGetConfigurationInformation(void)
{
  return (PCONFIGURATION_INFORMATION)&unk_140D2D828;
}
