/*
 * XREFs of ?NotifyTreeDirtyRegion@CRemoteAppRenderTarget@@UEAAXPEBVCVisualTree@@PEBVCDirtyRegion@@@Z @ 0x18018A5A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CRemoteAppRenderTarget::NotifyTreeDirtyRegion(
        CRemoteAppRenderTarget *this,
        const struct CVisualTree *a2,
        const struct CDirtyRegion *a3)
{
  *((_QWORD *)this + 14) = a3;
  (*(void (__fastcall **)(char *, _QWORD, _QWORD))(*((_QWORD *)this - 8) + 72LL))((char *)this - 64, 0LL, 0LL);
}
