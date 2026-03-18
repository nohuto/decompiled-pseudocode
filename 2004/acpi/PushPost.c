/*
 * XREFs of PushPost @ 0x1C00680E8
 * Callers:
 *     AsyncEvalObject @ 0x1C00054D0 (AsyncEvalObject.c)
 *     NestAsyncEvalObject @ 0x1C006826C (NestAsyncEvalObject.c)
 *     Unload @ 0x1C0068A00 (Unload.c)
 *     Divide @ 0x1C00690B0 (Divide.c)
 *     LoadTable @ 0x1C0069430 (LoadTable.c)
 *     Wait @ 0x1C006AF90 (Wait.c)
 * Callees:
 *     PushFrame @ 0x1C0022B78 (PushFrame.c)
 */

__int64 __fastcall PushPost(struct _SLIST_ENTRY *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 result; // rax
  __int64 v8; // rdx
  __int64 v9[3]; // [rsp+30h] [rbp-18h] BYREF

  v9[0] = 0LL;
  result = PushFrame(a1, 1414745936, 0x38u, a2, v9);
  if ( !(_DWORD)result )
  {
    v8 = v9[0];
    *(_QWORD *)(v9[0] + 32) = a3;
    *(_QWORD *)(v8 + 40) = a4;
    *(_QWORD *)(v8 + 48) = a5;
  }
  return result;
}
