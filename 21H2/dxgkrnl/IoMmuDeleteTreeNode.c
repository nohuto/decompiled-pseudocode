/*
 * XREFs of IoMmuDeleteTreeNode @ 0x1C0056F9C
 * Callers:
 *     IoMmuDestroyPageManager @ 0x1C0056FBC (IoMmuDestroyPageManager.c)
 *     DpiResetIoMmuContext @ 0x1C0057B18 (DpiResetIoMmuContext.c)
 * Callees:
 *     IoMmuDeletePage @ 0x1C002863C (IoMmuDeletePage.c)
 */

void __fastcall IoMmuDeleteTreeNode(void *a1, __int64 a2)
{
  IoMmuDeletePage(a2, a1);
}
