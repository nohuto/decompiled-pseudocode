/*
 * XREFs of IoGetConfigurationInformation @ 0x140781CD0
 * Callers:
 *     ExpQuerySystemInformation @ 0x140645E90 (ExpQuerySystemInformation.c)
 *     IopCreateArcNamesDisk @ 0x140A62CE8 (IopCreateArcNamesDisk.c)
 *     IopCreateArcNamesCd @ 0x140A62E50 (IopCreateArcNamesCd.c)
 *     IopGetBootDiskInformation @ 0x140A909DC (IopGetBootDiskInformation.c)
 *     VhdiInitializeBootDisk @ 0x140A95990 (VhdiInitializeBootDisk.c)
 * Callees:
 *     <none>
 */

PCONFIGURATION_INFORMATION IoGetConfigurationInformation(void)
{
  return (PCONFIGURATION_INFORMATION)&unk_140D2D808;
}
