/*
 * XREFs of IoMmuDeleteTreeNode @ 0x1C005513C
 * Callers:
 *     IoMmuDestroyPageManager @ 0x1C005515C (IoMmuDestroyPageManager.c)
 *     DpiResetIoMmuContext @ 0x1C0055CB8 (DpiResetIoMmuContext.c)
 * Callees:
 *     IoMmuDeletePage @ 0x1C0026024 (IoMmuDeletePage.c)
 */

void __fastcall IoMmuDeleteTreeNode(void *a1, __int64 a2)
{
  IoMmuDeletePage(a2, a1);
}
