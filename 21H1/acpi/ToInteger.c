/*
 * XREFs of ToInteger @ 0x1C000BD50
 * Callers:
 *     <none>
 * Callees:
 *     ValidateArgTypes @ 0x1C0009B90 (ValidateArgTypes.c)
 *     WriteObject @ 0x1C000A8A0 (WriteObject.c)
 *     ValidateTarget @ 0x1C000AEA4 (ValidateTarget.c)
 *     ConvertToInteger @ 0x1C000BDD0 (ConvertToInteger.c)
 */

__int64 __fastcall ToInteger(struct _SLIST_ENTRY *a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  v5 = 0LL;
  result = ValidateArgTypes((__int64)a1, *(_QWORD *)(a2 + 80), 0, "E");
  if ( !(_DWORD)result )
  {
    result = ValidateTarget((__int64)a1, *(_QWORD *)(a2 + 80) + 40LL, 0x87u, (__int64)&v5);
    if ( !(_DWORD)result )
    {
      result = ConvertToInteger(*(_QWORD *)(a2 + 80), *(_QWORD *)(a2 + 88));
      if ( !(_DWORD)result )
        return WriteObject(a1, v5, *(_QWORD *)(a2 + 88));
    }
  }
  return result;
}
