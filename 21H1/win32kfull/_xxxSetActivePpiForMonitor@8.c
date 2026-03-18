/*
 * XREFs of _xxxSetActivePpiForMonitor@8 @ 0xB2078
 * Callers:
 *     _NtUserSetActiveProcessForMonitor@8 @ 0xB1FFE (_NtUserSetActiveProcessForMonitor@8.c)
 * Callees:
 *     ?IsMonitorConnectedToInternalPanel@@YGHPAUtagMONITOR@@@Z @ 0x140964 (-IsMonitorConnectedToInternalPanel@@YGHPAUtagMONITOR@@@Z.c)
 */

int __fastcall xxxSetActivePpiForMonitor(int a1, int a2, int a3, int a4)
{
  PVOID v5; // ecx
  int result; // eax
  struct tagMONITOR *v7; // [esp+0h] [ebp-4h]

  if ( !a2 || (result = IsMonitorConnectedToInternalPanel(v7)) != 0 )
  {
    v5 = dword_274060;
    *(_DWORD *)(*(_DWORD *)(_gptiCurrent + 248) + 148) = a1;
    return (*(int (__thiscall **)(PVOID, int, int))(*(_DWORD *)v5 + 4))(v5, a3, a4);
  }
  return result;
}
