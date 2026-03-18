/*
 * XREFs of RIMIsRunningOnDesktop @ 0x1C00369D0
 * Callers:
 *     UseVelocityToEnableIV @ 0x1C00369A4 (UseVelocityToEnableIV.c)
 *     ShouldEnableInputVirtualization @ 0x1C009BFCC (ShouldEnableInputVirtualization.c)
 *     RIMCreatePointerDeviceInfo @ 0x1C015C3E8 (RIMCreatePointerDeviceInfo.c)
 *     RIMVirtCreatePointerDeviceInfo @ 0x1C0160268 (RIMVirtCreatePointerDeviceInfo.c)
 *     RIMIDECreatePointerDeviceInfo @ 0x1C0167698 (RIMIDECreatePointerDeviceInfo.c)
 *     RIMIDEInjectKeyboardFromKeybdInputStruct @ 0x1C01690CC (RIMIDEInjectKeyboardFromKeybdInputStruct.c)
 * Callees:
 *     RIMGetOneCoreEdition @ 0x1C00369F0 (RIMGetOneCoreEdition.c)
 */

_BOOL8 RIMIsRunningOnDesktop()
{
  return (unsigned int)RIMGetOneCoreEdition() == 3;
}
