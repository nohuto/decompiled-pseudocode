/*
 * XREFs of ?_DeleteExceptionPtr@@YAXQEAV__ExceptionPtr@@@Z @ 0x18000C950
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000C848 @ 0x18000C848 (sub_18000C848.c)
 */

void __fastcall _DeleteExceptionPtr(struct __ExceptionPtr *const a1, _BYTE *a2, __int64 a3)
{
  sub_18000C848((unsigned __int64)a1, a2, a3);
  sub_18000E648(a1);
}
