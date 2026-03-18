/*
 * XREFs of ?SetWindow@ShellWindowManagement@@YGPAUtagWND@@PAUtagDESKTOP@@PAU2@@Z @ 0xF4EA4
 * Callers:
 *     _xxxFreeWindow@8 @ 0x70780 (_xxxFreeWindow@8.c)
 *     ?CleanupShellWindowManagement@@YGXPAUtagDESKTOP@@@Z @ 0xAC5A0 (-CleanupShellWindowManagement@@YGXPAUtagDESKTOP@@@Z.c)
 *     ?_RegisterWindowArrangementCallout@@YGJPAUtagWND@@H@Z @ 0xE88B0 (-_RegisterWindowArrangementCallout@@YGJPAUtagWND@@H@Z.c)
 *     _anonymous_namespace_::SeverWindowManagementConnectionToShell @ 0x19C316 (_anonymous_namespace_--SeverWindowManagementConnectionToShell.c)
 * Callees:
 *     <none>
 */

struct tagWND *__fastcall ShellWindowManagement::SetWindow(int a1, int a2)
{
  int v3; // esi
  int v4; // ecx
  int v5; // eax

  v3 = 0;
  v4 = a1 + 200;
  if ( a2 )
  {
    HMAssignmentLock(v4, a2);
  }
  else
  {
    v5 = HMAssignmentUnlock(v4);
    *(_DWORD *)(a1 + 204) = 0;
    return (struct tagWND *)v5;
  }
  return (struct tagWND *)v3;
}
