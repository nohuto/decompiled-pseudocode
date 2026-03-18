/*
 * XREFs of IsPointerInputClientMessage @ 0x1C01D381C
 * Callers:
 *     ?FindMsgInsertionPoint@@YAPEAUtagQMSG@@QEAUtagQ@@QEAU1@@Z @ 0x1C01E09A4 (-FindMsgInsertionPoint@@YAPEAUtagQMSG@@QEAUtagQ@@QEAU1@@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall IsPointerInputClientMessage(int a1)
{
  return (unsigned int)(a1 - 581) <= 0x12 && a1 != 589;
}
