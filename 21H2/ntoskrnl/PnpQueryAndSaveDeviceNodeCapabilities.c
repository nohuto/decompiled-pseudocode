/*
 * XREFs of PnpQueryAndSaveDeviceNodeCapabilities @ 0x14076C4E0
 * Callers:
 *     IopInitializeDeviceInstanceKey @ 0x1406CF970 (IopInitializeDeviceInstanceKey.c)
 *     PipProcessStartPhase3 @ 0x14076BE08 (PipProcessStartPhase3.c)
 *     PiInitializeDevice @ 0x14095975C (PiInitializeDevice.c)
 *     IopInitializePlugPlayServices @ 0x140B0046C (IopInitializePlugPlayServices.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     PpIrpQueryCapabilities @ 0x14074B394 (PpIrpQueryCapabilities.c)
 *     PnpSaveDeviceCapabilities @ 0x14076FC68 (PnpSaveDeviceCapabilities.c)
 */

__int64 __fastcall PnpQueryAndSaveDeviceNodeCapabilities(__int64 a1)
{
  __int64 result; // rax
  _DWORD v3[16]; // [rsp+20h] [rbp-58h] BYREF

  memset(v3, 0, sizeof(v3));
  result = PpIrpQueryCapabilities(*(_QWORD *)(a1 + 32), v3);
  if ( (int)result >= 0 )
    return PnpSaveDeviceCapabilities(a1, v3, 0LL);
  return result;
}
