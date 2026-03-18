/*
 * XREFs of NotifySetPointerGraphicDevice @ 0x1C0050D30
 * Callers:
 *     <none>
 * Callees:
 *     ?NotifySetPointerGraphicDevice@CMouseProcessor@@QEAAXW4SetPointerGraphicsResult@@@Z @ 0x1C0050D5C (-NotifySetPointerGraphicDevice@CMouseProcessor@@QEAAXW4SetPointerGraphicsResult@@@Z.c)
 *     _anonymous_namespace_::GetMouseProcessor @ 0x1C00747EC (_anonymous_namespace_--GetMouseProcessor.c)
 */

__int64 __fastcall NotifySetPointerGraphicDevice(unsigned int a1)
{
  __int64 result; // rax

  result = anonymous_namespace_::GetMouseProcessor();
  if ( result )
    return CMouseProcessor::NotifySetPointerGraphicDevice(result, a1);
  return result;
}
