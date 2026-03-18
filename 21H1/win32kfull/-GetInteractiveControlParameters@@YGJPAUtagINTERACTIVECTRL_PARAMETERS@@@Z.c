/*
 * XREFs of ?GetInteractiveControlParameters@@YGJPAUtagINTERACTIVECTRL_PARAMETERS@@@Z @ 0x19F98E
 * Callers:
 *     xxxSystemParametersInfoWorker @ 0x270DA (xxxSystemParametersInfoWorker.c)
 * Callees:
 *     ?Instance@InteractiveControlManager@@SGPAV1@XZ @ 0xD64EA (-Instance@InteractiveControlManager@@SGPAV1@XZ.c)
 *     ?GetExternalParameters@InteractiveControlManager@@QAEJPAUtagINTERACTIVECTRL_PARAMETERS@@@Z @ 0x1ADE87 (-GetExternalParameters@InteractiveControlManager@@QAEJPAUtagINTERACTIVECTRL_PARAMETERS@@@Z.c)
 */

int __thiscall GetInteractiveControlParameters(struct tagINTERACTIVECTRL_PARAMETERS *this)
{
  InteractiveControlManager *v1; // eax

  v1 = InteractiveControlManager::Instance();
  return InteractiveControlManager::GetExternalParameters(v1, this);
}
