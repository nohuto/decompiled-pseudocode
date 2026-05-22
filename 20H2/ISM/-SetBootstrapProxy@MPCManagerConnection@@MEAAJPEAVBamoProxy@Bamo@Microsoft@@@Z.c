/*
 * XREFs of ?SetBootstrapProxy@MPCManagerConnection@@MEAAJPEAVBamoProxy@Bamo@Microsoft@@@Z @ 0x18007BE00
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18002831C (--1-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E15C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004A660 (_guard_dispatch_icall_nop.c)
 *     ?OnPeerConnected@MPCManager@@QEAAXPEAVBamoMPCManagerClientProxy@@@Z @ 0x18007314C (-OnPeerConnected@MPCManager@@QEAAXPEAVBamoMPCManagerClientProxy@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall MPCManagerConnection::SetBootstrapProxy(MPCManager **this, struct Microsoft::Bamo::BamoProxy *a2)
{
  __int64 v3; // rax
  int v4; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  unsigned __int64 v7; // [rsp+38h] [rbp+10h] BYREF

  v3 = *(_QWORD *)a2;
  v7 = 0LL;
  v4 = (*(__int64 (__fastcall **)(struct Microsoft::Bamo::BamoProxy *, GUID *, unsigned __int64 *))(v3 + 16))(
         a2,
         &GUID_ccbe30f0_59e7_8fd3_6773_ee42ef764b77,
         &v7);
  if ( v4 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      45LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcmanagerconnection.cpp",
      (const char *)(unsigned int)v4);
    __debugbreak();
  }
  MPCManager::OnPeerConnected(
    this[23],
    (struct BamoMPCManagerClientProxy *)((v7 - 8) & ((unsigned __int128)-(__int128)v7 >> 64)));
  wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::~com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>((__int64 *)&v7);
  return 0LL;
}
