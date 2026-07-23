/*
 * XREFs of _RtlIsPartialPlaceholderFileInfo@12 @ 0x4B366800
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl RtlIsPartialPlaceholderFileInfo(
        PVOID InfoBuffer,
        FILE_INFORMATION_CLASS InfoClass,
        PBOOLEAN IsPartialPlaceholder)
{
  int v3; // eax

  if ( InfoClass > FileIdExtdDirectoryInformation )
  {
    if ( InfoClass == FileIdExtdBothDirectoryInformation
      || InfoClass == FileStatInformation
      || InfoClass == FileStatLxInformation )
    {
      goto LABEL_8;
    }
    return InfoClass < FileMaximumInformation ? -1073741637 : -1073741821;
  }
  if ( InfoClass != FileIdExtdDirectoryInformation )
  {
    if ( InfoClass < FileFullDirectoryInformation )
      return InfoClass < FileMaximumInformation ? -1073741637 : -1073741821;
    if ( InfoClass > FileBothDirectoryInformation )
    {
      if ( InfoClass == FileAttributeTagInformation )
      {
        v3 = *(_DWORD *)InfoBuffer;
        goto LABEL_9;
      }
      if ( InfoClass <= FileTrackingInformation || InfoClass > FileIdFullDirectoryInformation )
        return InfoClass < FileMaximumInformation ? -1073741637 : -1073741821;
    }
  }
LABEL_8:
  v3 = *((_DWORD *)InfoBuffer + 14);
LABEL_9:
  *IsPartialPlaceholder = (v3 & 0x440000) != 0;
  return 0;
}
