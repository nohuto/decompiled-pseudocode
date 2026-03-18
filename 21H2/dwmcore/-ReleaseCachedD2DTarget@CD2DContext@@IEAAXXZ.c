/*
 * XREFs of ?ReleaseCachedD2DTarget@CD2DContext@@IEAAXXZ @ 0x1800228A0
 * Callers:
 *     ?Trim@CD3DDevice@@QEAAXXZ @ 0x1800218AC (-Trim@CD3DDevice@@QEAAXXZ.c)
 *     ?DestroyDeviceResources@CD2DContext@@IEAAJXZ @ 0x1800225BC (-DestroyDeviceResources@CD2DContext@@IEAAJXZ.c)
 *     ?ExecutePresent@CDDisplaySwapChain@@IEAAJPEAUIDisplayScanout@Core@Display@Devices@Windows@@@Z @ 0x18027AA80 (-ExecutePresent@CDDisplaySwapChain@@IEAAJPEAUIDisplayScanout@Core@Display@Devices@Windows@@@Z.c)
 * Callees:
 *     ??$SAFE_DELETE@VCD2DTarget@@@@YAXAEAPEAVCD2DTarget@@@Z @ 0x180020BF4 (--$SAFE_DELETE@VCD2DTarget@@@@YAXAEAPEAVCD2DTarget@@@Z.c)
 *     ?D2DSetTargetInternal@CD2DContext@@IEAAXPEAVCD2DTarget@@@Z @ 0x180080BA4 (-D2DSetTargetInternal@CD2DContext@@IEAAXPEAVCD2DTarget@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CD2DContext::ReleaseCachedD2DTarget(CD2DContext *this, unsigned int a2)
{
  CD2DTarget **v3; // rcx

  v3 = (CD2DTarget **)((char *)this + 424);
  if ( *v3 )
  {
    SAFE_DELETE<CD2DTarget>(v3, a2);
    CD2DContext::D2DSetTargetInternal(this, 0LL);
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 25) + 384LL))(*((_QWORD *)this + 25));
    (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 25) + 392LL))(
      *((_QWORD *)this + 25),
      0LL,
      0LL);
  }
}
