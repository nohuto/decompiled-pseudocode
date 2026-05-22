/*
 * XREFs of ?ValidateBounds@ControllerProcessor@@CA_NPEAUtagRECT@@@Z @ 0x180123BA8
 * Callers:
 *     ?TransitionToEnabled@ControllerProcessor@@AEAAJPEAUtagRECT@@PEAUtagPOINT@@@Z @ 0x180122CE0 (-TransitionToEnabled@ControllerProcessor@@AEAAJPEAUtagRECT@@PEAUtagPOINT@@@Z.c)
 *     ?UpdateNavigationParameters@ControllerProcessor@@AEAAJPEAUtagRECT@@@Z @ 0x180123584 (-UpdateNavigationParameters@ControllerProcessor@@AEAAJPEAUtagRECT@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall ControllerProcessor::ValidateBounds(struct tagRECT *a1)
{
  return a1->top < a1->bottom && a1->left < a1->right;
}
