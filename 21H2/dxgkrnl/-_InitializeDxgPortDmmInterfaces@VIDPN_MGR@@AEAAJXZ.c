/*
 * XREFs of ?_InitializeDxgPortDmmInterfaces@VIDPN_MGR@@AEAAJXZ @ 0x1C0194E34
 * Callers:
 *     ??0VIDPN_MGR@@QEAA@QEAVADAPTER_DISPLAY@@@Z @ 0x1C0193CC0 (--0VIDPN_MGR@@QEAA@QEAVADAPTER_DISPLAY@@@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0002824 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0002D2C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

__int64 __fastcall VIDPN_MGR::_InitializeDxgPortDmmInterfaces(VIDPN_MGR *this)
{
  _QWORD *v2; // rax
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9
  _QWORD *v6; // rcx
  _QWORD *v7; // rdi
  _QWORD *v8; // rax
  _QWORD *v9; // rdi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rdi
  __int64 v14; // rax
  __int64 v15; // rax

  v2 = operator new[](0x18uLL, 0x4E506456u, PagedPool);
  v6 = (_QWORD *)*((_QWORD *)this + 44);
  v7 = v2;
  if ( v2 != v6 )
    operator delete(v6);
  *((_QWORD *)this + 44) = v7;
  if ( !v7 )
    goto LABEL_8;
  *v7 = DXGPORTDMM_VIDEOPRESENTSOURCESET_INTERFACE_V1_IMPL::CreateNewSourceInfo;
  v7[1] = DXGPORTDMM_VIDEOPRESENTSOURCESET_INTERFACE_V1_IMPL::AddSource;
  v7[2] = DXGPORTDMM_VIDEOPRESENTSOURCESET_INTERFACE_V1_IMPL::ReleaseSourceInfo;
  v8 = operator new[](0x18uLL, 0x4E506456u, PagedPool);
  v6 = (_QWORD *)*((_QWORD *)this + 45);
  v9 = v8;
  if ( v8 != v6 )
    operator delete(v6);
  *((_QWORD *)this + 45) = v9;
  if ( v9 )
  {
    *v9 = DXGPORTDMM_VIDEOPRESENTTARGETSET_INTERFACE_V1_IMPL::CreateNewTargetInfo;
    v9[1] = DXGPORTDMM_VIDEOPRESENTTARGETSET_INTERFACE_V1_IMPL::AddStaticTarget;
    v9[2] = DXGPORTDMM_VIDEOPRESENTTARGETSET_INTERFACE_V1_IMPL::ReleaseTargetInfo;
    return 0LL;
  }
  else
  {
LABEL_8:
    v13 = WdLogNewEntry5_WdLowResource(v6, v3, v4, v5);
    v14 = *((_QWORD *)this + 1);
    if ( !v14 )
    {
      v15 = WdLogNewEntry5_WdAssertion(v12, v11);
      WdLogEvent5_WdAssertion(v15);
      v14 = *((_QWORD *)this + 1);
    }
    *(_QWORD *)(v13 + 24) = *(_QWORD *)(v14 + 16);
    WdLogEvent5_WdLowResource(v13);
    return 3221225495LL;
  }
}
