/*
 * XREFs of ?ReleaseCachedD2DTarget@CD2DContext@@IEAAXXZ @ 0x180039C08
 * Callers:
 *     ?Trim@CD3DDevice@@QEAAXXZ @ 0x180039818 (-Trim@CD3DDevice@@QEAAXXZ.c)
 *     ?DestroyDeviceResources@CD2DContext@@IEAAJXZ @ 0x180039950 (-DestroyDeviceResources@CD2DContext@@IEAAJXZ.c)
 *     ?ExecutePresent@CDDisplaySwapChain@@IEAAJPEAUIDisplayScanout@Core@Display@Devices@Windows@@@Z @ 0x180236CA4 (-ExecutePresent@CDDisplaySwapChain@@IEAAJPEAUIDisplayScanout@Core@Display@Devices@Windows@@@Z.c)
 * Callees:
 *     ??$SAFE_DELETE@VCD2DTarget@@@@YAXAEAPEAVCD2DTarget@@@Z @ 0x180036CA0 (--$SAFE_DELETE@VCD2DTarget@@@@YAXAEAPEAVCD2DTarget@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CD2DContext::ReleaseCachedD2DTarget(CD2DContext *this, unsigned int a2)
{
  CD2DTarget **v3; // rcx

  v3 = (CD2DTarget **)((char *)this + 472);
  if ( *v3 )
  {
    SAFE_DELETE<CD2DTarget>(v3, a2);
    (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 31) + 56LL))(*((_QWORD *)this + 31), 0LL, 0LL);
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 30) + 384LL))(*((_QWORD *)this + 30));
    (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 30) + 392LL))(
      *((_QWORD *)this + 30),
      0LL,
      0LL);
  }
}
