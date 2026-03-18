/*
 * XREFs of IoGetConfigurationInformation @ 0x14076F730
 * Callers:
 *     ExpQuerySystemInformation @ 0x14068F290 (ExpQuerySystemInformation.c)
 *     IopCreateArcNamesDisk @ 0x140A67484 (IopCreateArcNamesDisk.c)
 *     IopCreateArcNamesCd @ 0x140A675EC (IopCreateArcNamesCd.c)
 *     IopGetBootDiskInformation @ 0x140A8CE7C (IopGetBootDiskInformation.c)
 *     VhdiInitializeBootDisk @ 0x140A91EA0 (VhdiInitializeBootDisk.c)
 * Callees:
 *     <none>
 */

PCONFIGURATION_INFORMATION IoGetConfigurationInformation(void)
{
  return (PCONFIGURATION_INFORMATION)&unk_140D2D828;
}
