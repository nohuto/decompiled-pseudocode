/*
 * XREFs of sub_1800414C8 @ 0x1800414C8
 * Callers:
 *     sub_180041808 @ 0x180041808 (sub_180041808.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180046860 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800414C8(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = TpAllocTimer(a2 + 128, sub_1800767F0, a2, 0LL);
  if ( (int)result >= 0 )
  {
    result = TpAllocTimer(a2 + 160, sub_1800082C0, a2, 0LL);
    if ( (int)result >= 0 )
      result = 0LL;
    if ( (int)result >= 0 )
    {
      result = TpAllocTimer(a2 + 192, sub_180001230, a2 + 176, 0LL);
      if ( (int)result >= 0 )
        result = 0LL;
      if ( (int)result >= 0 )
      {
        result = TpAllocTimer(a2 + 48, sub_1800746B0, a2, 0LL);
        if ( (int)result >= 0 )
          result = 0LL;
        if ( (int)result >= 0 )
        {
          result = TpAllocWork(a2 + 216, sub_1800730C0, a2 + 216, 0LL);
          if ( (int)result >= 0 )
            result = 0LL;
          if ( (int)result >= 0 )
          {
            if ( a1 )
            {
              *(_QWORD *)(a2 + 40) = a1;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
            }
            return 0LL;
          }
        }
      }
    }
  }
  return result;
}
