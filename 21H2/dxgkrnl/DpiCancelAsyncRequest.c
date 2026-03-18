/*
 * XREFs of DpiCancelAsyncRequest @ 0x1C005FAE8
 * Callers:
 *     DpiRequestDevicePowerState @ 0x1C0023FC0 (DpiRequestDevicePowerState.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DpiCancelAsyncRequest(__int64 a1)
{
  __int64 *v2; // rbx
  __int64 result; // rax
  __int64 **v4; // rcx

  WdLogSingleEntry3(9LL, a1, *(int *)(a1 + 4016), 0LL);
  v2 = (__int64 *)(a1 + 3992);
  result = *v2;
  if ( *v2 )
  {
    if ( *(__int64 **)(result + 8) != v2 || (v4 = (__int64 **)v2[1], *v4 != v2) )
      __fastfail(3u);
    *v4 = (__int64 *)result;
    *(_QWORD *)(result + 8) = v4;
    *v2 = 0LL;
  }
  return result;
}
