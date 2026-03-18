/*
 * XREFs of ?GetTopLevelOrDpiBoundaryWindow@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C00F9C84
 * Callers:
 *     PhysicalToLogicalInPlaceRgnWorker @ 0x1C00436F0 (PhysicalToLogicalInPlaceRgnWorker.c)
 *     PhysicalToLogicalDPIPointWithHitTest @ 0x1C00F94D8 (PhysicalToLogicalDPIPointWithHitTest.c)
 *     LogicalToPhysicalInPlaceRectWithSubpixel @ 0x1C00F9BFC (LogicalToPhysicalInPlaceRectWithSubpixel.c)
 *     PhysicalToLogicalInPlaceRectWithSubpixel @ 0x1C00F9C40 (PhysicalToLogicalInPlaceRectWithSubpixel.c)
 *     LogicalToPhysicalInPlaceRgnWorker @ 0x1C010CF34 (LogicalToPhysicalInPlaceRgnWorker.c)
 *     PhysicalToLogicalInPlacePointWithParent @ 0x1C01E535C (PhysicalToLogicalInPlacePointWithParent.c)
 * Callees:
 *     IsChildWindowDpiBoundary @ 0x1C0046590 (IsChildWindowDpiBoundary.c)
 *     _IsTopLevelWindow @ 0x1C0046FA0 (_IsTopLevelWindow.c)
 *     _GetTopLevelWindow @ 0x1C0046FE0 (_GetTopLevelWindow.c)
 */

struct tagWND *__fastcall GetTopLevelOrDpiBoundaryWindow(struct tagWND *a1)
{
  struct tagWND *v1; // rbx

  v1 = a1;
  if ( !gfDwmChildWindowDpiIsolationEnabled )
    return (struct tagWND *)GetTopLevelWindow((__int64)a1);
  if ( a1 )
  {
    do
    {
      if ( (unsigned int)IsTopLevelWindow((__int64)v1) )
        break;
      if ( (unsigned int)IsChildWindowDpiBoundary(v1) )
        break;
      v1 = (struct tagWND *)*((_QWORD *)v1 + 13);
    }
    while ( v1 );
  }
  return v1;
}
