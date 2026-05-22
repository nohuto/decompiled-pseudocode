/*
 * XREFs of ?Create@SipcServer@@SAJAEBU_GUID@@W4SIPC_SERVICE_BOUNDARY@@P6AXPEAXPEAUISIPCServer@@KK@Z22PEAPEAU4@@Z @ 0x18003118C
 * Callers:
 *     ?WorkerThreadProc@LampArrayRawInputProvider@@AEAAJXZ @ 0x1800386C0 (-WorkerThreadProc@LampArrayRawInputProvider@@AEAAJXZ.c)
 * Callees:
 *     ?CreateServerPort@AlpcPort@@SAJAEBU_GUID@@W4SIPC_SERVICE_BOUNDARY@@PEAXAEAPEAVSipcPort@@@Z @ 0x180030F44 (-CreateServerPort@AlpcPort@@SAJAEBU_GUID@@W4SIPC_SERVICE_BOUNDARY@@PEAXAEAPEAVSipcPort@@@Z.c)
 *     ??0SipcServer@@AEAA@AEBU_GUID@@W4SIPC_SERVICE_BOUNDARY@@P6AXPEAXPEAUISIPCServer@@KK@Z2@Z @ 0x1800310C8 (--0SipcServer@@AEAA@AEBU_GUID@@W4SIPC_SERVICE_BOUNDARY@@P6AXPEAXPEAUISIPCServer@@KK@Z2@Z.c)
 *     ?AddHandle@AggregateWaitHandle@@QEAAJPEAX@Z @ 0x1800314F8 (-AddHandle@AggregateWaitHandle@@QEAAJPEAX@Z.c)
 *     ?Initialize@AggregateWaitHandle@@QEAAJXZ @ 0x1800315FC (-Initialize@AggregateWaitHandle@@QEAAJXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18003D030 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 *     ?ReleasePrivateReference@SharedObjectBase@@IEAAIXZ @ 0x1800BEEF0 (-ReleasePrivateReference@SharedObjectBase@@IEAAIXZ.c)
 *     ?ReleasePublicReference@SharedObjectBase@@IEAAIXZ @ 0x1800BEF70 (-ReleasePublicReference@SharedObjectBase@@IEAAIXZ.c)
 *     ?Return_Hr@in1diag0@details@wil@@YAXJ@Z @ 0x1800BF010 (-Return_Hr@in1diag0@details@wil@@YAXJ@Z.c)
 */

__int64 __fastcall SipcServer::Create(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, _QWORD *a6)
{
  __int64 v7; // rax
  void *v8; // rax
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  AlpcPort **v12; // rbx
  int ServerPort; // edi
  void *v14; // rax
  unsigned int v16; // ebx

  *a6 = 0LL;
  v7 = 0x4652EB1C2819B8FFLL - *(_QWORD *)&GUID_NULL.Data1;
  if ( *(_QWORD *)&GUID_NULL.Data1 == 0x4652EB1C2819B8FFLL )
    v7 = 0xE48BA8EFB47AF080uLL - *(_QWORD *)GUID_NULL.Data4;
  if ( !v7 )
  {
    v16 = -2147024809;
LABEL_14:
    wil::details::in1diag0::Return_Hr((wil::details::in1diag0 *)v16, a2);
    return v16;
  }
  v8 = operator new(0xC0uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v8 )
    v12 = (AlpcPort **)SipcServer::SipcServer((__int64)v8, a2, v10, v11, a4);
  else
    v12 = 0LL;
  if ( !v12 )
  {
    v16 = -2147024882;
    goto LABEL_14;
  }
  ServerPort = AlpcPort::CreateServerPort(v9, a2, v10, v12 + 8);
  if ( ServerPort < 0
    || (ServerPort = AggregateWaitHandle::Initialize((AggregateWaitHandle *)(v12 + 9)), ServerPort < 0)
    || (v14 = (void *)(*(__int64 (__fastcall **)(AlpcPort *))(*(_QWORD *)v12[8] + 40LL))(v12[8]),
        ServerPort = AggregateWaitHandle::AddHandle((AggregateWaitHandle *)(v12 + 9), v14),
        ServerPort < 0) )
  {
    SharedObjectBase::ReleasePrivateReference((SharedObjectBase *)v12);
    SharedObjectBase::ReleasePublicReference((SharedObjectBase *)v12);
    return (unsigned int)ServerPort;
  }
  else
  {
    *a6 = v12 + 2;
    return 0LL;
  }
}
