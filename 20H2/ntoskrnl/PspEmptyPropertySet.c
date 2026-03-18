/*
 * XREFs of PspEmptyPropertySet @ 0x1406834DC
 * Callers:
 *     PspJobDelete @ 0x14035D490 (PspJobDelete.c)
 *     PspExitThread @ 0x14068390C (PspExitThread.c)
 * Callees:
 *     PspRemoveProperty @ 0x1402F6678 (PspRemoveProperty.c)
 */

_QWORD *__fastcall PspEmptyPropertySet(_QWORD *a1)
{
  _QWORD *result; // rax

  for ( result = (_QWORD *)*a1; (_QWORD *)*a1 != a1; result = (_QWORD *)*a1 )
    PspRemoveProperty((__int64)a1, result[2], 0LL);
  return result;
}
