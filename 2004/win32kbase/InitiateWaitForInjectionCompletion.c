/*
 * XREFs of InitiateWaitForInjectionCompletion @ 0x1C004BB70
 * Callers:
 *     <none>
 * Callees:
 *     ?InitiateWaitForInjectionCompletion@CMouseProcessor@@QEAA_NP6AXXZ@Z @ 0x1C004BBAC (-InitiateWaitForInjectionCompletion@CMouseProcessor@@QEAA_NP6AXXZ@Z.c)
 *     _anonymous_namespace_::GetMouseProcessor @ 0x1C00747EC (_anonymous_namespace_--GetMouseProcessor.c)
 */

bool __fastcall InitiateWaitForInjectionCompletion(void (*a1)(void))
{
  char v2; // bl
  CMouseProcessor *MouseProcessor; // rax

  v2 = 0;
  MouseProcessor = (CMouseProcessor *)anonymous_namespace_::GetMouseProcessor();
  if ( MouseProcessor )
    return CMouseProcessor::InitiateWaitForInjectionCompletion(MouseProcessor, a1);
  return v2;
}
