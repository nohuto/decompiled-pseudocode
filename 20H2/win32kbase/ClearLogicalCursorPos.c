/*
 * XREFs of ClearLogicalCursorPos @ 0x1C00BFCE0
 * Callers:
 *     InitLoadResources @ 0x1C0020864 (InitLoadResources.c)
 * Callees:
 *     _anonymous_namespace_::GetMouseProcessor @ 0x1C00554EC (_anonymous_namespace_--GetMouseProcessor.c)
 */

__int64 ClearLogicalCursorPos()
{
  __int64 result; // rax

  result = anonymous_namespace_::GetMouseProcessor();
  if ( result )
  {
    *(_QWORD *)(result + 68) = *((_QWORD *)gpsi + 620);
    *(_DWORD *)(result + 76) = 18;
  }
  return result;
}
