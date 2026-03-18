/*
 * XREFs of _PTPEnableHotkeyCallback@8 @ 0x183CAB
 * Callers:
 *     <none>
 * Callees:
 *     _PostShellHookMessagesEx@12 @ 0x17156 (_PostShellHookMessagesEx@12.c)
 */

void __stdcall PTPEnableHotkeyCallback(int a1, int a2)
{
  if ( EnablePTPDevices(_gPTPEnabled == 0) )
    PostShellHookMessagesEx(57, _gPTPEnabled == 0, 0);
}
