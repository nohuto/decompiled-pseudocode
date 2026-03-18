/*
 * XREFs of ?NotifyTreeDirtyRegion@CVirtualMonitorCaptureRenderTarget@@UEAAXPEBVCVisualTree@@PEBVCDirtyRegion@@@Z @ 0x1800C3E00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CVirtualMonitorCaptureRenderTarget::NotifyTreeDirtyRegion(
        CVirtualMonitorCaptureRenderTarget *this,
        const struct CVisualTree *a2,
        const struct CDirtyRegion *a3)
{
  (*(void (__fastcall **)(char *, _QWORD, _QWORD))(*((_QWORD *)this - 8) + 72LL))((char *)this - 64, 0LL, 0LL);
}
