/*
 * XREFs of LdrQueryInLoadOrderModuleList32 @ 0x1800CDFE0
 * Callers:
 *     <none>
 * Callees:
 *     LdrpReadMemory @ 0x180001340 (LdrpReadMemory.c)
 *     _guard_dispatch_icall_nop @ 0x1800A1120 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall LdrQueryInLoadOrderModuleList32(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  __int64 result; // rax
  __int64 v7; // rdx
  unsigned int v8; // [rsp+40h] [rbp+8h] BYREF
  __int64 v9; // [rsp+48h] [rbp+10h] BYREF

  *a2 = 0LL;
  if ( a3 )
    *a3 = 0LL;
  result = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64 *))(a1 + 16))(*(_QWORD *)a1, 26LL, &v9);
  if ( (int)result >= 0 )
  {
    if ( !v9 )
      return 0LL;
    result = LdrpReadMemory(a1, v9 + 12, (__int64)&v8, 4LL);
    if ( (int)result < 0 )
      return result;
    v7 = v8;
    if ( v8 )
    {
      *a2 = v8 + 12LL;
      if ( a3 )
        *a3 = v7 + 28;
    }
    else
    {
      return 0LL;
    }
  }
  return result;
}
