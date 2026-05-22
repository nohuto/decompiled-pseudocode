/*
 * XREFs of ??_GTouchProcessor@@MEAAPEAXI@Z @ 0x18019908C
 * Callers:
 *     ??_ETouchProcessor@@OBA@EAAPEAXI@Z @ 0x18004D2E0 (--_ETouchProcessor@@OBA@EAAPEAXI@Z.c)
 * Callees:
 *     ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoMPCConstantManagerClientProxyImpl@BamoImpl@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z @ 0x180001E00 (-UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoMPCConstantManagerClientProxyImpl@BamoImpl@@UEAA.c)
 *     _guard_dispatch_icall_nop @ 0x18004A660 (_guard_dispatch_icall_nop.c)
 *     ??1NonPointerProcessor@@MEAA@XZ @ 0x180136354 (--1NonPointerProcessor@@MEAA@XZ.c)
 */

TouchProcessor *__fastcall TouchProcessor::`scalar deleting destructor'(TouchProcessor *this, char a2)
{
  __int64 v4; // rcx

  *(_QWORD *)this = &TouchProcessor::`vftable'{for `IInputProcessor'};
  *((_QWORD *)this + 1) = &TouchProcessor::`vftable'{for `IInputFocusListener'};
  *((_QWORD *)this + 2) = &TouchProcessor::`vftable'{for `RefCountedObject'};
  v4 = *((_QWORD *)this + 9);
  if ( v4 )
  {
    *((_QWORD *)this + 9) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  NonPointerProcessor::~NonPointerProcessor(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      BamoImpl::BamoMPCConstantManagerClientProxyImpl::UpdateStateOfProxyOnPlaceholderProxyHookUp(
        this,
        (struct Microsoft::BamoImpl::BamoProxyImpl *)0x50);
    else
      free(this);
  }
  return this;
}
