/*
 * XREFs of IoMmuDeleteTreeNode @ 0x1C005614C
 * Callers:
 *     IoMmuDestroyPageManager @ 0x1C005616C (IoMmuDestroyPageManager.c)
 *     DpiResetIoMmuContext @ 0x1C0056CC8 (DpiResetIoMmuContext.c)
 * Callees:
 *     IoMmuDeletePage @ 0x1C0026D28 (IoMmuDeletePage.c)
 */

void __fastcall IoMmuDeleteTreeNode(void *a1, __int64 a2)
{
  IoMmuDeletePage(a2, a1);
}
