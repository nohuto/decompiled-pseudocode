/*
 * XREFs of ??1?$unique_ptr@UShellButtonListEntry@GameControllerRawInputProvider@@U?$default_delete@UShellButtonListEntry@GameControllerRawInputProvider@@@std@@@std@@QEAA@XZ @ 0x180041100
 * Callers:
 *     ?OnSystemCommand@GameControllerRawInputProvider@@UEAAXI_K0E_N@Z @ 0x180089070 (-OnSystemCommand@GameControllerRawInputProvider@@UEAAXI_K0E_N@Z.c)
 * Callees:
 *     ??_GShellButtonListEntry@GameControllerRawInputProvider@@QEAAPEAXI@Z @ 0x1800411A8 (--_GShellButtonListEntry@GameControllerRawInputProvider@@QEAAPEAXI@Z.c)
 */

void *__fastcall std::unique_ptr<GameControllerRawInputProvider::ShellButtonListEntry>::~unique_ptr<GameControllerRawInputProvider::ShellButtonListEntry>(
        GameControllerRawInputProvider::ShellButtonListEntry **a1,
        unsigned int a2)
{
  GameControllerRawInputProvider::ShellButtonListEntry *v2; // rcx
  void *result; // rax

  v2 = *a1;
  if ( v2 )
    return GameControllerRawInputProvider::ShellButtonListEntry::`scalar deleting destructor'(v2, a2);
  return result;
}
