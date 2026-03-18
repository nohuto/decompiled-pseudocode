/*
 * XREFs of _UnlinkSendListSms@4 @ 0x439C4
 * Callers:
 *     _xxxReceiveMessage@4 @ 0x415B8 (_xxxReceiveMessage@4.c)
 *     _xxxInterSendMsgEx@36 @ 0x43A56 (_xxxInterSendMsgEx@36.c)
 *     _SuspendThreadQueue@4 @ 0xA68FC (_SuspendThreadQueue@4.c)
 *     _xxxReceiverDied@4 @ 0xCC50E (_xxxReceiverDied@4.c)
 *     ?SenderDied@@YGXPAUtagSMS@@@Z @ 0xD487A (-SenderDied@@YGXPAUtagSMS@@@Z.c)
 * Callees:
 *     _IsPointerInputMessage@4 @ 0x4485A (_IsPointerInputMessage@4.c)
 *     __FreeTouchInputInfo@8 @ 0x149EED (__FreeTouchInputInfo@8.c)
 *     __FreeGestureInfo@8 @ 0x188C90 (__FreeGestureInfo@8.c)
 */

int __thiscall UnlinkSendListSms(_DWORD *this)
{
  int v2; // eax
  int v3; // ecx
  _DWORD *v4; // eax
  void **v5; // ecx

  v2 = this[14];
  if ( v2 == 576 )
  {
    _FreeTouchInputInfo(this[13], 0);
  }
  else if ( v2 == 281 )
  {
    _FreeGestureInfo(this[13], 0);
  }
  if ( (this[11] & 0x200) == 0
    && (IsPointerInputMessage(this[14]) && v3 != 595 || v3 == 528 && *((_WORD *)this + 24) == 582) )
  {
    CTouchProcessor::UnreferenceMsgDataExternal(_gpTouchProcessor, this[13], 6, this);
  }
  v4 = (_DWORD *)*this;
  if ( *(_DWORD **)(*this + 4) != this || (v5 = (void **)this[1], *v5 != this) )
    __fastfail(3u);
  *v5 = v4;
  v4[1] = v5;
  HMAssignmentUnlock(this + 15);
  if ( this[16] )
    Win32FreePool(this[16]);
  return Win32FreeToPagedLookasideList(SMSLookaside, this);
}
