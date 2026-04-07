/*
 * XREFs of ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180080914
 * Callers:
 *     ??0CAnalogCompositorManager@@AEAA@XZ @ 0x18004A854 (--0CAnalogCompositorManager@@AEAA@XZ.c)
 *     ??0HolographicDriverDetectedWatcher@Mirage@Windows@@QEAA@XZ @ 0x18004AC34 (--0HolographicDriverDetectedWatcher@Mirage@Windows@@QEAA@XZ.c)
 *     ?OnHolographicDisplayCalibrationDriverDetected@CAnalogCompositorManager@@AEAAXXZ @ 0x18008048C (-OnHolographicDisplayCalibrationDriverDetected@CAnalogCompositorManager@@AEAAXXZ.c)
 *     ?ReinitializeDComp@UdwmDcompVisual@@AEAAJXZ @ 0x1800BA4E0 (-ReinitializeDComp@UdwmDcompVisual@@AEAAJXZ.c)
 * Callees:
 *     ?ReportFailure_Hr@details@wil@@YAXPEAXIPEBD110W4FailureType@2@J@Z @ 0x180006690 (-ReportFailure_Hr@details@wil@@YAXPEAXIPEBD110W4FailureType@2@J@Z.c)
 */

void __fastcall wil::details::in1diag3::_FailFast_Hr(
        wil::details::in1diag3 *this,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  wil::details::ReportFailure_Hr((__int64)this, a2, a3, 0LL, 0LL, retaddr);
}
