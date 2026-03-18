/*
 * XREFs of RIMIsRunningOnDesktop @ 0x1C007118C
 * Callers:
 *     ShouldEnableInputVirtualization @ 0x1C003457C (ShouldEnableInputVirtualization.c)
 *     UseVelocityToEnableIV @ 0x1C0071160 (UseVelocityToEnableIV.c)
 *     RIMCreatePointerDeviceInfo @ 0x1C015E948 (RIMCreatePointerDeviceInfo.c)
 *     RIMVirtCreatePointerDeviceInfo @ 0x1C01627C8 (RIMVirtCreatePointerDeviceInfo.c)
 *     RIMIDECreatePointerDeviceInfo @ 0x1C0169BF8 (RIMIDECreatePointerDeviceInfo.c)
 *     RIMIDEInjectKeyboardFromKeybdInputStruct @ 0x1C016B62C (RIMIDEInjectKeyboardFromKeybdInputStruct.c)
 * Callees:
 *     RIMGetOneCoreEdition @ 0x1C00711AC (RIMGetOneCoreEdition.c)
 */

_BOOL8 RIMIsRunningOnDesktop()
{
  return (unsigned int)RIMGetOneCoreEdition() == 3;
}
