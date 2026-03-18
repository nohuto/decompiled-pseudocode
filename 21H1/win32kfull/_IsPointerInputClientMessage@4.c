/*
 * XREFs of _IsPointerInputClientMessage@4 @ 0xAEE84
 * Callers:
 *     ?FindMsgInsertionPoint@@YGPAUtagQMSG@@QAUtagQ@@QAU1@@Z @ 0x14CEA3 (-FindMsgInsertionPoint@@YGPAUtagQMSG@@QAUtagQ@@QAU1@@Z.c)
 * Callees:
 *     <none>
 */

BOOL __fastcall IsPointerInputClientMessage(unsigned int a1)
{
  return a1 >= 0x245 && a1 <= 0x257 && a1 != 589;
}
