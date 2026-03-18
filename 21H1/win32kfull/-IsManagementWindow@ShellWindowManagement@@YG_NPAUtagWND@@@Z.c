/*
 * XREFs of ?IsManagementWindow@ShellWindowManagement@@YG_NPAUtagWND@@@Z @ 0xF4E8A
 * Callers:
 *     _xxxFreeWindow@8 @ 0x70780 (_xxxFreeWindow@8.c)
 *     ?_RegisterWindowArrangementCallout@@YGJPAUtagWND@@H@Z @ 0xE88B0 (-_RegisterWindowArrangementCallout@@YGJPAUtagWND@@H@Z.c)
 *     ?HandleIAMHotKey@@YGHQBUtagHOTKEY@@@Z @ 0x155E40 (-HandleIAMHotKey@@YGHQBUtagHOTKEY@@@Z.c)
 * Callees:
 *     <none>
 */

bool __thiscall ShellWindowManagement::IsManagementWindow(_DWORD *ecx0)
{
  return *(_DWORD *)(ecx0[3] + 200) == (_DWORD)ecx0;
}
