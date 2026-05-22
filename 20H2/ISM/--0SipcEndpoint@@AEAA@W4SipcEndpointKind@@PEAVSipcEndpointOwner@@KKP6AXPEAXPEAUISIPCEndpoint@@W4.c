/*
 * XREFs of ??0SipcEndpoint@@AEAA@W4SipcEndpointKind@@PEAVSipcEndpointOwner@@KKP6AXPEAXPEAUISIPCEndpoint@@W4SIPC_ENDPOINT_STATUS@@@ZP6AX23W4SIPC_BUFFER_STATUS@@_K22@Z2@Z @ 0x1800BEC88
 * Callers:
 *     ?CreateServerEndpoint@SipcEndpoint@@SAJPEAVSipcServer@@PEAVSipcPort@@PEAX2KKP6AX2PEAUISIPCEndpoint@@W4SIPC_ENDPOINT_STATUS@@@Z2PEAPEAV1@@Z @ 0x1800BFCA4 (-CreateServerEndpoint@SipcEndpoint@@SAJPEAVSipcServer@@PEAVSipcPort@@PEAX2KKP6AX2PEAUISIPCEndpoi.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SipcEndpoint::SipcEndpoint(
        __int64 a1,
        int a2,
        __int64 a3,
        int a4,
        int a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  __int64 result; // rax

  *(_QWORD *)(a1 + 8) = 0x200000002LL;
  *(_QWORD *)a1 = &SipcEndpoint::`vftable'{for `SharedObjectBase'};
  *(_QWORD *)(a1 + 16) = &SipcEndpoint::`vftable'{for `ISIPCEndpoint'};
  *(_DWORD *)(a1 + 68) = a5;
  *(_QWORD *)(a1 + 80) = a6;
  *(_QWORD *)(a1 + 96) = a7;
  *(_QWORD *)(a1 + 104) = a8;
  result = a1;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = a3;
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_QWORD *)(a1 + 56) = 0LL;
  *(_DWORD *)(a1 + 64) = a4;
  *(_WORD *)(a1 + 72) = 0;
  *(_DWORD *)(a1 + 76) = a2;
  *(_QWORD *)(a1 + 88) = 0LL;
  *(_QWORD *)(a1 + 112) = 0LL;
  return result;
}
