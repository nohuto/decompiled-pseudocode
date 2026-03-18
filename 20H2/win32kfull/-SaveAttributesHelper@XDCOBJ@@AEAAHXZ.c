/*
 * XREFs of ?SaveAttributesHelper@XDCOBJ@@AEAAHXZ @ 0x1C00A1674
 * Callers:
 *     GreSetDIBitsToDeviceInternal @ 0x1C00A16C0 (GreSetDIBitsToDeviceInternal.c)
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z @ 0x1C00B3D30 (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z.c)
 *     ?vSaveAttributesAlways@XDCOBJ@@AEAAXXZ @ 0x1C0141FB4 (-vSaveAttributesAlways@XDCOBJ@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall XDCOBJ::SaveAttributesHelper(XDCOBJ *this)
{
  struct _DC_ATTR *UserAttr; // rax
  _BOOL8 result; // rax

  result = 1;
  if ( !*((_DWORD *)this + 3) )
  {
    UserAttr = XDCOBJ::GetUserAttr(this);
    if ( UserAttr )
    {
      if ( !DC::SaveAttributes(*(DC **)this, UserAttr) )
        return 0;
    }
  }
  return result;
}
