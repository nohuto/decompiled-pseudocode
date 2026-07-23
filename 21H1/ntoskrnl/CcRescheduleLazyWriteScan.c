/*
 * XREFs of CcRescheduleLazyWriteScan @ 0x140235F94
 * Callers:
 *     CcLazyWriteScan @ 0x140232E2C (CcLazyWriteScan.c)
 *     CcCoalescingCallBackHelper @ 0x1404E3FF0 (CcCoalescingCallBackHelper.c)
 * Callees:
 *     CcScheduleLazyWriteScan @ 0x14023188C (CcScheduleLazyWriteScan.c)
 *     KeSetCoalescableTimer @ 0x140236170 (KeSetCoalescableTimer.c)
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
        if ( v3 * KeMaximumIncrement <= 160000000 )
          v4.QuadPart = v3 * KeMaximumIncrement;
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
      return CcScheduleLazyWriteScan(a1, 0, 0);
    }
  }
  return result;
}
