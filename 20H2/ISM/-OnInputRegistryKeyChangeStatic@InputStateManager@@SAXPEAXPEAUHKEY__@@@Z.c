/*
 * XREFs of ?OnInputRegistryKeyChangeStatic@InputStateManager@@SAXPEAXPEAUHKEY__@@@Z @ 0x180039EF0
 * Callers:
 *     <none>
 * Callees:
 *     ?OnInputRegistryKeyChange@InputStateManager@@AEAAXPEAUHKEY__@@@Z @ 0x180039F0C (-OnInputRegistryKeyChange@InputStateManager@@AEAAXPEAUHKEY__@@@Z.c)
 */

void __fastcall InputStateManager::OnInputRegistryKeyChangeStatic(InputStateManager *a1, HKEY a2)
{
  if ( a1 )
    InputStateManager::OnInputRegistryKeyChange(a1, a2);
}
