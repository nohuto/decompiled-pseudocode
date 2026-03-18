/*
 * XREFs of ?SetDesktopVisualTree@CVirtualMonitorCaptureRenderTarget@@UEAAJU_LUID@@@Z @ 0x180189F00
 * Callers:
 *     <none>
 * Callees:
 *     ?SetVisualTree@CRenderTarget@@IEAAJPEAVCVisualTree@@@Z @ 0x180026700 (-SetVisualTree@CRenderTarget@@IEAAJPEAVCVisualTree@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Release@CRenderTargetBitmap@@UEAAKXZ @ 0x18003CAF0 (-Release@CRenderTargetBitmap@@UEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CVirtualMonitorCaptureRenderTarget::SetDesktopVisualTree(
        CVirtualMonitorCaptureRenderTarget *this,
        struct _LUID a2)
{
  __int64 *v3; // rcx
  __int64 v4; // rax
  int v5; // eax
  __int64 v6; // rcx
  unsigned int v7; // ebx
  int v8; // eax
  __int64 v9; // rcx
  CRenderTargetBitmap *v11; // [rsp+40h] [rbp+8h] BYREF

  v3 = (__int64 *)*((_QWORD *)this + 2);
  v4 = *v3;
  v11 = 0LL;
  v5 = (*(__int64 (__fastcall **)(__int64 *, struct _LUID, CRenderTargetBitmap **))(v4 + 32))(v3, a2, &v11);
  v7 = v5;
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, 0x26u, 0LL);
  }
  else
  {
    v8 = CRenderTarget::SetVisualTree(this, v11);
    v7 = v8;
    if ( v8 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x29u, 0LL);
  }
  if ( v11 )
    CRenderTargetBitmap::Release(v11);
  return v7;
}
