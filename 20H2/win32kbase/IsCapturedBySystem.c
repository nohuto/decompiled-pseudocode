/*
 * XREFs of IsCapturedBySystem @ 0x1C00BE930
 * Callers:
 *     <none>
 * Callees:
 *     ??8CInputDest@@QEBA_NAEBUtagINPUTDEST@@@Z @ 0x1C00553BC (--8CInputDest@@QEBA_NAEBUtagINPUTDEST@@@Z.c)
 *     _anonymous_namespace_::GetMouseProcessor @ 0x1C00554EC (_anonymous_namespace_--GetMouseProcessor.c)
 */

bool __fastcall IsCapturedBySystem(__int64 a1)
{
  __int64 MouseProcessor; // rax
  __int64 v3; // r8
  __int64 v4; // r9
  char v5; // bl

  MouseProcessor = anonymous_namespace_::GetMouseProcessor();
  v5 = 0;
  if ( MouseProcessor )
    return CInputDest::operator==((unsigned int *)(MouseProcessor + 3568), a1, v3, v4) != 0;
  return v5;
}
