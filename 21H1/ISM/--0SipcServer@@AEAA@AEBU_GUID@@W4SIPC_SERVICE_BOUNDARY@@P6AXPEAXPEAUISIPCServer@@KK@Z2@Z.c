/*
 * XREFs of ??0SipcServer@@AEAA@AEBU_GUID@@W4SIPC_SERVICE_BOUNDARY@@P6AXPEAXPEAUISIPCServer@@KK@Z2@Z @ 0x180031108
 * Callers:
 *     ?Create@SipcServer@@SAJAEBU_GUID@@W4SIPC_SERVICE_BOUNDARY@@P6AXPEAXPEAUISIPCServer@@KK@Z22PEAPEAU4@@Z @ 0x1800311CC (-Create@SipcServer@@SAJAEBU_GUID@@W4SIPC_SERVICE_BOUNDARY@@P6AXPEAXPEAUISIPCServer@@KK@Z22PEAPEA.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SipcServer::SipcServer(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 result; // rax

  *(_QWORD *)(a1 + 8) = 0x200000002LL;
  *(_QWORD *)a1 = &SharedUnknownBase<ISIPCServer>::`vftable'{for `SharedObjectBase'};
  *(_QWORD *)(a1 + 16) = &SharedUnknownBase<ISIPCServer>::`vftable'{for `ISIPCServer'};
  *(_QWORD *)(a1 + 24) = &SipcEndpointOwner::`vftable';
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_DWORD *)(a1 + 40) = 1;
  *(_OWORD *)(a1 + 44) = xmmword_1801C1420;
  *(_QWORD *)a1 = &SipcServer::`vftable'{for `SharedObjectBase'};
  *(_QWORD *)(a1 + 16) = &SipcServer::`vftable'{for `ISIPCServer'};
  *(_QWORD *)(a1 + 24) = &SipcServer::`vftable';
  *(_QWORD *)(a1 + 64) = 0LL;
  *(_QWORD *)(a1 + 112) = 0LL;
  *(_QWORD *)(a1 + 104) = a1 + 96;
  *(_QWORD *)(a1 + 96) = a1 + 96;
  *(_QWORD *)(a1 + 72) = 0LL;
  *(_QWORD *)(a1 + 80) = 0LL;
  *(_QWORD *)(a1 + 88) = 0LL;
  *(_QWORD *)(a1 + 136) = 0LL;
  *(_QWORD *)(a1 + 128) = a1 + 120;
  *(_QWORD *)(a1 + 120) = a1 + 120;
  *(_QWORD *)(a1 + 152) = LampArrayRawInputProvider::OnSipcClientConnection;
  *(_QWORD *)(a1 + 160) = a5;
  result = a1;
  *(_QWORD *)(a1 + 144) = 0LL;
  return result;
}
