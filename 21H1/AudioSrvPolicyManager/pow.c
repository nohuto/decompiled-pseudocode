/*
 * XREFs of pow @ 0x180040068
 * Callers:
 *     ?OnScreenReaderStateChanged@CApplicationManager@@QEAAJPEAUScreenReaderStateChangedContext@@@Z @ 0x180025640 (-OnScreenReaderStateChanged@CApplicationManager@@QEAAJPEAUScreenReaderStateChangedContext@@@Z.c)
 *     ?TsSessionIdScreenReaderStateChanged@@YAJKKHMPEAH@Z @ 0x18002F3AC (-TsSessionIdScreenReaderStateChanged@@YAJKKHMPEAH@Z.c)
 *     ?GetPolicyVolumeForStreamClass@CStreamClassPolicyGainsWrapper@@QEAAJKHAEA_NAEAMAEA_J@Z @ 0x18003101C (-GetPolicyVolumeForStreamClass@CStreamClassPolicyGainsWrapper@@QEAAJKHAEA_NAEAMAEA_J@Z.c)
 *     ??0CEndpointVolumeState@@QEAA@PEAUIVolumeProvider@@PEBG@Z @ 0x180033EEC (--0CEndpointVolumeState@@QEAA@PEAUIVolumeProvider@@PEBG@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
double __cdecl pow(double X, double Y)
{
  return _o_pow(X, Y);
}
