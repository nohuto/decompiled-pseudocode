/*
 * XREFs of RtlIsPartialPlaceholderFileInfo @ 0x140912E90
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
  NTSTATUS result; // eax

  if ( InfoClass >= FileFullDirectoryInformation )
  {
    if ( InfoClass <= FileBothDirectoryInformation )
      goto LABEL_10;
    if ( InfoClass == FileAttributeTagInformation )
    {
LABEL_11:
      *IsPartialPlaceholder = (*(_DWORD *)InfoBuffer & 0x440000) != 0;
      return 0;
    }
    if ( InfoClass > FileTrackingInformation
      && (InfoClass <= FileIdFullDirectoryInformation
       || InfoClass == FileIdExtdDirectoryInformation
       || InfoClass == FileIdExtdBothDirectoryInformation
       || InfoClass == FileStatInformation
       || InfoClass == FileStatLxInformation) )
    {
LABEL_10:
      InfoBuffer = (char *)InfoBuffer + 56;
      goto LABEL_11;
    }
  }
  result = -1073741821;
  if ( InfoClass < FileMaximumInformation )
    return -1073741637;
  return result;
}
