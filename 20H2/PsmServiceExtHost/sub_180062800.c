/*
 * XREFs of sub_180062800 @ 0x180062800
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800043D0 @ 0x1800043D0 (sub_1800043D0.c)
 *     sub_180010470 @ 0x180010470 (sub_180010470.c)
 *     sub_18002E278 @ 0x18002E278 (sub_18002E278.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 *     memset @ 0x18004683A (memset.c)
 *     sub_1800624C0 @ 0x1800624C0 (sub_1800624C0.c)
 */

__int64 __fastcall sub_180062800(RPC_BINDING_HANDLE ClientBinding, unsigned int a2)
{
  unsigned int v4; // ebx
  __int64 v5; // r8
  __int64 v6; // r9
  unsigned int v7; // ebx
  unsigned int v9; // [rsp+30h] [rbp-69h] BYREF
  unsigned int v10[3]; // [rsp+34h] [rbp-65h] BYREF
  _DWORD RpcCallAttributes[28]; // [rsp+40h] [rbp-59h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v12; // [rsp+B0h] [rbp+17h] BYREF
  unsigned int *v13; // [rsp+D0h] [rbp+37h]
  int v14; // [rsp+D8h] [rbp+3Fh]
  int v15; // [rsp+DCh] [rbp+43h]

  RpcCallAttributes[0] = 2;
  RpcCallAttributes[1] = 16;
  memset(&RpcCallAttributes[2], 0, 0x68uLL);
  RpcServerInqCallAttributesW(ClientBinding, RpcCallAttributes);
  v4 = RpcCallAttributes[16];
  if ( (unsigned int)dword_1800B31E0 > 4 && sub_180010470((__int64)&dword_1800B31E0, 2LL) )
  {
    v10[0] = a2;
    v9 = v4;
    sub_1800624C0((__int64)&dword_1800B31E0, byte_18009A75A, v5, v6, (__int64)&v9, (__int64)v10);
  }
  v7 = sub_1800043D0(qword_1800B41A0, a2, v4);
  if ( (unsigned int)dword_1800B31E0 > 4 && sub_180010470((__int64)&dword_1800B31E0, 2LL) )
  {
    v15 = 0;
    v13 = &v9;
    v9 = v7;
    v14 = 4;
    sub_18002E278((__int64)&dword_1800B31E0, (unsigned __int8 *)dword_18009A6EA, 0LL, 0LL, 3u, &v12);
  }
  return v7;
}
