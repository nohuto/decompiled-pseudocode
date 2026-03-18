/*
 * XREFs of ?UpdateRenderTargetInfo@CDrawingContext@@AEAAXXZ @ 0x1800DE6B4
 * Callers:
 *     ?PushRenderTarget@CDrawingContext@@QEAAJPEAVIDeviceTarget@@@Z @ 0x18007E9E4 (-PushRenderTarget@CDrawingContext@@QEAAJPEAVIDeviceTarget@@@Z.c)
 *     ?PopRenderTargetInternal@CDrawingContext@@AEAAJ_N@Z @ 0x18007F044 (-PopRenderTargetInternal@CDrawingContext@@AEAAJ_N@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CDrawingContext::UpdateRenderTargetInfo(CDrawingContext *this)
{
  __int64 v2; // rax
  _BYTE v3[40]; // [rsp+20h] [rbp-28h] BYREF

  v2 = (***((__int64 (__fastcall ****)(_QWORD, _BYTE *))this + 4))(*((_QWORD *)this + 4), v3);
  *(_OWORD *)((char *)this + 56) = *(_OWORD *)v2;
  *((_QWORD *)this + 9) = *(_QWORD *)(v2 + 16);
}
