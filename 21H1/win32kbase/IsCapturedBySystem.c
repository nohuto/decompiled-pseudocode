/*
 * XREFs of IsCapturedBySystem @ 0x1C0050AD0
 * Callers:
 *     <none>
 * Callees:
 *     ??8CInputDest@@QEBA_NAEBUtagINPUTDEST@@@Z @ 0x1C00717D8 (--8CInputDest@@QEBA_NAEBUtagINPUTDEST@@@Z.c)
 *     _anonymous_namespace_::GetMouseProcessor @ 0x1C00718AC (_anonymous_namespace_--GetMouseProcessor.c)
 */

bool __fastcall IsCapturedBySystem(__int64 a1)
{
  __int64 MouseProcessor; // rax
  char v3; // bl

  MouseProcessor = anonymous_namespace_::GetMouseProcessor();
  v3 = 0;
  if ( MouseProcessor )
    return (unsigned __int8)CInputDest::operator==(MouseProcessor + 3640, a1) != 0;
  return v3;
}
