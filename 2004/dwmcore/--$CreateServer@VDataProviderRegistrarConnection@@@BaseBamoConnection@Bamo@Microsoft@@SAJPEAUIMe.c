/*
 * XREFs of ??$CreateServer@VDataProviderRegistrarConnection@@@BaseBamoConnection@Bamo@Microsoft@@SAJPEAUIMessageSession@@PEAUIMessagePort@@UMsgScopeID@@PEBGPEAPEAVDataProviderRegistrarConnection@@@Z @ 0x18002D104
 * Callers:
 *     ?InitializeServer@DataProviderManager@@AEAAJXZ @ 0x18002CD8C (-InitializeServer@DataProviderManager@@AEAAJXZ.c)
 * Callees:
 *     ??0BaseBamoConnectionImpl@BamoImpl@Microsoft@@IEAA@PEAVBaseBamoConnection@Bamo@2@@Z @ 0x18002D1EC (--0BaseBamoConnectionImpl@BamoImpl@Microsoft@@IEAA@PEAVBaseBamoConnection@Bamo@2@@Z.c)
 *     ?Join@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJPEAUIMessageSession@@PEAUIMessagePort@@UMsgScopeID@@PEBG_N@Z @ 0x18002D270 (-Join@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJPEAUIMessageSession@@PEAUIMessagePort@@UMs.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x1800A2588 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?_Get@?$_Func_impl_no_alloc@V_lambda_ea5334e7435b0bbc38160b55b647b03d_@@XPEAXPEAVCDebugTreeDumper@@@std@@EEBAPEBXXZ @ 0x1800DD890 (-_Get@-$_Func_impl_no_alloc@V_lambda_ea5334e7435b0bbc38160b55b647b03d_@@XPEAXPEAVCDebugTreeDumpe.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18014FC08 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@BaseBamoConnection@Bamo@Microsoft@@QEAAKXZ @ 0x180157610 (-Release@BaseBamoConnection@Bamo@Microsoft@@QEAAKXZ.c)
 *     ModuleFailFastForHRESULT @ 0x18020EDB4 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall Microsoft::Bamo::BaseBamoConnection::CreateServer<DataProviderRegistrarConnection>(
        __int64 a1,
        __int64 a2,
        __int128 *a3,
        __int64 a4,
        _QWORD *a5)
{
  _QWORD *v8; // rdi
  Microsoft::Bamo::BaseBamoConnection *v9; // rbx
  __int64 v10; // rax
  int v11; // eax
  unsigned int v12; // esi
  __int128 v14; // [rsp+30h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  *a5 = 0LL;
  v8 = DefaultHeap::AllocClear(0xC0uLL);
  if ( !v8 )
    ModuleFailFastForHRESULT(2147942414LL, retaddr);
  *v8 = &dataprovider_AutoBamos::BamoConnection::`vftable';
  Microsoft::BamoImpl::BaseBamoConnectionImpl::BaseBamoConnectionImpl(
    (Microsoft::BamoImpl::BaseBamoConnectionImpl *)(v8 + 1),
    (struct Microsoft::Bamo::BaseBamoConnection *)v8);
  v8[1] = &BamoImpl::dataprovider_AutoBamos::BamoConnectionImpl::`vftable';
  v9 = (Microsoft::Bamo::BaseBamoConnection *)v8;
  v8[23] = 0LL;
  *v8 = &DataProviderRegistrarConnection::`vftable';
  v10 = std::_Func_impl_no_alloc<_lambda_ea5334e7435b0bbc38160b55b647b03d_,void,void *,CDebugTreeDumper *>::_Get(v8);
  v14 = *a3;
  v11 = Microsoft::BamoImpl::BaseBamoConnectionImpl::Join(v10, a1, a2, &v14);
  v12 = v11;
  if ( v11 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x711,
      (unsigned int)"onecore\\private\\mincore\\priv_sdk\\inc\\BamoConnection.inl",
      (const char *)(unsigned int)v11,
      (int)L"System\\CompositionEngineDataProvider");
  }
  else
  {
    v9 = 0LL;
    *a5 = v8;
    v12 = 0;
  }
  if ( v9 )
    Microsoft::Bamo::BaseBamoConnection::Release(v9);
  return v12;
}
