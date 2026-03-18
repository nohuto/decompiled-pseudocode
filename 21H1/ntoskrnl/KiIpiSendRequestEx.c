/*
 * XREFs of KiIpiSendRequestEx @ 0x1402932A0
 * Callers:
 *     KxFlushEntireTb @ 0x140277720 (KxFlushEntireTb.c)
 *     KxFlushNonGlobalTb @ 0x1403038D4 (KxFlushNonGlobalTb.c)
 *     KxFlushSingleTb @ 0x14034C2CC (KxFlushSingleTb.c)
 *     KeInvalidateAllCaches @ 0x1403A18E0 (KeInvalidateAllCaches.c)
 *     KeInvalidateRangeAllCaches @ 0x140515630 (KeInvalidateRangeAllCaches.c)
 * Callees:
 *     KiAffinityContainsProcessorsOtherThanSelf @ 0x140293380 (KiAffinityContainsProcessorsOtherThanSelf.c)
 *     KiIpiSendRequest @ 0x140359160 (KiIpiSendRequest.c)
 *     HvlNotifyLongSpinWait @ 0x14038CC10 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14038D9F0 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall KiIpiSendRequestEx(
        __int64 a1,
        int a2,
        __int64 a3,
        int a4,
        __int64 a5,
        __int64 (__fastcall *a6)(__int64),
        __int64 a7)
{
  int v8; // r11d
  __int64 result; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  unsigned int i; // ebx

  v8 = a3;
  if ( a2 )
  {
    if ( (unsigned int)KeNumberProcessors_0 <= 1 )
    {
LABEL_3:
      result = (__int64)a6;
      if ( a6 )
        return a6(a7);
      return result;
    }
  }
  else if ( !(unsigned int)KiAffinityContainsProcessorsOtherThanSelf(a1, a3) )
  {
    goto LABEL_3;
  }
  KiIpiSendRequest(a1, a2, v8, a4, a5);
  if ( a6 )
    a6(a7);
  result = *(unsigned int *)(a1 + 11648);
  for ( i = 0; (_DWORD)result; result = *(unsigned int *)(a1 + 11648) )
  {
    if ( (++i & HvlLongSpinCountMask) == 0
      && (HvlEnlightenments & 0x40) != 0
      && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v13, v12, v14, v15) )
    {
      HvlNotifyLongSpinWait(i);
    }
    else
    {
      _mm_pause();
    }
  }
  return result;
}
