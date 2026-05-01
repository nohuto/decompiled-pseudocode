/*
 * XREFs of sub_18000E718 @ 0x18000E718
 * Callers:
 *     sub_180002A90 @ 0x180002A90 (sub_180002A90.c)
 *     sub_18000D704 @ 0x18000D704 (sub_18000D704.c)
 *     sub_180034E40 @ 0x180034E40 (sub_180034E40.c)
 *     sub_18003BBC4 @ 0x18003BBC4 (sub_18003BBC4.c)
 *     sub_180081B7C @ 0x180081B7C (sub_180081B7C.c)
 *     sub_180081BF0 @ 0x180081BF0 (sub_180081BF0.c)
 * Callees:
 *     sub_18000ECB0 @ 0x18000ECB0 (sub_18000ECB0.c)
 *     sub_180025F18 @ 0x180025F18 (sub_180025F18.c)
 *     sub_1800274E0 @ 0x1800274E0 (sub_1800274E0.c)
 *     sub_180027598 @ 0x180027598 (sub_180027598.c)
 *     _guard_dispatch_icall_nop @ 0x180046860 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18000E718(
        __int64 a1,
        unsigned int *a2,
        __int64 a3,
        __int64 a4,
        __int64 (__fastcall *a5)(__int64, __int64),
        __int64 a6)
{
  __int64 v6; // rbx
  __int64 v7; // r14
  __int64 v9; // rbp
  __int64 v10; // rsi
  __int64 v11; // rdi
  __int64 v14; // rdx
  __int64 result; // rax

  v6 = 0LL;
  v7 = a1 + 16;
  v9 = 0LL;
  v10 = 0LL;
  v11 = 0LL;
  v14 = 4LL;
  if ( a2 )
  {
    result = sub_18000ECB0(a1 + 56, *a2, sub_180036330);
    v9 = result;
    if ( !result )
      return result;
    v7 = result;
    v14 = 3LL;
  }
  if ( a3 )
  {
    result = sub_18000ECB0(v9 + 40, a3, sub_1800346E0);
    v6 = result;
    if ( !result )
    {
      v6 = 0LL;
      goto LABEL_15;
    }
    v7 = result;
    v14 = 2LL;
  }
  if ( !a4 )
  {
LABEL_10:
    for ( result = sub_180025F18(v7, v14); ; result = sub_180027598(v7, v11) )
    {
      v11 = result;
      if ( !result )
        break;
      result = a5(result, a6);
      if ( !(_DWORD)result )
        break;
    }
    if ( v10 )
      result = sub_1800274E0(v10);
    goto LABEL_15;
  }
  result = sub_18000ECB0(v6 + 40, a4, sub_180035B70);
  v10 = result;
  if ( result )
  {
    v7 = result;
    v14 = 1LL;
    goto LABEL_10;
  }
LABEL_15:
  if ( v9 )
    result = sub_1800274E0(v9);
  if ( v6 )
    result = sub_1800274E0(v6);
  if ( v11 )
    return sub_1800274E0(v11);
  return result;
}
