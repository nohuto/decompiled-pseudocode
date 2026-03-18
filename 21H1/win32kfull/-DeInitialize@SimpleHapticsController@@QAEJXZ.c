/*
 * XREFs of ?DeInitialize@SimpleHapticsController@@QAEJXZ @ 0x1B4278
 * Callers:
 *     ?Deinitialize@InteractiveControlDevice@@QAEXXZ @ 0x1B1A87 (-Deinitialize@InteractiveControlDevice@@QAEXXZ.c)
 *     ?Initialize@InteractiveControlDevice@@QAEJPAURawInputManagerDeviceObject@@@Z @ 0x1B1F54 (-Initialize@InteractiveControlDevice@@QAEJPAURawInputManagerDeviceObject@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IPAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YGJ0122I3@ZPBU2@PBU2@@@SGJPBU_tlgProvider_t@@PBXPBU_GUID@@2ABU?$_tlgWrapSz@D@@ABU?$_tlgWrapperByVal@$03@@@Z @ 0x1AD82B (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@.c)
 *     ?CloseHapticsWriteDevice@SimpleHapticsController@@IAEJH@Z @ 0x1B415E (-CloseHapticsWriteDevice@SimpleHapticsController@@IAEJH@Z.c)
 */

NTSTATUS __thiscall SimpleHapticsController::DeInitialize(PVOID *this)
{
  int v2; // ecx
  NTSTATUS v3; // ebx
  int v5; // [esp+10h] [ebp-8h] BYREF
  int v6; // [esp+14h] [ebp-4h] BYREF

  v3 = SimpleHapticsController::CloseHapticsWriteDevice(this, 1);
  if ( this[11] )
  {
    Win32FreePool(this[11]);
    this[11] = 0;
  }
  if ( this[8] )
  {
    Win32FreePool(this[8]);
    this[8] = 0;
    *((_WORD *)this + 18) = 0;
  }
  if ( this[2] )
  {
    Win32FreePool(this[2]);
    this[2] = 0;
  }
  if ( this[1] )
  {
    Win32FreePool(this[1]);
    this[1] = 0;
  }
  if ( (unsigned int)dword_2662D0 > 4 )
  {
    v6 = v3;
    v5 = (int)"SimpleHapticsController::DeInitialize";
    _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
      (int)&dword_2662D0,
      byte_2574E6,
      v2,
      v2,
      (const char **)&v5,
      (int)&v6);
  }
  return v3;
}
