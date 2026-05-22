/*
 * XREFs of ?StaticInitConfig@GestureRecognizer@@KAXXZ @ 0x180185714
 * Callers:
 *     ??0GestureSession@@AEAA@XZ @ 0x180182744 (--0GestureSession@@AEAA@XZ.c)
 *     ??0FlickRecognizer@@QEAA@XZ @ 0x1801834BC (--0FlickRecognizer@@QEAA@XZ.c)
 *     ??0ClickRecognizer@@QEAA@XZ @ 0x180183F70 (--0ClickRecognizer@@QEAA@XZ.c)
 *     ??0TwoFingerGestureRecognizer@@QEAA@XZ @ 0x180185234 (--0TwoFingerGestureRecognizer@@QEAA@XZ.c)
 *     ??0TwoFingerClickRecognizer@@QEAA@XZ @ 0x180185F2C (--0TwoFingerClickRecognizer@@QEAA@XZ.c)
 * Callees:
 *     ?OpenConfigRegKey@GestureSession@@SAJPEAPEAUHKEY__@@@Z @ 0x180182CA4 (-OpenConfigRegKey@GestureSession@@SAJPEAPEAUHKEY__@@@Z.c)
 *     ?ReadRegConfigValue@GestureSession@@SAGPEAUHKEY__@@PEBGGW4ScalingMethod@@@Z @ 0x180183008 (-ReadRegConfigValue@GestureSession@@SAGPEAUHKEY__@@PEBGGW4ScalingMethod@@@Z.c)
 *     ?__StaticInitConfig@FlickRecognizer@@SAXPEAUHKEY__@@@Z @ 0x180183B54 (-__StaticInitConfig@FlickRecognizer@@SAXPEAUHKEY__@@@Z.c)
 *     ?__StaticInitConfig@ClickRecognizer@@SAXPEAUHKEY__@@@Z @ 0x1801847D8 (-__StaticInitConfig@ClickRecognizer@@SAXPEAUHKEY__@@@Z.c)
 *     ?__StaticInitConfig@DragRecognizer@@SAXPEAUHKEY__@@@Z @ 0x180184FC8 (-__StaticInitConfig@DragRecognizer@@SAXPEAUHKEY__@@@Z.c)
 *     ?__StaticInitConfig@TwoFingerDragRecognizer@@SAXPEAUHKEY__@@@Z @ 0x180185E98 (-__StaticInitConfig@TwoFingerDragRecognizer@@SAXPEAUHKEY__@@@Z.c)
 *     ?__StaticInitConfig@TwoFingerClickRecognizer@@SAXPEAUHKEY__@@@Z @ 0x180186714 (-__StaticInitConfig@TwoFingerClickRecognizer@@SAXPEAUHKEY__@@@Z.c)
 */

void GestureRecognizer::StaticInitConfig(void)
{
  unsigned __int16 RegConfigValue; // ax
  HKEY v1; // rbx
  HKEY hKey; // [rsp+30h] [rbp+8h] BYREF

  if ( !GestureRecognizer::s_fConfigRead )
  {
    hKey = 0LL;
    GestureSession::OpenConfigRegKey(&hKey);
    ClickRecognizer::__StaticInitConfig(hKey);
    DragRecognizer::__StaticInitConfig(hKey);
    FlickRecognizer::__StaticInitConfig(hKey);
    RegConfigValue = GestureSession::ReadRegConfigValue(hKey, L"PinchStretchMinimumUpdateThreshold", 3u, 1);
    v1 = hKey;
    PinchStretchRecognizer::s_minimumUpdateThreshold = RegConfigValue;
    TwoFingerClickRecognizer::__StaticInitConfig(hKey);
    TwoFingerDragRecognizer::__StaticInitConfig(v1);
    if ( hKey )
      RegCloseKey(hKey);
    GestureRecognizer::s_fConfigRead = 1;
  }
}
