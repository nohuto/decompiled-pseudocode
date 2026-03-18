/*
 * XREFs of ?SendCaptureCompleted@CVisualCapture@@IEAAXXZ @ 0x1801F5C30
 * Callers:
 *     ?Render@CVisualCapture@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x1800E91F0 (-Render@CVisualCapture@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z.c)
 *     ?CheckForCaptureCompleted@CVisualCapture@@IEAAXXZ @ 0x1801F565C (-CheckForCaptureCompleted@CVisualCapture@@IEAAXXZ.c)
 * Callees:
 *     ?RemoveRenderTarget@CRenderTargetManager@@QEAAXPEAVCRenderTarget@@@Z @ 0x1800D1E6C (-RemoveRenderTarget@CRenderTargetManager@@QEAAXPEAVCRenderTarget@@@Z.c)
 */

void __fastcall CVisualCapture::SendCaptureCompleted(CVisualCapture *this)
{
  __int64 v2; // r10
  __int64 v3; // rax
  int v4; // ecx
  int v5; // [rsp+20h] [rbp-28h]
  __int64 v6; // [rsp+30h] [rbp-18h] BYREF

  v2 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 1080LL) + 48LL);
  if ( v2 )
  {
    v3 = *((_QWORD *)this + 6);
    if ( v3 )
      v4 = *(_DWORD *)(v3 + 68);
    else
      v4 = 0;
    LOWORD(v5) = 0;
    CoreUICallSend(v2, &v6, 2LL, 16LL, v5, &unk_1802CFACE, v4, *((unsigned int *)this + 14));
  }
  *((_BYTE *)this + 1929) = 1;
  if ( *((_BYTE *)this + 1928) )
    CRenderTargetManager::RemoveRenderTarget(*(CRenderTargetManager **)(*((_QWORD *)this + 2) + 88LL), this);
}
