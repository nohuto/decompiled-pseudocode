/*
 * XREFs of ?StaticInitialize@?$Module@$00V?$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@CA_NXZ @ 0x18008C2DC
 * Callers:
 *     _dynamic_initializer_for__Microsoft::WRL::Module_1_Microsoft::WRL::Details::DefaultModule_1___::isInitialized__ @ 0x180001A80 (_dynamic_initializer_for__Microsoft--WRL--Module_1_Microsoft--WRL--Details--DefaultModule_1___--.c)
 * Callees:
 *     ?Create@?$Module@$00V?$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@SAAEAV?$DefaultModule@$00@Details@23@XZ @ 0x180085524 (-Create@-$Module@$00V-$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@SAAEAV-$DefaultM.c)
 */

bool Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::StaticInitialize()
{
  return Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::Create() != 0LL;
}
