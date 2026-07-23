/*
 * XREFs of ObpPreInterceptHandleCreate @ 0x1406D9090
 * Callers:
 *     ObpCreateHandle @ 0x14070D930 (ObpCreateHandle.c)
 * Callees:
 *     ObpCallPreOperationCallbacks @ 0x1406D8EC0 (ObpCallPreOperationCallbacks.c)
 */

__int64 __fastcall ObpPreInterceptHandleCreate(__int64 a1, char a2, int *a3, _QWORD *a4)
{
  unsigned __int64 v6; // r10
  int v8; // r8d
  __int64 v9; // rcx
  int v10; // esi
  int v11; // esi
  __int64 result; // rax
  _DWORD v13[2]; // [rsp+20h] [rbp-48h] BYREF
  __int128 v14; // [rsp+28h] [rbp-40h]
  int v15; // [rsp+38h] [rbp-30h] BYREF
  int v16; // [rsp+3Ch] [rbp-2Ch]
  __int64 v17; // [rsp+40h] [rbp-28h]
  __int64 v18; // [rsp+48h] [rbp-20h]
  __int64 v19; // [rsp+50h] [rbp-18h]
  _DWORD *v20; // [rsp+58h] [rbp-10h]

  v6 = *(unsigned __int8 *)(a1 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(a1 - 48) >> 8);
  v16 = 0;
  v8 = *a3;
  v14 = 0LL;
  v9 = ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ v6];
  v10 = *(_DWORD *)(v9 + 96);
  v20 = v13;
  v11 = v8 & v10;
  v13[1] = v8;
  v13[0] = v8;
  v15 = 1;
  v17 = a1;
  v16 = a2 & 1;
  v19 = 0LL;
  v14 = 0LL;
  v18 = v9;
  result = ObpCallPreOperationCallbacks(v9, (__int64)&v15, a4);
  if ( (int)result >= 0 && !a2 )
    *a3 &= v11 | v13[0];
  return result;
}
