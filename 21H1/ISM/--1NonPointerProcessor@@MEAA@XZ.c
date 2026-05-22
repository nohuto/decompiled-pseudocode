/*
 * XREFs of ??1NonPointerProcessor@@MEAA@XZ @ 0x1801368A4
 * Callers:
 *     _MouseProcessor::MouseProcessor_::_1_::dtor$0 @ 0x18004ED06 (_MouseProcessor--MouseProcessor_--_1_--dtor$0.c)
 *     _ControllerProcessor::ControllerProcessor_::_1_::dtor$0 @ 0x18011F981 (_ControllerProcessor--ControllerProcessor_--_1_--dtor$0.c)
 *     ??1ControllerProcessor@@MEAA@XZ @ 0x18011FAC8 (--1ControllerProcessor@@MEAA@XZ.c)
 *     ??1MouseProcessor@@MEAA@XZ @ 0x180135B8C (--1MouseProcessor@@MEAA@XZ.c)
 *     ??_ENonPointerProcessor@@MEAAPEAXI@Z @ 0x180136914 (--_ENonPointerProcessor@@MEAAPEAXI@Z.c)
 *     ??_EDockProcessor@@UEAAPEAXI@Z @ 0x180188424 (--_EDockProcessor@@UEAAPEAXI@Z.c)
 *     _GazeProcessor::GazeProcessor_::_1_::dtor$0 @ 0x18018881C (_GazeProcessor--GazeProcessor_--_1_--dtor$0.c)
 *     ??1GazeProcessor@@MEAA@XZ @ 0x18018886C (--1GazeProcessor@@MEAA@XZ.c)
 *     ??1HeatProcessor@@MEAA@XZ @ 0x180189678 (--1HeatProcessor@@MEAA@XZ.c)
 *     ??_GTouchProcessor@@MEAAPEAXI@Z @ 0x18019958C (--_GTouchProcessor@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000B0D0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18004ACA0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall NonPointerProcessor::~NonPointerProcessor(NonPointerProcessor *this)
{
  __int64 v2; // rcx

  *(_QWORD *)this = &NonPointerProcessor::`vftable'{for `IInputProcessor'};
  *((_QWORD *)this + 1) = &NonPointerProcessor::`vftable'{for `IInputFocusListener'};
  *((_QWORD *)this + 2) = &NonPointerProcessor::`vftable'{for `RefCountedObject'};
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  v2 = *((_QWORD *)this + 7);
  if ( v2 )
  {
    *((_QWORD *)this + 7) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 6);
  *((_QWORD *)this + 2) = &RefCountedObject::`vftable';
}
