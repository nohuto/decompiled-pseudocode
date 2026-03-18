/*
 * XREFs of ?SetInteractiveControlParameters@@YGJPAUtagINTERACTIVECTRL_PARAMETERS@@H@Z @ 0x19F99E
 * Callers:
 *     xxxSystemParametersInfoWorker @ 0x270DA (xxxSystemParametersInfoWorker.c)
 * Callees:
 *     ?Instance@InteractiveControlManager@@SGPAV1@XZ @ 0xD64EA (-Instance@InteractiveControlManager@@SGPAV1@XZ.c)
 *     ?SetExternalParameters@InteractiveControlManager@@QAEJPAUtagINTERACTIVECTRL_PARAMETERS@@H@Z @ 0x1AEA0E (-SetExternalParameters@InteractiveControlManager@@QAEJPAUtagINTERACTIVECTRL_PARAMETERS@@H@Z.c)
 */

int __fastcall SetInteractiveControlParameters(struct tagINTERACTIVECTRL_PARAMETERS *a1, int a2)
{
  InteractiveControlManager *v2; // eax

  v2 = InteractiveControlManager::Instance();
  return InteractiveControlManager::SetExternalParameters(v2, a1, a2);
}
