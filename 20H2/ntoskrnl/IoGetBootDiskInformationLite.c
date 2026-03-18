/*
 * XREFs of IoGetBootDiskInformationLite @ 0x140793AC0
 * Callers:
 *     <none>
 * Callees:
 *     IopGetBootDiskInformationLite @ 0x140A469F0 (IopGetBootDiskInformationLite.c)
 */

NTSTATUS __stdcall IoGetBootDiskInformationLite(PBOOTDISK_INFORMATION_LITE *BootDiskInformation)
{
  if ( (unsigned int)InitializationPhase >= 2 )
    return -1073741431;
  else
    return IopGetBootDiskInformationLite(BootDiskInformation);
}
