/*
 * XREFs of MouseButtonAction @ 0x1C01B1870
 * Callers:
 *     ?xxxMKButtonSetState@@YAHG@Z @ 0x1C018A100 (-xxxMKButtonSetState@@YAHG@Z.c)
 * Callees:
 *     _anonymous_namespace_::GetMouseProcessor @ 0x1C00718AC (_anonymous_namespace_--GetMouseProcessor.c)
 *     ?AccessibilityMouseButtonAction@CMouseProcessor@@QEAAXW4MouseKeyButton@@W4MouseKeyButtonState@@@Z @ 0x1C01C1110 (-AccessibilityMouseButtonAction@CMouseProcessor@@QEAAXW4MouseKeyButton@@W4MouseKeyButtonState@@@.c)
 */

__int64 __fastcall MouseButtonAction(unsigned int a1, unsigned int a2)
{
  __int64 result; // rax

  result = anonymous_namespace_::GetMouseProcessor();
  if ( result )
    return CMouseProcessor::AccessibilityMouseButtonAction(result, a1, a2);
  return result;
}
