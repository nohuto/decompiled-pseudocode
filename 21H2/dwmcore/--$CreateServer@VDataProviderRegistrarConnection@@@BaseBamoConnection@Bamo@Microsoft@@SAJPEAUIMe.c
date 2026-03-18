/*
 * XREFs of ??$CreateServer@VDataProviderRegistrarConnection@@@BaseBamoConnection@Bamo@Microsoft@@SAJPEAUIMessageSession@@PEAUIMessagePort@@UMsgScopeID@@PEBGPEAPEAVDataProviderRegistrarConnection@@@Z @ 0x18002F6AC
 * Callers:
 *     ?InitializeServer@DataProviderManager@@AEAAJXZ @ 0x18002F2F0 (-InitializeServer@DataProviderManager@@AEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180024060 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?JoinConversationAsServer@BaseBamoConnection@Bamo@Microsoft@@QEAAJPEAUIMessageSession@@PEAUIMessagePort@@UMsgScopeID@@PEBG@Z @ 0x180026308 (-JoinConversationAsServer@BaseBamoConnection@Bamo@Microsoft@@QEAAJPEAUIMessageSession@@PEAUIMess.c)
 *     ??0BaseBamoConnectionImpl@BamoImpl@Microsoft@@IEAA@PEAVBaseBamoConnection@Bamo@2@@Z @ 0x18002F77C (--0BaseBamoConnectionImpl@BamoImpl@Microsoft@@IEAA@PEAVBaseBamoConnection@Bamo@2@@Z.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x18004F61C (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?Release@BaseBamoConnection@Bamo@Microsoft@@QEAAKXZ @ 0x180193738 (-Release@BaseBamoConnection@Bamo@Microsoft@@QEAAKXZ.c)
 *     ModuleFailFastForHRESULT @ 0x180260218 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall Microsoft::Bamo::BaseBamoConnection::CreateServer<DataProviderRegistrarConnection>(
        __int64 a1,
        __int64 a2,
        __int128 *a3,
        __int64 a4,
        _QWORD *a5)
{
  _QWORD *v8; // rdi
  __int128 v9; // xmm0
  int v10; // eax
  unsigned int v11; // ebx
  __int128 v13; // [rsp+30h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  *a5 = 0LL;
  v8 = DefaultHeap::AllocClear(0xF0uLL);
  if ( !v8 )
    ModuleFailFastForHRESULT(2147942414LL, retaddr);
  *v8 = &dataprovider_AutoBamos::BamoConnection::`vftable';
  Microsoft::BamoImpl::BaseBamoConnectionImpl::BaseBamoConnectionImpl(
    (Microsoft::BamoImpl::BaseBamoConnectionImpl *)(v8 + 1),
    (struct Microsoft::Bamo::BaseBamoConnection *)v8);
  v9 = *a3;
  v8[1] = &BamoImpl::dataprovider_AutoBamos::BamoConnectionImpl::`vftable';
  v8[29] = 0LL;
  *v8 = &DataProviderRegistrarConnection::`vftable';
  v13 = v9;
  v10 = Microsoft::Bamo::BaseBamoConnection::JoinConversationAsServer(
          (__int64)v8,
          a1,
          a2,
          &v13,
          (__int64)L"System\\CompositionEngineDataProvider");
  v11 = v10;
  if ( v10 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xA1F,
      (int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
      (const char *)(unsigned int)v10);
    Microsoft::Bamo::BaseBamoConnection::Release((Microsoft::Bamo::BaseBamoConnection *)v8);
  }
  else
  {
    *a5 = v8;
    return 0;
  }
  return v11;
}
