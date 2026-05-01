/*
 * XREFs of sub_180062950 @ 0x180062950
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010470 @ 0x180010470 (sub_180010470.c)
 *     sub_18002E278 @ 0x18002E278 (sub_18002E278.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 *     memset @ 0x18004683A (memset.c)
 *     sub_1800625D0 @ 0x1800625D0 (sub_1800625D0.c)
 *     sub_18006770C @ 0x18006770C (sub_18006770C.c)
 */

__int64 __fastcall sub_180062950(RPC_BINDING_HANDLE ClientBinding, int a2, int a3, int a4, int a5)
{
  int v9; // ecx
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned int v12; // ebx
  unsigned int v14; // [rsp+40h] [rbp-91h] BYREF
  int v15; // [rsp+44h] [rbp-8Dh] BYREF
  int v16; // [rsp+48h] [rbp-89h] BYREF
  int v17; // [rsp+4Ch] [rbp-85h] BYREF
  _DWORD RpcCallAttributes[28]; // [rsp+50h] [rbp-81h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v19; // [rsp+C0h] [rbp-11h] BYREF
  int *v20; // [rsp+E0h] [rbp+Fh]
  int v21; // [rsp+E8h] [rbp+17h]
  int v22; // [rsp+ECh] [rbp+1Bh]

  RpcCallAttributes[0] = 2;
  RpcCallAttributes[1] = 16;
  memset(&RpcCallAttributes[2], 0, 0x68uLL);
  RpcServerInqCallAttributesW(ClientBinding, RpcCallAttributes);
  if ( (unsigned int)dword_1800B31E0 > 4 && sub_180010470((__int64)&dword_1800B31E0, 2LL) )
  {
    v14 = RpcCallAttributes[16];
    v15 = a4;
    v16 = a2;
    v17 = a5;
    sub_1800625D0(
      (__int64)&dword_1800B31E0,
      byte_18009A7A1,
      v10,
      v11,
      (__int64)&v14,
      (__int64)&v17,
      (__int64)&v16,
      (__int64)&v15);
  }
  v12 = sub_18006770C(v9, a2, a3, a4, a5);
  if ( (unsigned int)dword_1800B31E0 > 4 && sub_180010470((__int64)&dword_1800B31E0, 2LL) )
  {
    v22 = 0;
    v20 = (int *)&v14;
    v14 = v12;
    v21 = 4;
    sub_18002E278((__int64)&dword_1800B31E0, (unsigned __int8 *)dword_18009A615, 0LL, 0LL, 3u, &v19);
  }
  return v12;
}
