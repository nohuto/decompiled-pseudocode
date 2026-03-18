/*
 * XREFs of HasCapture @ 0x1C01B16A0
 * Callers:
 *     <none>
 * Callees:
 *     _anonymous_namespace_::GetMouseProcessor @ 0x1C00718AC (_anonymous_namespace_--GetMouseProcessor.c)
 */

char HasCapture()
{
  __int64 MouseProcessor; // rax
  char v1; // cl

  MouseProcessor = anonymous_namespace_::GetMouseProcessor();
  if ( !MouseProcessor )
    return 0;
  v1 = 1;
  if ( !_InterlockedCompareExchange((volatile signed __int32 *)(MouseProcessor + 3760), 1, 1) )
    return 0;
  return v1;
}
