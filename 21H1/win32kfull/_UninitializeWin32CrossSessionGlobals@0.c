/*
 * XREFs of _UninitializeWin32CrossSessionGlobals@0 @ 0xD4A30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

HANDLE __stdcall UninitializeWin32CrossSessionGlobals()
{
  HANDLE result; // eax

  if ( gpxsGlobals )
  {
    MmUnmapViewInSessionSpace(gpxsGlobals);
    gpxsGlobals = 0;
  }
  if ( gxsSection )
  {
    ObfDereferenceObject(gxsSection);
    gxsSection = 0;
  }
  result = gxsSectionHandle;
  if ( gxsSectionHandle )
  {
    result = (HANDLE)ZwClose(gxsSectionHandle);
    gxsSectionHandle = 0;
  }
  return result;
}
