/*
 * XREFs of ??$CreateServer@VDiagnosticCallbacksManager@@@BaseBamoConnection@Bamo@Microsoft@@SAJPEAUIMessageSession@@PEAUIMessagePort@@UMsgScopeID@@PEBGPEAPEAVDiagnosticCallbacksManager@@@Z @ 0x1800B0604
 * Callers:
 *     ?Create@DiagnosticCallbacksManager@@SAJPEAUIMessageSession@@PEAPEAV1@@Z @ 0x1800B051C (-Create@DiagnosticCallbacksManager@@SAJPEAUIMessageSession@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x18007CC28 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ??0DiagnosticCallbacksManager@@QEAA@XZ @ 0x1800B06D0 (--0DiagnosticCallbacksManager@@QEAA@XZ.c)
 *     ?Join@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJPEAUIMessageSession@@PEAUIMessagePort@@UMsgScopeID@@PEBG_N@Z @ 0x1800B0C38 (-Join@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJPEAUIMessageSession@@PEAUIMessagePort@@UMs.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180151814 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@BaseBamoConnection@Bamo@Microsoft@@QEAAKXZ @ 0x180159EC0 (-Release@BaseBamoConnection@Bamo@Microsoft@@QEAAKXZ.c)
 *     ModuleFailFastForHRESULT @ 0x180211774 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall Microsoft::Bamo::BaseBamoConnection::CreateServer<DiagnosticCallbacksManager>(
        __int64 a1,
        __int64 a2,
        __int128 *a3,
        __int64 a4,
        DiagnosticCallbacksManager **a5)
{
  DiagnosticCallbacksManager *v8; // rax
  DiagnosticCallbacksManager *v9; // rax
  DiagnosticCallbacksManager *v10; // rsi
  Microsoft::Bamo::BaseBamoConnection *v11; // rbx
  __int64 v12; // rax
  int v13; // eax
  unsigned int v14; // edi
  __int64 v16; // rdx
  __int64 v17; // r9
  const char *v18; // [rsp+20h] [rbp-38h]
  __int128 v19; // [rsp+30h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  *a5 = 0LL;
  v8 = (DiagnosticCallbacksManager *)DefaultHeap::AllocClear(0xD0uLL);
  if ( !v8 )
    ModuleFailFastForHRESULT(2147942414LL, retaddr);
  v9 = DiagnosticCallbacksManager::DiagnosticCallbacksManager(v8);
  v10 = v9;
  v11 = v9;
  if ( v9 )
  {
    v12 = (*(__int64 (__fastcall **)(DiagnosticCallbacksManager *))(*(_QWORD *)v9 + 24LL))(v9);
    v18 = L"Microsoft.DiagCallbackConversation";
    v19 = *a3;
    v13 = Microsoft::BamoImpl::BaseBamoConnectionImpl::Join(v12, a1, a2, &v19);
    v14 = v13;
    if ( v13 >= 0 )
    {
      v11 = 0LL;
      *a5 = v10;
      v14 = 0;
      goto LABEL_5;
    }
    v17 = (unsigned int)v13;
    v16 = 1809LL;
  }
  else
  {
    v14 = -2147024882;
    v16 = 1807LL;
    v17 = 2147942414LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v16,
    (unsigned int)"onecore\\private\\mincore\\priv_sdk\\inc\\BamoConnection.inl",
    (const char *)v17,
    (int)v18);
LABEL_5:
  if ( v11 )
    Microsoft::Bamo::BaseBamoConnection::Release(v11);
  return v14;
}
