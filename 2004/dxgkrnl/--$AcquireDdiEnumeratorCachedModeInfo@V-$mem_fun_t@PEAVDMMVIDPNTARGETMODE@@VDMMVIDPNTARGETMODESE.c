/*
 * XREFs of ??$AcquireDdiEnumeratorCachedModeInfo@V?$mem_fun_t@PEAVDMMVIDPNTARGETMODE@@VDMMVIDPNTARGETMODESET@@@KM_STL@@@DMMVIDPNTARGETMODESET@@QEAAJV?$mem_fun_t@PEAVDMMVIDPNTARGETMODE@@VDMMVIDPNTARGETMODESET@@@KM_STL@@PEAPEBU_D3DKMDT_VIDPN_TARGET_MODE@@@Z @ 0x1C0123AEC
 * Callers:
 *     ?AcquireFirstModeInfo@DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTARGETMODESET__@@PEAPEBU_D3DKMDT_VIDPN_TARGET_MODE@@@Z @ 0x1C01239E0 (-AcquireFirstModeInfo@DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTARGETMODE.c)
 *     ?AcquireFirstModeInfo@DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTARGETMODESET__@@PEAPEBU_D3DKMDT_VIDPN_TARGET_MODE@@@Z @ 0x1C01243E0 (-AcquireFirstModeInfo@DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTARGETMO.c)
 *     ?AcquirePinnedModeInfo@DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTARGETMODESET__@@PEAPEBU_D3DKMDT_VIDPN_TARGET_MODE@@@Z @ 0x1C0167160 (-AcquirePinnedModeInfo@DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTARGETM.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C00027E4 (--3@YAXPEAX@Z.c)
 *     ?CreateInstance@?$SetEnumerator@U_D3DKMDT_VIDPN_TARGET_MODE@@@?$Set@VDMMVIDPNTARGETMODE@@@@SAPEAV12@QEBVDMMVIDPNTARGETMODE@@@Z @ 0x1C0005F84 (-CreateInstance@-$SetEnumerator@U_D3DKMDT_VIDPN_TARGET_MODE@@@-$Set@VDMMVIDPNTARGETMODE@@@@SAPEA.c)
 *     _guard_dispatch_icall_nop @ 0x1C00271E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DMMVIDPNTARGETMODESET::AcquireDdiEnumeratorCachedModeInfo<KM_STL::mem_fun_t<DMMVIDPNTARGETMODE *,DMMVIDPNTARGETMODESET>>(
        __int64 a1,
        __int64 a2,
        _QWORD *a3)
{
  unsigned int v3; // ebx
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rsi
  __int64 v13; // rdx
  __int64 v14; // rcx
  _QWORD *Instance; // rbp
  __int64 v16; // r8
  __int64 v17; // r9
  __int128 v18; // xmm0
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax

  v3 = 0;
  if ( !a3 )
  {
    v20 = WdLogNewEntry5_WdAssertion(a1, a2);
    WdLogEvent5_WdAssertion(v20);
  }
  *a3 = 0LL;
  if ( *(_BYTE *)(a1 + 136) )
  {
    v7 = (*(__int64 (__fastcall **)(__int64))a2)(a1 + *(int *)(a2 + 8));
    v12 = v7;
    if ( v7 )
    {
      Instance = Set<DMMVIDPNTARGETMODE>::SetEnumerator<_D3DKMDT_VIDPN_TARGET_MODE>::CreateInstance(v7);
      if ( Instance )
      {
        operator delete(0LL);
        *((_DWORD *)Instance + 4) = *(_DWORD *)(v12 + 24);
        v18 = *(_OWORD *)(v12 + 72);
        *a3 = Instance + 2;
        *(_OWORD *)(Instance + 3) = v18;
        *(_OWORD *)(Instance + 5) = *(_OWORD *)(v12 + 88);
        *(_OWORD *)(Instance + 7) = *(_OWORD *)(v12 + 104);
        Instance[9] = *(_QWORD *)(v12 + 120);
        *((_DWORD *)Instance + 20) = *(_DWORD *)(v12 + 128);
      }
      else
      {
        v22 = WdLogNewEntry5_WdLowResource(v14, v13, v16, v17);
        *(_QWORD *)(v22 + 24) = a1;
        WdLogEvent5_WdLowResource(v22);
        v3 = -1073741801;
      }
      operator delete(0LL);
      return v3;
    }
    else
    {
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v9, v8, v10, v11) + 24) = a2;
      return 3223192394LL;
    }
  }
  else
  {
    v21 = WdLogNewEntry5_WdError(a1, a2);
    *(_QWORD *)(v21 + 24) = a1;
    WdLogEvent5_WdError(v21);
    return 3223192352LL;
  }
}
