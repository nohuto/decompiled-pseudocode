/*
 * XREFs of HvpFreeMap @ 0x1406DB828
 * Callers:
 *     HvpExpandMap @ 0x1405DB9D0 (HvpExpandMap.c)
 *     HvpInitMap @ 0x1405DC238 (HvpInitMap.c)
 *     HvFreeHivePartial @ 0x1405DEEF4 (HvFreeHivePartial.c)
 *     HvHiveCleanup @ 0x140706744 (HvHiveCleanup.c)
 *     HvpShrinkMap @ 0x1408835D0 (HvpShrinkMap.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 */

_UNKNOWN **__fastcall HvpFreeMap(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  _UNKNOWN **result; // rax
  unsigned int v5; // edi
  __int64 v9; // rcx
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  if ( a2 )
  {
    result = &retaddr;
    v5 = 1023;
    if ( a4 < 0x400 )
      v5 = a4;
    while ( a3 <= v5 )
    {
      v9 = *(_QWORD *)(a2 + 8LL * a3);
      if ( v9 )
      {
        result = (_UNKNOWN **)(*(__int64 (__fastcall **)(__int64, __int64))(a1 + 32))(v9, 12288LL);
        *(_QWORD *)(a2 + 8LL * a3) = 0LL;
      }
      ++a3;
    }
  }
  return result;
}
