/*
 * XREFs of ?Initialize@DockProcessor@@IEAAJXZ @ 0x1801880D8
 * Callers:
 *     ?Create@DockProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z @ 0x180187FE0 (-Create@DockProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z.c)
 * Callees:
 *     ?GetBamoServerConnection@ISMStatics@@SAPEAVInputSystemServerConnection@@XZ @ 0x1800166E8 (-GetBamoServerConnection@ISMStatics@@SAPEAVInputSystemServerConnection@@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035770 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004A6B0 (_guard_dispatch_icall_nop.c)
 *     ?OnDockDeviceArrival@KeyboardDockServer@@QEAAJPEAUDockDeviceInfo@@@Z @ 0x1801264B8 (-OnDockDeviceArrival@KeyboardDockServer@@QEAAJPEAUDockDeviceInfo@@@Z.c)
 */

__int64 __fastcall DockProcessor::Initialize(DockProcessor *this)
{
  struct InputSystemServerConnection *BamoServerConnection; // rax
  __int64 v3; // rax
  __int64 v4; // rcx
  int v5; // eax
  unsigned int v6; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  BamoServerConnection = ISMStatics::GetBamoServerConnection();
  v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*((_QWORD *)BamoServerConnection + 23) + 8LL) + 152LL))(*((_QWORD *)BamoServerConnection + 23) + 8LL);
  v4 = *((_QWORD *)this + 9);
  *((_QWORD *)this + 9) = v3;
  if ( v3 )
    _InterlockedIncrement((volatile signed __int32 *)(v3 + 24));
  if ( v4 )
    (**(void (__fastcall ***)(__int64))(v4 + 16))(v4 + 16);
  v5 = KeyboardDockServer::OnDockDeviceArrival(*((__int64 ***)this + 9), *((struct DockDeviceInfo **)this + 5));
  v6 = v5;
  if ( v5 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x10,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\dock\\lib\\dockprocessor.cpp",
    (const char *)(unsigned int)v5);
  return v6;
}
