/*
 * XREFs of ??1SharedObjectBase@@MEAA@XZ @ 0x1800BEA04
 * Callers:
 *     ??1GameInputServerProxy@@EEAA@XZ @ 0x180042154 (--1GameInputServerProxy@@EEAA@XZ.c)
 *     ??_E?$SharedUnknownBase@UIGameInputServer@@UIAgileObject@@UINoMarshal@@@@MEAAPEAXI@Z @ 0x180042260 (--_E-$SharedUnknownBase@UIGameInputServer@@UIAgileObject@@UINoMarshal@@@@MEAAPEAXI@Z.c)
 *     ??_GSharedObjectBase@@MEAAPEAXI@Z @ 0x1800BEA30 (--_GSharedObjectBase@@MEAAPEAXI@Z.c)
 *     ??1SipcServer@@EEAA@XZ @ 0x1800BEECC (--1SipcServer@@EEAA@XZ.c)
 *     ??_E?$SharedUnknownBase@UISIPCEndpoint@@@@MEAAPEAXI@Z @ 0x1800BEF60 (--_E-$SharedUnknownBase@UISIPCEndpoint@@@@MEAAPEAXI@Z.c)
 *     ??_G?$SharedUnknownBase@UISIPCServer@@@@MEAAPEAXI@Z @ 0x1800BEFB0 (--_G-$SharedUnknownBase@UISIPCServer@@@@MEAAPEAXI@Z.c)
 *     ??_GSipcEndpoint@@EEAAPEAXI@Z @ 0x1800BF120 (--_GSipcEndpoint@@EEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall SharedObjectBase::~SharedObjectBase(SharedObjectBase *this)
{
  *(_QWORD *)this = &SharedObjectBase::`vftable';
  if ( *((_QWORD *)this + 1) )
    __fastfail(0xEu);
}
