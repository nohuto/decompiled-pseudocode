/*
 * XREFs of IoMmuDeleteTreeNode @ 0x1C005608C
 * Callers:
 *     IoMmuDestroyPageManager @ 0x1C00560AC (IoMmuDestroyPageManager.c)
 *     DpiResetIoMmuContext @ 0x1C0056C08 (DpiResetIoMmuContext.c)
 * Callees:
 *     IoMmuDeletePage @ 0x1C0026CB0 (IoMmuDeletePage.c)
 */

void __fastcall IoMmuDeleteTreeNode(void *a1, __int64 a2)
{
  IoMmuDeletePage(a2, a1);
}
