/*
 * XREFs of ?GetTopLevelOrDpiBoundaryWindow@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C00516F4
 * Callers:
 *     PhysicalToLogicalDPIPointWithHitTest @ 0x1C0050F48 (PhysicalToLogicalDPIPointWithHitTest.c)
 *     LogicalToPhysicalInPlaceRectWithSubpixel @ 0x1C005166C (LogicalToPhysicalInPlaceRectWithSubpixel.c)
 *     PhysicalToLogicalInPlaceRectWithSubpixel @ 0x1C00516B0 (PhysicalToLogicalInPlaceRectWithSubpixel.c)
 *     PhysicalToLogicalInPlaceRgnWorker @ 0x1C0072304 (PhysicalToLogicalInPlaceRgnWorker.c)
 *     LogicalToPhysicalInPlaceRgnWorker @ 0x1C010AF94 (LogicalToPhysicalInPlaceRgnWorker.c)
 *     PhysicalToLogicalInPlacePointWithParent @ 0x1C01E601C (PhysicalToLogicalInPlacePointWithParent.c)
 * Callees:
 *     _IsTopLevelWindow @ 0x1C006EA50 (_IsTopLevelWindow.c)
 *     _GetTopLevelWindow @ 0x1C006EA90 (_GetTopLevelWindow.c)
 *     IsChildWindowDpiBoundary @ 0x1C006F7CC (IsChildWindowDpiBoundary.c)
 */

struct tagWND *__fastcall GetTopLevelOrDpiBoundaryWindow(struct tagWND *a1)
{
  struct tagWND *v1; // rbx

  v1 = a1;
  if ( !gfDwmChildWindowDpiIsolationEnabled )
    return (struct tagWND *)GetTopLevelWindow(a1);
  if ( a1 )
  {
    do
    {
      if ( (unsigned int)IsTopLevelWindow(v1) )
        break;
      if ( (unsigned int)IsChildWindowDpiBoundary(v1) )
        break;
      v1 = (struct tagWND *)*((_QWORD *)v1 + 13);
    }
    while ( v1 );
  }
  return v1;
}
