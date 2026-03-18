/*
 * XREFs of UpdateSavedPoint @ 0x1C01B2190
 * Callers:
 *     <none>
 * Callees:
 *     _anonymous_namespace_::GetMouseProcessor @ 0x1C00718AC (_anonymous_namespace_--GetMouseProcessor.c)
 */

__int64 UpdateSavedPoint()
{
  __int64 result; // rax
  __int64 v1; // r8

  result = anonymous_namespace_::GetMouseProcessor();
  v1 = result;
  if ( result )
  {
    *((_QWORD *)gpsi + 619) = 0LL;
    *(_QWORD *)(result + 68) = *((_QWORD *)gpsi + 620);
    *(_DWORD *)(result + 76) = 18;
    result = (__int64)gptCursorAsync;
    *(_QWORD *)(v1 + 3512) = 0LL;
    *(_QWORD *)(v1 + 3504) = result;
  }
  return result;
}
