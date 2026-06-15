/*
 * XREFs of _CWindowsPolicyManager::RuntimeClassInitialize_::_1_::dtor$8 @ 0x18003B149
 * Callers:
 *     <none>
 * Callees:
 *     ?SetCellularHostProcess@CProcess@@UEAAX_N@Z @ 0x1800051E0 (-SetCellularHostProcess@CProcess@@UEAAX_N@Z.c)
 */

void __fastcall CWindowsPolicyManager::RuntimeClassInitialize_::_1_::dtor_8(__int64 a1, __int64 a2)
{
  CProcess::SetCellularHostProcess(*(CProcess **)(a2 + 104));
}
