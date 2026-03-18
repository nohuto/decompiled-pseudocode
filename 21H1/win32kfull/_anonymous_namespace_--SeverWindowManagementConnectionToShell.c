/*
 * XREFs of _anonymous_namespace_::SeverWindowManagementConnectionToShell @ 0x19C316
 * Callers:
 *     _anonymous_namespace_::NotifyIAMWindowManagementEvent @ 0x17536 (_anonymous_namespace_--NotifyIAMWindowManagementEvent.c)
 *     _anonymous_namespace_::xxxCallIAMWindowManagementHandler @ 0x92764 (_anonymous_namespace_--xxxCallIAMWindowManagementHandler.c)
 * Callees:
 *     __PostMessage@16 @ 0x6DA60 (__PostMessage@16.c)
 *     ?SetWindow@ShellWindowManagement@@YGPAUtagWND@@PAUtagDESKTOP@@PAU2@@Z @ 0xF4EA4 (-SetWindow@ShellWindowManagement@@YGPAUtagWND@@PAUtagDESKTOP@@PAU2@@Z.c)
 */

struct tagWND *__thiscall anonymous_namespace_::SeverWindowManagementConnectionToShell(ShellWindowManagement *this)
{
  struct tagWND *result; // eax

  result = ShellWindowManagement::SetWindow((int)this, 0);
  if ( result )
    return (struct tagWND *)_PostMessage((int)result, 835, 0, 0);
  return result;
}
