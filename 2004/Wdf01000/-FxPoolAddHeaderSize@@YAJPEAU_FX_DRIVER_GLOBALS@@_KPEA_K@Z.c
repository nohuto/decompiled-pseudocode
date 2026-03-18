/*
 * XREFs of ?FxPoolAddHeaderSize@@YAJPEAU_FX_DRIVER_GLOBALS@@_KPEA_K@Z @ 0x1C0051E0C
 * Callers:
 *     ?Initialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@PEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x1C0051F4C (-Initialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@PEAU_WDF_OBJECT_ATTRIBUTES@@@Z.c)
 *     ?Initialize@FxPagedLookasideListFromPool@@UEAAJ_KPEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x1C0054E40 (-Initialize@FxPagedLookasideListFromPool@@UEAAJ_KPEAU_WDF_OBJECT_ATTRIBUTES@@@Z.c)
 *     ?InitializeLookaside@FxLookasideList@@IEAAJGGPEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x1C0056280 (-InitializeLookaside@FxLookasideList@@IEAAJGGPEAU_WDF_OBJECT_ATTRIBUTES@@@Z.c)
 * Callees:
 *     WPP_IFR_SF_d @ 0x1C000A9D8 (WPP_IFR_SF_d.c)
 */

__int64 __fastcall FxPoolAddHeaderSize(
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        unsigned __int64 AllocationSize,
        unsigned __int64 *NewSize)
{
  unsigned __int64 v3; // rax
  unsigned __int16 v5; // r9

  v3 = AllocationSize + 16;
  if ( AllocationSize + 16 < AllocationSize )
  {
    v5 = 10;
  }
  else
  {
    if ( !FxDriverGlobals->FxPoolTrackingOn )
    {
LABEL_5:
      *NewSize = v3;
      return 0LL;
    }
    if ( AllocationSize + 80 >= AllocationSize + 16 )
    {
      v3 = AllocationSize + 80;
      goto LABEL_5;
    }
    v5 = 11;
  }
  WPP_IFR_SF_d(FxDriverGlobals, 2u, 0x12u, v5, WPP_FxPoolInlines_hpp_Traceguids, -1073741675);
  return 3221225621LL;
}
