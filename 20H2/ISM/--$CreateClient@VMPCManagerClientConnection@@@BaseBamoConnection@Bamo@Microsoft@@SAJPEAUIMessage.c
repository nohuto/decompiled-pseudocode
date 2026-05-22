/*
 * XREFs of ??$CreateClient@VMPCManagerClientConnection@@@BaseBamoConnection@Bamo@Microsoft@@SAJPEAUIMessageSession@@UMsgScopeID@@PEBGPEAPEAVMPCManagerClientConnection@@@Z @ 0x180105984
 * Callers:
 *     ?RuntimeClassInitialize@MPCManagerClient@@QEAAJXZ @ 0x18010AC00 (-RuntimeClassInitialize@MPCManagerClient@@QEAAJXZ.c)
 * Callees:
 *     ?Join@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJPEAUIMessageSession@@PEAUIMessagePort@@UMsgScopeID@@PEBG_N@Z @ 0x180031B70 (-Join@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJPEAUIMessageSession@@PEAUIMessagePort@@UMs.c)
 *     ??0BamoConnection@MPCManagerBamo_AutoBamos@@IEAA@XZ @ 0x1800323A4 (--0BamoConnection@MPCManagerBamo_AutoBamos@@IEAA@XZ.c)
 *     ?Release@BaseBamoConnection@Bamo@Microsoft@@QEAAKXZ @ 0x180033548 (-Release@BaseBamoConnection@Bamo@Microsoft@@QEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800357E0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x18003C540 (memset_0.c)
 *     ??2@YAPEAX_K@Z @ 0x18003CAF8 (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004A660 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::Bamo::BaseBamoConnection::CreateClient<MPCManagerClientConnection>(
        __int64 *a1,
        __int128 *a2,
        __int64 a3,
        _QWORD *a4)
{
  _QWORD *v7; // r14
  Microsoft::Bamo::BaseBamoConnection *v8; // rbx
  __int64 v9; // rax
  int v10; // eax
  unsigned int v11; // edi
  __int128 v13; // [rsp+30h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  *a4 = 0LL;
  v7 = operator new(0xC8uLL);
  memset_0(v7, 0, 0xC8uLL);
  MPCManagerBamo_AutoBamos::BamoConnection::BamoConnection((MPCManagerBamo_AutoBamos::BamoConnection *)v7);
  *v7 = &MPCManagerClientConnection::`vftable';
  v7[23] = 0LL;
  v7[24] = 0LL;
  v8 = (Microsoft::Bamo::BaseBamoConnection *)v7;
  v9 = ((__int64 (__fastcall *)(_QWORD *))*(&MPCManagerClientConnection::`vftable' + 3))(v7);
  v13 = *a2;
  v10 = Microsoft::BamoImpl::BaseBamoConnectionImpl::Join(v9, a1, 0LL, &v13, L"System\\MPCManagerConversation", 0);
  v11 = v10;
  if ( v10 >= 0 )
  {
    v8 = 0LL;
    *a4 = v7;
    v11 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x73D,
      (__int64)"onecore\\private\\mincore\\priv_sdk\\inc\\BamoConnection.inl",
      (const char *)(unsigned int)v10);
  }
  if ( v8 )
    Microsoft::Bamo::BaseBamoConnection::Release(v8);
  return v11;
}
