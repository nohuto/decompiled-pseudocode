/*
 * XREFs of MiAddNonSecuredPagesToDump @ 0x140592690
 * Callers:
 *     MmGetDumpRange @ 0x140593388 (MmGetDumpRange.c)
 * Callees:
 *     MiIsPageSecured @ 0x14026C720 (MiIsPageSecured.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall MiAddNonSecuredPagesToDump(
        __int64 (__fastcall **a1)(_QWORD, __int64, __int64, __int64),
        __int64 a2,
        __int64 a3)
{
  unsigned int v3; // r9d
  __int64 v4; // rdi
  __int64 v6; // rsi
  __int64 v7; // rbx
  __int64 v8; // r10
  __int64 v9; // r11
  __int64 result; // rax
  __int64 v11; // r10

  v3 = 0;
  v4 = a3;
  if ( a3 )
  {
    v6 = a2 + 1;
    v7 = 48 * a2 - 0x220000000000LL;
    do
    {
      if ( MiIsPageSecured(v7) )
      {
        if ( v8 )
        {
          result = (*a1)(a1, v9, v8, 258LL);
          v3 = result;
          if ( (int)result < 0 )
            return result;
        }
        v9 = v6;
        v11 = 0LL;
      }
      else
      {
        v11 = v8 + 1;
      }
      v7 += 48LL;
      ++v6;
      --v4;
    }
    while ( v4 );
    if ( v11 )
      return (unsigned int)(*a1)(a1, v9, v11, 258LL);
  }
  return v3;
}
