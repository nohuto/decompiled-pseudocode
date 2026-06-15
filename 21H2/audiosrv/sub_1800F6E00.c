/*
 * XREFs of sub_1800F6E00 @ 0x1800F6E00
 * Callers:
 *     <none>
 * Callees:
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     sub_180055F40 @ 0x180055F40 (sub_180055F40.c)
 *     sub_1800F694C @ 0x1800F694C (sub_1800F694C.c)
 *     sub_1800F6BA8 @ 0x1800F6BA8 (sub_1800F6BA8.c)
 */

__int64 __fastcall sub_1800F6E00(__int64 a1, __int64 **a2)
{
  RPC_STATUS v3; // ebx
  unsigned int v4; // ebx
  int v5; // edx
  __int64 *v7; // rax
  __int64 *v8; // rdi
  __int64 *v9; // rbx
  unsigned int v10; // esi
  int v11; // edx
  int v12; // r9d
  int v13; // eax
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]
  unsigned int v15; // [rsp+38h] [rbp+10h] BYREF

  *a2 = 0LL;
  v3 = I_RpcBindingInqLocalClientPID(0LL, &v15);
  if ( v3 )
  {
    v4 = v3 | 0x80010000;
    v5 = 105;
LABEL_3:
    sub_18004BD84((int)retaddr, v5, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\hmdmanager.cpp", v4);
    return v4;
  }
  if ( LODWORD(lpCriticalSection[2].OwningThread) != v15 )
  {
    v4 = -2147024891;
    v5 = 110;
    goto LABEL_3;
  }
  v7 = (__int64 *)sub_180055F40(0x18uLL);
  v8 = v7;
  if ( v7 )
  {
    *v7 = 0LL;
    v7[1] = 0LL;
    v7[2] = 0LL;
  }
  else
  {
    v8 = 0LL;
  }
  v9 = v8;
  if ( v8 )
  {
    v13 = sub_1800F6BA8(v8);
    v10 = v13;
    if ( v13 >= 0 )
    {
      v9 = 0LL;
      *a2 = v8;
      v10 = 0;
      goto LABEL_15;
    }
    v12 = v13;
    v11 = 116;
  }
  else
  {
    v10 = -2147024882;
    v11 = 114;
    v12 = -2147024882;
  }
  sub_18004BD84((int)retaddr, v11, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\hmdmanager.cpp", v12);
LABEL_15:
  if ( v9 )
    sub_1800F694C(v9);
  return v10;
}
