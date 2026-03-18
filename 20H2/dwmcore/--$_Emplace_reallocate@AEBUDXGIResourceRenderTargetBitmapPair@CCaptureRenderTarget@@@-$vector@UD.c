/*
 * XREFs of ??$_Emplace_reallocate@AEBUDXGIResourceRenderTargetBitmapPair@CCaptureRenderTarget@@@?$vector@UDXGIResourceRenderTargetBitmapPair@CCaptureRenderTarget@@V?$allocator@UDXGIResourceRenderTargetBitmapPair@CCaptureRenderTarget@@@std@@@std@@QEAAPEAUDXGIResourceRenderTargetBitmapPair@CCaptureRenderTarget@@QEAU23@AEBU23@@Z @ 0x1801867D8
 * Callers:
 *     ?CreateRenderTargetForFrameBuffer@CCaptureRenderTarget@@IEAAJXZ @ 0x180186E54 (-CreateRenderTargetForFrameBuffer@CCaptureRenderTarget@@IEAAJXZ.c)
 * Callees:
 *     ??0?$com_ptr_t@VIMonitorTarget@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVIMonitorTarget@@@Z @ 0x1800459AC (--0-$com_ptr_t@VIMonitorTarget@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVIMonitorTarget@@@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18005D888 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Uninitialized_move@PEAUDXGIResourceRenderTargetBitmapPair@CCaptureRenderTarget@@PEAU12@V?$allocator@UDXGIResourceRenderTargetBitmapPair@CCaptureRenderTarget@@@std@@@std@@YAPEAUDXGIResourceRenderTargetBitmapPair@CCaptureRenderTarget@@QEAU12@0PEAU12@AEAV?$allocator@UDXGIResourceRenderTargetBitmapPair@CCaptureRenderTarget@@@0@@Z @ 0x180186B1C (--$_Uninitialized_move@PEAUDXGIResourceRenderTargetBitmapPair@CCaptureRenderTarget@@PEAU12@V-$al.c)
 *     ?_Change_array@?$vector@UDXGIResourceRenderTargetBitmapPair@CCaptureRenderTarget@@V?$allocator@UDXGIResourceRenderTargetBitmapPair@CCaptureRenderTarget@@@std@@@std@@AEAAXQEAUDXGIResourceRenderTargetBitmapPair@CCaptureRenderTarget@@_K1@Z @ 0x180187AA4 (-_Change_array@-$vector@UDXGIResourceRenderTargetBitmapPair@CCaptureRenderTarget@@V-$allocator@U.c)
 */

unsigned __int64 __fastcall std::vector<CCaptureRenderTarget::DXGIResourceRenderTargetBitmapPair>::_Emplace_reallocate<CCaptureRenderTarget::DXGIResourceRenderTargetBitmapPair const &>(
        __int64 *a1,
        __int64 a2,
        _QWORD *a3)
{
  __int64 v4; // rdi
  __int64 v5; // rax
  unsigned __int64 v8; // r14
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rsi
  SIZE_T v12; // rcx
  unsigned __int64 v13; // rdi
  __int64 v14; // rbp
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // rcx

  v4 = a2 - *a1;
  v5 = (a1[1] - *a1) >> 4;
  if ( v5 == 0xFFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector<T> too long");
  v8 = v5 + 1;
  v9 = (a1[2] - *a1) >> 4;
  v10 = v9 >> 1;
  if ( v9 <= 0xFFFFFFFFFFFFFFFLL - (v9 >> 1) )
  {
    v11 = v10 + v9;
    if ( v10 + v9 < v8 )
      v11 = v5 + 1;
  }
  else
  {
    v11 = v5 + 1;
  }
  v12 = 16 * v11;
  if ( v11 > 0xFFFFFFFFFFFFFFFLL )
    v12 = -1LL;
  v13 = v4 & 0xFFFFFFFFFFFFFFF0uLL;
  v14 = std::_Allocate<16,std::_Default_allocate_traits,0>(v12);
  *(_QWORD *)(v13 + v14) = *a3;
  wil::com_ptr_t<IMonitorTarget,wil::err_returncode_policy>::com_ptr_t<IMonitorTarget,wil::err_returncode_policy>(
    (_QWORD *)(v14 + v13 + 8),
    a3[1]);
  v15 = a1[1];
  v16 = v14;
  v17 = *a1;
  if ( a2 != v15 )
  {
    std::_Uninitialized_move<CCaptureRenderTarget::DXGIResourceRenderTargetBitmapPair *,CCaptureRenderTarget::DXGIResourceRenderTargetBitmapPair *,std::allocator<CCaptureRenderTarget::DXGIResourceRenderTargetBitmapPair>>(
      v17,
      a2,
      v14);
    v15 = a1[1];
    v16 = v14 + v13 + 16;
    v17 = a2;
  }
  std::_Uninitialized_move<CCaptureRenderTarget::DXGIResourceRenderTargetBitmapPair *,CCaptureRenderTarget::DXGIResourceRenderTargetBitmapPair *,std::allocator<CCaptureRenderTarget::DXGIResourceRenderTargetBitmapPair>>(
    v17,
    v15,
    v16);
  std::vector<CCaptureRenderTarget::DXGIResourceRenderTargetBitmapPair>::_Change_array(a1, v14, v8, v11);
  return v13 + *a1;
}
