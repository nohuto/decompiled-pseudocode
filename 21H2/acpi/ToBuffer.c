/*
 * XREFs of ToBuffer @ 0x1C006A7D0
 * Callers:
 *     <none>
 * Callees:
 *     ValidateArgTypes @ 0x1C0009F50 (ValidateArgTypes.c)
 *     WriteObject @ 0x1C000AC60 (WriteObject.c)
 *     ValidateTarget @ 0x1C000B264 (ValidateTarget.c)
 *     ConvertToBuffer @ 0x1C006B288 (ConvertToBuffer.c)
 */

__int64 __fastcall ToBuffer(struct _SLIST_ENTRY *a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  v5 = 0LL;
  result = ValidateArgTypes((__int64)a1, *(_QWORD *)(a2 + 80), 0, "D");
  if ( !(_DWORD)result )
  {
    result = ValidateTarget((__int64)a1, *(_QWORD *)(a2 + 80) + 40LL, 0x87u, (__int64)&v5);
    if ( !(_DWORD)result )
    {
      result = ConvertToBuffer(*(_QWORD *)(a2 + 80), *(_QWORD *)(a2 + 88));
      if ( !(_DWORD)result )
        return WriteObject(a1, v5, *(_QWORD *)(a2 + 88));
    }
  }
  return result;
}
