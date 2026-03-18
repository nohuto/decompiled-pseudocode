/*
 * XREFs of PushPost @ 0x1C002A7B8
 * Callers:
 *     AsyncEvalObject @ 0x1C00114E0 (AsyncEvalObject.c)
 *     Wait @ 0x1C002A600 (Wait.c)
 *     IncDec @ 0x1C002A760 (IncDec.c)
 *     Divide @ 0x1C0031B20 (Divide.c)
 *     NestAsyncEvalObject @ 0x1C006982C (NestAsyncEvalObject.c)
 *     Unload @ 0x1C0069DD0 (Unload.c)
 *     LoadTable @ 0x1C006A0B0 (LoadTable.c)
 * Callees:
 *     PushFrame @ 0x1C0018660 (PushFrame.c)
 */

__int64 __fastcall PushPost(struct _SLIST_ENTRY *a1, __int64 a2, _SLIST_ENTRY *a3, __int64 a4, _SLIST_ENTRY *a5)
{
  __int64 result; // rax
  _SLIST_ENTRY *v8; // rdx
  _SLIST_ENTRY *v9; // [rsp+30h] [rbp-18h] BYREF

  v9 = 0LL;
  result = PushFrame(a1, 1414745936, 0x38u, a2, &v9);
  if ( !(_DWORD)result )
  {
    v8 = v9;
    v9[2].Next = a3;
    *((_QWORD *)&v8[2].Next + 1) = a4;
    v8[3].Next = a5;
  }
  return result;
}
