/*
 * XREFs of MouseButtonAction @ 0x1C01A9790
 * Callers:
 *     ?xxxMKButtonSetState@@YAHG@Z @ 0x1C0181EC0 (-xxxMKButtonSetState@@YAHG@Z.c)
 * Callees:
 *     _anonymous_namespace_::GetMouseProcessor @ 0x1C00554EC (_anonymous_namespace_--GetMouseProcessor.c)
 *     ?AccessibilityMouseButtonAction@CMouseProcessor@@QEAAXW4MouseKeyButton@@W4MouseKeyButtonState@@@Z @ 0x1C01B9040 (-AccessibilityMouseButtonAction@CMouseProcessor@@QEAAXW4MouseKeyButton@@W4MouseKeyButtonState@@@.c)
 */

__int64 __fastcall MouseButtonAction(unsigned int a1, unsigned int a2)
{
  __int64 result; // rax

  result = anonymous_namespace_::GetMouseProcessor();
  if ( result )
    return CMouseProcessor::AccessibilityMouseButtonAction(result, a1, a2);
  return result;
}
