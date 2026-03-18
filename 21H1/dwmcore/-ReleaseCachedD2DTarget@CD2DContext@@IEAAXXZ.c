/*
 * XREFs of ?ReleaseCachedD2DTarget@CD2DContext@@IEAAXXZ @ 0x1800A3CC8
 * Callers:
 *     ?Trim@CD3DDevice@@QEAAXXZ @ 0x1800A38D8 (-Trim@CD3DDevice@@QEAAXXZ.c)
 *     ?DestroyDeviceResources@CD2DContext@@IEAAJXZ @ 0x1800A3A10 (-DestroyDeviceResources@CD2DContext@@IEAAJXZ.c)
 *     ?ExecutePresent@CDDisplaySwapChain@@IEAAJPEAUIDisplayScanout@Core@Display@Devices@Windows@@@Z @ 0x18023A654 (-ExecutePresent@CDDisplaySwapChain@@IEAAJPEAUIDisplayScanout@Core@Display@Devices@Windows@@@Z.c)
 * Callees:
 *     ??$SAFE_DELETE@VCD2DTarget@@@@YAXAEAPEAVCD2DTarget@@@Z @ 0x1800A569C (--$SAFE_DELETE@VCD2DTarget@@@@YAXAEAPEAVCD2DTarget@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CD2DContext::ReleaseCachedD2DTarget(CD2DContext *this)
{
  _QWORD *v2; // rcx

  v2 = (_QWORD *)((char *)this + 472);
  if ( *v2 )
  {
    SAFE_DELETE<CD2DTarget>(v2);
    (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 31) + 56LL))(*((_QWORD *)this + 31), 0LL, 0LL);
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 30) + 384LL))(*((_QWORD *)this + 30));
    (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 30) + 392LL))(
      *((_QWORD *)this + 30),
      0LL,
      0LL);
  }
}
