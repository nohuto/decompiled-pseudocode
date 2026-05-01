/*
 * XREFs of ??1InitializePosition@ShellPositionerTelemetry@@QEAA@XZ @ 0x1803B2950
 * Callers:
 *     _ShellPositionerManager::InitializePosition_::_1_::dtor$0 @ 0x1800DCAF8 (_ShellPositionerManager--InitializePosition_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180024A94 (-Destroy@-$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProvi.c)
 */

void __fastcall ShellPositionerTelemetry::InitializePosition::~InitializePosition(
        ShellPositionerTelemetry::InitializePosition *this)
{
  *(_QWORD *)this = &ShellPositionerTelemetry::InitializePosition::`vftable';
  wil::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
