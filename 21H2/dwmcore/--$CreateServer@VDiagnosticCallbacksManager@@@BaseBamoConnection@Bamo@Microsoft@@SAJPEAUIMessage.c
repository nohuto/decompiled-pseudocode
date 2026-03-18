/*
 * XREFs of ??$CreateServer@VDiagnosticCallbacksManager@@@BaseBamoConnection@Bamo@Microsoft@@SAJPEAUIMessageSession@@PEAUIMessagePort@@UMsgScopeID@@PEBGPEAPEAVDiagnosticCallbacksManager@@@Z @ 0x18002F19C
 * Callers:
 *     ?Create@DiagnosticCallbacksManager@@SAJPEAUIMessageSession@@PEAPEAV1@@Z @ 0x18002F0AC (-Create@DiagnosticCallbacksManager@@SAJPEAUIMessageSession@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180024060 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?JoinConversationAsServer@BaseBamoConnection@Bamo@Microsoft@@QEAAJPEAUIMessageSession@@PEAUIMessagePort@@UMsgScopeID@@PEBG@Z @ 0x180026308 (-JoinConversationAsServer@BaseBamoConnection@Bamo@Microsoft@@QEAAJPEAUIMessageSession@@PEAUIMess.c)
 *     ??0DiagnosticCallbacksManager@@QEAA@XZ @ 0x18002F264 (--0DiagnosticCallbacksManager@@QEAA@XZ.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x18004F61C (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?Release@BaseBamoConnection@Bamo@Microsoft@@QEAAKXZ @ 0x180193738 (-Release@BaseBamoConnection@Bamo@Microsoft@@QEAAKXZ.c)
 *     ModuleFailFastForHRESULT @ 0x180260218 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall Microsoft::Bamo::BaseBamoConnection::CreateServer<DiagnosticCallbacksManager>(
        __int64 a1,
        __int64 a2,
        __int128 *a3,
        __int64 a4,
        Microsoft::Bamo::BaseBamoConnection **a5)
{
  DiagnosticCallbacksManager *v8; // rax
  Microsoft::Bamo::BaseBamoConnection *v9; // rdi
  int v10; // eax
  unsigned int v11; // ebx
  __int64 v13; // rdx
  __int64 v14; // r9
  __int128 v15; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  *a5 = 0LL;
  v8 = (DiagnosticCallbacksManager *)DefaultHeap::AllocClear(0x100uLL);
  if ( !v8 )
    ModuleFailFastForHRESULT(2147942414LL, retaddr);
  v9 = DiagnosticCallbacksManager::DiagnosticCallbacksManager(v8);
  if ( v9 )
  {
    v15 = *a3;
    v10 = Microsoft::Bamo::BaseBamoConnection::JoinConversationAsServer(
            (__int64)v9,
            a1,
            a2,
            &v15,
            (__int64)L"Microsoft.DiagCallbackConversation");
    v11 = v10;
    if ( v10 >= 0 )
    {
      *a5 = v9;
      return 0;
    }
    v14 = (unsigned int)v10;
    v13 = 2591LL;
  }
  else
  {
    v11 = -2147024882;
    v13 = 2589LL;
    v14 = 2147942414LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v13,
    (int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
    (const char *)v14);
  if ( v9 )
    Microsoft::Bamo::BaseBamoConnection::Release(v9);
  return v11;
}
