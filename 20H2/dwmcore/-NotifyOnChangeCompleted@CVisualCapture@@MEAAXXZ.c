/*
 * XREFs of ?NotifyOnChangeCompleted@CVisualCapture@@MEAAXXZ @ 0x1801F13C0
 * Callers:
 *     <none>
 * Callees:
 *     ?AddRenderTarget@CRenderTargetManager@@QEAAXPEAVCRenderTarget@@@Z @ 0x1800DB17C (-AddRenderTarget@CRenderTargetManager@@QEAAXPEAVCRenderTarget@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CVisualCapture::NotifyOnChangeCompleted(CVisualCapture *this)
{
  if ( !*((_BYTE *)this + 1928)
    && *((_QWORD *)this + 236)
    && (*(int (__fastcall **)(CVisualCapture *))(*(_QWORD *)this + 240LL))(this) >= 0 )
  {
    CRenderTargetManager::AddRenderTarget(*(CRenderTargetManager **)(*((_QWORD *)this + 2) + 88LL), this);
    *((_BYTE *)this + 1928) = 1;
    *((_BYTE *)this + 1772) = 1;
  }
}
