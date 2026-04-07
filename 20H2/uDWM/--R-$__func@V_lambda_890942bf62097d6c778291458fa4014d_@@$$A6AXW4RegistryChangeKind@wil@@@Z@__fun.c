/*
 * XREFs of ??R?$__func@V_lambda_890942bf62097d6c778291458fa4014d_@@$$A6AXW4RegistryChangeKind@wil@@@Z@__function@wistd@@UEAAX$$QEAW4RegistryChangeKind@wil@@@Z @ 0x180080180
 * Callers:
 *     <none>
 * Callees:
 *     ?GetControlMode@PerceptionSimulationSettings@@SA?AW4SimulationControlMode@@XZ @ 0x18004B19C (-GetControlMode@PerceptionSimulationSettings@@SA-AW4SimulationControlMode@@XZ.c)
 */

void __fastcall wistd::__function::__func<_lambda_890942bf62097d6c778291458fa4014d_,void (enum wil::RegistryChangeKind)>::operator()(
        __int64 a1)
{
  int ControlMode; // eax
  void *v3; // rdx
  wil::details **v4; // rcx

  ControlMode = PerceptionSimulationSettings::GetControlMode();
  v4 = *(wil::details ***)(a1 + 8);
  if ( !ControlMode )
    ++v4;
  wil::details::SetEvent(*v4, v3);
}
