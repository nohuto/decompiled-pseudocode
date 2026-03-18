/*
 * XREFs of ?InitializeDeviceTransform@CVirtualMonitorCaptureRenderTarget@@MEAAXPEAVCMILMatrix@@@Z @ 0x180187FF0
 * Callers:
 *     <none>
 * Callees:
 *     ?InitializeDeviceTransform@COffScreenRenderTarget@@MEAAXPEAVCMILMatrix@@@Z @ 0x180185240 (-InitializeDeviceTransform@COffScreenRenderTarget@@MEAAXPEAVCMILMatrix@@@Z.c)
 */

void __fastcall CVirtualMonitorCaptureRenderTarget::InitializeDeviceTransform(
        CVirtualMonitorCaptureRenderTarget *this,
        struct CMILMatrix *a2)
{
  if ( *((_QWORD *)this + 13) )
  {
    COffScreenRenderTarget::InitializeDeviceTransform(this, a2);
  }
  else
  {
    *(_QWORD *)a2 = 1065353216LL;
    *((_QWORD *)a2 + 1) = 0LL;
    *((_DWORD *)a2 + 4) = 0;
    *(_QWORD *)((char *)a2 + 20) = 1065353216LL;
    *(_QWORD *)((char *)a2 + 28) = 0LL;
    *((_DWORD *)a2 + 9) = 0;
    *((_QWORD *)a2 + 5) = 1065353216LL;
    *((_QWORD *)a2 + 6) = 0LL;
    *((_DWORD *)a2 + 14) = 0;
    *((_DWORD *)a2 + 15) = 1065353216;
    *((_WORD *)a2 + 32) = 32085;
  }
  CMILMatrix::Translate(
    a2,
    COERCE_FLOAT(COERCE_UNSIGNED_INT((float)*((int *)this + 533)) ^ _xmm),
    COERCE_FLOAT(COERCE_UNSIGNED_INT((float)*((int *)this + 534)) ^ _xmm));
}
