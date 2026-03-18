/*
 * XREFs of ApplyGatheredKeyboardDeviceCount @ 0x1C00BF9C0
 * Callers:
 *     <none>
 * Callees:
 *     _anonymous_namespace_::GetKeyboardProcessor @ 0x1C002D784 (_anonymous_namespace_--GetKeyboardProcessor.c)
 *     ?ApplyGatheredKeyboardDeviceCount@CKeyboardProcessor@@QEAAXK@Z @ 0x1C00CBA70 (-ApplyGatheredKeyboardDeviceCount@CKeyboardProcessor@@QEAAXK@Z.c)
 */

void __fastcall ApplyGatheredKeyboardDeviceCount(unsigned int a1)
{
  CKeyboardProcessor *KeyboardProcessor; // rax

  KeyboardProcessor = (CKeyboardProcessor *)anonymous_namespace_::GetKeyboardProcessor();
  if ( KeyboardProcessor )
    CKeyboardProcessor::ApplyGatheredKeyboardDeviceCount(KeyboardProcessor, a1);
}
