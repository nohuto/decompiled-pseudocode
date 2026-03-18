/*
 * XREFs of IoGetBootDiskInformation @ 0x14088F7E0
 * Callers:
 *     <none>
 * Callees:
 *     IopGetBootDiskInformation @ 0x140A8D88C (IopGetBootDiskInformation.c)
 */

NTSTATUS __stdcall IoGetBootDiskInformation(PBOOTDISK_INFORMATION BootDiskInformation, ULONG Size)
{
  if ( (unsigned int)InitializationPhase < 2 )
    return IopGetBootDiskInformation(BootDiskInformation, Size);
  else
    return -1073741431;
}
