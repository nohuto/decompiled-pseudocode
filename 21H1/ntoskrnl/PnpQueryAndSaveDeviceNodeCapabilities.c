/*
 * XREFs of PnpQueryAndSaveDeviceNodeCapabilities @ 0x140730C90
 * Callers:
 *     PipProcessStartPhase3 @ 0x14073045C (PipProcessStartPhase3.c)
 *     IopInitializeDeviceInstanceKey @ 0x140737704 (IopInitializeDeviceInstanceKey.c)
 *     PiInitializeDevice @ 0x1408AF84C (PiInitializeDevice.c)
 *     IopInitializePlugPlayServices @ 0x140A4AB7C (IopInitializePlugPlayServices.c)
 * Callees:
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     memset @ 0x140408F80 (memset.c)
 *     PnpSaveDeviceCapabilities @ 0x1407294E8 (PnpSaveDeviceCapabilities.c)
 *     PpIrpQueryCapabilities @ 0x140730CF4 (PpIrpQueryCapabilities.c)
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
