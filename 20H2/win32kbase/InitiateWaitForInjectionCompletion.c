/*
 * XREFs of InitiateWaitForInjectionCompletion @ 0x1C00ACDA0
 * Callers:
 *     <none>
 * Callees:
 *     _anonymous_namespace_::GetMouseProcessor @ 0x1C00554EC (_anonymous_namespace_--GetMouseProcessor.c)
 *     ?InitiateWaitForInjectionCompletion@CMouseProcessor@@QEAA_NP6AXXZ@Z @ 0x1C00ACDDC (-InitiateWaitForInjectionCompletion@CMouseProcessor@@QEAA_NP6AXXZ@Z.c)
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
