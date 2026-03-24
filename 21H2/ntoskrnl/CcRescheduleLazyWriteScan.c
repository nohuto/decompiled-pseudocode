/*
 * XREFs of CcRescheduleLazyWriteScan @ 0x140260454
 * Callers:
 *     CcLazyWriteScan @ 0x1402F5894 (CcLazyWriteScan.c)
 *     CcCoalescingCallBackHelper @ 0x1404E96C0 (CcCoalescingCallBackHelper.c)
 * Callees:
 *     KeSetCoalescableTimer @ 0x14025FC70 (KeSetCoalescableTimer.c)
 *     CcScheduleLazyWriteScan @ 0x1402F6D5C (CcScheduleLazyWriteScan.c)
 */

BOOLEAN __fastcall CcRescheduleLazyWriteScan(__int64 a1, __int64 *a2)
{
  __int64 Dpc; // r8
  __int64 v3; // rcx
  LARGE_INTEGER v4; // rdx
  BOOLEAN result; // al

  Dpc = a1 + 504;
  if ( !*(_BYTE *)(a1 + 964) )
  {
    if ( *(_BYTE *)(a1 + 632) )
    {
      if ( a2 && (v3 = *a2, *a2 != 0x7FFFFFFFFFFFFFFFLL) && v3 )
      {
        v4.QuadPart = 160000000LL;
        if ( v3 * (unsigned int)KeMaximumIncrement <= 160000000 )
          v4.QuadPart = v3 * (unsigned int)KeMaximumIncrement;
        if ( v4.QuadPart < 10000000 )
          v4 = CcIdleDelay;
        if ( v4.QuadPart > 0 )
          v4.QuadPart = -v4.QuadPart;
      }
      else
      {
        v4 = CcIdleDelay;
      }
      return KeSetCoalescableTimer((PKTIMER)(Dpc + 64), v4, 0, 0x3E8u, (PKDPC)Dpc);
    }
    else
    {
      return CcScheduleLazyWriteScan(a1, 0LL, 0LL);
    }
  }
  return result;
}
