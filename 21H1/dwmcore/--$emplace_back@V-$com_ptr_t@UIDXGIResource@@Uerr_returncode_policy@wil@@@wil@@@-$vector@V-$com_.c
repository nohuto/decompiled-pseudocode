/*
 * XREFs of ??$emplace_back@V?$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAAEAV?$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@$$QEAV23@@Z @ 0x1801FC3A8
 * Callers:
 *     ?PostPresent@CComposition@@QEAAJ_N@Z @ 0x180043940 (-PostPresent@CComposition@@QEAAJ_N@Z.c)
 *     ?ProcessPendingUnpin@CD3DDevice@@AEAAJ_N@Z @ 0x1800A5368 (-ProcessPendingUnpin@CD3DDevice@@AEAAJ_N@Z.c)
 *     ?PinResources@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJU_LUID@@@Z @ 0x1801FC754 (-PinResources@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJU_LUID@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::vector<wil::com_ptr_t<IDXGIResource,wil::err_returncode_policy>>::emplace_back<wil::com_ptr_t<IDXGIResource,wil::err_returncode_policy>>(
        __int64 **a1,
        __int64 *a2)
{
  __int64 *v2; // r9
  __int64 v3; // rax
  __int64 result; // rax

  v2 = a1[1];
  if ( a1[2] == v2 )
    return std::vector<wil::com_ptr_t<IDXGIResource,wil::err_returncode_policy>>::_Emplace_reallocate<wil::com_ptr_t<IDXGIResource,wil::err_returncode_policy>>(
             a1,
             a1[1],
             a2);
  v3 = *a2;
  *a2 = 0LL;
  *v2 = v3;
  result = (__int64)a1[1];
  a1[1] = (__int64 *)(result + 8);
  return result;
}
