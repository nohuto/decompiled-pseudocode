/*
 * XREFs of sub_18006E504 @ 0x18006E504
 * Callers:
 *     sub_18006EF94 @ 0x18006EF94 (sub_18006EF94.c)
 *     sub_18006F1FC @ 0x18006F1FC (sub_18006F1FC.c)
 * Callees:
 *     sub_18006DD8C @ 0x18006DD8C (sub_18006DD8C.c)
 *     sub_18006E348 @ 0x18006E348 (sub_18006E348.c)
 *     sub_18006E670 @ 0x18006E670 (sub_18006E670.c)
 *     sub_18006E928 @ 0x18006E928 (sub_18006E928.c)
 */

__int64 __fastcall sub_18006E504(__int64 a1, void *a2, volatile signed __int64 *a3, volatile signed __int64 **a4)
{
  DWORD ProcessId; // eax
  volatile signed __int64 *v9; // rax
  volatile signed __int64 *v10; // rsi
  __int64 result; // rax

  ProcessId = GetProcessId(a2);
  v9 = (volatile signed __int64 *)sub_18006E670(a1, ProcessId);
  v10 = v9;
  if ( v9 )
  {
    if ( _InterlockedIncrement64(v9) <= 1 )
      __fastfail(0xEu);
    a3 = v9;
  }
  else
  {
    result = sub_18006DD8C((__int64)a3, a2);
    if ( (int)result < 0 )
      return result;
    if ( _InterlockedIncrement64(a3) <= 1 )
      __fastfail(0xEu);
    sub_18006E928(a3);
    if ( _InterlockedIncrement64(a3) <= 1 )
      __fastfail(0xEu);
  }
  result = 0LL;
  *a4 = a3;
  if ( v10 )
  {
    sub_18006E348(v10);
    return 0LL;
  }
  return result;
}
