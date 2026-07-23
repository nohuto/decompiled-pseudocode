/*
 * XREFs of IoGetBootDiskInformation @ 0x140893D20
 * Callers:
 *     <none>
 * Callees:
 *     IopGetBootDiskInformation @ 0x140A909DC (IopGetBootDiskInformation.c)
 */

NTSTATUS __stdcall IoGetBootDiskInformation(PBOOTDISK_INFORMATION BootDiskInformation, ULONG Size)
{
  if ( (unsigned int)InitializationPhase < 2 )
    return IopGetBootDiskInformation(BootDiskInformation, Size);
  else
    return -1073741431;
}
