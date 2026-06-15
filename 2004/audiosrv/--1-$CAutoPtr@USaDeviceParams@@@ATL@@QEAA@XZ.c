/*
 * XREFs of ??1?$CAutoPtr@USaDeviceParams@@@ATL@@QEAA@XZ @ 0x1800E3F44
 * Callers:
 *     _DeriveSaDeviceParametersForStream_::_1_::dtor$0 @ 0x180077710 (_DeriveSaDeviceParametersForStream_--_1_--dtor$0.c)
 *     _CAudioResourceManager::GetSaDeviceForSharedStream_::_1_::dtor$7 @ 0x18007778A (_CAudioResourceManager--GetSaDeviceForSharedStream_--_1_--dtor$7.c)
 *     _CSaDeviceProxy::RuntimeClassInitialize_::_1_::dtor$4 @ 0x18007BBE0 (_CSaDeviceProxy--RuntimeClassInitialize_--_1_--dtor$4.c)
 *     _CloneSaDeviceParams_::_1_::dtor$0 @ 0x18007BC00 (_CloneSaDeviceParams_--_1_--dtor$0.c)
 *     _CSaDeviceProxy::_CSaDeviceProxy_::_1_::dtor$1 @ 0x18007C480 (_CSaDeviceProxy--_CSaDeviceProxy_--_1_--dtor$1.c)
 *     _CAudioResourceManager::ReevaluateSaDeviceSettings_::_1_::dtor$8 @ 0x1800EDBC9 (_CAudioResourceManager--ReevaluateSaDeviceSettings_--_1_--dtor$8.c)
 *     _CAudioResourceManager::SwitchStreamGroupsToNewSaDevice_::_1_::dtor$1 @ 0x1800EE8C4 (_CAudioResourceManager--SwitchStreamGroupsToNewSaDevice_--_1_--dtor$1.c)
 *     _CAudioResourceManager::SwitchStreamGroupsToNewSaDevice_::_1_::dtor$2 @ 0x1800EE8D0 (_CAudioResourceManager--SwitchStreamGroupsToNewSaDevice_--_1_--dtor$2.c)
 * Callees:
 *     ??_GSaDeviceParams@@QEAAPEAXI@Z @ 0x1800E485C (--_GSaDeviceParams@@QEAAPEAXI@Z.c)
 */

void *__fastcall ATL::CAutoPtr<SaDeviceParams>::~CAutoPtr<SaDeviceParams>(SaDeviceParams **a1, unsigned int a2)
{
  SaDeviceParams *v3; // rcx
  void *result; // rax

  v3 = *a1;
  if ( v3 )
    result = SaDeviceParams::`scalar deleting destructor'(v3, a2);
  *a1 = 0LL;
  return result;
}
