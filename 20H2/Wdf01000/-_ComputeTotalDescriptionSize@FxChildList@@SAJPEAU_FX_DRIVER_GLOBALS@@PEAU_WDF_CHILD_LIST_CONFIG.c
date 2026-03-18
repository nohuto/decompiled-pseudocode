/*
 * XREFs of ?_ComputeTotalDescriptionSize@FxChildList@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_CHILD_LIST_CONFIG@@PEA_K@Z @ 0x1C003BD7C
 * Callers:
 *     ?_ValidateConfig@FxChildList@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_CHILD_LIST_CONFIG@@PEA_K@Z @ 0x1C003BF3C (-_ValidateConfig@FxChildList@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_CHILD_LIST_CONFIG@@PEA_K@Z.c)
 *     ?CreateDefaultDeviceList@FxPkgFdo@@QEAAJPEAU_WDF_CHILD_LIST_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x1C00837D0 (-CreateDefaultDeviceList@FxPkgFdo@@QEAAJPEAU_WDF_CHILD_LIST_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@.c)
 *     ?Initialize@FxPkgFdo@@UEAAJPEAUWDFDEVICE_INIT@@@Z @ 0x1C008B560 (-Initialize@FxPkgFdo@@UEAAJPEAUWDFDEVICE_INIT@@@Z.c)
 * Callees:
 *     WPP_IFR_SF_d @ 0x1C000A9D8 (WPP_IFR_SF_d.c)
 *     WPP_IFR_SF_dd @ 0x1C002DEC8 (WPP_IFR_SF_dd.c)
 */

__int64 __fastcall FxChildList::_ComputeTotalDescriptionSize(
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        _WDF_CHILD_LIST_CONFIG *Config,
        unsigned __int64 *TotalDescriptionSize)
{
  unsigned __int64 _a1; // rax
  unsigned __int64 v5; // r9
  unsigned __int16 v6; // r9
  unsigned int v7; // ebx
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // r9
  unsigned __int64 v12; // rdx
  unsigned __int16 v13; // r9

  _a1 = Config->IdentificationDescriptionSize;
  *TotalDescriptionSize = 0LL;
  v5 = (_a1 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
  if ( v5 < _a1 )
  {
    v6 = 56;
LABEL_3:
    v7 = -1073741811;
    WPP_IFR_SF_dd(FxDriverGlobals, 2u, 0xCu, v6, WPP_FxChildList_cpp_Traceguids, _a1, -1073741811);
    return v7;
  }
  _a1 = Config->AddressDescriptionSize;
  v9 = (_a1 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
  if ( v9 < _a1 )
  {
    v6 = 57;
    goto LABEL_3;
  }
  v10 = v5 + 88;
  v11 = -1LL;
  v12 = -1LL;
  if ( v10 >= 0x58 )
    v12 = v10;
  v7 = v10 < 0x58 ? 0xC0000095 : 0;
  *TotalDescriptionSize = v12;
  if ( v10 < 0x58 )
  {
    v13 = 58;
LABEL_11:
    WPP_IFR_SF_d(FxDriverGlobals, 2u, 0xCu, v13, WPP_FxChildList_cpp_Traceguids, v7);
    return v7;
  }
  if ( v12 + v9 >= v12 )
    v11 = v12 + v9;
  v7 = v12 + v9 < v12 ? 0xC0000095 : 0;
  *TotalDescriptionSize = v11;
  if ( v12 + v9 < v12 )
  {
    v13 = 59;
    goto LABEL_11;
  }
  return 0LL;
}
