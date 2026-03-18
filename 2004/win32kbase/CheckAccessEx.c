/*
 * XREFs of CheckAccessEx @ 0x1C0095808
 * Callers:
 *     NtUserChangeDisplaySettings @ 0x1C000D130 (NtUserChangeDisplaySettings.c)
 *     NtUserSetSysColors @ 0x1C0024F00 (NtUserSetSysColors.c)
 *     _anonymous_namespace_::ValidateUIPI @ 0x1C0056998 (_anonymous_namespace_--ValidateUIPI.c)
 *     ?IsHandleEntryAccessibleForIL@@YAHPEAU_HANDLEENTRY@@@Z @ 0x1C0094D44 (-IsHandleEntryAccessibleForIL@@YAHPEAU_HANDLEENTRY@@@Z.c)
 *     NtUserDisplayConfigSetDeviceInfo @ 0x1C0132620 (NtUserDisplayConfigSetDeviceInfo.c)
 *     NtUserEnableTouchPad @ 0x1C0132A30 (NtUserEnableTouchPad.c)
 *     NtUserSetDisplayConfig @ 0x1C0137F00 (NtUserSetDisplayConfig.c)
 *     NtUserSetPrecisionTouchPadConfiguration @ 0x1C0138F70 (NtUserSetPrecisionTouchPadConfiguration.c)
 *     ?CanCallerAccessDestination@CInputDest@@QEBA_NXZ @ 0x1C0183300 (-CanCallerAccessDestination@CInputDest@@QEBA_NXZ.c)
 *     ?PostPointerMessage@CTouchProcessor@@AEAAHAEBVCInputDest@@PEBUCPointerInputFrame@@PEBUCPointerInfoNode@@_KIKHH@Z @ 0x1C0196B88 (-PostPointerMessage@CTouchProcessor@@AEAAHAEBVCInputDest@@PEBUCPointerInputFrame@@PEBUCPointerIn.c)
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
