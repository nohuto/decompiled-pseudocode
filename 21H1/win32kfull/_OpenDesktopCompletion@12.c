/*
 * XREFs of _OpenDesktopCompletion@12 @ 0x7F0EE
 * Callers:
 *     __OpenDesktop@20 @ 0x7DD0E (__OpenDesktop@20.c)
 *     _xxxCreateDesktopEx@24 @ 0x7E854 (_xxxCreateDesktopEx@24.c)
 *     _EditionOpenInputDesktopEntryPoint@12 @ 0xF2960 (_EditionOpenInputDesktopEntryPoint@12.c)
 *     __OpenThreadDesktop@20 @ 0x154A0F (__OpenThreadDesktop@20.c)
 * Callees:
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 */

int __fastcall OpenDesktopCompletion(int a1, int a2, char a3)
{
  PEPROCESS *CurrentProcessWin32Process; // eax
  int v6; // edi
  int ProcessLuid; // esi
  int v9; // [esp+Ch] [ebp-8h] BYREF
  int v10; // [esp+10h] [ebp-4h]

  CurrentProcessWin32Process = (PEPROCESS *)PsGetCurrentProcessWin32Process();
  v6 = *(_DWORD *)(a1 + 20);
  if ( (*(_BYTE *)(v6 + 32) & 2) == 0 || PsGetProcessId(*CurrentProcessWin32Process) == (HANDLE)_gpidLogon )
    return SetHandleFlag(a2, 0, a3 & 1) != 0 ? 0x40000000 : -1073741801;
  v9 = 0;
  v10 = 0;
  ProcessLuid = GetProcessLuid(0, &v9);
  if ( ProcessLuid >= 0 )
  {
    if ( v9 == *(_DWORD *)(v6 + 92) && v10 == *(_DWORD *)(v6 + 96) )
    {
      ProcessLuid = -1073741205;
      goto LABEL_8;
    }
    return SetHandleFlag(a2, 0, a3 & 1) != 0 ? 0x40000000 : -1073741801;
  }
LABEL_8:
  UserSetLastError(170);
  return ProcessLuid;
}
