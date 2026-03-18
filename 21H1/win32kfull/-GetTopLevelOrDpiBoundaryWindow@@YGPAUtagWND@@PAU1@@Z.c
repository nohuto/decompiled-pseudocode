/*
 * XREFs of ?GetTopLevelOrDpiBoundaryWindow@@YGPAUtagWND@@PAU1@@Z @ 0x9B656
 * Callers:
 *     _PhysicalToLogicalInPlaceRgnWorker@12 @ 0x36FD6 (_PhysicalToLogicalInPlaceRgnWorker@12.c)
 *     _LogicalToPhysicalInPlaceRectWithSubpixel@12 @ 0x9B5AE (_LogicalToPhysicalInPlaceRectWithSubpixel@12.c)
 *     _PhysicalToLogicalInPlaceRectWithSubpixel@12 @ 0x9B600 (_PhysicalToLogicalInPlaceRectWithSubpixel@12.c)
 *     _LogicalToPhysicalInPlaceRgnWorker@12 @ 0xA1A12 (_LogicalToPhysicalInPlaceRgnWorker@12.c)
 *     _PhysicalToLogicalDPIPointWithHitTest@16 @ 0x1514B5 (_PhysicalToLogicalDPIPointWithHitTest@16.c)
 *     _PhysicalToLogicalInPlacePointWithParent@12 @ 0x15156E (_PhysicalToLogicalInPlacePointWithParent@12.c)
 * Callees:
 *     __GetTopLevelWindow@4 @ 0x313A0 (__GetTopLevelWindow@4.c)
 *     __IsTopLevelWindow@4 @ 0x38178 (__IsTopLevelWindow@4.c)
 *     _IsChildWindowDpiBoundary@4 @ 0x38846 (_IsChildWindowDpiBoundary@4.c)
 */

struct tagWND *__thiscall GetTopLevelOrDpiBoundaryWindow(_DWORD *this)
{
  _DWORD *v1; // esi

  v1 = this;
  if ( !gfDwmChildWindowDpiIsolationEnabled )
    return (struct tagWND *)_GetTopLevelWindow((int)this);
  while ( v1 && !_IsTopLevelWindow(v1) && !IsChildWindowDpiBoundary(v1) )
    v1 = (_DWORD *)v1[14];
  return (struct tagWND *)v1;
}
