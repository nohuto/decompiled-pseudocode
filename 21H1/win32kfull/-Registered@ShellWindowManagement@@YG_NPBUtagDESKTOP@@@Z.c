/*
 * XREFs of ?Registered@ShellWindowManagement@@YG_NPBUtagDESKTOP@@@Z @ 0xF4E98
 * Callers:
 *     ?_RegisterWindowArrangementCallout@@YGJPAUtagWND@@H@Z @ 0xE88B0 (-_RegisterWindowArrangementCallout@@YGJPAUtagWND@@H@Z.c)
 *     ?_EnableShellWindowManagementBehavior@@YGHKK@Z @ 0xE9D9A (-_EnableShellWindowManagementBehavior@@YGHKK@Z.c)
 * Callees:
 *     <none>
 */

bool __thiscall ShellWindowManagement::Registered(_DWORD *ecx0)
{
  return ecx0[50] != 0;
}
