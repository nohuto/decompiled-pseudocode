/*
 * XREFs of EtwTraceTouchPadEnabledStatusChangeStop @ 0x1C0128DC0
 * Callers:
 *     EnablePTPDevices @ 0x1C0122AD0 (EnablePTPDevices.c)
 * Callees:
 *     McTemplateK0_EtwWriteTransfer @ 0x1C01295F0 (McTemplateK0_EtwWriteTransfer.c)
 */

__int64 __fastcall EtwTraceTouchPadEnabledStatusChangeStop(__int64 a1)
{
  __int64 result; // rax

  if ( (Microsoft_Windows_Win32kEnableBits & 0x10000000) != 0 )
    return McTemplateK0_EtwWriteTransfer(a1, &TouchPadEnabledStatusChangeStop, &W32kControlGuid);
  return result;
}
