/*
 * XREFs of ?Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800B44D8
 * Callers:
 *     _SystemCursorController::OnStubDisconnected_::_1_::catch$22 @ 0x18004D8A0 (_SystemCursorController--OnStubDisconnected_--_1_--catch$22.c)
 *     _TestCommandHost::RegisterForTestCommandMessage_::_1_::catch$8 @ 0x18004E444 (_TestCommandHost--RegisterForTestCommandMessage_--_1_--catch$8.c)
 *     _GameInputProcessor::OnDeviceAttach_::_1_::catch$19 @ 0x18005132E (_GameInputProcessor--OnDeviceAttach_--_1_--catch$19.c)
 *     _CursorNotificationProcessor::CheckAndEnsureCursorManagerClient_::_1_::catch$2 @ 0x180051538 (_CursorNotificationProcessor--CheckAndEnsureCursorManagerClient_--_1_--catch$2.c)
 *     _TestCommandHost::OnCoreMessageStatic_::_1_::catch$6 @ 0x1800BC2A5 (_TestCommandHost--OnCoreMessageStatic_--_1_--catch$6.c)
 *     _PenDeviceManager::AttachRIMDevice_::_1_::catch$63 @ 0x18012EECF (_PenDeviceManager--AttachRIMDevice_--_1_--catch$63.c)
 *     _SystemCursorController::AttachApplication_::_1_::catch$23 @ 0x18013B72F (_SystemCursorController--AttachApplication_--_1_--catch$23.c)
 *     _SystemCursorController::CreateCursorForDevice_::_1_::catch$0 @ 0x18013B917 (_SystemCursorController--CreateCursorForDevice_--_1_--catch$0.c)
 *     _SystemCursorController::CreateCursorShapeAnimation_::_1_::catch$0 @ 0x18013BB66 (_SystemCursorController--CreateCursorShapeAnimation_--_1_--catch$0.c)
 *     _SystemCursorController::CreateCustomCursorShapeAnimation_::_1_::catch$26 @ 0x18013BF38 (_SystemCursorController--CreateCustomCursorShapeAnimation_--_1_--catch$26.c)
 *     _SystemCursorController::DestroyCursorShapeAnimation_::_1_::catch$6 @ 0x18013C2B0 (_SystemCursorController--DestroyCursorShapeAnimation_--_1_--catch$6.c)
 *     _SystemCursorController::DestroyCustomCursorShapeAnimation_::_1_::catch$27 @ 0x18013C69D (_SystemCursorController--DestroyCustomCursorShapeAnimation_--_1_--catch$27.c)
 *     _SystemCursorController::EnsureServiceAndRegisterClient_::_1_::catch$26 @ 0x18013C950 (_SystemCursorController--EnsureServiceAndRegisterClient_--_1_--catch$26.c)
 *     _Windows::Internal::Holographic::HolographicDeviceSnapshot::Write_Windows::Internal::Holographic::SpatialGraphSnapshot__lambda_2be7d4712709608587fff75dfc19c285____::_1_::catch$2 @ 0x180150E45 (_Windows--Internal--Holographic--HolographicDeviceSnapshot--Write_Windows--Internal_ea_180150E45.c)
 *     _Windows::Internal::Holographic::HolographicDeviceSnapshot::Write_Windows::Internal::Holographic::SpatialGraphSnapshot__lambda_3f0123449741a7972872694de663f1a4____::_1_::catch$0 @ 0x180150EA1 (_Windows--Internal--Holographic--HolographicDeviceSnapshot--Write_Windows--Internal_ea_180150EA1.c)
 *     _Windows::Internal::Holographic::HolographicDeviceSnapshot::Write_Windows::Internal::Holographic::SpatialGraphSnapshot__lambda_879c2317d6bf6f0b2a32d99bde7a5ca8____::_1_::catch$0 @ 0x180150EFD (_Windows--Internal--Holographic--HolographicDeviceSnapshot--Write_Windows--Internal_ea_180150EFD.c)
 *     _Windows::Internal::Holographic::HolographicDeviceSnapshot::Write_Windows::Internal::Holographic::TrackedDeviceSnapshot__lambda_3f94c1c330aebc4cd0e0e5305e75e493____::_1_::catch$0 @ 0x180150F59 (_Windows--Internal--Holographic--HolographicDeviceSnapshot--Write_Windows--Internal_ea_180150F59.c)
 *     _Windows::Internal::Holographic::HolographicDeviceSnapshot::Write_Windows::Internal::Holographic::TrackedDeviceSnapshot__lambda_5739becc0e2e945e4356c3e82057fc5a____::_1_::catch$0 @ 0x180150FB5 (_Windows--Internal--Holographic--HolographicDeviceSnapshot--Write_Windows--Internal_ea_180150FB5.c)
 *     _Windows::Internal::Holographic::HolographicDeviceSnapshot::AddSpatialNodeMapping_::_1_::catch$0 @ 0x1801596BD (_Windows--Internal--Holographic--HolographicDeviceSnapshot--AddSpatialNodeMapping_--_1_--catch$0.c)
 *     _Windows::Internal::Holographic::HolographicDeviceSnapshot::AddTelemetryGuidMapping_::_1_::catch$2 @ 0x180159763 (_Windows--Internal--Holographic--HolographicDeviceSnapshot--AddTelemetryGuidMapping_--_1_--catch.c)
 *     _Windows::Internal::Holographic::HolographicDeviceSnapshot::Write_Windows::Internal::Holographic::SpatialInteractionSnapshot__lambda_b4e0cd5f6af37fda6baddea144408786____::_1_::catch$2 @ 0x180168EB9 (_Windows--Internal--Holographic--HolographicDeviceSnapshot--Write_Windows--Internal_ea_180168EB9.c)
 *     _Windows::Internal::Holographic::HolographicDeviceSnapshot::AddSpatialInteractionDeviceIdMapping_::_1_::catch$2 @ 0x18016A6E5 (_Windows--Internal--Holographic--HolographicDeviceSnapshot--AddSpatialInteractionDe_ea_18016A6E5.c)
 * Callees:
 *     ?ReportFailure_CaughtException@details@wil@@YAJPEAXIPEBD110W4FailureType@2@W4SupportedExceptions@2@@Z @ 0x1800735A8 (-ReportFailure_CaughtException@details@wil@@YAJPEAXIPEBD110W4FailureType@2@W4SupportedExceptions.c)
 */

__int64 __fastcall wil::details::in1diag3::Log_CaughtException(
        wil::details::in1diag3 *this,
        void *a2,
        __int64 a3,
        const char *a4)
{
  return wil::details::ReportFailure_CaughtException();
}
