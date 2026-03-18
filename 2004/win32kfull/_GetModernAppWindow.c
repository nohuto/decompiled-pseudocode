/*
 * XREFs of _GetModernAppWindow @ 0x1C0090910
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 */

__int64 __fastcall GetModernAppWindow(__int64 a1)
{
  __int64 v1; // rdx
  __int64 result; // rax
  __int64 v3; // rcx

  v1 = *(_QWORD *)(a1 + 16);
  result = 0LL;
  if ( v1 && *(_QWORD *)(v1 + 1384) == a1 )
  {
    v3 = *(_QWORD *)(v1 + 1392);
    if ( v3 )
      return *(_QWORD *)v3;
  }
  else
  {
    UserSetLastError(87LL);
    return 0LL;
  }
  return result;
}
