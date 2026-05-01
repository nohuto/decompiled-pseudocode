/*
 * XREFs of ??$_UIntegral_to_buff@GI@std@@YAPEAGPEAGI@Z @ 0x180323CF8
 * Callers:
 *     ?UpdateViewVisibilityInShellPreference@TouchKeyboardExperienceManager@@QEAAXI_N@Z @ 0x180335100 (-UpdateViewVisibilityInShellPreference@TouchKeyboardExperienceManager@@QEAAXI_N@Z.c)
 * Callees:
 *     <none>
 */

_WORD *__fastcall std::_UIntegral_to_buff<unsigned short,unsigned int>(_WORD *a1, unsigned int a2)
{
  do
  {
    *--a1 = a2 % 0xA + 48;
    a2 /= 0xAu;
  }
  while ( a2 );
  return a1;
}
