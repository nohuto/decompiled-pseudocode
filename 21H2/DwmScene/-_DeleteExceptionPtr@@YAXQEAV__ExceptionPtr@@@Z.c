/*
 * XREFs of ?_DeleteExceptionPtr@@YAXQEAV__ExceptionPtr@@@Z @ 0x18000CA30
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000C928 @ 0x18000C928 (sub_18000C928.c)
 */

void __fastcall _DeleteExceptionPtr(struct __ExceptionPtr *const a1, _BYTE *a2, __int64 a3)
{
  sub_18000C928((unsigned __int64)a1, a2, a3);
  sub_18000E728(a1);
}
