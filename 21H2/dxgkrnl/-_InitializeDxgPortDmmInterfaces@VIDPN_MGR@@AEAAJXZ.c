/*
 * XREFs of ?_InitializeDxgPortDmmInterfaces@VIDPN_MGR@@AEAAJXZ @ 0x1C0212EC0
 * Callers:
 *     ??0VIDPN_MGR@@QEAA@QEAVADAPTER_DISPLAY@@@Z @ 0x1C0211BD0 (--0VIDPN_MGR@@QEAA@QEAVADAPTER_DISPLAY@@@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C000D96C (--3@YAXPEAX@Z.c)
 */

__int64 __fastcall VIDPN_MGR::_InitializeDxgPortDmmInterfaces(VIDPN_MGR *this, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rax
  __int64 v6; // r9
  void *v7; // rcx
  _QWORD *v8; // rdi
  __int64 v9; // rax
  void *v10; // rcx
  _QWORD *v11; // rdi
  __int64 v13; // rdx

  v5 = operator new[](0x18uLL, 0x4E506456u, 256LL, a4);
  v7 = (void *)*((_QWORD *)this + 49);
  v8 = (_QWORD *)v5;
  if ( (void *)v5 != v7 )
    operator delete(v7);
  *((_QWORD *)this + 49) = v8;
  if ( v8 )
  {
    *v8 = DXGPORTDMM_VIDEOPRESENTSOURCESET_INTERFACE_V1_IMPL::CreateNewSourceInfo;
    v8[1] = DXGPORTDMM_VIDEOPRESENTSOURCESET_INTERFACE_V1_IMPL::AddSource;
    v8[2] = DXGPORTDMM_VIDEOPRESENTSOURCESET_INTERFACE_V1_IMPL::ReleaseSourceInfo;
    v9 = operator new[](0x18uLL, 0x4E506456u, 256LL, v6);
    v10 = (void *)*((_QWORD *)this + 50);
    v11 = (_QWORD *)v9;
    if ( (void *)v9 != v10 )
      operator delete(v10);
    *((_QWORD *)this + 50) = v11;
    if ( v11 )
    {
      *v11 = DXGPORTDMM_VIDEOPRESENTTARGETSET_INTERFACE_V1_IMPL::CreateNewTargetInfo;
      v11[1] = DXGPORTDMM_VIDEOPRESENTTARGETSET_INTERFACE_V1_IMPL::AddStaticTarget;
      v11[2] = DXGPORTDMM_VIDEOPRESENTTARGETSET_INTERFACE_V1_IMPL::ReleaseTargetInfo;
      return 0LL;
    }
    v13 = *((_QWORD *)this + 1);
    if ( !v13 )
      goto LABEL_9;
  }
  else
  {
    v13 = *((_QWORD *)this + 1);
    if ( !v13 )
    {
LABEL_9:
      WdLogSingleEntry0(1LL);
      v13 = *((_QWORD *)this + 1);
    }
  }
  WdLogSingleEntry1(6LL, *(_QWORD *)(v13 + 16));
  return 3221225495LL;
}
