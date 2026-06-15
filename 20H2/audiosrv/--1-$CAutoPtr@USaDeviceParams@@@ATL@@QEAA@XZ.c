/*
 * XREFs of ??1?$CAutoPtr@USaDeviceParams@@@ATL@@QEAA@XZ @ 0x1800E32B4
 * Callers:
 *     _DeriveSaDeviceParametersForStream_::_1_::dtor$0 @ 0x180076C50 (_DeriveSaDeviceParametersForStream_--_1_--dtor$0.c)
 *     _CAudioResourceManager::GetSaDeviceForSharedStream_::_1_::dtor$7 @ 0x180076CCA (_CAudioResourceManager--GetSaDeviceForSharedStream_--_1_--dtor$7.c)
 *     _CSaDeviceProxy::RuntimeClassInitialize_::_1_::dtor$4 @ 0x18007B120 (_CSaDeviceProxy--RuntimeClassInitialize_--_1_--dtor$4.c)
 *     _CloneSaDeviceParams_::_1_::dtor$0 @ 0x18007B140 (_CloneSaDeviceParams_--_1_--dtor$0.c)
 *     _CSaDeviceProxy::_CSaDeviceProxy_::_1_::dtor$1 @ 0x18007B9C0 (_CSaDeviceProxy--_CSaDeviceProxy_--_1_--dtor$1.c)
 *     _CAudioResourceManager::ReevaluateSaDeviceSettings_::_1_::dtor$8 @ 0x1800ECF39 (_CAudioResourceManager--ReevaluateSaDeviceSettings_--_1_--dtor$8.c)
 *     _CAudioResourceManager::SwitchStreamGroupsToNewSaDevice_::_1_::dtor$1 @ 0x1800EDC34 (_CAudioResourceManager--SwitchStreamGroupsToNewSaDevice_--_1_--dtor$1.c)
 *     _CAudioResourceManager::SwitchStreamGroupsToNewSaDevice_::_1_::dtor$2 @ 0x1800EDC40 (_CAudioResourceManager--SwitchStreamGroupsToNewSaDevice_--_1_--dtor$2.c)
 * Callees:
 *     ??_GSaDeviceParams@@QEAAPEAXI@Z @ 0x1800E3BCC (--_GSaDeviceParams@@QEAAPEAXI@Z.c)
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
