/*
 * XREFs of ??$CreateServer@VMPCManagerConnection@@@BaseBamoConnection@Bamo@Microsoft@@SAJPEAUIMessageSession@@PEAUIMessagePort@@UMsgScopeID@@PEBGPEAPEAVMPCManagerConnection@@@Z @ 0x180032318
 * Callers:
 *     _lambda_3bf0c1641773c9cead522fb3b6204044_::operator() @ 0x1800332DC (_lambda_3bf0c1641773c9cead522fb3b6204044_--operator().c)
 * Callees:
 *     ?Join@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJPEAUIMessageSession@@PEAUIMessagePort@@UMsgScopeID@@PEBG_N@Z @ 0x180031AA0 (-Join@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJPEAUIMessageSession@@PEAUIMessagePort@@UMs.c)
 *     ??0BamoConnection@MPCManagerBamo_AutoBamos@@IEAA@XZ @ 0x1800322D4 (--0BamoConnection@MPCManagerBamo_AutoBamos@@IEAA@XZ.c)
 *     ?Release@BaseBamoConnection@Bamo@Microsoft@@QEAAKXZ @ 0x1800334A8 (-Release@BaseBamoConnection@Bamo@Microsoft@@QEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035760 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x18003C200 (memset_0.c)
 *     ??2@YAPEAX_K@Z @ 0x18003C7B8 (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::Bamo::BaseBamoConnection::CreateServer<MPCManagerConnection>(
        __int64 *a1,
        __int64 a2,
        __int128 *a3,
        __int64 a4,
        _QWORD *a5)
{
  _QWORD *v8; // r14
  Microsoft::Bamo::BaseBamoConnection *v9; // rbx
  __int64 v10; // rax
  int v11; // eax
  unsigned int v12; // edi
  int v14; // [rsp+20h] [rbp-38h]
  __int128 v15; // [rsp+30h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  *a5 = 0LL;
  v8 = operator new(0xC8uLL);
  memset_0(v8, 0, 0xC8uLL);
  MPCManagerBamo_AutoBamos::BamoConnection::BamoConnection((MPCManagerBamo_AutoBamos::BamoConnection *)v8);
  *v8 = &MPCManagerConnection::`vftable';
  v8[23] = 0LL;
  v8[24] = 0LL;
  v9 = (Microsoft::Bamo::BaseBamoConnection *)v8;
  v10 = ((__int64 (__fastcall *)(_QWORD *))*(&MPCManagerConnection::`vftable' + 3))(v8);
  v15 = *a3;
  v11 = Microsoft::BamoImpl::BaseBamoConnectionImpl::Join(v10, a1, a2, &v15, L"System\\MPCManagerConversation", 1);
  v12 = v11;
  if ( v11 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x711,
      (unsigned int)"onecore\\private\\mincore\\priv_sdk\\inc\\BamoConnection.inl",
      (const char *)(unsigned int)v11,
      v14);
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
