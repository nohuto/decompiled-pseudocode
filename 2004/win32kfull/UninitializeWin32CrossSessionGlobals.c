/*
 * XREFs of UninitializeWin32CrossSessionGlobals @ 0x1C012B770
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int UninitializeWin32CrossSessionGlobals()
{
  int result; // eax

  if ( gpxsGlobals )
  {
    result = MmUnmapViewInSessionSpace(gpxsGlobals);
    gpxsGlobals = 0LL;
  }
  if ( gxsSection )
  {
    result = ObfDereferenceObject(gxsSection);
    gxsSection = 0LL;
  }
  if ( gxsSectionHandle )
  {
    result = ZwClose(gxsSectionHandle);
    gxsSectionHandle = 0LL;
  }
  return result;
}
