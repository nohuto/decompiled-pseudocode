/*
 * XREFs of ?__StaticInitConfig@DragRecognizer@@SAXPEAUHKEY__@@@Z @ 0x180184FC8
 * Callers:
 *     ?StaticInitConfig@GestureRecognizer@@KAXXZ @ 0x180185714 (-StaticInitConfig@GestureRecognizer@@KAXXZ.c)
 * Callees:
 *     ?ReadRegConfigValue@GestureSession@@SAGPEAUHKEY__@@PEBGGW4ScalingMethod@@@Z @ 0x180183008 (-ReadRegConfigValue@GestureSession@@SAGPEAUHKEY__@@PEBGGW4ScalingMethod@@@Z.c)
 */

void __fastcall DragRecognizer::__StaticInitConfig(HKEY a1)
{
  DragRecognizer::s_initialDragThreshold = GestureSession::ReadRegConfigValue(a1, L"DragInitialThreshold", 0x14u, 1);
  DragRecognizer::s_orientationBias = GestureSession::ReadRegConfigValue(a1, L"DragOrientationBias", 0x19u, 0);
  DragRecognizer::s_directionLockThreshold = GestureSession::ReadRegConfigValue(
                                               a1,
                                               L"DragDirectionLockThreshold",
                                               0x64u,
                                               1);
  DragRecognizer::s_directionLockMinorThreshold = GestureSession::ReadRegConfigValue(
                                                    a1,
                                                    L"DragDirectionLockMinorThreshold",
                                                    0x32u,
                                                    1);
  DragRecognizer::s_minimumUpdateThreshold = GestureSession::ReadRegConfigValue(
                                               a1,
                                               L"DragMinimumUpdateThreshold",
                                               1u,
                                               1);
  DragRecognizer::s_jitterDeadZoneThreshold = GestureSession::ReadRegConfigValue(
                                                a1,
                                                L"DragJitterDeadZoneThreshold",
                                                1u,
                                                0);
}
