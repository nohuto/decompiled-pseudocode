/*
 * XREFs of imp_WdfObjectContextGetObject @ 0x1C0016B50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void *__fastcall imp_WdfObjectContextGetObject(_WDF_DRIVER_GLOBALS *__formal, _QWORD *ContextPointer)
{
  __int64 v2; // rax
  __int16 v3; // cx
  void *result; // rax

  v2 = *(ContextPointer - 6);
  v3 = *(_WORD *)(v2 + 10);
  result = (void *)(v2 ^ 0xFFFFFFFFFFFFFFF8uLL);
  if ( !v3 )
    return 0LL;
  return result;
}
