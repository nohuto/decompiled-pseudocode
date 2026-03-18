/*
 * XREFs of PushPreserveWriteObj @ 0x1C00691D8
 * Callers:
 *     AccessFieldData @ 0x1C001AC40 (AccessFieldData.c)
 * Callees:
 *     PushFrame @ 0x1C0018660 (PushFrame.c)
 */

__int64 __fastcall PushPreserveWriteObj(struct _SLIST_ENTRY *a1, _SLIST_ENTRY *a2, __int64 a3, _SLIST_ENTRY *a4)
{
  __int64 result; // rax
  _SLIST_ENTRY *v8; // rcx
  _SLIST_ENTRY *v9; // [rsp+30h] [rbp-18h] BYREF

  v9 = 0LL;
  result = PushFrame(a1, 1330796368, 0x40u, (__int64)PreserveWriteObj, &v9);
  if ( !(_DWORD)result )
  {
    v8 = v9;
    v9[2].Next = a2;
    *((_QWORD *)&v8[2].Next + 1) = a3;
    v8[3].Next = a4;
  }
  return result;
}
