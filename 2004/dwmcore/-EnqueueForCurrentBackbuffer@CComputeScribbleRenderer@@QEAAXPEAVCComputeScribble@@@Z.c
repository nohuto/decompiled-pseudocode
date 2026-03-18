/*
 * XREFs of ?EnqueueForCurrentBackbuffer@CComputeScribbleRenderer@@QEAAXPEAVCComputeScribble@@@Z @ 0x1801A0ED0
 * Callers:
 *     ?EnqueueSuperWetScribbleLocally@CSuperWetInkManager@@AEAAJPEAVIMonitorTarget@@PEAVCComputeScribble@@@Z @ 0x1801963C4 (-EnqueueSuperWetScribbleLocally@CSuperWetInkManager@@AEAAJPEAVIMonitorTarget@@PEAVCComputeScribb.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 *     ??$_Emplace_reallocate@AEAPEAVCComputeScribble@@@?$vector@V?$com_ptr_t@VCComputeScribble@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCComputeScribble@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAPEAV?$com_ptr_t@VCComputeScribble@@Uerr_returncode_policy@wil@@@wil@@QEAV23@AEAPEAVCComputeScribble@@@Z @ 0x1801A703C (--$_Emplace_reallocate@AEAPEAVCComputeScribble@@@-$vector@V-$com_ptr_t@VCComputeScribble@@Uerr_r.c)
 */

void __fastcall CComputeScribbleRenderer::EnqueueForCurrentBackbuffer(
        CComputeScribbleRenderer *this,
        struct CComputeScribble *a2)
{
  __int64 v3; // r8
  __int64 v4; // rbx
  _QWORD *v5; // rdx
  struct CComputeScribble *v6; // [rsp+30h] [rbp+8h] BYREF

  if ( *((_BYTE *)this + 52) )
  {
    v3 = *((_QWORD *)this + 2);
    v6 = a2;
    v4 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v3 + 104)
                               + 8LL * (unsigned int)(*(_DWORD *)(v3 + 128) % *(_DWORD *)(v3 + 176)))
                   + 96LL);
    v5 = *(_QWORD **)(v4 + 112);
    if ( *(_QWORD **)(v4 + 120) == v5 )
    {
      std::vector<wil::com_ptr_t<CComputeScribble,wil::err_returncode_policy>>::_Emplace_reallocate<CComputeScribble * &>(
        v4 + 104,
        v5,
        &v6,
        a2);
    }
    else
    {
      *v5 = a2;
      if ( a2 )
        (**(void (__fastcall ***)(struct CComputeScribble *))a2)(a2);
      *(_QWORD *)(v4 + 112) += 8LL;
    }
  }
  else
  {
    *((_BYTE *)this + 53) = 1;
  }
}
