/*
 * XREFs of ?SetFilterList@CMagnifierRenderTargetProxy@@QEAAJPEAVCVisualGroupProxy@@@Z @ 0x1800BE388
 * Callers:
 *     ?OnModifyWindowFilterList@CMagnifier@@QEAAJPEBUMAGN_FILTERLIST@@@Z @ 0x18008B6C0 (-OnModifyWindowFilterList@CMagnifier@@QEAAJPEBUMAGN_FILTERLIST@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CMagnifierRenderTargetProxy::SetFilterList(
        CMagnifierRenderTargetProxy *this,
        struct CVisualGroupProxy *a2)
{
  __int64 v2; // r8

  v2 = 0LL;
  if ( a2 )
    v2 = *(unsigned int *)(*((_QWORD *)a2 + 2) + 24LL);
  return (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(*((_QWORD *)this + 2) + 16LL) + 696LL))(
           *(_QWORD *)(*((_QWORD *)this + 2) + 16LL),
           *(unsigned int *)(*((_QWORD *)this + 2) + 24LL),
           v2);
}
