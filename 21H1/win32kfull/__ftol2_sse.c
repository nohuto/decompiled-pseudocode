/*
 * XREFs of __ftol2_sse @ 0xF9210
 * Callers:
 *     _PhysicalToLogicalInPlaceRect@8 @ 0x37E2C (_PhysicalToLogicalInPlaceRect@8.c)
 *     _LogicalToPhysicalInPlaceRectWithSubpixel@12 @ 0x9B5AE (_LogicalToPhysicalInPlaceRectWithSubpixel@12.c)
 *     _PhysicalToLogicalInPlaceRectWithSubpixel@12 @ 0x9B600 (_PhysicalToLogicalInPlaceRectWithSubpixel@12.c)
 *     _MagSetLensContextInformation@28 @ 0x13D036 (_MagSetLensContextInformation@28.c)
 *     ?ScaleValueWithSubpixel@@YGXPAJPAMM@Z @ 0x150074 (-ScaleValueWithSubpixel@@YGXPAJPAMM@Z.c)
 *     _DCEInverseTransform@16 @ 0x150822 (_DCEInverseTransform@16.c)
 *     _LogicalToPhysicalInPlaceRect@8 @ 0x15135F (_LogicalToPhysicalInPlaceRect@8.c)
 *     _PhysicalToLogicalInPlacePointWithParent@12 @ 0x15156E (_PhysicalToLogicalInPlacePointWithParent@12.c)
 *     ?_TTUpdateBestTarget@@YGXPAUtagPNTRWINDOWHITTTESTARGS@@PAUtagWND@@IPBUtagPOINT@@PAUtagRECT@@HU4@K@Z @ 0x17A464 (-_TTUpdateBestTarget@@YGXPAUtagPNTRWINDOWHITTTESTARGS@@PAUtagWND@@IPBUtagPOINT@@PAUtagRECT@@HU4@.c)
 *     ?xxxSendNCHitTest@@YGXPAUtagWND@@UtagPOINT@@1PAU2@PAHPAUtagPNTRWINDOWHITTTESTARGS@@@Z @ 0x17A904 (-xxxSendNCHitTest@@YGXPAUtagWND@@UtagPOINT@@1PAU2@PAHPAUtagPNTRWINDOWHITTTESTARGS@@@Z.c)
 *     _TransformVector@20 @ 0x17BC83 (_TransformVector@20.c)
 *     _GetInertiaRegionInVirtualizedScreen@8 @ 0x17CAF0 (_GetInertiaRegionInVirtualizedScreen@8.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
signed __int64 __usercall _ftol2_sse@<edx:eax>(double a1@<st0>)
{
  return _ftol2(a1);
}
