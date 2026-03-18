/*
 * XREFs of PnpQueryAndSaveDeviceNodeCapabilities @ 0x14073ABCC
 * Callers:
 *     PipProcessStartPhase3 @ 0x140739750 (PipProcessStartPhase3.c)
 *     IopInitializeDeviceInstanceKey @ 0x140748194 (IopInitializeDeviceInstanceKey.c)
 *     PiInitializeDevice @ 0x1408B669C (PiInitializeDevice.c)
 *     IopInitializePlugPlayServices @ 0x140A50C78 (IopInitializePlugPlayServices.c)
 * Callees:
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     memset @ 0x140411300 (memset.c)
 *     PnpSaveDeviceCapabilities @ 0x140732DB8 (PnpSaveDeviceCapabilities.c)
 *     PpIrpQueryCapabilities @ 0x14073AC30 (PpIrpQueryCapabilities.c)
 */

__int64 __fastcall PnpQueryAndSaveDeviceNodeCapabilities(__int64 a1)
{
  __int64 result; // rax
  _DWORD v3[16]; // [rsp+20h] [rbp-58h] BYREF

  memset(v3, 0, sizeof(v3));
  result = PpIrpQueryCapabilities(*(_QWORD *)(a1 + 32), v3);
  if ( (int)result >= 0 )
    return PnpSaveDeviceCapabilities(a1, v3, 0);
  return result;
}
