/*
 * XREFs of _lambda_b1f3f535d4f0ba887956551c7aafec2d_::_lambda_invoker_cdecl_ @ 0x180429F40
 * Callers:
 *     <none>
 * Callees:
 *     ?Animate@AssistantLightManager@Lighting@TwinUI@@AEAAXW4AssistantState@2Cortana@@@Z @ 0x18042B140 (-Animate@AssistantLightManager@Lighting@TwinUI@@AEAAXW4AssistantState@2Cortana@@@Z.c)
 */

__int64 __fastcall lambda_b1f3f535d4f0ba887956551c7aafec2d_::_lambda_invoker_cdecl_(unsigned int *Parameter)
{
  if ( (int)RoInitialize(1LL) >= 0 )
  {
    TwinUI::Lighting::AssistantLightManager::Animate(Parameter, Parameter[26]);
    RoUninitialize();
  }
  return 0LL;
}
