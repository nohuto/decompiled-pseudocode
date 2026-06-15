/*
 * XREFs of ?Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800C8E44
 * Callers:
 *     _CPlaybackNotifier::AcquireReference_::_1_::catch$16 @ 0x1800760D0 (_CPlaybackNotifier--AcquireReference_--_1_--catch$16.c)
 *     _CPlaybackNotifier::UpdateAudioPlaybackStatus_::_1_::catch$53 @ 0x180076190 (_CPlaybackNotifier--UpdateAudioPlaybackStatus_--_1_--catch$53.c)
 *     _CPowerReferenceManager::AcquirePowerReferenceForStream_::_1_::catch$85 @ 0x1800762C0 (_CPowerReferenceManager--AcquirePowerReferenceForStream_--_1_--catch$85.c)
 *     _CAudioResourceManager::DestroyStream_::_1_::catch$79 @ 0x180079BE0 (_CAudioResourceManager--DestroyStream_--_1_--catch$79.c)
 *     _CAudioSessionManagerProvider::NotifyAudioDGTerminated_::_1_::catch$41 @ 0x180079F7D (_CAudioSessionManagerProvider--NotifyAudioDGTerminated_--_1_--catch$41.c)
 *     _CAudioSession::PruneTerminatedOwningProcesses_::_1_::catch$48 @ 0x18007B390 (_CAudioSession--PruneTerminatedOwningProcesses_--_1_--catch$48.c)
 *     _CSaDeviceProxy::_CSaDeviceProxy_::_1_::catch$31 @ 0x18007BA80 (_CSaDeviceProxy--_CSaDeviceProxy_--_1_--catch$31.c)
 *     _CAudioSessionManagerProvider::RevokeSessionsWithoutDataFlowAccess_::_1_::catch$41 @ 0x1800D13A5 (_CAudioSessionManagerProvider--RevokeSessionsWithoutDataFlowAccess_--_1_--catch$41.c)
 *     _CSharedStreamGroupProxy::OnEndpointAvailableForUse_::_1_::catch$8 @ 0x1800E5973 (_CSharedStreamGroupProxy--OnEndpointAvailableForUse_--_1_--catch$8.c)
 *     _CSharedStreamGroupProxy::OnEndpointUnavailableForUse_::_1_::catch$15 @ 0x1800E5C0E (_CSharedStreamGroupProxy--OnEndpointUnavailableForUse_--_1_--catch$15.c)
 *     _CCaptureNotifier::AcquireReference_::_1_::catch$16 @ 0x1800EF5E9 (_CCaptureNotifier--AcquireReference_--_1_--catch$16.c)
 *     _CCaptureNotifier::UpdateAudioCaptureStatus_::_1_::catch$20 @ 0x1800EF878 (_CCaptureNotifier--UpdateAudioCaptureStatus_--_1_--catch$20.c)
 * Callees:
 *     ?ReportFailure_CaughtException@details@wil@@YAJPEAXIPEBD110W4FailureType@2@W4SupportedExceptions@2@@Z @ 0x1800C41FC (-ReportFailure_CaughtException@details@wil@@YAJPEAXIPEBD110W4FailureType@2@W4SupportedExceptions.c)
 */

__int64 __fastcall wil::details::in1diag3::Log_CaughtException(
        wil::details::in1diag3 *this,
        void *a2,
        __int64 a3,
        const char *a4)
{
  return wil::details::ReportFailure_CaughtException((__int64)this, (unsigned int)a2, a3);
}
