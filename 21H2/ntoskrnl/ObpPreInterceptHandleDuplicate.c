/*
 * XREFs of ObpPreInterceptHandleDuplicate @ 0x1405E3B38
 * Callers:
 *     ObCompleteObjectDuplication @ 0x1405E36D0 (ObCompleteObjectDuplication.c)
 *     ObDuplicateObject @ 0x1406E4910 (ObDuplicateObject.c)
 * Callees:
 *     ObpCallPreOperationCallbacks @ 0x1406D8EC0 (ObpCallPreOperationCallbacks.c)
 */

__int64 __fastcall ObpPreInterceptHandleDuplicate(__int64 a1, char a2, int *a3, __int64 a4, __int64 a5, __int64 a6)
{
  int v8; // r8d
  __int64 v10; // rcx
  int v11; // esi
  int v12; // esi
  __int64 result; // rax
  _DWORD v14[2]; // [rsp+20h] [rbp-40h] BYREF
  __int64 v15; // [rsp+28h] [rbp-38h]
  __int64 v16; // [rsp+30h] [rbp-30h]
  int v17; // [rsp+38h] [rbp-28h] BYREF
  int v18; // [rsp+3Ch] [rbp-24h]
  __int64 v19; // [rsp+40h] [rbp-20h]
  __int64 v20; // [rsp+48h] [rbp-18h]
  __int64 v21; // [rsp+50h] [rbp-10h]
  _DWORD *v22; // [rsp+58h] [rbp-8h]

  v18 = 0;
  v8 = *a3;
  v10 = ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(a1 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(a1 - 48) >> 8)];
  v11 = *(_DWORD *)(v10 + 96);
  v21 = 0LL;
  v12 = v8 & v11;
  v22 = v14;
  v14[1] = v8;
  v14[0] = v8;
  v18 = a2 & 1;
  v17 = 2;
  v19 = a1;
  v20 = v10;
  v15 = a4;
  v16 = a5;
  result = ObpCallPreOperationCallbacks(v10, &v17, a6);
  if ( (int)result >= 0 && !a2 )
    *a3 &= v12 | v14[0];
  return result;
}
