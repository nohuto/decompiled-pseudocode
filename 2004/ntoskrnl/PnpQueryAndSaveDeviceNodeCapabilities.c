/*
 * XREFs of PnpQueryAndSaveDeviceNodeCapabilities @ 0x14072C13C
 * Callers:
 *     PipProcessStartPhase3 @ 0x14072ACC0 (PipProcessStartPhase3.c)
 *     IopInitializeDeviceInstanceKey @ 0x140739284 (IopInitializeDeviceInstanceKey.c)
 *     PiInitializeDevice @ 0x1408B0B6C (PiInitializeDevice.c)
 *     IopInitializePlugPlayServices @ 0x140A505F8 (IopInitializePlugPlayServices.c)
 * Callees:
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     memset @ 0x14040A280 (memset.c)
 *     PnpSaveDeviceCapabilities @ 0x140724328 (PnpSaveDeviceCapabilities.c)
 *     PpIrpQueryCapabilities @ 0x14072C1A0 (PpIrpQueryCapabilities.c)
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
