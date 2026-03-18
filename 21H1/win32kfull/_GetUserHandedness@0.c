/*
 * XREFs of _GetUserHandedness@0 @ 0x159192
 * Callers:
 *     xxxSystemParametersInfoWorker @ 0x270DA (xxxSystemParametersInfoWorker.c)
 *     ?GetMenuRightAlignHint@MenuHelpers@@YG_NXZ @ 0x1A159A (-GetMenuRightAlignHint@MenuHelpers@@YG_NXZ.c)
 *     ?CreateDeadzone@InteractiveControlDevice@@QAEJXZ @ 0x1B18A2 (-CreateDeadzone@InteractiveControlDevice@@QAEJXZ.c)
 *     ?PerformInputActions@InteractiveControlDevice@@QAEXPAVInteractiveControlInput@@I@Z @ 0x1B2345 (-PerformInputActions@InteractiveControlDevice@@QAEXPAVInteractiveControlInput@@I@Z.c)
 * Callees:
 *     <none>
 */

int __stdcall GetUserHandedness()
{
  int v0; // eax
  int v1; // edx

  v0 = RIMIsDefaultUILanguageRTL();
  v1 = 0;
  if ( v0 )
    LOBYTE(v1) = *(_DWORD *)(_gpsi + 1656) == 0;
  else
    LOBYTE(v1) = *(_DWORD *)(_gpsi + 1656) != 0;
  return v1;
}
