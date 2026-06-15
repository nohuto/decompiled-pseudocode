/*
 * XREFs of ??1?$CAtlList@PEAUIAudioAppVolumePolicyChange@@V?$CElementTraits@PEAUIAudioAppVolumePolicyChange@@@ATL@@@ATL@@QEAA@XZ @ 0x180018020
 * Callers:
 *     _CProcess::CProcess_::_1_::dtor$2 @ 0x18003B8A2 (_CProcess--CProcess_--_1_--dtor$2.c)
 *     _CApplication::CApplication_::_1_::dtor$4 @ 0x18003B8B8 (_CApplication--CApplication_--_1_--dtor$4.c)
 *     _SetNotificationData_::_1_::dtor$0 @ 0x18003C5C8 (_SetNotificationData_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall ATL::CAtlList<IAudioAppVolumePolicyChange *,ATL::CElementTraits<IAudioAppVolumePolicyChange *>>::~CAtlList<IAudioAppVolumePolicyChange *,ATL::CElementTraits<IAudioAppVolumePolicyChange *>>(
        __int64 a1)
{
  ATL::CAtlList<CPickerHostContext *,ATL::CElementTraits<CPickerHostContext *>>::RemoveAll(a1);
}
