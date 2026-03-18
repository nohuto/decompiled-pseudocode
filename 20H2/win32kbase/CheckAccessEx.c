/*
 * XREFs of CheckAccessEx @ 0x1C0056E08
 * Callers:
 *     ?IsHandleEntryAccessibleForIL@@YAHPEAU_HANDLEENTRY@@@Z @ 0x1C0056464 (-IsHandleEntryAccessibleForIL@@YAHPEAU_HANDLEENTRY@@@Z.c)
 *     NtUserSetSysColors @ 0x1C008B8D0 (NtUserSetSysColors.c)
 *     NtUserChangeDisplaySettings @ 0x1C00B33E0 (NtUserChangeDisplaySettings.c)
 *     _anonymous_namespace_::ValidateUIPI @ 0x1C00B69A8 (_anonymous_namespace_--ValidateUIPI.c)
 *     NtUserDisplayConfigSetDeviceInfo @ 0x1C01302D0 (NtUserDisplayConfigSetDeviceInfo.c)
 *     NtUserEnableTouchPad @ 0x1C01306E0 (NtUserEnableTouchPad.c)
 *     NtUserSetDisplayConfig @ 0x1C0135BB0 (NtUserSetDisplayConfig.c)
 *     NtUserSetPrecisionTouchPadConfiguration @ 0x1C0136C20 (NtUserSetPrecisionTouchPadConfiguration.c)
 *     ?CanCallerAccessDestination@CInputDest@@QEBA_NXZ @ 0x1C0180DC0 (-CanCallerAccessDestination@CInputDest@@QEBA_NXZ.c)
 *     ?PostPointerMessage@CTouchProcessor@@AEAAHAEBVCInputDest@@PEBUCPointerInputFrame@@PEBUCPointerInfoNode@@_KIKHH@Z @ 0x1C0194658 (-PostPointerMessage@CTouchProcessor@@AEAAHAEBVCInputDest@@PEBUCPointerInputFrame@@PEBUCPointerIn.c)
 * Callees:
 *     <none>
 */

bool __fastcall CheckAccessEx(int *a1, int *a2, char a3)
{
  int v4; // eax
  int v5; // r9d
  int v6; // r10d
  int v7; // r8d
  bool result; // al

  result = !UIPrivelegeIsolation::fEnforce
        || (v4 = *a1, v5 = *a2, *a1 > (unsigned int)*a2)
        || v4 == v5 && ((v6 = a2[1], v7 = a1[1], v6 == -1) || v7 == v6 || v7 == -1)
        || a3
        && v4 == v5
        && (unsigned __int8)SeIsParentOfChildAppContainer(
                              (unsigned int)gSessionId,
                              (unsigned int)a1[1],
                              (unsigned int)a2[1]);
  return result;
}
