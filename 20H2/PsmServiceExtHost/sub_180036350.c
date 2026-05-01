/*
 * XREFs of sub_180036350 @ 0x180036350
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800043D0 @ 0x1800043D0 (sub_1800043D0.c)
 *     sub_180010470 @ 0x180010470 (sub_180010470.c)
 *     sub_18002E278 @ 0x18002E278 (sub_18002E278.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 *     memset @ 0x18004683A (memset.c)
 *     sub_18006253C @ 0x18006253C (sub_18006253C.c)
 */

__int64 __fastcall sub_180036350(RPC_BINDING_HANDLE ClientBinding, unsigned int a2, unsigned int a3)
{
  int v6; // r8d
  int v7; // r9d
  unsigned int v8; // ebx
  unsigned int v10; // [rsp+40h] [rbp-79h] BYREF
  unsigned int v11; // [rsp+44h] [rbp-75h] BYREF
  unsigned int v12; // [rsp+48h] [rbp-71h] BYREF
  _DWORD RpcCallAttributes[28]; // [rsp+50h] [rbp-69h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v14; // [rsp+C0h] [rbp+7h] BYREF
  int *v15; // [rsp+E0h] [rbp+27h]
  int v16; // [rsp+E8h] [rbp+2Fh]
  int v17; // [rsp+ECh] [rbp+33h]

  RpcCallAttributes[0] = 2;
  RpcCallAttributes[1] = 16;
  memset(&RpcCallAttributes[2], 0, 0x68uLL);
  RpcServerInqCallAttributesW(ClientBinding, RpcCallAttributes);
  if ( (unsigned int)dword_1800B31E0 > 4 && sub_180010470((__int64)&dword_1800B31E0, 2LL) )
  {
    v10 = RpcCallAttributes[16];
    v11 = a2;
    v12 = a3;
    sub_18006253C(
      (unsigned int)&dword_1800B31E0,
      (unsigned int)&unk_18009A8BC,
      v6,
      v7,
      (__int64)&v10,
      (__int64)&v12,
      (__int64)&v11);
  }
  v8 = sub_1800043D0(qword_1800B41A0, a2, a3);
  if ( (unsigned int)dword_1800B31E0 > 4 && sub_180010470((__int64)&dword_1800B31E0, 2LL) )
  {
    v17 = 0;
    v15 = (int *)&v10;
    v10 = v8;
    v16 = 4;
    sub_18002E278((__int64)&dword_1800B31E0, (unsigned __int8 *)dword_18009A54A, 0LL, 0LL, 3u, &v14);
  }
  return v8;
}
