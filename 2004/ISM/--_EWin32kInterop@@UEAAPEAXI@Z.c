/*
 * XREFs of ??_EWin32kInterop@@UEAAPEAXI@Z @ 0x1800AEE1C
 * Callers:
 *     ??_EWin32kInterop@@WBA@EAAPEAXI@Z @ 0x18004AB10 (--_EWin32kInterop@@WBA@EAAPEAXI@Z.c)
 * Callees:
 *     ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoMPCConstantManagerClientProxyImpl@BamoImpl@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z @ 0x180001E10 (-UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoMPCConstantManagerClientProxyImpl@BamoImpl@@UEAA.c)
 *     ??1Win32kInterop@@UEAA@XZ @ 0x1800AE89C (--1Win32kInterop@@UEAA@XZ.c)
 */

Win32kInterop *__fastcall Win32kInterop::`vector deleting destructor'(Win32kInterop *this, __int64 a2)
{
  char v2; // di

  v2 = a2;
  Win32kInterop::~Win32kInterop(this, a2);
  if ( (v2 & 1) != 0 )
  {
    if ( (v2 & 4) != 0 )
      BamoImpl::BamoMPCConstantManagerClientProxyImpl::UpdateStateOfProxyOnPlaceholderProxyHookUp(
        this,
        (struct Microsoft::BamoImpl::BamoProxyImpl *)0x668);
    else
      free(this);
  }
  return this;
}
