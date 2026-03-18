/*
 * XREFs of Divide @ 0x1C0031B20
 * Callers:
 *     <none>
 * Callees:
 *     ValidateArgTypes @ 0x1C00162B0 (ValidateArgTypes.c)
 *     ValidateTarget @ 0x1C0018344 (ValidateTarget.c)
 *     PushPost @ 0x1C002A7B8 (PushPost.c)
 */

__int64 __fastcall Divide(struct _SLIST_ENTRY *a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v5; // [rsp+48h] [rbp+10h] BYREF
  __int64 v6; // [rsp+50h] [rbp+18h] BYREF

  v5 = 0LL;
  v6 = 0LL;
  result = ValidateArgTypes((__int64)a1, *(_QWORD *)(a2 + 80), 0, "II");
  if ( !(_DWORD)result )
  {
    result = ValidateTarget((__int64)a1, *(_QWORD *)(a2 + 80) + 80LL, 0x87u, (__int64)&v5);
    if ( !(_DWORD)result )
    {
      result = ValidateTarget((__int64)a1, *(_QWORD *)(a2 + 80) + 120LL, 0x87u, (__int64)&v6);
      if ( !(_DWORD)result )
        return PushPost(a1, (__int64)ProcessDivide, (_SLIST_ENTRY *)a2, 0LL, *(_SLIST_ENTRY **)(a2 + 88));
    }
  }
  return result;
}
