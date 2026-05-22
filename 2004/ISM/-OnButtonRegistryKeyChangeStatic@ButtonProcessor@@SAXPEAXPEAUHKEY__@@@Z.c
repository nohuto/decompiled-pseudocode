/*
 * XREFs of ?OnButtonRegistryKeyChangeStatic@ButtonProcessor@@SAXPEAXPEAUHKEY__@@@Z @ 0x180187BE0
 * Callers:
 *     <none>
 * Callees:
 *     ?OnButtonRegistryKeyChange@ButtonProcessor@@AEAAXPEAUHKEY__@@@Z @ 0x180187AE4 (-OnButtonRegistryKeyChange@ButtonProcessor@@AEAAXPEAUHKEY__@@@Z.c)
 */

void __fastcall ButtonProcessor::OnButtonRegistryKeyChangeStatic(ButtonProcessor *a1, HKEY a2)
{
  if ( a1 )
    ButtonProcessor::OnButtonRegistryKeyChange(a1, a2);
}
