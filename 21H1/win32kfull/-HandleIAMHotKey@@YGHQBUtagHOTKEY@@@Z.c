/*
 * XREFs of ?HandleIAMHotKey@@YGHQBUtagHOTKEY@@@Z @ 0x155E40
 * Callers:
 *     _xxxDoHotKeyStuff@16 @ 0xB182C (_xxxDoHotKeyStuff@16.c)
 * Callees:
 *     _IsIAMThread@4 @ 0xAC466 (_IsIAMThread@4.c)
 *     ?IsManagementWindow@ShellWindowManagement@@YG_NPAUtagWND@@@Z @ 0xF4E8A (-IsManagementWindow@ShellWindowManagement@@YG_NPAUtagWND@@@Z.c)
 *     ?RequestModernAppClose@@YGHXZ @ 0x155E98 (-RequestModernAppClose@@YGHXZ.c)
 */

int __thiscall HandleIAMHotKey(_DWORD **this)
{
  _DWORD *v2; // ecx
  int v3; // eax
  int v4; // edx

  v2 = *this;
  if ( v2[62] != _grpdeskRitInput )
    return 0;
  LOBYTE(v3) = IsIAMThread(v2);
  if ( !v3 || !*(_DWORD *)(*(_DWORD *)(_gptiCurrent + 248) + 200) || !ShellWindowManagement::IsManagementWindow(this[2]) )
    return 0;
  if ( this[5] == (_DWORD *)61536 )
    return RequestModernAppClose();
  return v4;
}
