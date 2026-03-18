/*
 * XREFs of _CheckGrantedAccess@8 @ 0x2A3D4
 * Callers:
 *     xxxSystemParametersInfoWorker @ 0x270DA (xxxSystemParametersInfoWorker.c)
 *     _xxxCreateWindowEx@68 @ 0x2D67C (_xxxCreateWindowEx@68.c)
 *     _NtUserGetCaretBlinkTime@0 @ 0xA23AC (_NtUserGetCaretBlinkTime@0.c)
 *     ?InternalCreateMenu@@YGPAUtagMENU@@H@Z @ 0xA713E (-InternalCreateMenu@@YGPAUtagMENU@@H@Z.c)
 *     ?xxxMouseEventDirect@@YGHKKKK_K0KH@Z @ 0xAF5BA (-xxxMouseEventDirect@@YGHKKKK_K0KH@Z.c)
 *     _xxxInjectTouchInput@8 @ 0x14A084 (_xxxInjectTouchInput@8.c)
 *     ?_SwapMouseButton@@YGHH@Z @ 0x15520E (-_SwapMouseButton@@YGHH@Z.c)
 * Callees:
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 */

int __fastcall CheckGrantedAccess(ACCESS_MASK GrantedAccess, ACCESS_MASK DesiredAccess)
{
  if ( RtlAreAllAccessesGranted(GrantedAccess, DesiredAccess) )
    return 1;
  UserSetLastError(5);
  return 0;
}
