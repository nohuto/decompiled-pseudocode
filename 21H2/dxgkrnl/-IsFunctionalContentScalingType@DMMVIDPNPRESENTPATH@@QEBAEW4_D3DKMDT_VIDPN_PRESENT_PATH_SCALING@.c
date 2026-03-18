/*
 * XREFs of ?IsFunctionalContentScalingType@DMMVIDPNPRESENTPATH@@QEBAEW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@@Z @ 0x1C0010B2C
 * Callers:
 *     ?PinContentScaling@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@@Z @ 0x1C00109BC (-PinContentScaling@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@@Z.c)
 *     ?IsFunctional@DMMVIDPNPRESENTPATH@@QEBAEXZ @ 0x1C001D1D0 (-IsFunctional@DMMVIDPNPRESENTPATH@@QEBAEXZ.c)
 *     ?GetDisplayModeFromPath@DMMVIDPNPRESENTPATH@@QEBAJ_NAEAU_DXGK_DISPLAYMODE_INFO@@@Z @ 0x1C01E76A8 (-GetDisplayModeFromPath@DMMVIDPNPRESENTPATH@@QEBAJ_NAEAU_DXGK_DISPLAYMODE_INFO@@@Z.c)
 * Callees:
 *     ?IsDriverAspectRatioCenteredMaxSupported@DMMVIDPNPRESENTPATH@@QEBAEXZ @ 0x1C018A274 (-IsDriverAspectRatioCenteredMaxSupported@DMMVIDPNPRESENTPATH@@QEBAEXZ.c)
 *     ?IsDriverCustomScalingSupported@DMMVIDPNPRESENTPATH@@QEBAEXZ @ 0x1C018A2D0 (-IsDriverCustomScalingSupported@DMMVIDPNPRESENTPATH@@QEBAEXZ.c)
 */

unsigned __int8 __fastcall DMMVIDPNPRESENTPATH::IsFunctionalContentScalingType(DMMVIDPNPRESENTPATH *this, int a2)
{
  if ( a2 <= 0 )
    return 0;
  if ( a2 <= 3 )
    return 1;
  if ( a2 == 4 )
    return DMMVIDPNPRESENTPATH::IsDriverAspectRatioCenteredMaxSupported(this);
  if ( a2 != 5 )
    return a2 == 255;
  return DMMVIDPNPRESENTPATH::IsDriverCustomScalingSupported(this);
}
