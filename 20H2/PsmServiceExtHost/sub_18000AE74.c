/*
 * XREFs of sub_18000AE74 @ 0x18000AE74
 * Callers:
 *     sub_180008168 @ 0x180008168 (sub_180008168.c)
 *     sub_180009FE0 @ 0x180009FE0 (sub_180009FE0.c)
 *     sub_18007E180 @ 0x18007E180 (sub_18007E180.c)
 *     sub_18007ECDC @ 0x18007ECDC (sub_18007ECDC.c)
 *     sub_18007F078 @ 0x18007F078 (sub_18007F078.c)
 * Callees:
 *     sub_1800093A0 @ 0x1800093A0 (sub_1800093A0.c)
 *     sub_18000B084 @ 0x18000B084 (sub_18000B084.c)
 */

DWORD __fastcall sub_18000AE74(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  DWORD result; // eax

  if ( *(_QWORD *)(a1 - 32) >= *(_QWORD *)(a2 - 32) )
  {
    sub_1800093A0(a2, 1);
    return sub_1800093A0(a1, 1);
  }
  else
  {
    sub_18000B084(a1, a2, 1LL);
    RtlAcquireSRWLockExclusive(a1);
    *(_DWORD *)(a1 + 8) = GetCurrentThreadId();
    sub_18000B084(v5, v4, 1LL);
    RtlAcquireSRWLockExclusive(a2);
    result = GetCurrentThreadId();
    *(_DWORD *)(a2 + 8) = result;
  }
  return result;
}
