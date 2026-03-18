/*
 * XREFs of NotifySetPointerGraphicDevice @ 0x1C00B13E0
 * Callers:
 *     <none>
 * Callees:
 *     _anonymous_namespace_::GetMouseProcessor @ 0x1C00554EC (_anonymous_namespace_--GetMouseProcessor.c)
 *     ?NotifySetPointerGraphicDevice@CMouseProcessor@@QEAAXW4SetPointerGraphicsResult@@@Z @ 0x1C00B140C (-NotifySetPointerGraphicDevice@CMouseProcessor@@QEAAXW4SetPointerGraphicsResult@@@Z.c)
 */

__int64 __fastcall NotifySetPointerGraphicDevice(unsigned int a1)
{
  __int64 result; // rax

  result = anonymous_namespace_::GetMouseProcessor();
  if ( result )
    return CMouseProcessor::NotifySetPointerGraphicDevice(result, a1);
  return result;
}
