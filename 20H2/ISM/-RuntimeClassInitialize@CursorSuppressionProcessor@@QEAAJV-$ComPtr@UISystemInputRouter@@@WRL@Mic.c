/*
 * XREFs of ?RuntimeClassInitialize@CursorSuppressionProcessor@@QEAAJV?$ComPtr@UISystemInputRouter@@@WRL@Microsoft@@@Z @ 0x180171880
 * Callers:
 *     ??$MakeAndInitialize@VCursorSuppressionProcessor@@V1@PEAVDWMInputRouter@@@Details@WRL@Microsoft@@YAJPEAPEAVCursorSuppressionProcessor@@$$QEAPEAVDWMInputRouter@@@Z @ 0x180136D0C (--$MakeAndInitialize@VCursorSuppressionProcessor@@V1@PEAVDWMInputRouter@@@Details@WRL@Microsoft@.c)
 * Callees:
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800107DC (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?GetBamoServerConnection@ISMStatics@@SAPEAVInputSystemServerConnection@@XZ @ 0x180016718 (-GetBamoServerConnection@ISMStatics@@SAPEAVInputSystemServerConnection@@XZ.c)
 *     ?AddRef@BaseBamoConnection@Bamo@Microsoft@@QEAAKXZ @ 0x180032648 (-AddRef@BaseBamoConnection@Bamo@Microsoft@@QEAAKXZ.c)
 *     ?Release@BaseBamoConnection@Bamo@Microsoft@@QEAAKXZ @ 0x180033548 (-Release@BaseBamoConnection@Bamo@Microsoft@@QEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIMessageProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x180037660 (-InternalRelease@-$ComPtr@UIMessageProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CursorSuppressionProcessor::RuntimeClassInitialize(__int64 a1, __int64 *a2)
{
  Microsoft::Bamo::BaseBamoConnection *BamoServerConnection; // rax
  Microsoft::Bamo::BaseBamoConnection *v5; // rdi
  Microsoft::Bamo::BaseBamoConnection *v6; // rcx
  __int64 v7; // rdi
  __int64 v9; // [rsp+38h] [rbp+10h] BYREF

  v9 = (__int64)a2;
  BamoServerConnection = ISMStatics::GetBamoServerConnection();
  v5 = BamoServerConnection;
  v6 = *(Microsoft::Bamo::BaseBamoConnection **)(a1 + 80);
  if ( v6 != BamoServerConnection )
  {
    if ( BamoServerConnection )
    {
      Microsoft::Bamo::BaseBamoConnection::AddRef(BamoServerConnection);
      v6 = *(Microsoft::Bamo::BaseBamoConnection **)(a1 + 80);
    }
    *(_QWORD *)(a1 + 80) = v5;
    if ( v6 )
      Microsoft::Bamo::BaseBamoConnection::Release(v6);
  }
  v7 = *a2;
  if ( *(_QWORD *)(a1 + 72) != *a2 )
  {
    v9 = *a2;
    wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>(&v9);
    v9 = *(_QWORD *)(a1 + 72);
    *(_QWORD *)(a1 + 72) = v7;
    Microsoft::WRL::ComPtr<IMessageProxy>::InternalRelease(&v9);
  }
  Microsoft::WRL::ComPtr<IMessageProxy>::InternalRelease(a2);
  return 0LL;
}
