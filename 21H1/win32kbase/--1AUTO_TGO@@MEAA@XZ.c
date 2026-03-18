/*
 * XREFs of ??1AUTO_TGO@@MEAA@XZ @ 0x1C0099078
 * Callers:
 *     _DrvSetDisplayConfig_::_2_::_AUTO::__AUTO @ 0x1C0098E80 (_DrvSetDisplayConfig_--_2_--_AUTO--__AUTO.c)
 *     DrvChangeDisplaySettings @ 0x1C009C4A0 (DrvChangeDisplaySettings.c)
 *     _DrvFunctionalizeDisplayConfig_::_2_::_AUTO::__AUTO @ 0x1C014C978 (_DrvFunctionalizeDisplayConfig_--_2_--_AUTO--__AUTO.c)
 *     _DrvChangeDisplaySettings_::_2_::AUTO_KM::_scalar_deleting_destructor_ @ 0x1C014CA50 (_DrvChangeDisplaySettings_--_2_--AUTO_KM--_scalar_deleting_destructor_.c)
 *     ??_GAUTO_TGO@@MEAAPEAXI@Z @ 0x1C014CAA0 (--_GAUTO_TGO@@MEAAPEAXI@Z.c)
 * Callees:
 *     PopThreadGuardedObject @ 0x1C0075770 (PopThreadGuardedObject.c)
 */

void __fastcall AUTO_TGO::~AUTO_TGO(AUTO_TGO *this)
{
  bool v1; // zf

  v1 = *((_DWORD *)this + 2) == 0;
  *(_QWORD *)this = &AUTO_TGO::`vftable';
  if ( !v1 )
    PopThreadGuardedObject((_QWORD *)this + 2);
}
